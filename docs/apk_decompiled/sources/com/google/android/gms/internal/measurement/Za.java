package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Za {
    static int a(int i, byte[] bArr, int i2, int i3, Rb<?> rb, C0092bb c0092bb) {
        Mb mb = (Mb) rb;
        int iA = a(bArr, i2, c0092bb);
        while (true) {
            mb.d(c0092bb.f1641a);
            if (iA >= i3) {
                break;
            }
            int iA2 = a(bArr, iA, c0092bb);
            if (i != c0092bb.f1641a) {
                break;
            }
            iA = a(bArr, iA2, c0092bb);
        }
        return iA;
    }

    static int a(int i, byte[] bArr, int i2, int i3, C0092bb c0092bb) {
        if ((i >>> 3) == 0) {
            throw Ub.c();
        }
        int i4 = i & 7;
        if (i4 == 0) {
            return b(bArr, i2, c0092bb);
        }
        if (i4 == 1) {
            return i2 + 8;
        }
        if (i4 == 2) {
            return a(bArr, i2, c0092bb) + c0092bb.f1641a;
        }
        if (i4 != 3) {
            if (i4 == 5) {
                return i2 + 4;
            }
            throw Ub.c();
        }
        int i5 = (i & (-8)) | 4;
        int i6 = 0;
        while (i2 < i3) {
            i2 = a(bArr, i2, c0092bb);
            i6 = c0092bb.f1641a;
            if (i6 == i5) {
                break;
            }
            i2 = a(i6, bArr, i2, i3, c0092bb);
        }
        if (i2 > i3 || i6 != i5) {
            throw Ub.e();
        }
        return i2;
    }

    static int a(int i, byte[] bArr, int i2, int i3, C0094bd c0094bd, C0092bb c0092bb) {
        if ((i >>> 3) == 0) {
            throw Ub.c();
        }
        int i4 = i & 7;
        if (i4 == 0) {
            int iB = b(bArr, i2, c0092bb);
            c0094bd.a(i, Long.valueOf(c0092bb.f1642b));
            return iB;
        }
        if (i4 == 1) {
            c0094bd.a(i, Long.valueOf(b(bArr, i2)));
            return i2 + 8;
        }
        if (i4 == 2) {
            int iA = a(bArr, i2, c0092bb);
            int i5 = c0092bb.f1641a;
            if (i5 < 0) {
                throw Ub.b();
            }
            if (i5 > bArr.length - iA) {
                throw Ub.a();
            }
            c0094bd.a(i, i5 == 0 ? AbstractC0099cb.f1658a : AbstractC0099cb.a(bArr, iA, i5));
            return iA + i5;
        }
        if (i4 != 3) {
            if (i4 != 5) {
                throw Ub.c();
            }
            c0094bd.a(i, Integer.valueOf(a(bArr, i2)));
            return i2 + 4;
        }
        C0094bd c0094bdB = C0094bd.b();
        int i6 = (i & (-8)) | 4;
        int i7 = 0;
        while (true) {
            if (i2 >= i3) {
                break;
            }
            int iA2 = a(bArr, i2, c0092bb);
            int i8 = c0092bb.f1641a;
            if (i8 == i6) {
                i7 = i8;
                i2 = iA2;
                break;
            }
            i7 = i8;
            i2 = a(i8, bArr, iA2, i3, c0094bdB, c0092bb);
        }
        if (i2 > i3 || i7 != i6) {
            throw Ub.e();
        }
        c0094bd.a(i, c0094bdB);
        return i2;
    }

    static int a(int i, byte[] bArr, int i2, C0092bb c0092bb) {
        int i3;
        int i4;
        int i5 = i & 127;
        int i6 = i2 + 1;
        byte b2 = bArr[i2];
        if (b2 < 0) {
            int i7 = i5 | ((b2 & 127) << 7);
            int i8 = i6 + 1;
            byte b3 = bArr[i6];
            if (b3 >= 0) {
                i3 = b3 << 14;
            } else {
                i5 = i7 | ((b3 & 127) << 14);
                i6 = i8 + 1;
                byte b4 = bArr[i8];
                if (b4 >= 0) {
                    i4 = b4 << 21;
                } else {
                    i7 = i5 | ((b4 & 127) << 21);
                    i8 = i6 + 1;
                    byte b5 = bArr[i6];
                    if (b5 >= 0) {
                        i3 = b5 << 28;
                    } else {
                        int i9 = i7 | ((b5 & 127) << 28);
                        while (true) {
                            int i10 = i8 + 1;
                            if (bArr[i8] >= 0) {
                                c0092bb.f1641a = i9;
                                return i10;
                            }
                            i8 = i10;
                        }
                    }
                }
            }
            c0092bb.f1641a = i7 | i3;
            return i8;
        }
        i4 = b2 << 7;
        c0092bb.f1641a = i5 | i4;
        return i6;
    }

    static int a(Ic<?> ic, int i, byte[] bArr, int i2, int i3, Rb<?> rb, C0092bb c0092bb) {
        int iA = a(ic, bArr, i2, i3, c0092bb);
        while (true) {
            rb.add(c0092bb.f1643c);
            if (iA >= i3) {
                break;
            }
            int iA2 = a(bArr, iA, c0092bb);
            if (i != c0092bb.f1641a) {
                break;
            }
            iA = a(ic, bArr, iA2, i3, c0092bb);
        }
        return iA;
    }

    static int a(Ic ic, byte[] bArr, int i, int i2, int i3, C0092bb c0092bb) {
        C0237xc c0237xc = (C0237xc) ic;
        Object objH = c0237xc.h();
        int iA = c0237xc.a(objH, bArr, i, i2, i3, c0092bb);
        c0237xc.c(objH);
        c0092bb.f1643c = objH;
        return iA;
    }

    static int a(Ic ic, byte[] bArr, int i, int i2, C0092bb c0092bb) {
        int iA = i + 1;
        int i3 = bArr[i];
        if (i3 < 0) {
            iA = a(i3, bArr, iA, c0092bb);
            i3 = c0092bb.f1641a;
        }
        int i4 = iA;
        if (i3 < 0 || i3 > i2 - i4) {
            throw Ub.a();
        }
        Object objH = ic.h();
        int i5 = i3 + i4;
        ic.a(objH, bArr, i4, i5, c0092bb);
        ic.c(objH);
        c0092bb.f1643c = objH;
        return i5;
    }

    static int a(byte[] bArr, int i) {
        return ((bArr[i + 3] & 255) << 24) | (bArr[i] & 255) | ((bArr[i + 1] & 255) << 8) | ((bArr[i + 2] & 255) << 16);
    }

    static int a(byte[] bArr, int i, Rb<?> rb, C0092bb c0092bb) {
        Mb mb = (Mb) rb;
        int iA = a(bArr, i, c0092bb);
        int i2 = c0092bb.f1641a + iA;
        while (iA < i2) {
            iA = a(bArr, iA, c0092bb);
            mb.d(c0092bb.f1641a);
        }
        if (iA == i2) {
            return iA;
        }
        throw Ub.a();
    }

    static int a(byte[] bArr, int i, C0092bb c0092bb) {
        int i2 = i + 1;
        byte b2 = bArr[i];
        if (b2 < 0) {
            return a(b2, bArr, i2, c0092bb);
        }
        c0092bb.f1641a = b2;
        return i2;
    }

    static int b(byte[] bArr, int i, C0092bb c0092bb) {
        int i2 = i + 1;
        long j = bArr[i];
        if (j >= 0) {
            c0092bb.f1642b = j;
            return i2;
        }
        int i3 = i2 + 1;
        byte b2 = bArr[i2];
        long j2 = (j & 127) | (((long) (b2 & 127)) << 7);
        int i4 = 7;
        while (b2 < 0) {
            int i5 = i3 + 1;
            byte b3 = bArr[i3];
            i4 += 7;
            j2 |= ((long) (b3 & 127)) << i4;
            b2 = b3;
            i3 = i5;
        }
        c0092bb.f1642b = j2;
        return i3;
    }

    static long b(byte[] bArr, int i) {
        return ((((long) bArr[i + 7]) & 255) << 56) | (((long) bArr[i]) & 255) | ((((long) bArr[i + 1]) & 255) << 8) | ((((long) bArr[i + 2]) & 255) << 16) | ((((long) bArr[i + 3]) & 255) << 24) | ((((long) bArr[i + 4]) & 255) << 32) | ((((long) bArr[i + 5]) & 255) << 40) | ((((long) bArr[i + 6]) & 255) << 48);
    }

    static double c(byte[] bArr, int i) {
        return Double.longBitsToDouble(b(bArr, i));
    }

    static int c(byte[] bArr, int i, C0092bb c0092bb) {
        int iA = a(bArr, i, c0092bb);
        int i2 = c0092bb.f1641a;
        if (i2 < 0) {
            throw Ub.b();
        }
        if (i2 == 0) {
            c0092bb.f1643c = "";
            return iA;
        }
        c0092bb.f1643c = new String(bArr, iA, i2, Lb.f1500a);
        return iA + i2;
    }

    static float d(byte[] bArr, int i) {
        return Float.intBitsToFloat(a(bArr, i));
    }

    static int d(byte[] bArr, int i, C0092bb c0092bb) {
        int iA = a(bArr, i, c0092bb);
        int i2 = c0092bb.f1641a;
        if (i2 < 0) {
            throw Ub.b();
        }
        if (i2 == 0) {
            c0092bb.f1643c = "";
            return iA;
        }
        c0092bb.f1643c = C0136hd.b(bArr, iA, i2);
        return iA + i2;
    }

    static int e(byte[] bArr, int i, C0092bb c0092bb) {
        int iA = a(bArr, i, c0092bb);
        int i2 = c0092bb.f1641a;
        if (i2 < 0) {
            throw Ub.b();
        }
        if (i2 > bArr.length - iA) {
            throw Ub.a();
        }
        if (i2 == 0) {
            c0092bb.f1643c = AbstractC0099cb.f1658a;
            return iA;
        }
        c0092bb.f1643c = AbstractC0099cb.a(bArr, iA, i2);
        return iA + i2;
    }
}
