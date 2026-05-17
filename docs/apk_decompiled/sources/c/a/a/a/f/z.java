package c.a.a.a.f;

import java.util.concurrent.CancellationException;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class z<TResult> extends g<TResult> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Object f892a = new Object();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final x<TResult> f893b = new x<>();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private boolean f894c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private volatile boolean f895d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private TResult f896e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private Exception f897f;

    z() {
    }

    private final void g() {
        com.google.android.gms.common.internal.r.b(this.f894c, "Task is not yet complete");
    }

    private final void h() {
        com.google.android.gms.common.internal.r.b(!this.f894c, "Task is already complete");
    }

    private final void i() {
        if (this.f895d) {
            throw new CancellationException("Task is already canceled.");
        }
    }

    private final void j() {
        synchronized (this.f892a) {
            if (this.f894c) {
                this.f893b.a(this);
            }
        }
    }

    @Override // c.a.a.a.f.g
    public final <TContinuationResult> g<TContinuationResult> a(Executor executor, InterfaceC0053a<TResult, TContinuationResult> interfaceC0053a) {
        z zVar = new z();
        this.f893b.a(new k(executor, interfaceC0053a, zVar));
        j();
        return zVar;
    }

    @Override // c.a.a.a.f.g
    public final g<TResult> a(Executor executor, b bVar) {
        this.f893b.a(new o(executor, bVar));
        j();
        return this;
    }

    @Override // c.a.a.a.f.g
    public final g<TResult> a(Executor executor, c cVar) {
        this.f893b.a(new q(executor, cVar));
        j();
        return this;
    }

    @Override // c.a.a.a.f.g
    public final g<TResult> a(Executor executor, d<? super TResult> dVar) {
        this.f893b.a(new s(executor, dVar));
        j();
        return this;
    }

    @Override // c.a.a.a.f.g
    public final <TContinuationResult> g<TContinuationResult> a(Executor executor, f<TResult, TContinuationResult> fVar) {
        z zVar = new z();
        this.f893b.a(new u(executor, fVar, zVar));
        j();
        return zVar;
    }

    @Override // c.a.a.a.f.g
    public final Exception a() {
        Exception exc;
        synchronized (this.f892a) {
            exc = this.f897f;
        }
        return exc;
    }

    @Override // c.a.a.a.f.g
    public final <X extends Throwable> TResult a(Class<X> cls) {
        TResult tresult;
        synchronized (this.f892a) {
            g();
            i();
            if (cls.isInstance(this.f897f)) {
                throw cls.cast(this.f897f);
            }
            if (this.f897f != null) {
                throw new e(this.f897f);
            }
            tresult = this.f896e;
        }
        return tresult;
    }

    public final void a(Exception exc) {
        com.google.android.gms.common.internal.r.a(exc, "Exception must not be null");
        synchronized (this.f892a) {
            h();
            this.f894c = true;
            this.f897f = exc;
        }
        this.f893b.a(this);
    }

    public final void a(TResult tresult) {
        synchronized (this.f892a) {
            h();
            this.f894c = true;
            this.f896e = tresult;
        }
        this.f893b.a(this);
    }

    @Override // c.a.a.a.f.g
    public final <TContinuationResult> g<TContinuationResult> b(Executor executor, InterfaceC0053a<TResult, g<TContinuationResult>> interfaceC0053a) {
        z zVar = new z();
        this.f893b.a(new m(executor, interfaceC0053a, zVar));
        j();
        return zVar;
    }

    @Override // c.a.a.a.f.g
    public final TResult b() {
        TResult tresult;
        synchronized (this.f892a) {
            g();
            i();
            if (this.f897f != null) {
                throw new e(this.f897f);
            }
            tresult = this.f896e;
        }
        return tresult;
    }

    public final boolean b(Exception exc) {
        com.google.android.gms.common.internal.r.a(exc, "Exception must not be null");
        synchronized (this.f892a) {
            if (this.f894c) {
                return false;
            }
            this.f894c = true;
            this.f897f = exc;
            this.f893b.a(this);
            return true;
        }
    }

    public final boolean b(TResult tresult) {
        synchronized (this.f892a) {
            if (this.f894c) {
                return false;
            }
            this.f894c = true;
            this.f896e = tresult;
            this.f893b.a(this);
            return true;
        }
    }

    @Override // c.a.a.a.f.g
    public final boolean c() {
        return this.f895d;
    }

    @Override // c.a.a.a.f.g
    public final boolean d() {
        boolean z;
        synchronized (this.f892a) {
            z = this.f894c;
        }
        return z;
    }

    @Override // c.a.a.a.f.g
    public final boolean e() {
        boolean z;
        synchronized (this.f892a) {
            z = this.f894c && !this.f895d && this.f897f == null;
        }
        return z;
    }

    public final boolean f() {
        synchronized (this.f892a) {
            if (this.f894c) {
                return false;
            }
            this.f894c = true;
            this.f895d = true;
            this.f893b.a(this);
            return true;
        }
    }
}
