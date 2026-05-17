package androidx.lifecycle;

import androidx.lifecycle.f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class LiveData<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final Object f440a = new Object();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final Object f441b = new Object();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private b.a.a.b.b<p<? super T>, LiveData<T>.a> f442c = new b.a.a.b.b<>();

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    int f443d = 0;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private volatile Object f444e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    volatile Object f445f;
    private int g;
    private boolean h;
    private boolean i;
    private final Runnable j;

    class LifecycleBoundObserver extends LiveData<T>.a implements e {

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        final h f446e;

        LifecycleBoundObserver(h hVar, p<? super T> pVar) {
            super(pVar);
            this.f446e = hVar;
        }

        @Override // androidx.lifecycle.LiveData.a
        void a() {
            this.f446e.a().b(this);
        }

        @Override // androidx.lifecycle.e
        public void a(h hVar, f.a aVar) {
            if (this.f446e.a().a() == f.b.DESTROYED) {
                LiveData.this.a((p) this.f448a);
            } else {
                a(b());
            }
        }

        @Override // androidx.lifecycle.LiveData.a
        boolean a(h hVar) {
            return this.f446e == hVar;
        }

        @Override // androidx.lifecycle.LiveData.a
        boolean b() {
            return this.f446e.a().a().a(f.b.STARTED);
        }
    }

    private abstract class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final p<? super T> f448a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        boolean f449b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        int f450c = -1;

        a(p<? super T> pVar) {
            this.f448a = pVar;
        }

        void a() {
        }

        void a(boolean z) {
            if (z == this.f449b) {
                return;
            }
            this.f449b = z;
            boolean z2 = LiveData.this.f443d == 0;
            LiveData.this.f443d += this.f449b ? 1 : -1;
            if (z2 && this.f449b) {
                LiveData.this.a();
            }
            LiveData liveData = LiveData.this;
            if (liveData.f443d == 0 && !this.f449b) {
                liveData.b();
            }
            if (this.f449b) {
                LiveData.this.a(this);
            }
        }

        boolean a(h hVar) {
            return false;
        }

        abstract boolean b();
    }

    public LiveData() {
        Object obj = f440a;
        this.f444e = obj;
        this.f445f = obj;
        this.g = -1;
        this.j = new m(this);
    }

    private static void a(String str) {
        if (b.a.a.a.c.b().a()) {
            return;
        }
        throw new IllegalStateException("Cannot invoke " + str + " on a background thread");
    }

    private void b(LiveData<T>.a aVar) {
        if (aVar.f449b) {
            if (!aVar.b()) {
                aVar.a(false);
                return;
            }
            int i = aVar.f450c;
            int i2 = this.g;
            if (i >= i2) {
                return;
            }
            aVar.f450c = i2;
            aVar.f448a.a((Object) this.f444e);
        }
    }

    protected void a() {
    }

    void a(LiveData<T>.a aVar) {
        if (this.h) {
            this.i = true;
            return;
        }
        this.h = true;
        do {
            this.i = false;
            if (aVar != null) {
                b(aVar);
                aVar = null;
            } else {
                b.a.a.b.b<p<? super T>, LiveData<T>.a>.d dVarB = this.f442c.b();
                while (dVarB.hasNext()) {
                    b((a) dVarB.next().getValue());
                    if (this.i) {
                        break;
                    }
                }
            }
        } while (this.i);
        this.h = false;
    }

    public void a(h hVar, p<? super T> pVar) {
        a("observe");
        if (hVar.a().a() == f.b.DESTROYED) {
            return;
        }
        LifecycleBoundObserver lifecycleBoundObserver = new LifecycleBoundObserver(hVar, pVar);
        LiveData<T>.a aVarB = this.f442c.b(pVar, lifecycleBoundObserver);
        if (aVarB != null && !aVarB.a(hVar)) {
            throw new IllegalArgumentException("Cannot add the same observer with different lifecycles");
        }
        if (aVarB != null) {
            return;
        }
        hVar.a().a(lifecycleBoundObserver);
    }

    public void a(p<? super T> pVar) {
        a("removeObserver");
        LiveData<T>.a aVarRemove = this.f442c.remove(pVar);
        if (aVarRemove == null) {
            return;
        }
        aVarRemove.a();
        aVarRemove.a(false);
    }

    protected void a(T t) {
        a("setValue");
        this.g++;
        this.f444e = t;
        a((a) null);
    }

    protected void b() {
    }
}
