package jp.co.acrodea.drm;

import java.io.EOFException;
import java.io.IOException;
import java.io.InputStream;
import java.util.zip.Inflater;
import java.util.zip.InflaterInputStream;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b extends InflaterInputStream {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ZipRA f3295a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private boolean f3296b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private boolean f3297c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(ZipRA zipRA, InputStream inputStream, Inflater inflater) throws IOException {
        super(inputStream, inflater);
        this.f3295a = zipRA;
        zipRA.b();
        this.f3297c = false;
        this.f3296b = false;
    }

    @Override // java.util.zip.InflaterInputStream, java.io.FilterInputStream, java.io.InputStream, java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
        if (this.f3297c) {
            return;
        }
        this.f3297c = true;
        this.f3295a.a(((InflaterInputStream) this).inf);
        super.close();
    }

    @Override // java.util.zip.InflaterInputStream
    protected void fill() throws EOFException {
        if (this.f3296b) {
            throw new EOFException();
        }
        InputStream inputStream = ((InflaterInputStream) this).in;
        byte[] bArr = ((InflaterInputStream) this).buf;
        ((InflaterInputStream) this).len = inputStream.read(bArr, 0, bArr.length);
        if (((InflaterInputStream) this).len < 0) {
            ((InflaterInputStream) this).buf[0] = 0;
            ((InflaterInputStream) this).len = 1;
            this.f3296b = true;
        }
        ((InflaterInputStream) this).inf.setInput(((InflaterInputStream) this).buf, 0, ((InflaterInputStream) this).len);
    }
}
