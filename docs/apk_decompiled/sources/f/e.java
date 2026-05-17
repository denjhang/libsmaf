package f;

import java.io.InputStream;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class e extends InputStream {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ f f3239a;

    e(f fVar) {
        this.f3239a = fVar;
    }

    @Override // java.io.InputStream
    public int available() {
        return (int) Math.min(this.f3239a.f3242c, 2147483647L);
    }

    @Override // java.io.InputStream, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
    }

    @Override // java.io.InputStream
    public int read() {
        f fVar = this.f3239a;
        if (fVar.f3242c > 0) {
            return fVar.readByte() & 255;
        }
        return -1;
    }

    @Override // java.io.InputStream
    public int read(byte[] bArr, int i, int i2) {
        return this.f3239a.a(bArr, i, i2);
    }

    public String toString() {
        return this.f3239a + ".inputStream()";
    }
}
