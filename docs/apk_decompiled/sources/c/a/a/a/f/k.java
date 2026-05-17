package c.a.a.a.f;

import java.util.concurrent.Executor;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class k<TResult, TContinuationResult> implements w<TResult> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Executor f860a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final InterfaceC0053a<TResult, TContinuationResult> f861b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final z<TContinuationResult> f862c;

    public k(Executor executor, InterfaceC0053a<TResult, TContinuationResult> interfaceC0053a, z<TContinuationResult> zVar) {
        this.f860a = executor;
        this.f861b = interfaceC0053a;
        this.f862c = zVar;
    }

    @Override // c.a.a.a.f.w
    public final void a(g<TResult> gVar) {
        this.f860a.execute(new l(this, gVar));
    }
}
