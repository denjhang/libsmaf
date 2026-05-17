package c.a.a.a.f;

import java.util.concurrent.Executor;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class u<TResult, TContinuationResult> implements b, c, d<TContinuationResult>, w<TResult> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Executor f884a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final f<TResult, TContinuationResult> f885b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final z<TContinuationResult> f886c;

    public u(Executor executor, f<TResult, TContinuationResult> fVar, z<TContinuationResult> zVar) {
        this.f884a = executor;
        this.f885b = fVar;
        this.f886c = zVar;
    }

    @Override // c.a.a.a.f.b
    public final void a() {
        this.f886c.f();
    }

    @Override // c.a.a.a.f.w
    public final void a(g<TResult> gVar) {
        this.f884a.execute(new v(this, gVar));
    }

    @Override // c.a.a.a.f.c
    public final void a(Exception exc) {
        this.f886c.a(exc);
    }

    @Override // c.a.a.a.f.d
    public final void a(TContinuationResult tcontinuationresult) {
        this.f886c.a(tcontinuationresult);
    }
}
