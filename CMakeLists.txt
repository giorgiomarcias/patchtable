CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(patchtable)

# this can be built as a library or as an executable
OPTION(EXECUTABLE "Add an executable or compile this as a library only." ON)



# find dependencies

# libpng
FIND_PACKAGE(PNG REQUIRED)
IF (NOT PNG_FOUND)
    MESSAGE(FATAL_ERROR "libpng not found!")
ENDIF()

# png++
FIND_PATH(png++_INCLUDE_DIRS
  NAMES  png++/color.hpp  png++/config.hpp  png++/consumer.hpp  png++/convert_color_space.hpp
  png++/end_info.hpp  png++/error.hpp  png++/ga_pixel.hpp  png++/generator.hpp
  png++/gray_pixel.hpp  png++/image.hpp  png++/image_info.hpp  png++/index_pixel.hpp
  png++/info.hpp  png++/info_base.hpp  png++/io_base.hpp  png++/packed_pixel.hpp
  png++/palette.hpp  png++/pixel_buffer.hpp  png++/pixel_traits.hpp  png++/png.hpp
  png++/reader.hpp  png++/require_color_space.hpp  png++/rgb_pixel.hpp  png++/rgba_pixel.hpp
  png++/streaming_base.hpp  png++/tRNS.hpp  png++/types.hpp  png++/writer.hpp)

# opencv
#FILE(GLOB_RECURSE OpenCV_CMakeModulePaths /usr/local/*OpenCVConfig.cmake)
#GET_FILENAME_COMPONENT(OpenCV_DIR ${OpenCV_CMakeModulePaths} DIRECTORY)
#message(${OpenCV_DIR})
FIND_PACKAGE(OpenCV REQUIRED core flann imgproc video)
IF (NOT OpenCV_FOUND)
    MESSAGE(FATAL_ERROR "OpenCV not found!")
ENDIF()

# FLANN
FIND_PACKAGE(PkgConfig)
pkg_check_modules(PC_FLANN flann)
set(FLANN_DEFINITIONS ${PC_FLANN_CFLAGS_OTHER})
FIND_PATH(FLANN_INCLUDE_DIR flann/flann.hpp
    HINTS ${PC_FLANN_INCLUDEDIR} ${PC_FLANN_INCLUDE_DIRS} "${FLANN_ROOT}" "$ENV{FLANN_ROOT}"
    PATHS "$ENV{PROGRAMFILES}/Flann" "$ENV{PROGRAMW6432}/Flann"
    PATH_SUFFIXES include)
FIND_LIBRARY(FLANN_LIBRARY
    NAME flann_cpp
    HINTS ${PC_FLANN_LIBDIR} ${PC_FLANN_LIBRARY_DIRS} "${FLANN_ROOT}" "$ENV{FLANN_ROOT}"
    PATHS "$ENV{PROGRAMFILES}/Flann" "$ENV{PROGRAMW6432}/Flann"
    PATH_SUFFIXES lib)
IF(NOT FLANN_LIBRARY)
    MESSAGE(FATAL_ERROR "FLANN not found!")
ENDIF()
SET(FLANN_INCLUDE_DIRS ${FLANN_INCLUDE_DIR})
SET(FLANN_LIBRARIES ${FLANN_LIBRARY})

# ANN
INCLUDE(FindPackageHandleStandardArgs)
FIND_PATH(ANN_INCLUDE_DIR ANN/ANN.h)
FIND_LIBRARY(ANN_LIBRARY ANN)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(ANN DEFAULT_MSG
    ANN_LIBRARY ANN_INCLUDE_DIR)
if(NOT ANN_FOUND)
    MESSAGE(FATAL_ERROR "ANN not found!")
endif()
SET(ANN_INCLUDE_DIRS ${ANN_INCLUDE_DIR})
SET(ANN_LIBRARIES ${ANN_LIBRARY})

# boost
find_package(Boost REQUIRED)
IF(NOT Boost_FOUND)
    MESSAGE(FATAL_ERROR "Boost not found!")
ENDIF()

# OpenMP
FIND_PACKAGE(OpenMP QUIET)
IF(NOT OPENMP_FOUND)
    MESSAGE("OpenMP not found! Disabled.")
ENDIF()

# summed variables

SET(HDR_DIR ${CMAKE_CURRENT_SOURCE_DIR})
SET(${PROJECT_NAME}_INCLUDE_DIRS
    ${HDR_DIR}
    ${PNG_INCLUDE_DIRS}
    ${png++_INCLUDE_DIRS}
    ${OpenCV_INCLUDE_DIRS}
    ${FLANN_INCLUDE_DIRS}
    ${ANN_INCLUDE_DIRS}
    ${Boost_INCLUDE_DIRS})
SET(${PROJECT_NAME}_LIBRARIES
    ${PNG_LIBRARIES}
    ${OpenCV_LIBS}
    ${FLANN_LIBRARIES}
    ${ANN_LIBRARIES}
    ${Boost_LIBRARIES})
SET(${PROJECT_NAME}_DEFINITIONS
    ${PNG_DEFINITIONS}
    ${FLANN_DEFINITIONS})
IF(CMAKE_BUILD_TYPE MATCHES DEBUG)
    SET(${PROJECT_NAME}_DEFINITIONS ${${PROJECT_NAME}_DEFINITIONS} BUILD_DEBUG=1)
ELSE()
    SET(${PROJECT_NAME}_DEFINITIONS ${${PROJECT_NAME}_DEFINITIONS} BUILD_DEBUG=0)
ENDIF()
IF(NOT OPENMP_FOUND)
    SET(${PROJECT_NAME}_DEFINITIONS ${${PROJECT_NAME}_DEFINITIONS} TABLE_OPENMP=0)
ELSE()
    SET(${PROJECT_NAME}_COMPILE_OPTIONS
        ${OpenMP_C_FLAGS}
        ${OpenMP_CXX_FLAGS})
ENDIF()



# collect source files

SET(HDRS
    ${HDR_DIR}/patchtable/analogy.h
    ${HDR_DIR}/patchtable/dt_downsample.h
    ${HDR_DIR}/patchtable/gck.h
    ${HDR_DIR}/patchtable/patch_pca.h
    ${HDR_DIR}/patchtable/patchtable_params.h
    ${HDR_DIR}/patchtable/patchtable.h
    ${HDR_DIR}/patchtable/product_quantize.h)
IF(WIN32)
    SET(HDRS ${HDRS}
    ${HDR_DIR}/patchtable/stdafx.h
    ${HDR_DIR}/patchtable/targetver.h)
ENDIF()
SET(HDRS ${HDRS}
    ${HDR_DIR}/solver/array_copy_rect.h
    ${HDR_DIR}/solver/array.h
    ${HDR_DIR}/solver/pfm.h
    ${HDR_DIR}/solver/timer.h
    ${HDR_DIR}/solver/util.h)

SET(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})
SET(SRCS
    ${SRC_DIR}/patchtable/analogy.cpp
    ${SRC_DIR}/patchtable/patchtable.cpp)
IF(WIN32)
    SET(SRCS ${SRCS} ${SRC_DIR}/patchtable/stdafx.cpp)
ENDIF()
SET(SRCS ${SRCS}
    ${SRC_DIR}/solver/array.cpp
    ${SRC_DIR}/solver/pfm.cpp
    ${SRC_DIR}/solver/timer.cpp
    ${SRC_DIR}/solver/util.cpp)

ADD_LIBRARY(${PROJECT_NAME} ${HDRS} ${SRCS})

SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON)

TARGET_INCLUDE_DIRECTORIES(${PROJECT_NAME} PUBLIC ${${PROJECT_NAME}_INCLUDE_DIRS})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${${PROJECT_NAME}_LIBRARIES})
TARGET_COMPILE_DEFINITIONS(${PROJECT_NAME} PUBLIC ${${PROJECT_NAME}_DEFINITIONS})
TARGET_COMPILE_OPTIONS(${PROJECT_NAME} PUBLIC ${${PROJECT_NAME}_COMPILE_OPTIONS})

# expose variables
IF(NOT EXECUTABLE)
    SET(${PROJECT_NAME}_INCLUDE_DIRS ${${PROJECT_NAME}_INCLUDE_DIRS} PARENT_SCOPE)
    SET(${PROJECT_NAME}_LIBRARIES ${PROJECT_NAME}_LIBRARIES PARENT_SCOPE)
    SET(${${PROJECT_NAME}_DEFINITIONS} ${${PROJECT_NAME}_DEFINITIONS} PARENT_SCOPE)
    SET(${${PROJECT_NAME}_COMPILE_OPTIONS} ${${PROJECT_NAME}_COMPILE_OPTIONS} PARENT_SCOPE)
ENDIF()



# executable
IF(EXECUTABLE)
    ADD_EXECUTABLE(${PROJECT_NAME}_main ${SRC_DIR}/patchtable/patchtable_main.cpp)

    SET_TARGET_PROPERTIES(${PROJECT_NAME}_main PROPERTIES
        CXX_STANDARD 11
        CXX_STANDARD_REQUIRED ON)

    TARGET_INCLUDE_DIRECTORIES(${PROJECT_NAME}_main PUBLIC ${${PROJECT_NAME}_INCLUDE_DIRS})
    TARGET_LINK_LIBRARIES(${PROJECT_NAME}_main ${PROJECT_NAME} ${${PROJECT_NAME}_LIBRARIES})
    TARGET_COMPILE_DEFINITIONS(${PROJECT_NAME}_main PUBLIC ${${PROJECT_NAME}_DEFINITIONS})
    TARGET_COMPILE_OPTIONS(${PROJECT_NAME}_main PUBLIC ${${PROJECT_NAME}_COMPILE_OPTIONS})
ENDIF()
