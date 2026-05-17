package f;

import java.io.IOException;

/* JADX INFO: renamed from: f.a, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class C0424a implements y {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ y f3231a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ C0426c f3232b;

    C0424a(C0426c c0426c, y yVar) {
        this.f3232b = c0426c;
        this.f3231a = yVar;
    }

    @Override // f.y
    public void b(f fVar, long j) {
        C.a(fVar.f3242c, 0L, j);
        while (true) {
            long j2 = 0;
            if (j <= 0) {
                return;
            }
            v vVar = fVar.f3241b;
            while (true) {
                if (j2 >= 65536) {
                    break;
                }
                j2 += (long) (vVar.f3274c - vVar.f3273b);
                if (j2 >= j) {
                    j2 = j;
                    break;
                }
                vVar = vVar.f3277f;
            }
            this.f3232b.h();
            try {
                try {
                    this.f3231a.b(fVar, j2);
                    j -= j2;
                    this.f3232b.a(true);
                } catch (IOException e2) {
                    throw this.f3232b.a(e2);
                }
            } catch (Throwable th) {
                this.f3232b.a(false);
                throw th;
            }
        }
    }

    @Override // f.y, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        this.f3232b.h();
        try {
            try {
                this.f3231a.close();
                this.f3232b.a(true);
            } catch (IOException e2) {
                throw this.f3232b.a(e2);
            }
        } catch (Throwable th) {
            this.f3232b.a(false);
            throw th;
        }
    }

    @Override // f.y, java.io.Flushable
    public void flush() {
        this.f3232b.h();
        try {
            try {
                this.f3231a.flush();
                this.f3232b.a(true);
            } catch (IOException e2) {
                throw this.f3232b.a(e2);
            }
        } catch (Throwable th) {
            this.f3232b.a(false);
            throw th;
        }
    }

    @Override // f.y
    public B p() {
        return this.f3232b;
    }

    public String toString() {
        return "AsyncTimeout.sink(" + this.f3231a + ")";
    }
}
