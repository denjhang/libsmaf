package c.a.a.a.f;

import java.util.concurrent.Executor;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class o<TResult> implements w<TResult> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Executor f870a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Object f871b = new Object();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private b f872c;

    public o(Executor executor, b bVar) {
        this.f870a = executor;
        this.f872c = bVar;
    }

    @Override // c.a.a.a.f.w
    public final void a(g gVar) {
        if (gVar.c()) {
            synchronized (this.f871b) {
                if (this.f872c == null) {
                    return;
                }
                this.f870a.execute(new p(this));
            }
        }
    }
}
