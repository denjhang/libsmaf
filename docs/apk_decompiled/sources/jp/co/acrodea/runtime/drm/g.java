package jp.co.acrodea.runtime.drm;

import java.io.IOException;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class g extends w {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ByteBuffer f3402a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f3403b;

    public g(byte[] bArr, int i, int i2) {
        this.f3402a = ByteBuffer.wrap(bArr, i, i2);
        this.f3403b = i;
    }

    @Override // jp.co.acrodea.drm.DRMRandomAccessRead, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        this.f3402a = null;
    }

    @Override // jp.co.acrodea.drm.DRMRandomAccessRead
    public long length() {
        return ((long) (this.f3402a.position() - this.f3403b)) + ((long) this.f3402a.remaining());
    }

    @Override // jp.co.acrodea.drm.DRMRandomAccessRead
    public synchronized int read() {
        if (this.f3402a == null) {
            throw new IOException("Already closed");
        }
        return this.f3402a.remaining() == 0 ? -1 : this.f3402a.get() & 255;
    }

    @Override // jp.co.acrodea.drm.DRMRandomAccessRead
    public synchronized int read(byte[] bArr) {
        if (this.f3402a == null) {
            throw new IOException("Already closed");
        }
        int iRemaining = this.f3402a.remaining();
        if (iRemaining == 0) {
            return -1;
        }
        int iMin = Math.min(iRemaining, bArr.length);
        this.f3402a.get(bArr, 0, iMin);
        return iMin;
    }

    @Override // jp.co.acrodea.drm.DRMRandomAccessRead
    public synchronized int read(byte[] bArr, int i, int i2) {
        if (i >= 0 && i2 >= 0) {
            if (i + i2 <= bArr.length) {
                if (this.f3402a == null) {
                    throw new IOException("Already closed");
                }
                int iRemaining = this.f3402a.remaining();
                if (iRemaining == 0) {
                    return -1;
                }
                int iMin = Math.min(iRemaining, i2);
                this.f3402a.get(bArr, i, iMin);
                return iMin;
            }
        }
        throw new IndexOutOfBoundsException();
    }

    @Override // jp.co.acrodea.drm.DRMRandomAccessRead
    public synchronized void seek(long j, int i) {
        int iLimit;
        long j2;
        if (this.f3402a == null) {
            throw new IOException("Already closed");
        }
        if (i == 0) {
            j2 = j + ((long) this.f3403b);
        } else {
            if (i == 1) {
                iLimit = this.f3402a.position();
            } else {
                if (i != 2) {
                    throw new IOException("Unknown seek mode");
                }
                iLimit = this.f3402a.limit();
            }
            j2 = j + ((long) iLimit);
        }
        if (j2 < this.f3403b || j2 > 2147483647L) {
            throw new IOException("Seek error");
        }
        try {
            this.f3402a.position((int) j2);
        } catch (IllegalArgumentException unused) {
            throw new IOException("Seek error");
        }
    }

    @Override // jp.co.acrodea.drm.DRMRandomAccessRead
    public long tell() throws IOException {
        if (this.f3402a != null) {
            return r0.position() - this.f3403b;
        }
        throw new IOException("Already closed");
    }
}
