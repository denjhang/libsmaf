package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.pb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0331pb<V> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Object f2368a = new Object();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final String f2369b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final InterfaceC0316mb<V> f2370c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final V f2371d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final V f2372e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final Object f2373f;
    private volatile V g;
    private volatile V h;

    private C0331pb(String str, V v, V v2, InterfaceC0316mb<V> interfaceC0316mb) {
        this.f2373f = new Object();
        this.g = null;
        this.h = null;
        this.f2369b = str;
        this.f2371d = v;
        this.f2372e = v2;
        this.f2370c = interfaceC0316mb;
    }

    public final V a(V v) {
        synchronized (this.f2373f) {
            V v2 = this.g;
        }
        if (v != null) {
            return v;
        }
        if (C0324o.f2353a == null) {
            return this.f2371d;
        }
        synchronized (f2368a) {
            if (ye.a()) {
                return this.h == null ? this.f2371d : this.h;
            }
            if (ye.a()) {
                throw new IllegalStateException("Tried to refresh flag cache on main thread or on package side.");
            }
            ye yeVar = C0324o.f2353a;
            try {
                for (C0331pb c0331pb : C0324o.f2354b) {
                    synchronized (f2368a) {
                        if (ye.a()) {
                            throw new IllegalStateException("Refreshing flag cache must be done on a worker thread.");
                        }
                        try {
                            c0331pb.h = c0331pb.f2370c != null ? c0331pb.f2370c.h() : null;
                        } catch (IllegalStateException unused) {
                            c0331pb.h = null;
                        }
                    }
                }
            } catch (SecurityException e2) {
                C0324o.a(e2);
            }
            InterfaceC0316mb<V> interfaceC0316mb = this.f2370c;
            if (interfaceC0316mb == null) {
                ye yeVar2 = C0324o.f2353a;
                return this.f2371d;
            }
            try {
                return interfaceC0316mb.h();
            } catch (IllegalStateException unused2) {
                ye yeVar3 = C0324o.f2353a;
                return this.f2371d;
            } catch (SecurityException e3) {
                C0324o.a(e3);
                ye yeVar4 = C0324o.f2353a;
                return this.f2371d;
            }
        }
    }

    public final String a() {
        return this.f2369b;
    }
}
