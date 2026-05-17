package com.google.android.gms.measurement.internal;

import android.app.ActivityManager;
import android.app.Application;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ResolveInfo;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Pair;
import com.google.android.gms.common.api.internal.C0056c;
import com.google.android.gms.internal.measurement.AbstractC0217ua;
import com.google.android.gms.internal.measurement.C0123fe;
import com.google.android.gms.internal.measurement.C0203re;
import java.net.URL;
import java.util.List;
import java.util.Map;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicReference;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class _b implements InterfaceC0371xc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile _b f2159a;
    private long A;
    private volatile Boolean B;
    private Boolean C;
    private Boolean D;
    private int E;
    private final long G;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Context f2160b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final String f2161c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final String f2162d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final String f2163e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final boolean f2164f;
    private final ye g;
    private final ze h;
    private final Kb i;
    private final C0365wb j;
    private final Xb k;
    private final Nd l;
    private final le m;
    private final C0355ub n;
    private final com.google.android.gms.common.util.e o;
    private final C0293hd p;
    private final Gc q;
    private final C0378z r;
    private final C0268cd s;
    private C0345sb t;
    private C0318md u;
    private C0294i v;
    private C0350tb w;
    private Qb x;
    private Boolean z;
    private boolean y = false;
    private AtomicInteger F = new AtomicInteger(0);

    private _b(Cc cc) {
        C0375yb c0375ybW;
        String str;
        Bundle bundle;
        boolean z = false;
        com.google.android.gms.common.internal.r.a(cc);
        this.g = new ye(cc.f1929a);
        C0324o.a(this.g);
        this.f2160b = cc.f1929a;
        this.f2161c = cc.f1930b;
        this.f2162d = cc.f1931c;
        this.f2163e = cc.f1932d;
        this.f2164f = cc.h;
        this.B = cc.f1933e;
        com.google.android.gms.internal.measurement.zzv zzvVar = cc.g;
        if (zzvVar != null && (bundle = zzvVar.g) != null) {
            Object obj = bundle.get("measurementEnabled");
            if (obj instanceof Boolean) {
                this.C = (Boolean) obj;
            }
            Object obj2 = zzvVar.g.get("measurementDeactivated");
            if (obj2 instanceof Boolean) {
                this.D = (Boolean) obj2;
            }
        }
        AbstractC0217ua.a(this.f2160b);
        this.o = com.google.android.gms.common.util.h.d();
        this.G = this.o.a();
        this.h = new ze(this);
        Kb kb = new Kb(this);
        kb.p();
        this.i = kb;
        C0365wb c0365wb = new C0365wb(this);
        c0365wb.p();
        this.j = c0365wb;
        le leVar = new le(this);
        leVar.p();
        this.m = leVar;
        C0355ub c0355ub = new C0355ub(this);
        c0355ub.p();
        this.n = c0355ub;
        this.r = new C0378z(this);
        C0293hd c0293hd = new C0293hd(this);
        c0293hd.y();
        this.p = c0293hd;
        Gc gc = new Gc(this);
        gc.y();
        this.q = gc;
        Nd nd = new Nd(this);
        nd.y();
        this.l = nd;
        C0268cd c0268cd = new C0268cd(this);
        c0268cd.p();
        this.s = c0268cd;
        Xb xb = new Xb(this);
        xb.p();
        this.k = xb;
        com.google.android.gms.internal.measurement.zzv zzvVar2 = cc.g;
        if (zzvVar2 != null && zzvVar2.f1887b != 0) {
            z = true;
        }
        boolean z2 = !z;
        ye yeVar = this.g;
        if (this.f2160b.getApplicationContext() instanceof Application) {
            Gc gcU = u();
            if (gcU.e().getApplicationContext() instanceof Application) {
                Application application = (Application) gcU.e().getApplicationContext();
                if (gcU.f1973c == null) {
                    gcU.f1973c = new Xc(gcU, null);
                }
                if (z2) {
                    application.unregisterActivityLifecycleCallbacks(gcU.f1973c);
                    application.registerActivityLifecycleCallbacks(gcU.f1973c);
                    c0375ybW = gcU.d().B();
                    str = "Registered activity lifecycle callback";
                }
            }
            this.k.a(new RunnableC0261bc(this, cc));
        }
        c0375ybW = d().w();
        str = "Application context is not an Application";
        c0375ybW.a(str);
        this.k.a(new RunnableC0261bc(this, cc));
    }

    private final C0268cd I() {
        b(this.s);
        return this.s;
    }

    private final void J() {
        if (!this.y) {
            throw new IllegalStateException("AppMeasurement is not initialized");
        }
    }

    public static _b a(Context context, com.google.android.gms.internal.measurement.zzv zzvVar) {
        Bundle bundle;
        if (zzvVar != null && (zzvVar.f1890e == null || zzvVar.f1891f == null)) {
            zzvVar = new com.google.android.gms.internal.measurement.zzv(zzvVar.f1886a, zzvVar.f1887b, zzvVar.f1888c, zzvVar.f1889d, null, null, zzvVar.g);
        }
        com.google.android.gms.common.internal.r.a(context);
        com.google.android.gms.common.internal.r.a(context.getApplicationContext());
        if (f2159a == null) {
            synchronized (_b.class) {
                if (f2159a == null) {
                    f2159a = new _b(new Cc(context, zzvVar));
                }
            }
        } else if (zzvVar != null && (bundle = zzvVar.g) != null && bundle.containsKey("dataCollectionDefaultEnabled")) {
            f2159a.a(zzvVar.g.getBoolean("dataCollectionDefaultEnabled"));
        }
        return f2159a;
    }

    public static _b a(Context context, String str, String str2, Bundle bundle) {
        return a(context, new com.google.android.gms.internal.measurement.zzv(0L, 0L, true, null, null, null, bundle));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(Cc cc) {
        C0375yb c0375ybZ;
        String strConcat;
        c().h();
        ze.n();
        C0294i c0294i = new C0294i(this);
        c0294i.p();
        this.v = c0294i;
        C0350tb c0350tb = new C0350tb(this, cc.f1934f);
        c0350tb.y();
        this.w = c0350tb;
        C0345sb c0345sb = new C0345sb(this);
        c0345sb.y();
        this.t = c0345sb;
        C0318md c0318md = new C0318md(this);
        c0318md.y();
        this.u = c0318md;
        this.m.q();
        this.i.q();
        this.x = new Qb(this);
        this.w.z();
        d().z().a("App measurement is starting up, version", Long.valueOf(this.h.o()));
        ye yeVar = this.g;
        d().z().a("To enable debug logging run: adb shell setprop log.tag.FA VERBOSE");
        ye yeVar2 = this.g;
        String strB = c0350tb.B();
        if (TextUtils.isEmpty(this.f2161c)) {
            if (v().f(strB)) {
                c0375ybZ = d().z();
                strConcat = "Faster debug mode event logging enabled. To disable, run:\n  adb shell setprop debug.firebase.analytics.app .none.";
            } else {
                c0375ybZ = d().z();
                String strValueOf = String.valueOf(strB);
                strConcat = strValueOf.length() != 0 ? "To enable faster debug mode event logging run:\n  adb shell setprop debug.firebase.analytics.app ".concat(strValueOf) : new String("To enable faster debug mode event logging run:\n  adb shell setprop debug.firebase.analytics.app ");
            }
            c0375ybZ.a(strConcat);
        }
        d().A().a("Debug-level message logging enabled");
        if (this.E != this.F.get()) {
            d().t().a("Not all components initialized", Integer.valueOf(this.E), Integer.valueOf(this.F.get()));
        }
        this.y = true;
    }

    private static void a(C0361vc c0361vc) {
        if (c0361vc == null) {
            throw new IllegalStateException("Component not created");
        }
    }

    private static void b(AbstractC0266cb abstractC0266cb) {
        if (abstractC0266cb == null) {
            throw new IllegalStateException("Component not created");
        }
        if (abstractC0266cb.w()) {
            return;
        }
        String strValueOf = String.valueOf(abstractC0266cb.getClass());
        StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 27);
        sb.append("Component not initialized: ");
        sb.append(strValueOf);
        throw new IllegalStateException(sb.toString());
    }

    private static void b(AbstractC0356uc abstractC0356uc) {
        if (abstractC0356uc == null) {
            throw new IllegalStateException("Component not created");
        }
        if (abstractC0356uc.s()) {
            return;
        }
        String strValueOf = String.valueOf(abstractC0356uc.getClass());
        StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 27);
        sb.append("Component not initialized: ");
        sb.append(strValueOf);
        throw new IllegalStateException(sb.toString());
    }

    public final String A() {
        return this.f2162d;
    }

    public final String B() {
        return this.f2163e;
    }

    public final boolean C() {
        return this.f2164f;
    }

    public final C0293hd D() {
        b(this.p);
        return this.p;
    }

    public final C0318md E() {
        b(this.u);
        return this.u;
    }

    public final C0294i F() {
        b(this.v);
        return this.v;
    }

    public final C0350tb G() {
        b(this.w);
        return this.w;
    }

    public final C0378z H() {
        C0378z c0378z = this.r;
        if (c0378z != null) {
            return c0378z;
        }
        throw new IllegalStateException("Component not created");
    }

    protected final void a() {
        c().h();
        if (p().f2014f.a() == 0) {
            p().f2014f.a(this.o.a());
        }
        if (Long.valueOf(p().k.a()).longValue() == 0) {
            d().B().a("Persisting first open", Long.valueOf(this.G));
            p().k.a(this.G);
        }
        if (m()) {
            ye yeVar = this.g;
            if (!TextUtils.isEmpty(G().C()) || !TextUtils.isEmpty(G().D())) {
                v();
                if (le.a(G().C(), p().t(), G().D(), p().u())) {
                    d().z().a("Rechecking which service to use due to a GMP App Id change");
                    p().w();
                    x().B();
                    this.u.H();
                    this.u.F();
                    p().k.a(this.G);
                    p().m.a(null);
                }
                p().c(G().C());
                p().d(G().D());
            }
            u().a(p().m.a());
            ye yeVar2 = this.g;
            if (C0123fe.a() && this.h.a(C0324o.Xa) && !v().y() && !TextUtils.isEmpty(p().C.a())) {
                d().w().a("Remote config removed with active feature rollouts");
                p().C.a(null);
            }
            if (!TextUtils.isEmpty(G().C()) || !TextUtils.isEmpty(G().D())) {
                boolean zH = h();
                if (!p().A() && !this.h.q()) {
                    p().d(!zH);
                }
                if (zH) {
                    u().I();
                }
                Vd vd = r().f2054d;
                if (vd.f2128b.m().n(vd.f2128b.q().B()) && C0203re.a() && vd.f2128b.m().e(vd.f2128b.q().B(), C0324o.ga)) {
                    vd.f2128b.h();
                    if (vd.f2128b.l().a(vd.f2128b.g().a())) {
                        vd.f2128b.l().s.a(true);
                        if (Build.VERSION.SDK_INT >= 16) {
                            ActivityManager.RunningAppProcessInfo runningAppProcessInfo = new ActivityManager.RunningAppProcessInfo();
                            ActivityManager.getMyMemoryState(runningAppProcessInfo);
                            if (runningAppProcessInfo.importance == 100) {
                                vd.f2128b.d().B().a("Detected application was in foreground");
                                vd.b(vd.f2128b.g().a(), false);
                            }
                        }
                    }
                }
                E().a(new AtomicReference<>());
            }
        } else if (h()) {
            if (!v().d("android.permission.INTERNET")) {
                d().t().a("App is missing INTERNET permission");
            }
            if (!v().d("android.permission.ACCESS_NETWORK_STATE")) {
                d().t().a("App is missing ACCESS_NETWORK_STATE permission");
            }
            ye yeVar3 = this.g;
            if (!com.google.android.gms.common.a.c.a(this.f2160b).a() && !this.h.y()) {
                if (!Rb.a(this.f2160b)) {
                    d().t().a("AppMeasurementReceiver not registered/enabled");
                }
                if (!le.a(this.f2160b, false)) {
                    d().t().a("AppMeasurementService not registered/enabled");
                }
            }
            d().t().a("Uploading is not possible. App measurement disabled");
        }
        p().u.a(this.h.a(C0324o.sa));
        p().v.a(this.h.a(C0324o.ta));
    }

    final void a(AbstractC0266cb abstractC0266cb) {
        this.E++;
    }

    final void a(AbstractC0356uc abstractC0356uc) {
        this.E++;
    }

    final /* synthetic */ void a(String str, int i, Throwable th, byte[] bArr, Map map) {
        List<ResolveInfo> listQueryIntentActivities;
        boolean z = true;
        if (!((i == 200 || i == 204 || i == 304) && th == null)) {
            d().w().a("Network Request for Deferred Deep Link failed. response, exception", Integer.valueOf(i), th);
            return;
        }
        p().A.a(true);
        if (bArr.length == 0) {
            d().A().a("Deferred Deep Link response empty.");
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject(new String(bArr));
            String strOptString = jSONObject.optString("deeplink", "");
            String strOptString2 = jSONObject.optString("gclid", "");
            double dOptDouble = jSONObject.optDouble("timestamp", 0.0d);
            if (TextUtils.isEmpty(strOptString)) {
                d().A().a("Deferred Deep Link is empty.");
                return;
            }
            le leVarV = v();
            leVarV.a();
            if (TextUtils.isEmpty(strOptString) || (listQueryIntentActivities = leVarV.e().getPackageManager().queryIntentActivities(new Intent("android.intent.action.VIEW", Uri.parse(strOptString)), 0)) == null || listQueryIntentActivities.isEmpty()) {
                z = false;
            }
            if (!z) {
                d().w().a("Deferred Deep Link validation failed. gclid, deep link", strOptString2, strOptString);
                return;
            }
            Bundle bundle = new Bundle();
            bundle.putString("gclid", strOptString2);
            bundle.putString("_cis", "ddp");
            this.q.a("auto", "_cmp", bundle);
            le leVarV2 = v();
            if (TextUtils.isEmpty(strOptString) || !leVarV2.a(strOptString, dOptDouble)) {
                return;
            }
            leVarV2.e().sendBroadcast(new Intent("android.google.analytics.action.DEEPLINK_ACTION"));
        } catch (JSONException e2) {
            d().t().a("Failed to parse the Deferred Deep Link response. exception", e2);
        }
    }

    final void a(boolean z) {
        this.B = Boolean.valueOf(z);
    }

    public final boolean b() {
        return this.B != null && this.B.booleanValue();
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final Xb c() {
        b(this.k);
        return this.k;
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final C0365wb d() {
        b(this.j);
        return this.j;
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final Context e() {
        return this.f2160b;
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final ye f() {
        return this.g;
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final com.google.android.gms.common.util.e g() {
        return this.o;
    }

    public final boolean h() {
        boolean zBooleanValue;
        c().h();
        J();
        if (!this.h.a(C0324o.ma)) {
            if (this.h.q()) {
                return false;
            }
            Boolean boolR = this.h.r();
            if (boolR == null) {
                zBooleanValue = !C0056c.b();
                if (zBooleanValue && this.B != null && C0324o.ha.a(null).booleanValue()) {
                    boolR = this.B;
                    zBooleanValue = boolR.booleanValue();
                }
            } else {
                zBooleanValue = boolR.booleanValue();
            }
            return p().c(zBooleanValue);
        }
        if (this.h.q()) {
            return false;
        }
        Boolean bool = this.D;
        if (bool != null && bool.booleanValue()) {
            return false;
        }
        Boolean boolX = p().x();
        if (boolX != null) {
            return boolX.booleanValue();
        }
        Boolean boolR2 = this.h.r();
        if (boolR2 != null) {
            return boolR2.booleanValue();
        }
        Boolean bool2 = this.C;
        if (bool2 != null) {
            return bool2.booleanValue();
        }
        if (C0056c.b()) {
            return false;
        }
        if (!this.h.a(C0324o.ha) || this.B == null) {
            return true;
        }
        return this.B.booleanValue();
    }

    final long i() {
        Long lValueOf = Long.valueOf(p().k.a());
        return lValueOf.longValue() == 0 ? this.G : Math.min(this.G, lValueOf.longValue());
    }

    final void j() {
        ye yeVar = this.g;
    }

    final void k() {
        ye yeVar = this.g;
        throw new IllegalStateException("Unexpected call on client side");
    }

    final void l() {
        this.F.incrementAndGet();
    }

    protected final boolean m() {
        J();
        c().h();
        Boolean bool = this.z;
        if (bool == null || this.A == 0 || (bool != null && !bool.booleanValue() && Math.abs(this.o.b() - this.A) > 1000)) {
            this.A = this.o.b();
            ye yeVar = this.g;
            boolean z = true;
            this.z = Boolean.valueOf(v().d("android.permission.INTERNET") && v().d("android.permission.ACCESS_NETWORK_STATE") && (com.google.android.gms.common.a.c.a(this.f2160b).a() || this.h.y() || (Rb.a(this.f2160b) && le.a(this.f2160b, false))));
            if (this.z.booleanValue()) {
                if (!v().c(G().C(), G().D()) && TextUtils.isEmpty(G().D())) {
                    z = false;
                }
                this.z = Boolean.valueOf(z);
            }
        }
        return this.z.booleanValue();
    }

    public final void n() {
        c().h();
        b(I());
        String strB = G().B();
        Pair<String, Boolean> pairA = p().a(strB);
        if (!this.h.s().booleanValue() || ((Boolean) pairA.second).booleanValue() || TextUtils.isEmpty((CharSequence) pairA.first)) {
            d().A().a("ADID unavailable to retrieve Deferred Deep Link. Skipping");
            return;
        }
        if (!I().t()) {
            d().w().a("Network is not available for Deferred Deep Link request. Skipping");
            return;
        }
        URL urlA = v().a(G().m().o(), strB, (String) pairA.first, p().B.a() - 1);
        C0268cd c0268cdI = I();
        InterfaceC0256ad interfaceC0256ad = new InterfaceC0256ad(this) { // from class: com.google.android.gms.measurement.internal.dc

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private final _b f2215a;

            {
                this.f2215a = this;
            }

            @Override // com.google.android.gms.measurement.internal.InterfaceC0256ad
            public final void a(String str, int i, Throwable th, byte[] bArr, Map map) {
                this.f2215a.a(str, i, th, bArr, map);
            }
        };
        c0268cdI.h();
        c0268cdI.o();
        com.google.android.gms.common.internal.r.a(urlA);
        com.google.android.gms.common.internal.r.a(interfaceC0256ad);
        c0268cdI.c().b(new RunnableC0278ed(c0268cdI, strB, urlA, null, null, interfaceC0256ad));
    }

    public final ze o() {
        return this.h;
    }

    public final Kb p() {
        a((C0361vc) this.i);
        return this.i;
    }

    public final C0365wb q() {
        C0365wb c0365wb = this.j;
        if (c0365wb == null || !c0365wb.s()) {
            return null;
        }
        return this.j;
    }

    public final Nd r() {
        b(this.l);
        return this.l;
    }

    public final Qb s() {
        return this.x;
    }

    final Xb t() {
        return this.k;
    }

    public final Gc u() {
        b(this.q);
        return this.q;
    }

    public final le v() {
        a((C0361vc) this.m);
        return this.m;
    }

    public final C0355ub w() {
        a((C0361vc) this.n);
        return this.n;
    }

    public final C0345sb x() {
        b(this.t);
        return this.t;
    }

    public final boolean y() {
        return TextUtils.isEmpty(this.f2161c);
    }

    public final String z() {
        return this.f2161c;
    }
}
