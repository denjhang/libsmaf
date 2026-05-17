package com.google.android.gms.measurement.internal;

import android.content.ContentValues;
import android.content.Context;
import android.database.sqlite.SQLiteException;
import android.text.TextUtils;
import com.google.android.gms.internal.measurement.A;
import com.google.android.gms.internal.measurement.B;
import com.google.android.gms.internal.measurement.C0246z;
import com.google.android.gms.internal.measurement.D;
import com.google.android.gms.internal.measurement.J;
import com.google.android.gms.internal.measurement.K;
import java.util.ArrayList;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Vb extends AbstractC0257ae implements Be {

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static int f2122d = 65535;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static int f2123e = 2;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final Map<String, Map<String, String>> f2124f;
    private final Map<String, Map<String, Boolean>> g;
    private final Map<String, Map<String, Boolean>> h;
    private final Map<String, com.google.android.gms.internal.measurement.K> i;
    private final Map<String, Map<String, Integer>> j;
    private final Map<String, String> k;

    Vb(ee eeVar) {
        super(eeVar);
        this.f2124f = new b.b.b();
        this.g = new b.b.b();
        this.h = new b.b.b();
        this.i = new b.b.b();
        this.k = new b.b.b();
        this.j = new b.b.b();
    }

    private final com.google.android.gms.internal.measurement.K a(String str, byte[] bArr) {
        if (bArr == null) {
            return com.google.android.gms.internal.measurement.K.x();
        }
        try {
            K.a aVarW = com.google.android.gms.internal.measurement.K.w();
            ie.a(aVarW, bArr);
            com.google.android.gms.internal.measurement.K k = (com.google.android.gms.internal.measurement.K) ((com.google.android.gms.internal.measurement.Jb) aVarW.j());
            d().B().a("Parsed config. version, gmp_app_id", k.o() ? Long.valueOf(k.p()) : null, k.q() ? k.r() : null);
            return k;
        } catch (com.google.android.gms.internal.measurement.Ub | RuntimeException e2) {
            d().w().a("Unable to merge remote config. appId", C0365wb.a(str), e2);
            return com.google.android.gms.internal.measurement.K.x();
        }
    }

    private static Map<String, String> a(com.google.android.gms.internal.measurement.K k) {
        b.b.b bVar = new b.b.b();
        if (k != null) {
            for (com.google.android.gms.internal.measurement.L l : k.s()) {
                bVar.put(l.o(), l.p());
            }
        }
        return bVar;
    }

    private final void a(String str, K.a aVar) {
        b.b.b bVar = new b.b.b();
        b.b.b bVar2 = new b.b.b();
        b.b.b bVar3 = new b.b.b();
        if (aVar != null) {
            for (int i = 0; i < aVar.k(); i++) {
                J.a aVarK = aVar.a(i).k();
                if (TextUtils.isEmpty(aVarK.k())) {
                    d().w().a("EventConfig contained null event name");
                } else {
                    String strA = C0381zc.a(aVarK.k());
                    if (!TextUtils.isEmpty(strA)) {
                        aVarK.a(strA);
                        aVar.a(i, aVarK);
                    }
                    bVar.put(aVarK.k(), Boolean.valueOf(aVarK.l()));
                    bVar2.put(aVarK.k(), Boolean.valueOf(aVarK.m()));
                    if (aVarK.n()) {
                        if (aVarK.o() < f2123e || aVarK.o() > f2122d) {
                            d().w().a("Invalid sampling rate. Event name, sample rate", aVarK.k(), Integer.valueOf(aVarK.o()));
                        } else {
                            bVar3.put(aVarK.k(), Integer.valueOf(aVarK.o()));
                        }
                    }
                }
            }
        }
        this.g.put(str, bVar);
        this.h.put(str, bVar2);
        this.j.put(str, bVar3);
    }

    private final void i(String str) {
        s();
        h();
        com.google.android.gms.common.internal.r.b(str);
        if (this.i.get(str) == null) {
            byte[] bArrD = p().d(str);
            if (bArrD != null) {
                K.a aVarK = a(str, bArrD).k();
                a(str, aVarK);
                this.f2124f.put(str, a((com.google.android.gms.internal.measurement.K) aVarK.j()));
                this.i.put(str, (com.google.android.gms.internal.measurement.K) aVarK.j());
                this.k.put(str, null);
                return;
            }
            this.f2124f.put(str, null);
            this.g.put(str, null);
            this.h.put(str, null);
            this.i.put(str, null);
            this.k.put(str, null);
            this.j.put(str, null);
        }
    }

    protected final com.google.android.gms.internal.measurement.K a(String str) {
        s();
        h();
        com.google.android.gms.common.internal.r.b(str);
        i(str);
        return this.i.get(str);
    }

    @Override // com.google.android.gms.measurement.internal.Be
    public final String a(String str, String str2) {
        h();
        i(str);
        Map<String, String> map = this.f2124f.get(str);
        if (map != null) {
            return map.get(str2);
        }
        return null;
    }

    protected final boolean a(String str, byte[] bArr, String str2) {
        byte[] bArrG;
        boolean z;
        s();
        h();
        com.google.android.gms.common.internal.r.b(str);
        K.a aVarK = a(str, bArr).k();
        if (aVarK == null) {
            return false;
        }
        a(str, aVarK);
        this.i.put(str, (com.google.android.gms.internal.measurement.K) aVarK.j());
        this.k.put(str, str2);
        this.f2124f.put(str, a((com.google.android.gms.internal.measurement.K) aVarK.j()));
        qe qeVarN = n();
        ArrayList arrayList = new ArrayList(aVarK.l());
        com.google.android.gms.common.internal.r.a(arrayList);
        for (int i = 0; i < arrayList.size(); i++) {
            C0246z.a aVarK2 = arrayList.get(i).k();
            if (aVarK2.l() != 0) {
                for (int i2 = 0; i2 < aVarK2.l(); i2++) {
                    A.a aVarK3 = aVarK2.b(i2).k();
                    A.a aVar = (A.a) aVarK3.clone();
                    String strA = C0381zc.a(aVarK3.k());
                    if (strA != null) {
                        aVar.a(strA);
                        z = true;
                    } else {
                        z = false;
                    }
                    boolean z2 = z;
                    for (int i3 = 0; i3 < aVarK3.l(); i3++) {
                        com.google.android.gms.internal.measurement.B bA = aVarK3.a(i3);
                        String strA2 = C0376yc.a(bA.u());
                        if (strA2 != null) {
                            B.a aVarK4 = bA.k();
                            aVarK4.a(strA2);
                            aVar.a(i3, (com.google.android.gms.internal.measurement.B) aVarK4.j());
                            z2 = true;
                        }
                    }
                    if (z2) {
                        aVarK2.a(i2, aVar);
                        arrayList.set(i, (C0246z) aVarK2.j());
                    }
                }
            }
            if (aVarK2.k() != 0) {
                for (int i4 = 0; i4 < aVarK2.k(); i4++) {
                    com.google.android.gms.internal.measurement.D dA = aVarK2.a(i4);
                    String strA3 = Bc.a(dA.q());
                    if (strA3 != null) {
                        D.a aVarK5 = dA.k();
                        aVarK5.a(strA3);
                        aVarK2.a(i4, aVarK5);
                        arrayList.set(i, (C0246z) aVarK2.j());
                    }
                }
            }
        }
        qeVarN.p().a(str, arrayList);
        try {
            aVarK.m();
            bArrG = ((com.google.android.gms.internal.measurement.K) ((com.google.android.gms.internal.measurement.Jb) aVarK.j())).g();
        } catch (RuntimeException e2) {
            d().w().a("Unable to serialize reduced-size config. Storing full config instead. appId", C0365wb.a(str), e2);
            bArrG = bArr;
        }
        C0269d c0269dP = p();
        com.google.android.gms.common.internal.r.b(str);
        c0269dP.h();
        c0269dP.s();
        new ContentValues().put("remote_config", bArrG);
        try {
            if (c0269dP.w().update("apps", r6, "app_id = ?", new String[]{str}) == 0) {
                c0269dP.d().t().a("Failed to update remote config (got 0). appId", C0365wb.a(str));
            }
        } catch (SQLiteException e3) {
            c0269dP.d().t().a("Error storing remote config. appId", C0365wb.a(str), e3);
        }
        this.i.put(str, (com.google.android.gms.internal.measurement.K) aVarK.j());
        return true;
    }

    protected final String b(String str) {
        h();
        return this.k.get(str);
    }

    final boolean b(String str, String str2) {
        Boolean bool;
        h();
        i(str);
        if (g(str) && le.e(str2)) {
            return true;
        }
        if (h(str) && le.a(str2)) {
            return true;
        }
        Map<String, Boolean> map = this.g.get(str);
        if (map == null || (bool = map.get(str2)) == null) {
            return false;
        }
        return bool.booleanValue();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Xb c() {
        return super.c();
    }

    protected final void c(String str) {
        h();
        this.k.put(str, null);
    }

    final boolean c(String str, String str2) {
        Boolean bool;
        h();
        i(str);
        if ("ecommerce_purchase".equals(str2)) {
            return true;
        }
        Map<String, Boolean> map = this.h.get(str);
        if (map == null || (bool = map.get(str2)) == null) {
            return false;
        }
        return bool.booleanValue();
    }

    final int d(String str, String str2) {
        Integer num;
        h();
        i(str);
        Map<String, Integer> map = this.j.get(str);
        if (map == null || (num = map.get(str2)) == null) {
            return 1;
        }
        return num.intValue();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ C0365wb d() {
        return super.d();
    }

    final void d(String str) {
        h();
        this.i.remove(str);
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Context e() {
        return super.e();
    }

    final boolean e(String str) {
        h();
        com.google.android.gms.internal.measurement.K kA = a(str);
        if (kA == null) {
            return false;
        }
        return kA.v();
    }

    final long f(String str) {
        String strA = a(str, "measurement.account.time_zone_offset_minutes");
        if (TextUtils.isEmpty(strA)) {
            return 0L;
        }
        try {
            return Long.parseLong(strA);
        } catch (NumberFormatException e2) {
            d().w().a("Unable to parse timezone offset. appId", C0365wb.a(str), e2);
            return 0L;
        }
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ ye f() {
        return super.f();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ com.google.android.gms.common.util.e g() {
        return super.g();
    }

    final boolean g(String str) {
        return "1".equals(a(str, "measurement.upload.blacklist_internal"));
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ void h() {
        super.h();
    }

    final boolean h(String str) {
        return "1".equals(a(str, "measurement.upload.blacklist_public"));
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

    @Override // com.google.android.gms.measurement.internal.ce
    public final /* bridge */ /* synthetic */ qe n() {
        return super.n();
    }

    @Override // com.google.android.gms.measurement.internal.ce
    public final /* bridge */ /* synthetic */ ie o() {
        return super.o();
    }

    @Override // com.google.android.gms.measurement.internal.ce
    public final /* bridge */ /* synthetic */ C0269d p() {
        return super.p();
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0257ae
    protected final boolean u() {
        return false;
    }
}
