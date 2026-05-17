package com.google.android.gms.measurement.internal;

import android.os.Handler;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.g, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
abstract class AbstractC0284g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile Handler f2251a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final InterfaceC0371xc f2252b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Runnable f2253c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private volatile long f2254d;

    AbstractC0284g(InterfaceC0371xc interfaceC0371xc) {
        com.google.android.gms.common.internal.r.a(interfaceC0371xc);
        this.f2252b = interfaceC0371xc;
        this.f2253c = new RunnableC0299j(this, interfaceC0371xc);
    }

    static /* synthetic */ long a(AbstractC0284g abstractC0284g, long j) {
        abstractC0284g.f2254d = 0L;
        return 0L;
    }

    private final Handler d() {
        Handler handler;
        if (f2251a != null) {
            return f2251a;
        }
        synchronized (AbstractC0284g.class) {
            if (f2251a == null) {
                f2251a = new com.google.android.gms.internal.measurement.Dd(this.f2252b.e().getMainLooper());
            }
            handler = f2251a;
        }
        return handler;
    }

    public abstract void a();

    public final void a(long j) {
        c();
        if (j >= 0) {
            this.f2254d = this.f2252b.g().a();
            if (d().postDelayed(this.f2253c, j)) {
                return;
            }
            this.f2252b.d().t().a("Failed to schedule delayed post. time", Long.valueOf(j));
        }
    }

    public final boolean b() {
        return this.f2254d != 0;
    }

    final void c() {
        this.f2254d = 0L;
        d().removeCallbacks(this.f2253c);
    }
}
