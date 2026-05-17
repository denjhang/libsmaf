package f;

import java.io.IOException;
import java.io.InputStream;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class p implements z {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ B f3262a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ InputStream f3263b;

    p(B b2, InputStream inputStream) {
        this.f3262a = b2;
        this.f3263b = inputStream;
    }

    @Override // f.z
    public long a(f fVar, long j) throws IOException {
        if (j < 0) {
            throw new IllegalArgumentException("byteCount < 0: " + j);
        }
        if (j == 0) {
            return 0L;
        }
        try {
            this.f3262a.e();
            v vVarB = fVar.b(1);
            int i = this.f3263b.read(vVarB.f3272a, vVarB.f3274c, (int) Math.min(j, 8192 - vVarB.f3274c));
            if (i == -1) {
                return -1L;
            }
            vVarB.f3274c += i;
            long j2 = i;
            fVar.f3242c += j2;
            return j2;
        } catch (AssertionError e2) {
            if (r.a(e2)) {
                throw new IOException(e2);
            }
            throw e2;
        }
    }

    @Override // f.z, java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
        this.f3263b.close();
    }

    @Override // f.z
    public B p() {
        return this.f3262a;
    }

    public String toString() {
        return "source(" + this.f3263b + ")";
    }
}
