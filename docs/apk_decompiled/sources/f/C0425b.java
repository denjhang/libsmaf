package f;

import java.io.IOException;

/* JADX INFO: renamed from: f.b, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class C0425b implements z {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ z f3233a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ C0426c f3234b;

    C0425b(C0426c c0426c, z zVar) {
        this.f3234b = c0426c;
        this.f3233a = zVar;
    }

    @Override // f.z
    public long a(f fVar, long j) {
        this.f3234b.h();
        try {
            try {
                long jA = this.f3233a.a(fVar, j);
                this.f3234b.a(true);
                return jA;
            } catch (IOException e2) {
                throw this.f3234b.a(e2);
            }
        } catch (Throwable th) {
            this.f3234b.a(false);
            throw th;
        }
    }

    @Override // f.z, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        try {
            try {
                this.f3233a.close();
                this.f3234b.a(true);
            } catch (IOException e2) {
                throw this.f3234b.a(e2);
            }
        } catch (Throwable th) {
            this.f3234b.a(false);
            throw th;
        }
    }

    @Override // f.z
    public B p() {
        return this.f3234b;
    }

    public String toString() {
        return "AsyncTimeout.source(" + this.f3233a + ")";
    }
}
