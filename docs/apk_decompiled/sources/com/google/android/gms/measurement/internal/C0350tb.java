package com.google.android.gms.measurement.internal;

import android.content.Context;
import com.google.android.gms.internal.measurement.Ce;
import com.google.android.gms.internal.measurement.tf;
import java.util.List;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.tb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0350tb extends AbstractC0266cb {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private String f2414c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private String f2415d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private int f2416e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private String f2417f;
    private String g;
    private long h;
    private long i;
    private long j;
    private List<String> k;
    private int l;
    private String m;
    private String n;
    private String o;

    C0350tb(_b _bVar, long j) {
        super(_bVar);
        this.j = j;
    }

    private final String H() {
        C0375yb c0375ybX;
        String str;
        if (tf.a() && m().a(C0324o.Qa)) {
            c0375ybX = d().B();
            str = "Disabled IID for tests.";
        } else {
            try {
                Class<?> clsLoadClass = e().getClassLoader().loadClass("com.google.firebase.analytics.FirebaseAnalytics");
                if (clsLoadClass == null) {
                    return null;
                }
                try {
                    Object objInvoke = clsLoadClass.getDeclaredMethod("getInstance", Context.class).invoke(null, e());
                    if (objInvoke == null) {
                        return null;
                    }
                    try {
                        return (String) clsLoadClass.getDeclaredMethod("getFirebaseInstanceId", new Class[0]).invoke(objInvoke, new Object[0]);
                    } catch (Exception unused) {
                        c0375ybX = d().y();
                        str = "Failed to retrieve Firebase Instance Id";
                    }
                } catch (Exception unused2) {
                    c0375ybX = d().x();
                    str = "Failed to obtain Firebase Analytics instance";
                }
            } catch (ClassNotFoundException unused3) {
                return null;
            }
        }
        c0375ybX.a(str);
        return null;
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0266cb
    protected final boolean A() {
        return true;
    }

    final String B() {
        x();
        return this.f2414c;
    }

    final String C() {
        x();
        return this.m;
    }

    final String D() {
        x();
        return this.n;
    }

    final int E() {
        x();
        return this.f2416e;
    }

    final int F() {
        x();
        return this.l;
    }

    final List<String> G() {
        return this.k;
    }

    final zzm a(String str) {
        String str2;
        Boolean boolB;
        h();
        a();
        String strB = B();
        String strC = C();
        x();
        String str3 = this.f2415d;
        long jE = E();
        x();
        String str4 = this.f2417f;
        long jO = m().o();
        x();
        h();
        if (this.h == 0) {
            this.h = this.f2438a.v().a(e(), e().getPackageName());
        }
        long j = this.h;
        boolean zH = this.f2438a.h();
        boolean z = !l().y;
        h();
        a();
        String strH = !this.f2438a.h() ? null : H();
        x();
        long j2 = this.i;
        long jI = this.f2438a.i();
        int iF = F();
        boolean zBooleanValue = m().s().booleanValue();
        ze zeVarM = m();
        zeVarM.a();
        Boolean boolB2 = zeVarM.b("google_analytics_ssaid_collection_enabled");
        boolean zBooleanValue2 = Boolean.valueOf(boolB2 == null || boolB2.booleanValue()).booleanValue();
        boolean z2 = l().z();
        String strD = D();
        Boolean boolValueOf = (!m().e(B(), C0324o.ka) || (boolB = m().b("google_analytics_default_allow_ad_personalization_signals")) == null) ? null : Boolean.valueOf(!boolB.booleanValue());
        long j3 = this.j;
        List<String> list = m().e(B(), C0324o.va) ? this.k : null;
        if (Ce.a() && m().e(B(), C0324o.Na)) {
            x();
            str2 = this.o;
        } else {
            str2 = null;
        }
        return new zzm(strB, strC, str3, jE, str4, jO, j, str, zH, z, strH, j2, jI, iF, zBooleanValue, zBooleanValue2, z2, strD, boolValueOf, j3, list, str2);
    }

    @Override // com.google.android.gms.measurement.internal.Db, com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ void a() {
        super.a();
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

    /* JADX WARN: Can't wrap try/catch for region: R(23:0|2|(1:4)(25:121|6|(1:10)(2:11|(1:13))|119|14|(4:16|(1:18)(1:20)|123|21)|26|(1:31)(1:30)|32|(1:37)(1:36)|38|(1:(1:41)(1:42))|(2:44|(3:46|(2:48|49)|61)(3:(1:(1:60)(1:59))(3:53|(1:55)|61)|49|61))(1:61)|62|(1:66)|125|67|(1:69)(1:70)|71|72|(3:86|(2:88|85)|(1:90))(5:76|(1:78)(1:79)|80|(2:84|85)|(0))|94|(3:96|(3:98|(1:100)(3:102|(3:105|(1:128)(1:129)|103)|127)|101)(0)|(1:109))|110|(1:(2:113|114)(2:115|116))(2:117|118))|5|26|(2:28|31)(0)|32|(2:34|37)(0)|38|(0)|(0)(0)|62|(2:64|66)|125|67|(0)(0)|71|72|(4:74|86|(0)|(0))(0)|94|(0)|110|(0)(0)) */
    /* JADX WARN: Code restructure failed: missing block: B:92:0x0206, code lost:
    
        r2 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:93:0x0207, code lost:
    
        d().t().a("getGoogleAppId or isMeasurementEnabled failed with exception. appId", com.google.android.gms.measurement.internal.C0365wb.a(r0), r2);
     */
    /* JADX WARN: Removed duplicated region for block: B:112:0x0274  */
    /* JADX WARN: Removed duplicated region for block: B:117:0x0284  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00b2  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x00cf  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x00d3  */
    /* JADX WARN: Removed duplicated region for block: B:44:0x00fe  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x0163  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x0199  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x019b  */
    /* JADX WARN: Removed duplicated region for block: B:86:0x01de A[Catch: IllegalStateException -> 0x0206, TryCatch #3 {IllegalStateException -> 0x0206, blocks: (B:67:0x018f, B:71:0x019c, B:74:0x01a6, B:76:0x01b2, B:80:0x01c9, B:82:0x01d1, B:90:0x01f4, B:84:0x01d7, B:85:0x01db, B:86:0x01de, B:88:0x01e4), top: B:125:0x018f }] */
    /* JADX WARN: Removed duplicated region for block: B:88:0x01e4 A[Catch: IllegalStateException -> 0x0206, TryCatch #3 {IllegalStateException -> 0x0206, blocks: (B:67:0x018f, B:71:0x019c, B:74:0x01a6, B:76:0x01b2, B:80:0x01c9, B:82:0x01d1, B:90:0x01f4, B:84:0x01d7, B:85:0x01db, B:86:0x01de, B:88:0x01e4), top: B:125:0x018f }] */
    /* JADX WARN: Removed duplicated region for block: B:90:0x01f4 A[Catch: IllegalStateException -> 0x0206, TRY_LEAVE, TryCatch #3 {IllegalStateException -> 0x0206, blocks: (B:67:0x018f, B:71:0x019c, B:74:0x01a6, B:76:0x01b2, B:80:0x01c9, B:82:0x01d1, B:90:0x01f4, B:84:0x01d7, B:85:0x01db, B:86:0x01de, B:88:0x01e4), top: B:125:0x018f }] */
    /* JADX WARN: Removed duplicated region for block: B:96:0x0229  */
    @Override // com.google.android.gms.measurement.internal.AbstractC0266cb
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected final void v() {
        /*
            Method dump skipped, instruction units count: 647
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.C0350tb.v():void");
    }
}
