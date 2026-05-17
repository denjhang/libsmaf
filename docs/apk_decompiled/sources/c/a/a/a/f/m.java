package c.a.a.a.f;

import java.util.concurrent.Executor;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class m<TResult, TContinuationResult> implements b, c, d<TContinuationResult>, w<TResult> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Executor f865a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final InterfaceC0053a<TResult, g<TContinuationResult>> f866b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final z<TContinuationResult> f867c;

    public m(Executor executor, InterfaceC0053a<TResult, g<TContinuationResult>> interfaceC0053a, z<TContinuationResult> zVar) {
        this.f865a = executor;
        this.f866b = interfaceC0053a;
        this.f867c = zVar;
    }

    @Override // c.a.a.a.f.b
    public final void a() {
        this.f867c.f();
    }

    @Override // c.a.a.a.f.w
    public final void a(g<TResult> gVar) {
        this.f865a.execute(new n(this, gVar));
    }

    @Override // c.a.a.a.f.c
    public final void a(Exception exc) {
        this.f867c.a(exc);
    }

    @Override // c.a.a.a.f.d
    public final void a(TContinuationResult tcontinuationresult) {
        this.f867c.a(tcontinuationresult);
    }
}
