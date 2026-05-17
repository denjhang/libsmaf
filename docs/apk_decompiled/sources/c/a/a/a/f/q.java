package c.a.a.a.f;

import java.util.concurrent.Executor;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class q<TResult> implements w<TResult> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Executor f874a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Object f875b = new Object();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private c f876c;

    public q(Executor executor, c cVar) {
        this.f874a = executor;
        this.f876c = cVar;
    }

    @Override // c.a.a.a.f.w
    public final void a(g<TResult> gVar) {
        if (gVar.e() || gVar.c()) {
            return;
        }
        synchronized (this.f875b) {
            if (this.f876c == null) {
                return;
            }
            this.f874a.execute(new r(this, gVar));
        }
    }
}
