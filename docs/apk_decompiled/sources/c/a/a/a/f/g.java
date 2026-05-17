package c.a.a.a.f;

import java.util.concurrent.Executor;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class g<TResult> {
    public <TContinuationResult> g<TContinuationResult> a(Executor executor, InterfaceC0053a<TResult, TContinuationResult> interfaceC0053a) {
        throw new UnsupportedOperationException("continueWith is not implemented");
    }

    public g<TResult> a(Executor executor, b bVar) {
        throw new UnsupportedOperationException("addOnCanceledListener is not implemented");
    }

    public abstract g<TResult> a(Executor executor, c cVar);

    public abstract g<TResult> a(Executor executor, d<? super TResult> dVar);

    public <TContinuationResult> g<TContinuationResult> a(Executor executor, f<TResult, TContinuationResult> fVar) {
        throw new UnsupportedOperationException("onSuccessTask is not implemented");
    }

    public abstract Exception a();

    public abstract <X extends Throwable> TResult a(Class<X> cls);

    public <TContinuationResult> g<TContinuationResult> b(Executor executor, InterfaceC0053a<TResult, g<TContinuationResult>> interfaceC0053a) {
        throw new UnsupportedOperationException("continueWithTask is not implemented");
    }

    public abstract TResult b();

    public abstract boolean c();

    public abstract boolean d();

    public abstract boolean e();
}
