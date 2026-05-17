package com.google.android.gms.measurement.internal;

import android.content.Context;
import java.lang.Thread;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.Callable;
import java.util.concurrent.Future;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.PriorityBlockingQueue;
import java.util.concurrent.Semaphore;
import java.util.concurrent.atomic.AtomicLong;
import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Xb extends AbstractC0356uc {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final AtomicLong f2136c = new AtomicLong(Long.MIN_VALUE);

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private C0255ac f2137d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private C0255ac f2138e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final PriorityBlockingQueue<Yb<?>> f2139f;
    private final BlockingQueue<Yb<?>> g;
    private final Thread.UncaughtExceptionHandler h;
    private final Thread.UncaughtExceptionHandler i;
    private final Object j;
    private final Semaphore k;
    private volatile boolean l;

    Xb(_b _bVar) {
        super(_bVar);
        this.j = new Object();
        this.k = new Semaphore(2);
        this.f2139f = new PriorityBlockingQueue<>();
        this.g = new LinkedBlockingQueue();
        this.h = new Zb(this, "Thread death: Uncaught exception on worker thread");
        this.i = new Zb(this, "Thread death: Uncaught exception on network thread");
    }

    static /* synthetic */ C0255ac a(Xb xb, C0255ac c0255ac) {
        xb.f2137d = null;
        return null;
    }

    private final void a(Yb<?> yb) {
        synchronized (this.j) {
            this.f2139f.add(yb);
            if (this.f2137d == null) {
                this.f2137d = new C0255ac(this, "Measurement Worker", this.f2139f);
                this.f2137d.setUncaughtExceptionHandler(this.h);
                this.f2137d.start();
            } else {
                this.f2137d.a();
            }
        }
    }

    static /* synthetic */ C0255ac b(Xb xb, C0255ac c0255ac) {
        xb.f2138e = null;
        return null;
    }

    final <T> T a(AtomicReference<T> atomicReference, long j, String str, Runnable runnable) {
        synchronized (atomicReference) {
            c().a(runnable);
            try {
                atomicReference.wait(15000L);
            } catch (InterruptedException unused) {
                C0375yb c0375ybW = d().w();
                String strValueOf = String.valueOf(str);
                c0375ybW.a(strValueOf.length() != 0 ? "Interrupted waiting for ".concat(strValueOf) : new String("Interrupted waiting for "));
                return null;
            }
        }
        T t = atomicReference.get();
        if (t == null) {
            C0375yb c0375ybW2 = d().w();
            String strValueOf2 = String.valueOf(str);
            c0375ybW2.a(strValueOf2.length() != 0 ? "Timed out waiting for ".concat(strValueOf2) : new String("Timed out waiting for "));
        }
        return t;
    }

    public final <V> Future<V> a(Callable<V> callable) {
        o();
        com.google.android.gms.common.internal.r.a(callable);
        Yb<?> yb = new Yb<>(this, (Callable<?>) callable, false, "Task exception on worker thread");
        if (Thread.currentThread() == this.f2137d) {
            if (!this.f2139f.isEmpty()) {
                d().w().a("Callable skipped the worker queue.");
            }
            yb.run();
        } else {
            a(yb);
        }
        return yb;
    }

    public final void a(Runnable runnable) {
        o();
        com.google.android.gms.common.internal.r.a(runnable);
        a(new Yb<>(this, runnable, false, "Task exception on worker thread"));
    }

    public final <V> Future<V> b(Callable<V> callable) {
        o();
        com.google.android.gms.common.internal.r.a(callable);
        Yb<?> yb = new Yb<>(this, (Callable<?>) callable, true, "Task exception on worker thread");
        if (Thread.currentThread() == this.f2137d) {
            yb.run();
        } else {
            a(yb);
        }
        return yb;
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final void b() {
        if (Thread.currentThread() != this.f2138e) {
            throw new IllegalStateException("Call expected from network thread");
        }
    }

    public final void b(Runnable runnable) {
        o();
        com.google.android.gms.common.internal.r.a(runnable);
        Yb<?> yb = new Yb<>(this, runnable, false, "Task exception on network thread");
        synchronized (this.j) {
            this.g.add(yb);
            if (this.f2138e == null) {
                this.f2138e = new C0255ac(this, "Measurement Network", this.g);
                this.f2138e.setUncaughtExceptionHandler(this.i);
                this.f2138e.start();
            } else {
                this.f2138e.a();
            }
        }
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Xb c() {
        return super.c();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ C0365wb d() {
        return super.d();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Context e() {
        return super.e();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ ye f() {
        return super.f();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ com.google.android.gms.common.util.e g() {
        return super.g();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final void h() {
        if (Thread.currentThread() != this.f2137d) {
            throw new IllegalStateException("Call expected from worker thread");
        }
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ C0294i i() {
        return super.i();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ C0355ub j() {
        return super.j();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ le k() {
        return super.k();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ Kb l() {
        return super.l();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ ze m() {
        return super.m();
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0356uc
    protected final boolean r() {
        return false;
    }

    public final boolean t() {
        return Thread.currentThread() == this.f2137d;
    }
}
