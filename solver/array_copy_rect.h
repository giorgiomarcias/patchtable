
/* array_copy_rect.h: copy_rect() / clear_rect() methods of class Array.
   Generated by array_copy_rect.py -- do not hand edit. */

    void copy_rect(Array<real> &dest, const vector<int> &src_start, const vector<int> &dest_start, const vector<int> &extent) const {
        real *src_data = &get_nearest(src_start);
        real *dest_data = &dest.get_nearest(dest_start);
    
        if (0) { }
        
            else if (sizes.size() == 1) {
            
                    for (int i0 = 0; i0 < extent[0]; i0++) {
                
                        dest_data[i0] = src_data[i0];
                    }
                
            }
                    
            else if (sizes.size() == 2) {
            
                for (int i0 = 0; i0 < extent[0]; i0++) {
                    real *src_data0 = src_data + stride[0]*i0;
                    
                    real *dest_data0 = dest_data + dest.stride[0]*i0;
                    
                    for (int i1 = 0; i1 < extent[1]; i1++) {
                
                        dest_data0[i1] = src_data0[i1];
                    }
                
                }
                
            }
                    
            else if (sizes.size() == 3) {
            
                for (int i0 = 0; i0 < extent[0]; i0++) {
                    real *src_data0 = src_data + stride[0]*i0;
                    
                    real *dest_data0 = dest_data + dest.stride[0]*i0;
                    
                for (int i1 = 0; i1 < extent[1]; i1++) {
                    real *src_data1 = src_data0 + stride[1]*i1;
                    
                    real *dest_data1 = dest_data0 + dest.stride[1]*i1;
                    
                    for (int i2 = 0; i2 < extent[2]; i2++) {
                
                        dest_data1[i2] = src_data1[i2];
                    }
                
                }
                
                }
                
            }
                    
            else if (sizes.size() == 4) {
            
                for (int i0 = 0; i0 < extent[0]; i0++) {
                    real *src_data0 = src_data + stride[0]*i0;
                    
                    real *dest_data0 = dest_data + dest.stride[0]*i0;
                    
                for (int i1 = 0; i1 < extent[1]; i1++) {
                    real *src_data1 = src_data0 + stride[1]*i1;
                    
                    real *dest_data1 = dest_data0 + dest.stride[1]*i1;
                    
                for (int i2 = 0; i2 < extent[2]; i2++) {
                    real *src_data2 = src_data1 + stride[2]*i2;
                    
                    real *dest_data2 = dest_data1 + dest.stride[2]*i2;
                    
                    for (int i3 = 0; i3 < extent[3]; i3++) {
                
                        dest_data2[i3] = src_data2[i3];
                    }
                
                }
                
                }
                
                }
                
            }
                    
            else if (sizes.size() == 5) {
            
                for (int i0 = 0; i0 < extent[0]; i0++) {
                    real *src_data0 = src_data + stride[0]*i0;
                    
                    real *dest_data0 = dest_data + dest.stride[0]*i0;
                    
                for (int i1 = 0; i1 < extent[1]; i1++) {
                    real *src_data1 = src_data0 + stride[1]*i1;
                    
                    real *dest_data1 = dest_data0 + dest.stride[1]*i1;
                    
                for (int i2 = 0; i2 < extent[2]; i2++) {
                    real *src_data2 = src_data1 + stride[2]*i2;
                    
                    real *dest_data2 = dest_data1 + dest.stride[2]*i2;
                    
                for (int i3 = 0; i3 < extent[3]; i3++) {
                    real *src_data3 = src_data2 + stride[3]*i3;
                    
                    real *dest_data3 = dest_data2 + dest.stride[3]*i3;
                    
                    for (int i4 = 0; i4 < extent[4]; i4++) {
                
                        dest_data3[i4] = src_data3[i4];
                    }
                
                }
                
                }
                
                }
                
                }
                
            }
                    
            else if (sizes.size() == 6) {
            
                for (int i0 = 0; i0 < extent[0]; i0++) {
                    real *src_data0 = src_data + stride[0]*i0;
                    
                    real *dest_data0 = dest_data + dest.stride[0]*i0;
                    
                for (int i1 = 0; i1 < extent[1]; i1++) {
                    real *src_data1 = src_data0 + stride[1]*i1;
                    
                    real *dest_data1 = dest_data0 + dest.stride[1]*i1;
                    
                for (int i2 = 0; i2 < extent[2]; i2++) {
                    real *src_data2 = src_data1 + stride[2]*i2;
                    
                    real *dest_data2 = dest_data1 + dest.stride[2]*i2;
                    
                for (int i3 = 0; i3 < extent[3]; i3++) {
                    real *src_data3 = src_data2 + stride[3]*i3;
                    
                    real *dest_data3 = dest_data2 + dest.stride[3]*i3;
                    
                for (int i4 = 0; i4 < extent[4]; i4++) {
                    real *src_data4 = src_data3 + stride[4]*i4;
                    
                    real *dest_data4 = dest_data3 + dest.stride[4]*i4;
                    
                    for (int i5 = 0; i5 < extent[5]; i5++) {
                
                        dest_data4[i5] = src_data4[i5];
                    }
                
                }
                
                }
                
                }
                
                }
                
                }
                
            }
                    
            else if (sizes.size() == 7) {
            
                for (int i0 = 0; i0 < extent[0]; i0++) {
                    real *src_data0 = src_data + stride[0]*i0;
                    
                    real *dest_data0 = dest_data + dest.stride[0]*i0;
                    
                for (int i1 = 0; i1 < extent[1]; i1++) {
                    real *src_data1 = src_data0 + stride[1]*i1;
                    
                    real *dest_data1 = dest_data0 + dest.stride[1]*i1;
                    
                for (int i2 = 0; i2 < extent[2]; i2++) {
                    real *src_data2 = src_data1 + stride[2]*i2;
                    
                    real *dest_data2 = dest_data1 + dest.stride[2]*i2;
                    
                for (int i3 = 0; i3 < extent[3]; i3++) {
                    real *src_data3 = src_data2 + stride[3]*i3;
                    
                    real *dest_data3 = dest_data2 + dest.stride[3]*i3;
                    
                for (int i4 = 0; i4 < extent[4]; i4++) {
                    real *src_data4 = src_data3 + stride[4]*i4;
                    
                    real *dest_data4 = dest_data3 + dest.stride[4]*i4;
                    
                for (int i5 = 0; i5 < extent[5]; i5++) {
                    real *src_data5 = src_data4 + stride[5]*i5;
                    
                    real *dest_data5 = dest_data4 + dest.stride[5]*i5;
                    
                    for (int i6 = 0; i6 < extent[6]; i6++) {
                
                        dest_data5[i6] = src_data5[i6];
                    }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
            }
                    
            else if (sizes.size() == 8) {
            
                for (int i0 = 0; i0 < extent[0]; i0++) {
                    real *src_data0 = src_data + stride[0]*i0;
                    
                    real *dest_data0 = dest_data + dest.stride[0]*i0;
                    
                for (int i1 = 0; i1 < extent[1]; i1++) {
                    real *src_data1 = src_data0 + stride[1]*i1;
                    
                    real *dest_data1 = dest_data0 + dest.stride[1]*i1;
                    
                for (int i2 = 0; i2 < extent[2]; i2++) {
                    real *src_data2 = src_data1 + stride[2]*i2;
                    
                    real *dest_data2 = dest_data1 + dest.stride[2]*i2;
                    
                for (int i3 = 0; i3 < extent[3]; i3++) {
                    real *src_data3 = src_data2 + stride[3]*i3;
                    
                    real *dest_data3 = dest_data2 + dest.stride[3]*i3;
                    
                for (int i4 = 0; i4 < extent[4]; i4++) {
                    real *src_data4 = src_data3 + stride[4]*i4;
                    
                    real *dest_data4 = dest_data3 + dest.stride[4]*i4;
                    
                for (int i5 = 0; i5 < extent[5]; i5++) {
                    real *src_data5 = src_data4 + stride[5]*i5;
                    
                    real *dest_data5 = dest_data4 + dest.stride[5]*i5;
                    
                for (int i6 = 0; i6 < extent[6]; i6++) {
                    real *src_data6 = src_data5 + stride[6]*i6;
                    
                    real *dest_data6 = dest_data5 + dest.stride[6]*i6;
                    
                    for (int i7 = 0; i7 < extent[7]; i7++) {
                
                        dest_data6[i7] = src_data6[i7];
                    }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
            }
                    
            else if (sizes.size() == 9) {
            
                for (int i0 = 0; i0 < extent[0]; i0++) {
                    real *src_data0 = src_data + stride[0]*i0;
                    
                    real *dest_data0 = dest_data + dest.stride[0]*i0;
                    
                for (int i1 = 0; i1 < extent[1]; i1++) {
                    real *src_data1 = src_data0 + stride[1]*i1;
                    
                    real *dest_data1 = dest_data0 + dest.stride[1]*i1;
                    
                for (int i2 = 0; i2 < extent[2]; i2++) {
                    real *src_data2 = src_data1 + stride[2]*i2;
                    
                    real *dest_data2 = dest_data1 + dest.stride[2]*i2;
                    
                for (int i3 = 0; i3 < extent[3]; i3++) {
                    real *src_data3 = src_data2 + stride[3]*i3;
                    
                    real *dest_data3 = dest_data2 + dest.stride[3]*i3;
                    
                for (int i4 = 0; i4 < extent[4]; i4++) {
                    real *src_data4 = src_data3 + stride[4]*i4;
                    
                    real *dest_data4 = dest_data3 + dest.stride[4]*i4;
                    
                for (int i5 = 0; i5 < extent[5]; i5++) {
                    real *src_data5 = src_data4 + stride[5]*i5;
                    
                    real *dest_data5 = dest_data4 + dest.stride[5]*i5;
                    
                for (int i6 = 0; i6 < extent[6]; i6++) {
                    real *src_data6 = src_data5 + stride[6]*i6;
                    
                    real *dest_data6 = dest_data5 + dest.stride[6]*i6;
                    
                for (int i7 = 0; i7 < extent[7]; i7++) {
                    real *src_data7 = src_data6 + stride[7]*i7;
                    
                    real *dest_data7 = dest_data6 + dest.stride[7]*i7;
                    
                    for (int i8 = 0; i8 < extent[8]; i8++) {
                
                        dest_data7[i8] = src_data7[i8];
                    }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
            }
                    
            else if (sizes.size() == 10) {
            
                for (int i0 = 0; i0 < extent[0]; i0++) {
                    real *src_data0 = src_data + stride[0]*i0;
                    
                    real *dest_data0 = dest_data + dest.stride[0]*i0;
                    
                for (int i1 = 0; i1 < extent[1]; i1++) {
                    real *src_data1 = src_data0 + stride[1]*i1;
                    
                    real *dest_data1 = dest_data0 + dest.stride[1]*i1;
                    
                for (int i2 = 0; i2 < extent[2]; i2++) {
                    real *src_data2 = src_data1 + stride[2]*i2;
                    
                    real *dest_data2 = dest_data1 + dest.stride[2]*i2;
                    
                for (int i3 = 0; i3 < extent[3]; i3++) {
                    real *src_data3 = src_data2 + stride[3]*i3;
                    
                    real *dest_data3 = dest_data2 + dest.stride[3]*i3;
                    
                for (int i4 = 0; i4 < extent[4]; i4++) {
                    real *src_data4 = src_data3 + stride[4]*i4;
                    
                    real *dest_data4 = dest_data3 + dest.stride[4]*i4;
                    
                for (int i5 = 0; i5 < extent[5]; i5++) {
                    real *src_data5 = src_data4 + stride[5]*i5;
                    
                    real *dest_data5 = dest_data4 + dest.stride[5]*i5;
                    
                for (int i6 = 0; i6 < extent[6]; i6++) {
                    real *src_data6 = src_data5 + stride[6]*i6;
                    
                    real *dest_data6 = dest_data5 + dest.stride[6]*i6;
                    
                for (int i7 = 0; i7 < extent[7]; i7++) {
                    real *src_data7 = src_data6 + stride[7]*i7;
                    
                    real *dest_data7 = dest_data6 + dest.stride[7]*i7;
                    
                for (int i8 = 0; i8 < extent[8]; i8++) {
                    real *src_data8 = src_data7 + stride[8]*i8;
                    
                    real *dest_data8 = dest_data7 + dest.stride[8]*i8;
                    
                    for (int i9 = 0; i9 < extent[9]; i9++) {
                
                        dest_data8[i9] = src_data8[i9];
                    }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
            }
            
            else { fprintf(stderr, "copy_rect/clear_rect dimension unsupported: %luu\n", sizes.size()); exit(1); }
        }
        
    void clear_rect(const vector<int> &src_start, const vector<int> &extent, real value=0) {
        real *src_data = &get_nearest(src_start);
            
        if (0) { }
        
            else if (sizes.size() == 1) {
            
                    for (int i0 = 0; i0 < extent[0]; i0++) {
                
                        src_data[i0] = value;
                    }
                
            }
                    
            else if (sizes.size() == 2) {
            
                for (int i0 = 0; i0 < extent[0]; i0++) {
                    real *src_data0 = src_data + stride[0]*i0;
                    
                    for (int i1 = 0; i1 < extent[1]; i1++) {
                
                        src_data0[i1] = value;
                    }
                
                }
                
            }
                    
            else if (sizes.size() == 3) {
            
                for (int i0 = 0; i0 < extent[0]; i0++) {
                    real *src_data0 = src_data + stride[0]*i0;
                    
                for (int i1 = 0; i1 < extent[1]; i1++) {
                    real *src_data1 = src_data0 + stride[1]*i1;
                    
                    for (int i2 = 0; i2 < extent[2]; i2++) {
                
                        src_data1[i2] = value;
                    }
                
                }
                
                }
                
            }
                    
            else if (sizes.size() == 4) {
            
                for (int i0 = 0; i0 < extent[0]; i0++) {
                    real *src_data0 = src_data + stride[0]*i0;
                    
                for (int i1 = 0; i1 < extent[1]; i1++) {
                    real *src_data1 = src_data0 + stride[1]*i1;
                    
                for (int i2 = 0; i2 < extent[2]; i2++) {
                    real *src_data2 = src_data1 + stride[2]*i2;
                    
                    for (int i3 = 0; i3 < extent[3]; i3++) {
                
                        src_data2[i3] = value;
                    }
                
                }
                
                }
                
                }
                
            }
                    
            else if (sizes.size() == 5) {
            
                for (int i0 = 0; i0 < extent[0]; i0++) {
                    real *src_data0 = src_data + stride[0]*i0;
                    
                for (int i1 = 0; i1 < extent[1]; i1++) {
                    real *src_data1 = src_data0 + stride[1]*i1;
                    
                for (int i2 = 0; i2 < extent[2]; i2++) {
                    real *src_data2 = src_data1 + stride[2]*i2;
                    
                for (int i3 = 0; i3 < extent[3]; i3++) {
                    real *src_data3 = src_data2 + stride[3]*i3;
                    
                    for (int i4 = 0; i4 < extent[4]; i4++) {
                
                        src_data3[i4] = value;
                    }
                
                }
                
                }
                
                }
                
                }
                
            }
                    
            else if (sizes.size() == 6) {
            
                for (int i0 = 0; i0 < extent[0]; i0++) {
                    real *src_data0 = src_data + stride[0]*i0;
                    
                for (int i1 = 0; i1 < extent[1]; i1++) {
                    real *src_data1 = src_data0 + stride[1]*i1;
                    
                for (int i2 = 0; i2 < extent[2]; i2++) {
                    real *src_data2 = src_data1 + stride[2]*i2;
                    
                for (int i3 = 0; i3 < extent[3]; i3++) {
                    real *src_data3 = src_data2 + stride[3]*i3;
                    
                for (int i4 = 0; i4 < extent[4]; i4++) {
                    real *src_data4 = src_data3 + stride[4]*i4;
                    
                    for (int i5 = 0; i5 < extent[5]; i5++) {
                
                        src_data4[i5] = value;
                    }
                
                }
                
                }
                
                }
                
                }
                
                }
                
            }
                    
            else if (sizes.size() == 7) {
            
                for (int i0 = 0; i0 < extent[0]; i0++) {
                    real *src_data0 = src_data + stride[0]*i0;
                    
                for (int i1 = 0; i1 < extent[1]; i1++) {
                    real *src_data1 = src_data0 + stride[1]*i1;
                    
                for (int i2 = 0; i2 < extent[2]; i2++) {
                    real *src_data2 = src_data1 + stride[2]*i2;
                    
                for (int i3 = 0; i3 < extent[3]; i3++) {
                    real *src_data3 = src_data2 + stride[3]*i3;
                    
                for (int i4 = 0; i4 < extent[4]; i4++) {
                    real *src_data4 = src_data3 + stride[4]*i4;
                    
                for (int i5 = 0; i5 < extent[5]; i5++) {
                    real *src_data5 = src_data4 + stride[5]*i5;
                    
                    for (int i6 = 0; i6 < extent[6]; i6++) {
                
                        src_data5[i6] = value;
                    }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
            }
                    
            else if (sizes.size() == 8) {
            
                for (int i0 = 0; i0 < extent[0]; i0++) {
                    real *src_data0 = src_data + stride[0]*i0;
                    
                for (int i1 = 0; i1 < extent[1]; i1++) {
                    real *src_data1 = src_data0 + stride[1]*i1;
                    
                for (int i2 = 0; i2 < extent[2]; i2++) {
                    real *src_data2 = src_data1 + stride[2]*i2;
                    
                for (int i3 = 0; i3 < extent[3]; i3++) {
                    real *src_data3 = src_data2 + stride[3]*i3;
                    
                for (int i4 = 0; i4 < extent[4]; i4++) {
                    real *src_data4 = src_data3 + stride[4]*i4;
                    
                for (int i5 = 0; i5 < extent[5]; i5++) {
                    real *src_data5 = src_data4 + stride[5]*i5;
                    
                for (int i6 = 0; i6 < extent[6]; i6++) {
                    real *src_data6 = src_data5 + stride[6]*i6;
                    
                    for (int i7 = 0; i7 < extent[7]; i7++) {
                
                        src_data6[i7] = value;
                    }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
            }
                    
            else if (sizes.size() == 9) {
            
                for (int i0 = 0; i0 < extent[0]; i0++) {
                    real *src_data0 = src_data + stride[0]*i0;
                    
                for (int i1 = 0; i1 < extent[1]; i1++) {
                    real *src_data1 = src_data0 + stride[1]*i1;
                    
                for (int i2 = 0; i2 < extent[2]; i2++) {
                    real *src_data2 = src_data1 + stride[2]*i2;
                    
                for (int i3 = 0; i3 < extent[3]; i3++) {
                    real *src_data3 = src_data2 + stride[3]*i3;
                    
                for (int i4 = 0; i4 < extent[4]; i4++) {
                    real *src_data4 = src_data3 + stride[4]*i4;
                    
                for (int i5 = 0; i5 < extent[5]; i5++) {
                    real *src_data5 = src_data4 + stride[5]*i5;
                    
                for (int i6 = 0; i6 < extent[6]; i6++) {
                    real *src_data6 = src_data5 + stride[6]*i6;
                    
                for (int i7 = 0; i7 < extent[7]; i7++) {
                    real *src_data7 = src_data6 + stride[7]*i7;
                    
                    for (int i8 = 0; i8 < extent[8]; i8++) {
                
                        src_data7[i8] = value;
                    }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
            }
                    
            else if (sizes.size() == 10) {
            
                for (int i0 = 0; i0 < extent[0]; i0++) {
                    real *src_data0 = src_data + stride[0]*i0;
                    
                for (int i1 = 0; i1 < extent[1]; i1++) {
                    real *src_data1 = src_data0 + stride[1]*i1;
                    
                for (int i2 = 0; i2 < extent[2]; i2++) {
                    real *src_data2 = src_data1 + stride[2]*i2;
                    
                for (int i3 = 0; i3 < extent[3]; i3++) {
                    real *src_data3 = src_data2 + stride[3]*i3;
                    
                for (int i4 = 0; i4 < extent[4]; i4++) {
                    real *src_data4 = src_data3 + stride[4]*i4;
                    
                for (int i5 = 0; i5 < extent[5]; i5++) {
                    real *src_data5 = src_data4 + stride[5]*i5;
                    
                for (int i6 = 0; i6 < extent[6]; i6++) {
                    real *src_data6 = src_data5 + stride[6]*i6;
                    
                for (int i7 = 0; i7 < extent[7]; i7++) {
                    real *src_data7 = src_data6 + stride[7]*i7;
                    
                for (int i8 = 0; i8 < extent[8]; i8++) {
                    real *src_data8 = src_data7 + stride[8]*i8;
                    
                    for (int i9 = 0; i9 < extent[9]; i9++) {
                
                        src_data8[i9] = value;
                    }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
                }
                
            }
            
            else { fprintf(stderr, "copy_rect/clear_rect dimension unsupported: %d\n", sizes.size()); exit(1); }
        }
        