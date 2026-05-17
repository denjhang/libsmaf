package f;

import java.io.IOException;
import java.io.InputStream;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class t extends InputStream {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ u f3268a;

    t(u uVar) {
        this.f3268a = uVar;
    }

    @Override // java.io.InputStream
    public int available() throws IOException {
        u uVar = this.f3268a;
        if (uVar.f3271c) {
            throw new IOException("closed");
        }
        return (int) Math.min(uVar.f3269a.f3242c, 2147483647L);
    }

    @Override // java.io.InputStream, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        this.f3268a.close();
    }

    @Override // java.io.InputStream
    public int read() throws IOException {
        u uVar = this.f3268a;
        if (uVar.f3271c) {
            throw new IOException("closed");
        }
        f fVar = uVar.f3269a;
        if (fVar.f3242c == 0 && uVar.f3270b.a(fVar, 8192L) == -1) {
            return -1;
        }
        return this.f3268a.f3269a.readByte() & 255;
    }

    @Override // java.io.InputStream
    public int read(byte[] bArr, int i, int i2) throws IOException {
        if (this.f3268a.f3271c) {
            throw new IOException("closed");
        }
        C.a(bArr.length, i, i2);
        u uVar = this.f3268a;
        f fVar = uVar.f3269a;
        if (fVar.f3242c == 0 && uVar.f3270b.a(fVar, 8192L) == -1) {
            return -1;
        }
        return this.f3268a.f3269a.a(bArr, i, i2);
    }

    public String toString() {
        return this.f3268a + ".inputStream()";
    }
}
