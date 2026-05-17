package com.google.android.gms.measurement.internal;

import java.util.concurrent.Callable;
import java.util.concurrent.FutureTask;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Yb<V> extends FutureTask<V> implements Comparable<Yb> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final long f2145a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final boolean f2146b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final String f2147c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ Xb f2148d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    Yb(Xb xb, Runnable runnable, boolean z, String str) {
        super(runnable, null);
        this.f2148d = xb;
        com.google.android.gms.common.internal.r.a(str);
        this.f2145a = Xb.f2136c.getAndIncrement();
        this.f2147c = str;
        this.f2146b = false;
        if (this.f2145a == Long.MAX_VALUE) {
            xb.d().t().a("Tasks index overflow");
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    Yb(Xb xb, Callable<V> callable, boolean z, String str) {
        super(callable);
        this.f2148d = xb;
        com.google.android.gms.common.internal.r.a(str);
        this.f2145a = Xb.f2136c.getAndIncrement();
        this.f2147c = str;
        this.f2146b = z;
        if (this.f2145a == Long.MAX_VALUE) {
            xb.d().t().a("Tasks index overflow");
        }
    }

    @Override // java.lang.Comparable
    public final /* synthetic */ int compareTo(Yb yb) {
        Yb yb2 = yb;
        boolean z = this.f2146b;
        if (z != yb2.f2146b) {
            return z ? -1 : 1;
        }
        long j = this.f2145a;
        long j2 = yb2.f2145a;
        if (j < j2) {
            return -1;
        }
        if (j > j2) {
            return 1;
        }
        this.f2148d.d().u().a("Two tasks share the same index. index", Long.valueOf(this.f2145a));
        return 0;
    }

    @Override // java.util.concurrent.FutureTask
    protected final void setException(Throwable th) {
        this.f2148d.d().t().a(this.f2147c, th);
        super.setException(th);
    }
}
