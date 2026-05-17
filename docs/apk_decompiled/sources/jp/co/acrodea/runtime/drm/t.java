package jp.co.acrodea.runtime.drm;

import java.io.IOException;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class t extends w {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private u f3440a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private c f3441b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private long f3442c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private long f3443d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private long f3444e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private long f3445f = 0;
    private boolean g = false;
    private int i = 256;
    private byte[] h = new byte[this.i];
    private int j = 0;
    private long k = -1;

    public t(u uVar, c cVar, long j) {
        this.f3440a = uVar;
        this.f3441b = cVar;
        this.f3442c = j;
        this.f3443d = cVar.b();
        this.f3444e = cVar.c();
    }

    @Override // jp.co.acrodea.drm.DRMRandomAccessRead, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        this.f3441b = null;
        this.f3440a = null;
    }

    @Override // jp.co.acrodea.drm.DRMRandomAccessRead
    public long length() throws IOException {
        if (this.f3440a != null) {
            return this.f3443d;
        }
        throw new IOException("Already closed");
    }

    @Override // jp.co.acrodea.drm.DRMRandomAccessRead
    public int read() {
        byte[] bArr = new byte[1];
        int i = read(bArr, 0, 1);
        return i <= 0 ? i : bArr[0] & 255;
    }

    @Override // jp.co.acrodea.drm.DRMRandomAccessRead
    public int read(byte[] bArr) {
        return read(bArr, 0, bArr.length);
    }

    @Override // jp.co.acrodea.drm.DRMRandomAccessRead
    public synchronized int read(byte[] bArr, int i, int i2) {
        int iMin = i2;
        synchronized (this) {
            if (i >= 0 && iMin >= 0) {
                if (i + iMin <= bArr.length) {
                    if (this.f3440a == null) {
                        throw new IOException("Already closed");
                    }
                    if (this.f3445f >= this.f3443d) {
                        return -1;
                    }
                    long j = this.f3443d - this.f3445f;
                    if (iMin > j) {
                        iMin = (int) Math.min(j, 2147483647L);
                    }
                    int i3 = 0;
                    if (iMin <= 0) {
                        return 0;
                    }
                    if (this.g || this.k > this.f3445f || this.f3445f >= this.k + ((long) this.j)) {
                        if (this.g) {
                            this.k = (this.f3445f & (-16)) - 16;
                            if (this.k < 0) {
                                this.k = 0L;
                            }
                            this.f3440a.a(this.f3442c + this.k);
                            this.g = false;
                        } else {
                            if ((this.f3445f & 15) == 0 && iMin >= 16) {
                                int i4 = iMin & (-16);
                                while (i4 > 0) {
                                    int iA = this.f3440a.a(bArr, i + i3, i4);
                                    if (iA < 0) {
                                        break;
                                    }
                                    i3 += iA;
                                    i4 -= iA;
                                    if ((((long) i3) & 15) == 0) {
                                        break;
                                    }
                                }
                                int i5 = i3;
                                try {
                                    this.f3441b.a(bArr, i, this.f3445f, i5);
                                    this.f3445f += (long) i5;
                                    return i5;
                                } catch (o unused) {
                                    throw new IOException("Decode error");
                                }
                            }
                            this.k = this.f3445f;
                        }
                        this.j = 0;
                        int iMin2 = (int) Math.min(this.i, this.f3444e - this.k);
                        while (iMin2 > 0) {
                            int iA2 = this.f3440a.a(this.h, this.j, iMin2);
                            if (iA2 < 0) {
                                break;
                            }
                            this.j += iA2;
                            iMin2 -= iA2;
                            if ((((long) this.j) & 15) != 0) {
                            }
                        }
                        try {
                            int i6 = (int) ((this.f3445f & (-16)) - this.k);
                            this.f3441b.a(this.h, i6, ((long) i6) + this.k, this.j - i6);
                        } catch (o unused2) {
                            throw new IOException("Decode error");
                        }
                    }
                    int iMin3 = (int) Math.min((this.k - this.f3445f) + ((long) this.j), iMin);
                    ByteBuffer.wrap(this.h, (int) (this.f3445f - this.k), iMin3).get(bArr, i, iMin3);
                    this.f3445f += (long) iMin3;
                    return iMin3;
                }
            }
            throw new IndexOutOfBoundsException();
        }
    }

    @Override // jp.co.acrodea.drm.DRMRandomAccessRead
    public synchronized void seek(long j, int i) {
        long j2;
        if (this.f3440a == null) {
            throw new IOException("Already closed");
        }
        if (i != 0) {
            if (i == 1) {
                j2 = this.f3445f;
            } else {
                if (i != 2) {
                    throw new IOException("Unknown seek mode");
                }
                j2 = this.f3443d;
            }
            j += j2;
        }
        if (j < 0 || j > this.f3443d) {
            throw new IOException("Cannot seek");
        }
        this.f3445f = j;
        this.g = true;
    }

    @Override // jp.co.acrodea.drm.DRMRandomAccessRead
    public long tell() throws IOException {
        if (this.f3440a != null) {
            return this.f3445f;
        }
        throw new IOException("Already closed");
    }
}
