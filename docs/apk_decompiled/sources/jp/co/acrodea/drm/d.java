package jp.co.acrodea.drm;

import java.io.IOException;
import java.io.InputStream;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class d extends InputStream {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ZipRA f3299a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private long f3300b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private long f3301c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private long f3302d;

    public d(ZipRA zipRA, long j) throws IOException {
        this.f3299a = zipRA;
        zipRA.b();
        synchronized (zipRA.lock) {
            this.f3300b = zipRA.arc_reader.tell();
            this.f3302d = this.f3300b;
            this.f3301c = this.f3300b + j;
        }
    }

    @Override // java.io.InputStream
    public int available() throws IOException {
        this.f3299a.b();
        return 0;
    }

    @Override // java.io.InputStream, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
    }

    @Override // java.io.InputStream
    public int read() throws IOException {
        this.f3299a.b();
        byte[] bArr = new byte[1];
        int i = read(bArr, 0, 1);
        return i < 0 ? i : bArr[0] & 255;
    }

    @Override // java.io.InputStream
    public int read(byte[] bArr) {
        return read(bArr, 0, bArr.length);
    }

    @Override // java.io.InputStream
    public int read(byte[] bArr, int i, int i2) throws IOException {
        int i3;
        this.f3299a.b();
        long j = this.f3302d;
        long j2 = this.f3301c;
        if (j >= j2) {
            return -1;
        }
        int iMin = (int) Math.min(i2, j2 - j);
        synchronized (this.f3299a.lock) {
            if (this.f3299a.arc_reader.tell() != this.f3302d) {
                this.f3299a.arc_reader.seek(this.f3302d, 0);
            }
            i3 = this.f3299a.arc_reader.read(bArr, i, iMin);
        }
        if (i3 < 0) {
            this.f3301c = this.f3302d;
            return i3;
        }
        this.f3302d += (long) i3;
        return i3;
    }

    @Override // java.io.InputStream
    public long skip(long j) throws IOException {
        this.f3299a.b();
        long jMin = Math.min(j, this.f3301c - this.f3302d);
        if (jMin > 0) {
            this.f3302d += jMin;
        }
        return jMin;
    }
}
