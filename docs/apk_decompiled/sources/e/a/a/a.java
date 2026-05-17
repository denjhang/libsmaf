package e.a.a;

import f.B;
import f.f;
import f.g;
import f.h;
import f.z;
import java.io.IOException;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a implements z {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    boolean f2893a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ h f2894b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ c f2895c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ g f2896d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final /* synthetic */ b f2897e;

    a(b bVar, h hVar, c cVar, g gVar) {
        this.f2897e = bVar;
        this.f2894b = hVar;
        this.f2895c = cVar;
        this.f2896d = gVar;
    }

    @Override // f.z
    public long a(f fVar, long j) throws IOException {
        try {
            long jA = this.f2894b.a(fVar, j);
            if (jA != -1) {
                fVar.a(this.f2896d.o(), fVar.size() - jA, jA);
                this.f2896d.w();
                return jA;
            }
            if (!this.f2893a) {
                this.f2893a = true;
                this.f2896d.close();
            }
            return -1L;
        } catch (IOException e2) {
            if (!this.f2893a) {
                this.f2893a = true;
                this.f2895c.abort();
            }
            throw e2;
        }
    }

    @Override // f.z, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        if (!this.f2893a && !e.a.e.a(this, 100, TimeUnit.MILLISECONDS)) {
            this.f2893a = true;
            this.f2895c.abort();
        }
        this.f2894b.close();
    }

    @Override // f.z
    public B p() {
        return this.f2894b.p();
    }
}
