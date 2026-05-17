package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.nd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0177nd extends AbstractC0143id {
    C0177nd() {
    }

    private static int a(byte[] bArr, int i, long j, int i2) {
        if (i2 == 0) {
            return C0136hd.b(i);
        }
        if (i2 == 1) {
            return C0136hd.b(i, C0115ed.a(bArr, j));
        }
        if (i2 == 2) {
            return C0136hd.b(i, C0115ed.a(bArr, j), C0115ed.a(bArr, j + 1));
        }
        throw new AssertionError();
    }

    /* JADX WARN: Code restructure failed: missing block: B:33:0x0061, code lost:
    
        return -1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:51:0x008e, code lost:
    
        return -1;
     */
    @Override // com.google.android.gms.internal.measurement.AbstractC0143id
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    final int a(int r16, byte[] r17, int r18, int r19) {
        /*
            Method dump skipped, instruction units count: 222
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.internal.measurement.C0177nd.a(int, byte[], int, int):int");
    }

    @Override // com.google.android.gms.internal.measurement.AbstractC0143id
    final int a(CharSequence charSequence, byte[] bArr, int i, int i2) {
        char c2;
        long j;
        long j2;
        long j3;
        int i3;
        char cCharAt;
        long j4 = i;
        long j5 = ((long) i2) + j4;
        int length = charSequence.length();
        if (length > i2 || bArr.length - i2 < i) {
            char cCharAt2 = charSequence.charAt(length - 1);
            StringBuilder sb = new StringBuilder(37);
            sb.append("Failed writing ");
            sb.append(cCharAt2);
            sb.append(" at index ");
            sb.append(i + i2);
            throw new ArrayIndexOutOfBoundsException(sb.toString());
        }
        int i4 = 0;
        while (true) {
            c2 = 128;
            j = 1;
            if (i4 >= length || (cCharAt = charSequence.charAt(i4)) >= 128) {
                break;
            }
            C0115ed.a(bArr, j4, (byte) cCharAt);
            i4++;
            j4 = 1 + j4;
        }
        if (i4 == length) {
            return (int) j4;
        }
        while (i4 < length) {
            char cCharAt3 = charSequence.charAt(i4);
            if (cCharAt3 >= c2 || j4 >= j5) {
                if (cCharAt3 < 2048 && j4 <= j5 - 2) {
                    long j6 = j4 + j;
                    C0115ed.a(bArr, j4, (byte) ((cCharAt3 >>> 6) | 960));
                    C0115ed.a(bArr, j6, (byte) ((cCharAt3 & '?') | 128));
                    j2 = j6 + j;
                    j3 = j;
                } else {
                    if ((cCharAt3 >= 55296 && 57343 >= cCharAt3) || j4 > j5 - 3) {
                        if (j4 > j5 - 4) {
                            if (55296 <= cCharAt3 && cCharAt3 <= 57343 && ((i3 = i4 + 1) == length || !Character.isSurrogatePair(cCharAt3, charSequence.charAt(i3)))) {
                                throw new C0156kd(i4, length);
                            }
                            StringBuilder sb2 = new StringBuilder(46);
                            sb2.append("Failed writing ");
                            sb2.append(cCharAt3);
                            sb2.append(" at index ");
                            sb2.append(j4);
                            throw new ArrayIndexOutOfBoundsException(sb2.toString());
                        }
                        int i5 = i4 + 1;
                        if (i5 != length) {
                            char cCharAt4 = charSequence.charAt(i5);
                            if (Character.isSurrogatePair(cCharAt3, cCharAt4)) {
                                int codePoint = Character.toCodePoint(cCharAt3, cCharAt4);
                                long j7 = j4 + 1;
                                C0115ed.a(bArr, j4, (byte) ((codePoint >>> 18) | 240));
                                long j8 = j7 + 1;
                                C0115ed.a(bArr, j7, (byte) (((codePoint >>> 12) & 63) | 128));
                                long j9 = j8 + 1;
                                C0115ed.a(bArr, j8, (byte) (((codePoint >>> 6) & 63) | 128));
                                j3 = 1;
                                j2 = j9 + 1;
                                C0115ed.a(bArr, j9, (byte) ((codePoint & 63) | 128));
                                i4 = i5;
                            } else {
                                i4 = i5;
                            }
                        }
                        throw new C0156kd(i4 - 1, length);
                    }
                    long j10 = j4 + j;
                    C0115ed.a(bArr, j4, (byte) ((cCharAt3 >>> '\f') | 480));
                    long j11 = j10 + j;
                    C0115ed.a(bArr, j10, (byte) (((cCharAt3 >>> 6) & 63) | 128));
                    C0115ed.a(bArr, j11, (byte) ((cCharAt3 & '?') | 128));
                    j2 = j11 + 1;
                    j3 = 1;
                }
                i4++;
                c2 = 128;
                long j12 = j3;
                j4 = j2;
                j = j12;
            } else {
                long j13 = j4 + j;
                C0115ed.a(bArr, j4, (byte) cCharAt3);
                j3 = j;
                j2 = j13;
            }
            i4++;
            c2 = 128;
            long j122 = j3;
            j4 = j2;
            j = j122;
        }
        return (int) j4;
    }

    @Override // com.google.android.gms.internal.measurement.AbstractC0143id
    final String b(byte[] bArr, int i, int i2) throws Ub {
        if ((i | i2 | ((bArr.length - i) - i2)) < 0) {
            throw new ArrayIndexOutOfBoundsException(String.format("buffer length=%d, index=%d, size=%d", Integer.valueOf(bArr.length), Integer.valueOf(i), Integer.valueOf(i2)));
        }
        int i3 = i + i2;
        char[] cArr = new char[i2];
        int i4 = 0;
        while (i < i3) {
            byte bA = C0115ed.a(bArr, i);
            if (!C0149jd.d(bA)) {
                break;
            }
            i++;
            C0149jd.b(bA, cArr, i4);
            i4++;
        }
        int i5 = i4;
        while (i < i3) {
            int i6 = i + 1;
            byte bA2 = C0115ed.a(bArr, i);
            if (C0149jd.d(bA2)) {
                int i7 = i5 + 1;
                C0149jd.b(bA2, cArr, i5);
                while (i6 < i3) {
                    byte bA3 = C0115ed.a(bArr, i6);
                    if (!C0149jd.d(bA3)) {
                        break;
                    }
                    i6++;
                    C0149jd.b(bA3, cArr, i7);
                    i7++;
                }
                i = i6;
                i5 = i7;
            } else if (C0149jd.e(bA2)) {
                if (i6 >= i3) {
                    throw Ub.f();
                }
                C0149jd.b(bA2, C0115ed.a(bArr, i6), cArr, i5);
                i = i6 + 1;
                i5++;
            } else if (C0149jd.f(bA2)) {
                if (i6 >= i3 - 1) {
                    throw Ub.f();
                }
                int i8 = i6 + 1;
                C0149jd.b(bA2, C0115ed.a(bArr, i6), C0115ed.a(bArr, i8), cArr, i5);
                i = i8 + 1;
                i5++;
            } else {
                if (i6 >= i3 - 2) {
                    throw Ub.f();
                }
                int i9 = i6 + 1;
                byte bA4 = C0115ed.a(bArr, i6);
                int i10 = i9 + 1;
                C0149jd.b(bA2, bA4, C0115ed.a(bArr, i9), C0115ed.a(bArr, i10), cArr, i5);
                i = i10 + 1;
                i5 = i5 + 1 + 1;
            }
        }
        return new String(cArr, 0, i5);
    }
}
