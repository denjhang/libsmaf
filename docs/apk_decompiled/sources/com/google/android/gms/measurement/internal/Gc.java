package com.google.android.gms.measurement.internal;

import android.app.Application;
import android.content.Context;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import com.google.android.gms.common.api.internal.C0056c;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.CopyOnWriteArraySet;
import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Gc extends AbstractC0266cb {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    protected Xc f1973c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private Ac f1974d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final Set<Ec> f1975e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private boolean f1976f;
    private final AtomicReference<String> g;
    protected boolean h;

    protected Gc(_b _bVar) {
        super(_bVar);
        this.f1975e = new CopyOnWriteArraySet();
        this.h = true;
        this.g = new AtomicReference<>();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void M() {
        Long lValueOf;
        if (m().e(q().B(), C0324o.la)) {
            h();
            String strA = l().t.a();
            if (strA != null) {
                if ("unset".equals(strA)) {
                    lValueOf = null;
                } else {
                    lValueOf = Long.valueOf("true".equals(strA) ? 1L : 0L);
                }
                a("app", "_npa", lValueOf, g().a());
            }
        }
        if (this.f2438a.h() && this.h) {
            d().A().a("Recording app launch after enabling measurement for the first time (FE)");
            I();
        } else {
            d().A().a("Updating Scion state (FE)");
            r().C();
        }
    }

    private final void a(String str, String str2, long j, Object obj) {
        c().a(new Jc(this, str, str2, obj, j));
    }

    private final ArrayList<Bundle> b(String str, String str2, String str3) {
        if (c().t()) {
            d().t().a("Cannot get conditional user properties from analytics worker thread");
            return new ArrayList<>(0);
        }
        if (ye.a()) {
            d().t().a("Cannot get conditional user properties from main thread");
            return new ArrayList<>(0);
        }
        AtomicReference atomicReference = new AtomicReference();
        synchronized (atomicReference) {
            this.f2438a.c().a(new Nc(this, atomicReference, str, str2, str3));
            try {
                atomicReference.wait(5000L);
            } catch (InterruptedException e2) {
                d().w().a("Interrupted waiting for get conditional user properties", str, e2);
            }
        }
        List list = (List) atomicReference.get();
        if (list != null) {
            return le.b((List<zzv>) list);
        }
        d().w().a("Timed out waiting for get conditional user properties", str);
        return new ArrayList<>();
    }

    private final Map<String, Object> b(String str, String str2, String str3, boolean z) {
        C0375yb c0375ybW;
        String str4;
        if (c().t()) {
            c0375ybW = d().t();
            str4 = "Cannot get user properties from analytics worker thread";
        } else if (ye.a()) {
            c0375ybW = d().t();
            str4 = "Cannot get user properties from main thread";
        } else {
            AtomicReference atomicReference = new AtomicReference();
            synchronized (atomicReference) {
                this.f2438a.c().a(new Pc(this, atomicReference, str, str2, str3, z));
                try {
                    atomicReference.wait(5000L);
                } catch (InterruptedException e2) {
                    d().w().a("Interrupted waiting for get user properties", e2);
                }
            }
            List<zzkj> list = (List) atomicReference.get();
            if (list != null) {
                b.b.b bVar = new b.b.b(list.size());
                for (zzkj zzkjVar : list) {
                    bVar.put(zzkjVar.f2511b, zzkjVar.h());
                }
                return bVar;
            }
            c0375ybW = d().w();
            str4 = "Timed out waiting for handle get user properties";
        }
        c0375ybW.a(str4);
        return Collections.emptyMap();
    }

    private final void b(Bundle bundle, long j) {
        com.google.android.gms.common.internal.r.a(bundle);
        C0366wc.a(bundle, "app_id", String.class, null);
        C0366wc.a(bundle, "origin", String.class, null);
        C0366wc.a(bundle, "name", String.class, null);
        C0366wc.a(bundle, "value", Object.class, null);
        C0366wc.a(bundle, "trigger_event_name", String.class, null);
        C0366wc.a(bundle, "trigger_timeout", Long.class, 0L);
        C0366wc.a(bundle, "timed_out_event_name", String.class, null);
        C0366wc.a(bundle, "timed_out_event_params", Bundle.class, null);
        C0366wc.a(bundle, "triggered_event_name", String.class, null);
        C0366wc.a(bundle, "triggered_event_params", Bundle.class, null);
        C0366wc.a(bundle, "time_to_live", Long.class, 0L);
        C0366wc.a(bundle, "expired_event_name", String.class, null);
        C0366wc.a(bundle, "expired_event_params", Bundle.class, null);
        com.google.android.gms.common.internal.r.b(bundle.getString("name"));
        com.google.android.gms.common.internal.r.b(bundle.getString("origin"));
        com.google.android.gms.common.internal.r.a(bundle.get("value"));
        bundle.putLong("creation_timestamp", j);
        String string = bundle.getString("name");
        Object obj = bundle.get("value");
        if (k().c(string) != 0) {
            d().t().a("Invalid conditional user property name", j().c(string));
            return;
        }
        if (k().b(string, obj) != 0) {
            d().t().a("Invalid conditional user property value", j().c(string), obj);
            return;
        }
        Object objC = k().c(string, obj);
        if (objC == null) {
            d().t().a("Unable to normalize conditional user property value", j().c(string), obj);
            return;
        }
        C0366wc.a(bundle, objC);
        long j2 = bundle.getLong("trigger_timeout");
        if (!TextUtils.isEmpty(bundle.getString("trigger_event_name")) && (j2 > 15552000000L || j2 < 1)) {
            d().t().a("Invalid conditional user property timeout", j().c(string), Long.valueOf(j2));
            return;
        }
        long j3 = bundle.getLong("time_to_live");
        if (j3 > 15552000000L || j3 < 1) {
            d().t().a("Invalid conditional user property time to live", j().c(string), Long.valueOf(j3));
        } else {
            c().a(new Lc(this, bundle));
        }
    }

    private final void b(String str, String str2, long j, Bundle bundle, boolean z, boolean z2, boolean z3, String str3) {
        c().a(new Hc(this, str, str2, j, le.b(bundle), z, z2, z3, str3));
    }

    private final void b(String str, String str2, String str3, Bundle bundle) {
        long jA = g().a();
        com.google.android.gms.common.internal.r.b(str2);
        Bundle bundle2 = new Bundle();
        if (str != null) {
            bundle2.putString("app_id", str);
        }
        bundle2.putString("name", str2);
        bundle2.putLong("creation_timestamp", jA);
        if (str3 != null) {
            bundle2.putString("expired_event_name", str3);
            bundle2.putBundle("expired_event_params", bundle);
        }
        c().a(new Oc(this, bundle2));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void c(Bundle bundle) {
        h();
        x();
        com.google.android.gms.common.internal.r.a(bundle);
        com.google.android.gms.common.internal.r.b(bundle.getString("name"));
        com.google.android.gms.common.internal.r.b(bundle.getString("origin"));
        com.google.android.gms.common.internal.r.a(bundle.get("value"));
        if (!this.f2438a.h()) {
            d().A().a("Conditional property not sent since collection is disabled");
            return;
        }
        zzkj zzkjVar = new zzkj(bundle.getString("name"), bundle.getLong("triggered_timestamp"), bundle.get("value"), bundle.getString("origin"));
        try {
            zzan zzanVarA = k().a(bundle.getString("app_id"), bundle.getString("triggered_event_name"), bundle.getBundle("triggered_event_params"), bundle.getString("origin"), 0L, true, false);
            r().a(new zzv(bundle.getString("app_id"), bundle.getString("origin"), zzkjVar, bundle.getLong("creation_timestamp"), false, bundle.getString("trigger_event_name"), k().a(bundle.getString("app_id"), bundle.getString("timed_out_event_name"), bundle.getBundle("timed_out_event_params"), bundle.getString("origin"), 0L, true, false), bundle.getLong("trigger_timeout"), zzanVarA, bundle.getLong("time_to_live"), k().a(bundle.getString("app_id"), bundle.getString("expired_event_name"), bundle.getBundle("expired_event_params"), bundle.getString("origin"), 0L, true, false)));
        } catch (IllegalArgumentException unused) {
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void c(boolean z) {
        h();
        a();
        x();
        d().A().a("Setting app measurement enabled (FE)", Boolean.valueOf(z));
        l().b(z);
        M();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void d(Bundle bundle) {
        h();
        x();
        com.google.android.gms.common.internal.r.a(bundle);
        com.google.android.gms.common.internal.r.b(bundle.getString("name"));
        if (!this.f2438a.h()) {
            d().A().a("Conditional property not cleared since collection is disabled");
            return;
        }
        try {
            r().a(new zzv(bundle.getString("app_id"), bundle.getString("origin"), new zzkj(bundle.getString("name"), 0L, null, null), bundle.getLong("creation_timestamp"), bundle.getBoolean("active"), bundle.getString("trigger_event_name"), null, bundle.getLong("trigger_timeout"), null, bundle.getLong("time_to_live"), k().a(bundle.getString("app_id"), bundle.getString("expired_event_name"), bundle.getBundle("expired_event_params"), bundle.getString("origin"), bundle.getLong("creation_timestamp"), true, false)));
        } catch (IllegalArgumentException unused) {
        }
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0266cb
    protected final boolean A() {
        return false;
    }

    public final void B() {
        if (e().getApplicationContext() instanceof Application) {
            ((Application) e().getApplicationContext()).unregisterActivityLifecycleCallbacks(this.f1973c);
        }
    }

    public final Boolean C() {
        AtomicReference atomicReference = new AtomicReference();
        return (Boolean) c().a(atomicReference, 15000L, "boolean test flag value", new Ic(this, atomicReference));
    }

    public final String D() {
        AtomicReference atomicReference = new AtomicReference();
        return (String) c().a(atomicReference, 15000L, "String test flag value", new Qc(this, atomicReference));
    }

    public final Long E() {
        AtomicReference atomicReference = new AtomicReference();
        return (Long) c().a(atomicReference, 15000L, "long test flag value", new Sc(this, atomicReference));
    }

    public final Integer F() {
        AtomicReference atomicReference = new AtomicReference();
        return (Integer) c().a(atomicReference, 15000L, "int test flag value", new Rc(this, atomicReference));
    }

    public final Double G() {
        AtomicReference atomicReference = new AtomicReference();
        return (Double) c().a(atomicReference, 15000L, "double test flag value", new Uc(this, atomicReference));
    }

    public final String H() {
        a();
        return this.g.get();
    }

    public final void I() {
        h();
        a();
        x();
        if (this.f2438a.m()) {
            if (m().e(this.f2438a.G().B(), C0324o.Fa)) {
                ze zeVarM = m();
                zeVarM.f();
                Boolean boolB = zeVarM.b("google_analytics_deferred_deep_link_enabled");
                if (boolB != null && boolB.booleanValue()) {
                    d().A().a("Deferred Deep Link feature enabled.");
                    c().a(new Runnable(this) { // from class: com.google.android.gms.measurement.internal.Fc

                        /* JADX INFO: renamed from: a, reason: collision with root package name */
                        private final Gc f1962a;

                        {
                            this.f1962a = this;
                        }

                        @Override // java.lang.Runnable
                        public final void run() {
                            Gc gc = this.f1962a;
                            gc.h();
                            if (gc.l().A.a()) {
                                gc.d().A().a("Deferred Deep Link already retrieved. Not fetching again.");
                                return;
                            }
                            long jA = gc.l().B.a();
                            gc.l().B.a(1 + jA);
                            if (jA < 5) {
                                gc.f2438a.n();
                            } else {
                                gc.d().w().a("Permanently failed to retrieve Deferred Deep Link. Reached maximum retries.");
                                gc.l().A.a(true);
                            }
                        }
                    });
                }
            }
            r().E();
            this.h = false;
            String strY = l().y();
            if (TextUtils.isEmpty(strY)) {
                return;
            }
            i().o();
            if (strY.equals(Build.VERSION.RELEASE)) {
                return;
            }
            Bundle bundle = new Bundle();
            bundle.putString("_po", strY);
            a("auto", "_ou", bundle);
        }
    }

    public final String J() {
        C0298id c0298idC = this.f2438a.D().C();
        if (c0298idC != null) {
            return c0298idC.f2283a;
        }
        return null;
    }

    public final String K() {
        C0298id c0298idC = this.f2438a.D().C();
        if (c0298idC != null) {
            return c0298idC.f2284b;
        }
        return null;
    }

    public final String L() {
        if (this.f2438a.z() != null) {
            return this.f2438a.z();
        }
        try {
            return C0056c.a();
        } catch (IllegalStateException e2) {
            this.f2438a.d().t().a("getGoogleAppId failed with exception", e2);
            return null;
        }
    }

    public final ArrayList<Bundle> a(String str, String str2) {
        a();
        return b((String) null, str, str2);
    }

    public final ArrayList<Bundle> a(String str, String str2, String str3) {
        com.google.android.gms.common.internal.r.b(str);
        n();
        throw null;
    }

    public final Map<String, Object> a(String str, String str2, String str3, boolean z) {
        com.google.android.gms.common.internal.r.b(str);
        n();
        throw null;
    }

    public final Map<String, Object> a(String str, String str2, boolean z) {
        a();
        return b((String) null, str, str2, z);
    }

    @Override // com.google.android.gms.measurement.internal.Db, com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ void a() {
        super.a();
    }

    public final void a(long j) {
        a();
        c().a(new Vc(this, j));
    }

    public final void a(Bundle bundle) {
        a(bundle, g().a());
    }

    public final void a(Bundle bundle, long j) {
        com.google.android.gms.common.internal.r.a(bundle);
        a();
        Bundle bundle2 = new Bundle(bundle);
        if (!TextUtils.isEmpty(bundle2.getString("app_id"))) {
            d().w().a("Package name should be null when calling setConditionalUserProperty");
        }
        bundle2.remove("app_id");
        b(bundle2, j);
    }

    public final void a(Ac ac) {
        Ac ac2;
        h();
        a();
        x();
        if (ac != null && ac != (ac2 = this.f1974d)) {
            com.google.android.gms.common.internal.r.b(ac2 == null, "EventInterceptor already set.");
        }
        this.f1974d = ac;
    }

    public final void a(Ec ec) {
        a();
        x();
        com.google.android.gms.common.internal.r.a(ec);
        if (this.f1975e.add(ec)) {
            return;
        }
        d().w().a("OnEventListener already registered");
    }

    final void a(String str) {
        this.g.set(str);
    }

    final void a(String str, String str2, long j, Bundle bundle) {
        a();
        h();
        a(str, str2, j, bundle, true, this.f1974d == null || le.e(str2), false, null);
    }

    /* JADX WARN: Removed duplicated region for block: B:42:0x0112  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected final void a(java.lang.String r29, java.lang.String r30, long r31, android.os.Bundle r33, boolean r34, boolean r35, boolean r36, java.lang.String r37) {
        /*
            Method dump skipped, instruction units count: 1509
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.Gc.a(java.lang.String, java.lang.String, long, android.os.Bundle, boolean, boolean, boolean, java.lang.String):void");
    }

    public final void a(String str, String str2, Bundle bundle) {
        a(str, str2, bundle, true, true, g().a());
    }

    public final void a(String str, String str2, Bundle bundle, boolean z) {
        a(str, str2, bundle, false, true, g().a());
    }

    public final void a(String str, String str2, Bundle bundle, boolean z, boolean z2, long j) {
        a();
        b(str == null ? "app" : str, str2, j, bundle == null ? new Bundle() : bundle, z2, !z2 || this.f1974d == null || le.e(str2), !z, null);
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0067  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    final void a(java.lang.String r9, java.lang.String r10, java.lang.Object r11, long r12) {
        /*
            r8 = this;
            com.google.android.gms.common.internal.r.b(r9)
            com.google.android.gms.common.internal.r.b(r10)
            r8.h()
            r8.a()
            r8.x()
            com.google.android.gms.measurement.internal.ze r0 = r8.m()
            com.google.android.gms.measurement.internal.tb r1 = r8.q()
            java.lang.String r1 = r1.B()
            com.google.android.gms.measurement.internal.pb<java.lang.Boolean> r2 = com.google.android.gms.measurement.internal.C0324o.la
            boolean r0 = r0.e(r1, r2)
            java.lang.String r1 = "_npa"
            if (r0 == 0) goto L77
            java.lang.String r0 = "allow_personalized_ads"
            boolean r0 = r0.equals(r10)
            if (r0 == 0) goto L77
            boolean r0 = r11 instanceof java.lang.String
            if (r0 == 0) goto L67
            r0 = r11
            java.lang.String r0 = (java.lang.String) r0
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L67
            java.util.Locale r10 = java.util.Locale.ENGLISH
            java.lang.String r10 = r0.toLowerCase(r10)
            java.lang.String r11 = "false"
            boolean r10 = r11.equals(r10)
            r2 = 1
            if (r10 == 0) goto L4c
            r4 = r2
            goto L4e
        L4c:
            r4 = 0
        L4e:
            java.lang.Long r10 = java.lang.Long.valueOf(r4)
            com.google.android.gms.measurement.internal.Kb r0 = r8.l()
            com.google.android.gms.measurement.internal.Nb r0 = r0.t
            long r4 = r10.longValue()
            int r6 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r6 != 0) goto L62
            java.lang.String r11 = "true"
        L62:
            r0.a(r11)
            r6 = r10
            goto L75
        L67:
            if (r11 != 0) goto L77
            com.google.android.gms.measurement.internal.Kb r10 = r8.l()
            com.google.android.gms.measurement.internal.Nb r10 = r10.t
            java.lang.String r0 = "unset"
            r10.a(r0)
            r6 = r11
        L75:
            r3 = r1
            goto L79
        L77:
            r3 = r10
            r6 = r11
        L79:
            com.google.android.gms.measurement.internal._b r10 = r8.f2438a
            boolean r10 = r10.h()
            if (r10 != 0) goto L8f
            com.google.android.gms.measurement.internal.wb r9 = r8.d()
            com.google.android.gms.measurement.internal.yb r9 = r9.A()
            java.lang.String r10 = "User property not set since app measurement is disabled"
            r9.a(r10)
            return
        L8f:
            com.google.android.gms.measurement.internal._b r10 = r8.f2438a
            boolean r10 = r10.m()
            if (r10 != 0) goto L98
            return
        L98:
            com.google.android.gms.measurement.internal.wb r10 = r8.d()
            com.google.android.gms.measurement.internal.yb r10 = r10.A()
            com.google.android.gms.measurement.internal.ub r11 = r8.j()
            java.lang.String r11 = r11.a(r3)
            java.lang.String r0 = "Setting user property (FE)"
            r10.a(r0, r11, r6)
            com.google.android.gms.measurement.internal.zzkj r10 = new com.google.android.gms.measurement.internal.zzkj
            r2 = r10
            r4 = r12
            r7 = r9
            r2.<init>(r3, r4, r6, r7)
            com.google.android.gms.measurement.internal.md r9 = r8.r()
            r9.a(r10)
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.Gc.a(java.lang.String, java.lang.String, java.lang.Object, long):void");
    }

    public final void a(String str, String str2, Object obj, boolean z) {
        a(str, str2, obj, z, g().a());
    }

    public final void a(String str, String str2, Object obj, boolean z, long j) {
        if (str == null) {
            str = "app";
        }
        String str3 = str;
        int iC = 6;
        if (z) {
            iC = k().c(str2);
        } else {
            le leVarK = k();
            if (leVarK.a("user property", str2)) {
                if (!leVarK.a("user property", Bc.f1919a, str2)) {
                    iC = 15;
                } else if (leVarK.a("user property", 24, str2)) {
                    iC = 0;
                }
            }
        }
        if (iC != 0) {
            k();
            this.f2438a.v().a(iC, "_ev", le.a(str2, 24, true), str2 != null ? str2.length() : 0);
            return;
        }
        if (obj == null) {
            a(str3, str2, j, (Object) null);
            return;
        }
        int iB = k().b(str2, obj);
        if (iB != 0) {
            k();
            this.f2438a.v().a(iB, "_ev", le.a(str2, 24, true), ((obj instanceof String) || (obj instanceof CharSequence)) ? String.valueOf(obj).length() : 0);
        } else {
            Object objC = k().c(str2, obj);
            if (objC != null) {
                a(str3, str2, j, objC);
            }
        }
    }

    public final void a(String str, String str2, String str3, Bundle bundle) {
        com.google.android.gms.common.internal.r.b(str);
        n();
        throw null;
    }

    public final void a(boolean z) {
        x();
        a();
        c().a(new Tc(this, z));
    }

    public final void b(long j) {
        a();
        c().a(new Yc(this, j));
    }

    public final void b(Bundle bundle) {
        com.google.android.gms.common.internal.r.a(bundle);
        com.google.android.gms.common.internal.r.b(bundle.getString("app_id"));
        n();
        throw null;
    }

    public final void b(Ec ec) {
        a();
        x();
        com.google.android.gms.common.internal.r.a(ec);
        if (this.f1975e.remove(ec)) {
            return;
        }
        d().w().a("OnEventListener had not been registered");
    }

    final void b(String str, String str2, Bundle bundle) {
        a();
        h();
        a(str, str2, g().a(), bundle);
    }

    public final void b(boolean z) {
        x();
        a();
        c().a(new Wc(this, z));
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Xb c() {
        return super.c();
    }

    public final void c(long j) {
        a((String) null);
        c().a(new Kc(this, j));
    }

    public final void c(String str, String str2, Bundle bundle) {
        a();
        b((String) null, str, str2, bundle);
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
    public final /* bridge */ /* synthetic */ void n() {
        super.n();
        throw null;
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
    public final /* bridge */ /* synthetic */ C0293hd s() {
        return super.s();
    }

    @Override // com.google.android.gms.measurement.internal.Db
    public final /* bridge */ /* synthetic */ Nd u() {
        return super.u();
    }
}
