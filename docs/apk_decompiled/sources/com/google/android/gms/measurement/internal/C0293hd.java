package com.google.android.gms.measurement.internal;

import android.app.Activity;
import android.content.Context;
import android.os.Bundle;
import java.util.Map;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.hd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0293hd extends AbstractC0266cb {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    protected C0298id f2267c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private volatile C0298id f2268d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private C0298id f2269e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final Map<Activity, C0298id> f2270f;
    private C0298id g;
    private String h;

    public C0293hd(_b _bVar) {
        super(_bVar);
        this.f2270f = new b.b.b();
    }

    private static String a(String str) {
        String[] strArrSplit = str.split("\\.");
        String str2 = strArrSplit.length > 0 ? strArrSplit[strArrSplit.length - 1] : "";
        return str2.length() > 100 ? str2.substring(0, 100) : str2;
    }

    private final void a(Activity activity, C0298id c0298id, boolean z) {
        C0298id c0298id2 = this.f2268d == null ? this.f2269e : this.f2268d;
        if (c0298id.f2284b == null) {
            c0298id = new C0298id(c0298id.f2283a, a(activity.getClass().getCanonicalName()), c0298id.f2285c);
        }
        this.f2269e = this.f2268d;
        this.f2268d = c0298id;
        c().a(new RunnableC0308kd(this, z, c0298id2, c0298id));
    }

    public static void a(C0298id c0298id, Bundle bundle, boolean z) {
        if (bundle != null && c0298id != null && (!bundle.containsKey("_sc") || z)) {
            String str = c0298id.f2283a;
            if (str != null) {
                bundle.putString("_sn", str);
            } else {
                bundle.remove("_sn");
            }
            bundle.putString("_sc", c0298id.f2284b);
            bundle.putLong("_si", c0298id.f2285c);
            return;
        }
        if (bundle != null && c0298id == null && z) {
            bundle.remove("_sn");
            bundle.remove("_sc");
            bundle.remove("_si");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(C0298id c0298id, boolean z) {
        o().a(g().b());
        if (u().a(c0298id.f2286d, z)) {
            c0298id.f2286d = false;
        }
    }

    private final C0298id d(Activity activity) {
        com.google.android.gms.common.internal.r.a(activity);
        C0298id c0298id = this.f2270f.get(activity);
        if (c0298id != null) {
            return c0298id;
        }
        C0298id c0298id2 = new C0298id(null, a(activity.getClass().getCanonicalName()), k().t());
        this.f2270f.put(activity, c0298id2);
        return c0298id2;
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0266cb
    protected final boolean A() {
        return false;
    }

    public final C0298id B() {
        x();
        h();
        return this.f2267c;
    }

    public final C0298id C() {
        a();
        return this.f2268d;
    }

    @Override // com.google.android.gms.measurement.internal.Db, com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ void a() {
        super.a();
    }

    public final void a(Activity activity) {
        a(activity, d(activity), false);
        C0378z c0378zO = o();
        c0378zO.c().a(new RunnableC0259ba(c0378zO, c0378zO.g().b()));
    }

    public final void a(Activity activity, Bundle bundle) {
        Bundle bundle2;
        if (bundle == null || (bundle2 = bundle.getBundle("com.google.app_measurement.screen_service")) == null) {
            return;
        }
        this.f2270f.put(activity, new C0298id(bundle2.getString("name"), bundle2.getString("referrer_name"), bundle2.getLong("id")));
    }

    public final void a(Activity activity, String str, String str2) {
        if (this.f2268d == null) {
            d().y().a("setCurrentScreen cannot be called while no activity active");
            return;
        }
        if (this.f2270f.get(activity) == null) {
            d().y().a("setCurrentScreen must be called with an activity in the activity lifecycle");
            return;
        }
        if (str2 == null) {
            str2 = a(activity.getClass().getCanonicalName());
        }
        boolean zEquals = this.f2268d.f2284b.equals(str2);
        boolean zD = le.d(this.f2268d.f2283a, str);
        if (zEquals && zD) {
            d().y().a("setCurrentScreen cannot be called with the same class and name");
            return;
        }
        if (str != null && (str.length() <= 0 || str.length() > 100)) {
            d().y().a("Invalid screen name length in setCurrentScreen. Length", Integer.valueOf(str.length()));
            return;
        }
        if (str2 != null && (str2.length() <= 0 || str2.length() > 100)) {
            d().y().a("Invalid class name length in setCurrentScreen. Length", Integer.valueOf(str2.length()));
            return;
        }
        d().B().a("Setting current screen to name, class", str == null ? "null" : str, str2);
        C0298id c0298id = new C0298id(str, str2, k().t());
        this.f2270f.put(activity, c0298id);
        a(activity, c0298id, true);
    }

    public final void a(String str, C0298id c0298id) {
        h();
        synchronized (this) {
            if (this.h == null || this.h.equals(str) || c0298id != null) {
                this.h = str;
                this.g = c0298id;
            }
        }
    }

    public final void b(Activity activity) {
        C0298id c0298idD = d(activity);
        this.f2269e = this.f2268d;
        this.f2268d = null;
        c().a(new RunnableC0303jd(this, c0298idD));
    }

    public final void b(Activity activity, Bundle bundle) {
        C0298id c0298id;
        if (bundle == null || (c0298id = this.f2270f.get(activity)) == null) {
            return;
        }
        Bundle bundle2 = new Bundle();
        bundle2.putLong("id", c0298id.f2285c);
        bundle2.putString("name", c0298id.f2283a);
        bundle2.putString("referrer_name", c0298id.f2284b);
        bundle.putBundle("com.google.app_measurement.screen_service", bundle2);
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Xb c() {
        return super.c();
    }

    public final void c(Activity activity) {
        this.f2270f.remove(activity);
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
    public final /* bridge */ /* synthetic */ C0318md r() {
        return super.r();
    }

    @Override // com.google.android.gms.measurement.internal.Db
    public final /* bridge */ /* synthetic */ Nd u() {
        return super.u();
    }
}
