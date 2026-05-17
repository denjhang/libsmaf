package jp.co.ymm.android.ringtone.b;

import java.io.IOException;
import java.io.InputStream;
import jp.co.acrodea.drm.DRMContent;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class m extends InputStream {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final DRMContent f3527a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final InputStream f3528b;

    m(DRMContent dRMContent) {
        this.f3527a = dRMContent;
        this.f3528b = this.f3527a.getContentInputStream();
    }

    @Override // java.io.InputStream
    public int available() {
        return this.f3528b.available();
    }

    @Override // java.io.InputStream, java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
        this.f3528b.close();
        this.f3527a.close();
    }

    @Override // java.io.InputStream
    public void mark(int i) {
        this.f3528b.mark(i);
    }

    @Override // java.io.InputStream
    public boolean markSupported() {
        return this.f3528b.markSupported();
    }

    @Override // java.io.InputStream
    public int read() {
        return this.f3528b.read();
    }

    @Override // java.io.InputStream
    public int read(byte[] bArr) {
        return this.f3528b.read(bArr);
    }

    @Override // java.io.InputStream
    public int read(byte[] bArr, int i, int i2) {
        return this.f3528b.read(bArr, i, i2);
    }

    @Override // java.io.InputStream
    public synchronized void reset() {
        this.f3528b.reset();
    }

    @Override // java.io.InputStream
    public long skip(long j) {
        return this.f3528b.skip(j);
    }
}
