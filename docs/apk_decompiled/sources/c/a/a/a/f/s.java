package c.a.a.a.f;

import java.util.concurrent.Executor;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class s<TResult> implements w<TResult> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Executor f879a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Object f880b = new Object();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private d<? super TResult> f881c;

    public s(Executor executor, d<? super TResult> dVar) {
        this.f879a = executor;
        this.f881c = dVar;
    }

    @Override // c.a.a.a.f.w
    public final void a(g<TResult> gVar) {
        if (gVar.e()) {
            synchronized (this.f880b) {
                if (this.f881c == null) {
                    return;
                }
                this.f879a.execute(new t(this, gVar));
            }
        }
    }
}
