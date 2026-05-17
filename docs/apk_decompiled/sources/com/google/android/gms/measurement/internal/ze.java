package com.google.android.gms.measurement.internal;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.text.TextUtils;
import java.lang.reflect.InvocationTargetException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class ze extends C0361vc {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Boolean f2502b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private Be f2503c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private Boolean f2504d;

    ze(_b _bVar) {
        super(_bVar);
        this.f2503c = C0258b.f2182a;
        C0324o.a(_bVar);
    }

    private final String a(String str, String str2) {
        C0375yb c0375ybT;
        String str3;
        try {
            return (String) Class.forName("android.os.SystemProperties").getMethod("get", String.class, String.class).invoke(null, str, str2);
        } catch (ClassNotFoundException e2) {
            e = e2;
            c0375ybT = d().t();
            str3 = "Could not find SystemProperties class";
            c0375ybT.a(str3, e);
            return str2;
        } catch (IllegalAccessException e3) {
            e = e3;
            c0375ybT = d().t();
            str3 = "Could not access SystemProperties.get()";
            c0375ybT.a(str3, e);
            return str2;
        } catch (NoSuchMethodException e4) {
            e = e4;
            c0375ybT = d().t();
            str3 = "Could not find SystemProperties.get() method";
            c0375ybT.a(str3, e);
            return str2;
        } catch (InvocationTargetException e5) {
            e = e5;
            c0375ybT = d().t();
            str3 = "SystemProperties.get() threw an exception";
            c0375ybT.a(str3, e);
            return str2;
        }
    }

    static String n() {
        return C0324o.h.a(null);
    }

    public static long t() {
        return C0324o.K.a(null).longValue();
    }

    public static long u() {
        return C0324o.k.a(null).longValue();
    }

    public static boolean x() {
        return C0324o.g.a(null).booleanValue();
    }

    private final Bundle z() {
        try {
            if (e().getPackageManager() == null) {
                d().t().a("Failed to load metadata: PackageManager is null");
                return null;
            }
            ApplicationInfo applicationInfoA = com.google.android.gms.common.a.c.a(e()).a(e().getPackageName(), 128);
            if (applicationInfoA != null) {
                return applicationInfoA.metaData;
            }
            d().t().a("Failed to load metadata: ApplicationInfo is null");
            return null;
        } catch (PackageManager.NameNotFoundException e2) {
            d().t().a("Failed to load metadata: Package name not found", e2);
            return null;
        }
    }

    public final int a(String str) {
        return b(str, C0324o.v);
    }

    public final long a(String str, C0331pb<Long> c0331pb) {
        if (str != null) {
            String strA = this.f2503c.a(str, c0331pb.a());
            if (!TextUtils.isEmpty(strA)) {
                try {
                    return c0331pb.a(Long.valueOf(Long.parseLong(strA))).longValue();
                } catch (NumberFormatException unused) {
                }
            }
        }
        return c0331pb.a(null).longValue();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ void a() {
        super.a();
    }

    final void a(Be be) {
        this.f2503c = be;
    }

    public final boolean a(C0331pb<Boolean> c0331pb) {
        return d(null, c0331pb);
    }

    public final int b(String str, C0331pb<Integer> c0331pb) {
        if (str != null) {
            String strA = this.f2503c.a(str, c0331pb.a());
            if (!TextUtils.isEmpty(strA)) {
                try {
                    return c0331pb.a(Integer.valueOf(Integer.parseInt(strA))).intValue();
                } catch (NumberFormatException unused) {
                }
            }
        }
        return c0331pb.a(null).intValue();
    }

    final Boolean b(String str) {
        com.google.android.gms.common.internal.r.b(str);
        Bundle bundleZ = z();
        if (bundleZ == null) {
            d().t().a("Failed to load metadata: Metadata bundle is null");
            return null;
        }
        if (bundleZ.containsKey(str)) {
            return Boolean.valueOf(bundleZ.getBoolean(str));
        }
        return null;
    }

    public final double c(String str, C0331pb<Double> c0331pb) {
        if (str != null) {
            String strA = this.f2503c.a(str, c0331pb.a());
            if (!TextUtils.isEmpty(strA)) {
                try {
                    return c0331pb.a(Double.valueOf(Double.parseDouble(strA))).doubleValue();
                } catch (NumberFormatException unused) {
                }
            }
        }
        return c0331pb.a(null).doubleValue();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Xb c() {
        return super.c();
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x002a A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:20:0x002b A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    final java.util.List<java.lang.String> c(java.lang.String r4) {
        /*
            r3 = this;
            com.google.android.gms.common.internal.r.b(r4)
            android.os.Bundle r0 = r3.z()
            r1 = 0
            if (r0 != 0) goto L19
            com.google.android.gms.measurement.internal.wb r4 = r3.d()
            com.google.android.gms.measurement.internal.yb r4 = r4.t()
            java.lang.String r0 = "Failed to load metadata: Metadata bundle is null"
            r4.a(r0)
        L17:
            r4 = r1
            goto L28
        L19:
            boolean r2 = r0.containsKey(r4)
            if (r2 != 0) goto L20
            goto L17
        L20:
            int r4 = r0.getInt(r4)
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
        L28:
            if (r4 != 0) goto L2b
            return r1
        L2b:
            android.content.Context r0 = r3.e()     // Catch: android.content.res.Resources.NotFoundException -> L43
            android.content.res.Resources r0 = r0.getResources()     // Catch: android.content.res.Resources.NotFoundException -> L43
            int r4 = r4.intValue()     // Catch: android.content.res.Resources.NotFoundException -> L43
            java.lang.String[] r4 = r0.getStringArray(r4)     // Catch: android.content.res.Resources.NotFoundException -> L43
            if (r4 != 0) goto L3e
            return r1
        L3e:
            java.util.List r4 = java.util.Arrays.asList(r4)     // Catch: android.content.res.Resources.NotFoundException -> L43
            return r4
        L43:
            r4 = move-exception
            com.google.android.gms.measurement.internal.wb r0 = r3.d()
            com.google.android.gms.measurement.internal.yb r0 = r0.t()
            java.lang.String r2 = "Failed to load string array from metadata: resource not found"
            r0.a(r2, r4)
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.ze.c(java.lang.String):java.util.List");
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ C0365wb d() {
        return super.d();
    }

    public final boolean d(String str) {
        return "1".equals(this.f2503c.a(str, "gaia_collection_enabled"));
    }

    /* JADX WARN: Removed duplicated region for block: B:4:0x0003  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final boolean d(java.lang.String r4, com.google.android.gms.measurement.internal.C0331pb<java.lang.Boolean> r5) {
        /*
            r3 = this;
            r0 = 0
            if (r4 != 0) goto Le
        L3:
            java.lang.Object r4 = r5.a(r0)
        L7:
            java.lang.Boolean r4 = (java.lang.Boolean) r4
            boolean r4 = r4.booleanValue()
            return r4
        Le:
            com.google.android.gms.measurement.internal.Be r1 = r3.f2503c
            java.lang.String r2 = r5.a()
            java.lang.String r4 = r1.a(r4, r2)
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 == 0) goto L1f
            goto L3
        L1f:
            boolean r4 = java.lang.Boolean.parseBoolean(r4)
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)
            java.lang.Object r4 = r5.a(r4)
            goto L7
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.ze.d(java.lang.String, com.google.android.gms.measurement.internal.pb):boolean");
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Context e() {
        return super.e();
    }

    public final boolean e(String str) {
        return "1".equals(this.f2503c.a(str, "measurement.event_sampling_enabled"));
    }

    public final boolean e(String str, C0331pb<Boolean> c0331pb) {
        return d(str, c0331pb);
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ ye f() {
        return super.f();
    }

    final boolean f(String str) {
        return d(str, C0324o.U);
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ com.google.android.gms.common.util.e g() {
        return super.g();
    }

    final boolean g(String str) {
        return d(str, C0324o.O);
    }

    final String h(String str) {
        C0331pb<String> c0331pb = C0324o.P;
        return c0331pb.a(str == null ? null : this.f2503c.a(str, c0331pb.a()));
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ void h() {
        super.h();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ C0294i i() {
        return super.i();
    }

    final boolean i(String str) {
        return d(str, C0324o.V);
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ C0355ub j() {
        return super.j();
    }

    final boolean j(String str) {
        return d(str, C0324o.X);
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ le k() {
        return super.k();
    }

    final boolean k(String str) {
        return d(str, C0324o.W);
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ Kb l() {
        return super.l();
    }

    final boolean l(String str) {
        return d(str, C0324o.Y);
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ ze m() {
        return super.m();
    }

    final boolean m(String str) {
        return d(str, C0324o.Z);
    }

    final boolean n(String str) {
        return d(str, C0324o.aa);
    }

    public final long o() {
        f();
        return 18202L;
    }

    final boolean o(String str) {
        return d(str, C0324o.ba);
    }

    public final boolean p() {
        if (this.f2504d == null) {
            synchronized (this) {
                if (this.f2504d == null) {
                    ApplicationInfo applicationInfo = e().getApplicationInfo();
                    String strA = com.google.android.gms.common.util.o.a();
                    if (applicationInfo != null) {
                        String str = applicationInfo.processName;
                        this.f2504d = Boolean.valueOf(str != null && str.equals(strA));
                    }
                    if (this.f2504d == null) {
                        this.f2504d = Boolean.TRUE;
                        d().t().a("My process not in the list of running processes");
                    }
                }
            }
        }
        return this.f2504d.booleanValue();
    }

    final boolean p(String str) {
        return d(str, C0324o.ia);
    }

    public final boolean q() {
        f();
        Boolean boolB = b("firebase_analytics_collection_deactivated");
        return boolB != null && boolB.booleanValue();
    }

    public final Boolean r() {
        f();
        return b("firebase_analytics_collection_enabled");
    }

    public final Boolean s() {
        a();
        Boolean boolB = b("google_analytics_adid_collection_enabled");
        return Boolean.valueOf(boolB == null || boolB.booleanValue());
    }

    public final String v() {
        return a("debug.firebase.analytics.app", "");
    }

    public final String w() {
        return a("debug.deferred.deeplink", "");
    }

    final boolean y() {
        if (this.f2502b == null) {
            this.f2502b = b("app_measurement_lite");
            if (this.f2502b == null) {
                this.f2502b = false;
            }
        }
        return this.f2502b.booleanValue() || !this.f2438a.C();
    }
}
