package jp.co.acrodea.runtime.drm;

import java.security.GeneralSecurityException;
import java.util.Arrays;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c extends h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private m f3390a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private boolean f3391b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private byte[] f3392c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private byte[] f3393d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private byte[] f3394e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private byte[] f3395f;
    private byte[] g;
    private long h;
    private long n;

    static {
        System.loadLibrary("acdrm");
    }

    public c(m mVar) {
        this.f3390a = mVar;
        t(this.f3390a.g());
        this.f3392c = (byte[]) this.f3390a.e().clone();
        this.f3393d = (byte[]) this.f3390a.f().clone();
        this.f3395f = new byte[16];
        this.g = new byte[16];
        this.h = -1L;
        this.f3391b = true;
    }

    private native void a(byte[] bArr, int i, int i2, byte[] bArr2, int i3, byte[] bArr3, byte[] bArr4);

    private native void d();

    private native void s(AcDRME4PartInfo acDRME4PartInfo, byte[] bArr, int i, long j, int i2);

    private native void t(long j);

    public void a() {
        if (this.f3391b) {
            byte[] bArr = this.f3392c;
            if (bArr != null) {
                Arrays.fill(bArr, (byte) 0);
            }
            this.f3392c = null;
            this.f3393d = null;
            this.f3394e = null;
            this.f3395f = null;
            this.g = null;
            this.h = -1L;
            this.f3391b = false;
            d();
        }
    }

    protected void a(AcDRME4PartInfo acDRME4PartInfo, byte[] bArr, int i, long j, int i2) throws o {
        a(acDRME4PartInfo, bArr, i, bArr, i, j, i2);
    }

    protected void a(AcDRME4PartInfo acDRME4PartInfo, byte[] bArr, int i, byte[] bArr2, int i2, long j, int i3) throws o {
        byte[] bArr3;
        long j2;
        long j3;
        if ((j & 15) == 0) {
            long j4 = i3;
            if ((15 & j4) == 0) {
                long j5 = j + j4;
                if (j5 < acDRME4PartInfo.offset + acDRME4PartInfo.length) {
                    byte[] bArr4 = this.f3394e;
                    byte[] bArr5 = this.f3395f;
                    byte[] bArr6 = bArr4 != bArr5 ? bArr5 : this.g;
                    System.arraycopy(bArr, (i + i3) - 16, bArr6, 0, 16);
                    bArr3 = bArr6;
                    j2 = j5;
                } else {
                    bArr3 = null;
                    j2 = -1;
                }
                try {
                    if (((int) (j - acDRME4PartInfo.offset)) == 0) {
                        j3 = j2;
                        a(bArr, i, i3, bArr2, i2, this.f3392c, this.f3393d);
                    } else {
                        j3 = j2;
                        if (j == this.h) {
                            a(bArr, i, i3, bArr2, i2, this.f3392c, this.f3394e);
                        } else {
                            a(bArr, i - 16, i3 + 16, bArr2, i2, this.f3392c, (byte[]) null);
                        }
                    }
                    if (bArr3 != null) {
                        this.f3394e = bArr3;
                        this.h = j3;
                        return;
                    } else {
                        this.f3394e = null;
                        this.h = -1L;
                        return;
                    }
                } catch (GeneralSecurityException unused) {
                    throw new o("Bad encryption", 5);
                }
            }
        }
        throw new o("Bad block size", 5);
    }

    public void a(byte[] bArr, int i, long j, int i2) throws o {
        int i3;
        while (i2 > 0) {
            AcDRME4PartInfo acDRME4PartInfoA = this.f3390a.a(j);
            if (acDRME4PartInfoA == null) {
                throw new o("Broken encryption information", 5);
            }
            long j2 = acDRME4PartInfoA.offset + acDRME4PartInfoA.length;
            if (((long) i2) + j > j2) {
                int i4 = (int) (j2 - j);
                if (i4 <= 0) {
                    throw new o("Broken encryption information", 5);
                }
                i3 = i4;
            } else {
                i3 = i2;
            }
            int i5 = (int) acDRME4PartInfoA.encode;
            if (i5 == 33686019) {
                a(acDRME4PartInfoA, bArr, i, j, i3);
            } else if (i5 == 50331907) {
                b(acDRME4PartInfoA, bArr, i, j, i3);
            }
            j += (long) i3;
            i2 -= i3;
            i += i3;
        }
    }

    public long b() {
        return this.f3390a.c();
    }

    protected void b(AcDRME4PartInfo acDRME4PartInfo, byte[] bArr, int i, long j, int i2) {
        s(acDRME4PartInfo, bArr, i, j, i2);
    }

    public long c() {
        return this.f3390a.d();
    }

    protected void finalize() {
        a();
    }
}
