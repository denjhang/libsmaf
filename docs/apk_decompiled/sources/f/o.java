package f;

import java.io.IOException;
import java.io.OutputStream;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class o implements y {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ B f3260a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ OutputStream f3261b;

    o(B b2, OutputStream outputStream) {
        this.f3260a = b2;
        this.f3261b = outputStream;
    }

    @Override // f.y
    public void b(f fVar, long j) throws IOException {
        C.a(fVar.f3242c, 0L, j);
        while (j > 0) {
            this.f3260a.e();
            v vVar = fVar.f3241b;
            int iMin = (int) Math.min(j, vVar.f3274c - vVar.f3273b);
            this.f3261b.write(vVar.f3272a, vVar.f3273b, iMin);
            vVar.f3273b += iMin;
            long j2 = iMin;
            j -= j2;
            fVar.f3242c -= j2;
            if (vVar.f3273b == vVar.f3274c) {
                fVar.f3241b = vVar.b();
                w.a(vVar);
            }
        }
    }

    @Override // f.y, java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
        this.f3261b.close();
    }

    @Override // f.y, java.io.Flushable
    public void flush() throws IOException {
        this.f3261b.flush();
    }

    @Override // f.y
    public B p() {
        return this.f3260a;
    }

    public String toString() {
        return "sink(" + this.f3261b + ")";
    }
}
