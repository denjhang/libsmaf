package com.google.android.gms.measurement.internal;

import android.content.Context;
import android.os.Bundle;
import java.util.Iterator;
import java.util.Map;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.z, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0378z extends Db {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Map<String, Long> f2484b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Map<String, Integer> f2485c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private long f2486d;

    public C0378z(_b _bVar) {
        super(_bVar);
        this.f2485c = new b.b.b();
        this.f2484b = new b.b.b();
    }

    private final void a(long j, C0298id c0298id) {
        if (c0298id == null) {
            d().B().a("Not logging ad exposure. No active activity");
            return;
        }
        if (j < 1000) {
            d().B().a("Not logging ad exposure. Less than 1000 ms. exposure", Long.valueOf(j));
            return;
        }
        Bundle bundle = new Bundle();
        bundle.putLong("_xt", j);
        C0293hd.a(c0298id, bundle, true);
        p().a("am", "_xa", bundle);
    }

    private final void a(String str, long j, C0298id c0298id) {
        if (c0298id == null) {
            d().B().a("Not logging ad unit exposure. No active activity");
            return;
        }
        if (j < 1000) {
            d().B().a("Not logging ad unit exposure. Less than 1000 ms. exposure", Long.valueOf(j));
            return;
        }
        Bundle bundle = new Bundle();
        bundle.putString("_ai", str);
        bundle.putLong("_xt", j);
        C0293hd.a(c0298id, bundle, true);
        p().a("am", "_xu", bundle);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void b(long j) {
        Iterator<String> it = this.f2484b.keySet().iterator();
        while (it.hasNext()) {
            this.f2484b.put(it.next(), Long.valueOf(j));
        }
        if (this.f2484b.isEmpty()) {
            return;
        }
        this.f2486d = j;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void c(String str, long j) {
        a();
        h();
        com.google.android.gms.common.internal.r.b(str);
        if (this.f2485c.isEmpty()) {
            this.f2486d = j;
        }
        Integer num = this.f2485c.get(str);
        if (num != null) {
            this.f2485c.put(str, Integer.valueOf(num.intValue() + 1));
        } else if (this.f2485c.size() >= 100) {
            d().w().a("Too many ads visible");
        } else {
            this.f2485c.put(str, 1);
            this.f2484b.put(str, Long.valueOf(j));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void d(String str, long j) {
        a();
        h();
        com.google.android.gms.common.internal.r.b(str);
        Integer num = this.f2485c.get(str);
        if (num == null) {
            d().t().a("Call to endAdUnitExposure for unknown ad unit id", str);
            return;
        }
        C0298id c0298idB = s().B();
        int iIntValue = num.intValue() - 1;
        if (iIntValue != 0) {
            this.f2485c.put(str, Integer.valueOf(iIntValue));
            return;
        }
        this.f2485c.remove(str);
        Long l = this.f2484b.get(str);
        if (l == null) {
            d().t().a("First ad unit exposure time was never set");
        } else {
            long jLongValue = j - l.longValue();
            this.f2484b.remove(str);
            a(str, jLongValue, c0298idB);
        }
        if (this.f2485c.isEmpty()) {
            long j2 = this.f2486d;
            if (j2 == 0) {
                d().t().a("First ad exposure time was never set");
            } else {
                a(j - j2, c0298idB);
                this.f2486d = 0L;
            }
        }
    }

    @Override // com.google.android.gms.measurement.internal.Db, com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ void a() {
        super.a();
    }

    public final void a(long j) {
        C0298id c0298idB = s().B();
        for (String str : this.f2484b.keySet()) {
            a(str, j - this.f2484b.get(str).longValue(), c0298idB);
        }
        if (!this.f2484b.isEmpty()) {
            a(j - this.f2486d, c0298idB);
        }
        b(j);
    }

    public final void a(String str, long j) {
        if (str == null || str.length() == 0) {
            d().t().a("Ad unit id must be a non-empty string");
        } else {
            c().a(new RunnableC0252a(this, str, j));
        }
    }

    public final void b(String str, long j) {
        if (str == null || str.length() == 0) {
            d().t().a("Ad unit id must be a non-empty string");
        } else {
            c().a(new Ca(this, str, j));
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

    @Override // com.google.android.gms.measurement.internal.Db, com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ void h() {
        super.h();
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

    @Override // com.google.android.gms.measurement.internal.Db
    public final /* bridge */ /* synthetic */ Gc p() {
        return super.p();
    }

    @Override // com.google.android.gms.measurement.internal.Db
    public final /* bridge */ /* synthetic */ C0293hd s() {
        return super.s();
    }
}
