package com.google.android.gms.measurement.internal;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Nd extends AbstractC0266cb {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private Handler f2053c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    protected Vd f2054d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    protected Td f2055e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private Sd f2056f;

    Nd(_b _bVar) {
        super(_bVar);
        this.f2054d = new Vd(this);
        this.f2055e = new Td(this);
        this.f2056f = new Sd(this);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void C() {
        h();
        if (this.f2053c == null) {
            this.f2053c = new com.google.android.gms.internal.measurement.Dd(Looper.getMainLooper());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(long j) {
        h();
        C();
        d().B().a("Activity resumed, time", Long.valueOf(j));
        this.f2056f.a(j);
        this.f2055e.a(j);
        this.f2054d.a(j);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void b(long j) {
        h();
        C();
        d().B().a("Activity paused, time", Long.valueOf(j));
        this.f2056f.b(j);
        this.f2055e.b(j);
        Vd vd = this.f2054d;
        if (vd.f2128b.m().e(vd.f2128b.q().B(), C0324o.ca)) {
            vd.f2128b.l().z.a(true);
        }
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0266cb
    protected final boolean A() {
        return false;
    }

    protected final void B() {
        c().a(new Qd(this, g().b()));
    }

    public final boolean a(boolean z, boolean z2) {
        return this.f2055e.a(z, z2);
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
    public final /* bridge */ /* synthetic */ C0378z o() {
        return super.o();
    }

    @Override // com.google.android.gms.measurement.internal.Db
    public final /* bridge */ /* synthetic */ Gc p() {
        return super.p();
    }

    @Override // com.google.android.gms.measurement.internal.Db
    public final /* bridge */ /* synthetic */ C0350tb q() {
        return super.q();
    }

    @Override // com.google.android.gms.measurement.internal.Db
    public final /* bridge */ /* synthetic */ C0293hd s() {
        return super.s();
    }
}
