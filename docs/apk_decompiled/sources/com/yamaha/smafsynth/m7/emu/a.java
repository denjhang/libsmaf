package com.yamaha.smafsynth.m7.emu;

import java.io.UnsupportedEncodingException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private byte[] f2737a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    protected String f2738b = "SJIS";

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    protected String f2739c = "";

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    protected String f2740d = "";

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    protected String f2741e = "";

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    protected String f2742f = "";
    protected String g = "";

    public a(byte[] bArr) {
        this.f2737a = null;
        this.f2737a = bArr;
        a(this.f2737a);
    }

    private String a(int i) {
        if (i == 0) {
            return "SJIS";
        }
        if (i == 1) {
            return "ISO8859_1";
        }
        if (i == 2) {
            return "EUC_KR";
        }
        if (i == 3) {
            return "EUC_CN";
        }
        if (i == 4) {
            return "Big5";
        }
        if (i == 5) {
            return "KOI8_R";
        }
        switch (i) {
        }
        return "SJIS";
    }

    private String a(byte[] bArr, String str) {
        try {
            bArr[0] = 0;
            bArr[1] = 0;
            bArr[2] = 0;
            return new String(bArr, str).trim().replace("\\\\", "\\").replace("\\,", ",");
        } catch (UnsupportedEncodingException unused) {
            return "";
        }
    }

    private void a(byte[] bArr) {
        int i;
        if (bArr == null) {
            return;
        }
        int i2 = (bArr[12] & 255) + (bArr[13] & 255) + (bArr[14] & 255) + (bArr[15] & 255) + 15;
        int i3 = 0;
        if ((bArr[i2 + 1] & 255) != 79 || (bArr[i2 + 2] & 255) != 80 || (bArr[i2 + 3] & 255) != 68 || (bArr[i2 + 4] & 255) != 65) {
            int i4 = (bArr[12] & 255) + (bArr[13] & 255) + (bArr[14] & 255) + (bArr[15] & 255);
            byte[] bArr2 = new byte[i4];
            this.f2738b = a(bArr[18] & 255);
            System.arraycopy(bArr, 21, bArr2, 0, i4);
            byte[] bArr3 = new byte[bArr2.length];
            int i5 = 0;
            for (int i6 = 0; i6 < bArr2.length; i6++) {
                if (i6 <= 1 || (((bArr2[i6 - 2] & 255) == 92 && (bArr2[i6 - 1] & 255) == 92 && (bArr2[i6] & 255) == 44) || (((bArr2[i6 - 1] & 255) == 92 && (bArr2[i6] & 255) == 44) || (bArr2[i6] & 255) != 44))) {
                    bArr3[i5] = bArr2[i6];
                    i5++;
                } else {
                    if ((bArr3[0] & 255) == 83 && (bArr3[1] & 255) == 84 && (bArr3[2] & 255) == 58) {
                        this.f2739c = a(bArr3, this.f2738b);
                    } else if ((bArr3[0] & 255) == 65 && (bArr3[1] & 255) == 78 && (bArr3[2] & 255) == 58) {
                        this.f2740d = a(bArr3, this.f2738b);
                    } else if ((bArr3[0] & 255) == 67 && (bArr3[1] & 255) == 82 && (bArr3[2] & 255) == 58) {
                        this.f2741e = a(bArr3, this.f2738b);
                    } else if ((bArr3[0] & 255) == 71 && (bArr3[1] & 255) == 82 && (bArr3[2] & 255) == 58) {
                        this.f2742f = a(bArr3, this.f2738b);
                    } else {
                        if ((bArr3[0] & 255) == 77 && (bArr3[1] & 255) == 73 && (bArr3[2] & 255) == 58) {
                            this.g = a(bArr3, this.f2738b);
                        }
                        bArr3 = new byte[bArr2.length];
                        i5 = 0;
                    }
                    bArr3 = new byte[bArr2.length];
                    i5 = 0;
                }
            }
            return;
        }
        int i7 = i2 + 8;
        int i8 = (bArr[i2 + 5] & 255) + (bArr[i2 + 6] & 255) + (bArr[i2 + 7] & 255) + (bArr[i7] & 255) + i7;
        while (i7 < i8) {
            this.f2738b = a(bArr[i7 + 4] & 255);
            int i9 = i7 + 8;
            int i10 = (bArr[i7 + 5] & 255) + (bArr[i7 + 6] & 255) + (bArr[i7 + 7] & 255) + (bArr[i9] & 255) + i9;
            int i11 = i7;
            while (i9 < i10) {
                int i12 = i9 + 1;
                if (((bArr[i12] & 255) == 83 && (bArr[i9 + 2] & 255) == 84) || (((bArr[i12] & 255) == 65 && (bArr[i9 + 2] & 255) == 78) || (((bArr[i12] & 255) == 67 && (bArr[i9 + 2] & 255) == 82) || (((bArr[i12] & 255) == 71 && (bArr[i9 + 2] & 255) == 82) || ((bArr[i12] & 255) == 77 && (bArr[i9 + 2] & 255) == 73))))) {
                    int i13 = (bArr[i9 + 3] & 255) + (bArr[i9 + 4] & 255);
                    byte[] bArr4 = new byte[i13];
                    System.arraycopy(bArr, i9 + 5, bArr4, i3, i13);
                    try {
                        String str = new String(bArr4, this.f2738b);
                        if ((bArr[i12] & 255) == 83 && (bArr[i9 + 2] & 255) == 84) {
                            this.f2739c = str;
                        } else if ((bArr[i12] & 255) == 65 && (bArr[i9 + 2] & 255) == 78) {
                            this.f2740d = str;
                        } else if ((bArr[i12] & 255) == 67 && (bArr[i9 + 2] & 255) == 82) {
                            this.f2741e = str;
                        } else if ((bArr[i12] & 255) == 71 && (bArr[i9 + 2] & 255) == 82) {
                            this.f2742f = str;
                        } else if ((bArr[i12] & 255) == 77 && (bArr[i9 + 2] & 255) == 73) {
                            this.g = str;
                        }
                    } catch (UnsupportedEncodingException e2) {
                        e2.printStackTrace();
                    }
                    i = i9 + i13 + 3;
                } else {
                    i = i9 + (bArr[i9 + 3] & 255) + (bArr[i9 + 4] & 255) + 3;
                }
                i11 += i;
                i9 = i + 1;
                i3 = 0;
            }
            i7 = i11 + 1;
            i3 = 0;
        }
    }

    public String a() {
        return this.f2742f;
    }

    public String b() {
        return this.g;
    }

    public String c() {
        return this.f2740d;
    }

    public String d() {
        return this.f2741e;
    }

    public String e() {
        return this.f2739c;
    }
}
