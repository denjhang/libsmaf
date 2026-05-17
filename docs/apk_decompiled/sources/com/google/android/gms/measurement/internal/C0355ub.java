package com.google.android.gms.measurement.internal;

import android.content.Context;
import android.os.Bundle;
import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.ub, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0355ub extends AbstractC0356uc {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final AtomicReference<String[]> f2429c = new AtomicReference<>();

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static final AtomicReference<String[]> f2430d = new AtomicReference<>();

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static final AtomicReference<String[]> f2431e = new AtomicReference<>();

    C0355ub(_b _bVar) {
        super(_bVar);
    }

    private final String a(zzam zzamVar) {
        if (zzamVar == null) {
            return null;
        }
        return !t() ? zzamVar.toString() : a(zzamVar.m());
    }

    private static String a(String str, String[] strArr, String[] strArr2, AtomicReference<String[]> atomicReference) {
        String str2;
        com.google.android.gms.common.internal.r.a(strArr);
        com.google.android.gms.common.internal.r.a(strArr2);
        com.google.android.gms.common.internal.r.a(atomicReference);
        com.google.android.gms.common.internal.r.a(strArr.length == strArr2.length);
        for (int i = 0; i < strArr.length; i++) {
            if (le.d(str, strArr[i])) {
                synchronized (atomicReference) {
                    String[] strArr3 = atomicReference.get();
                    if (strArr3 == null) {
                        strArr3 = new String[strArr2.length];
                        atomicReference.set(strArr3);
                    }
                    if (strArr3[i] == null) {
                        strArr3[i] = strArr2[i] + "(" + strArr[i] + ")";
                    }
                    str2 = strArr3[i];
                }
                return str2;
            }
        }
        return str;
    }

    private final boolean t() {
        f();
        return this.f2438a.y() && this.f2438a.d().a(3);
    }

    protected final String a(Bundle bundle) {
        if (bundle == null) {
            return null;
        }
        if (!t()) {
            return bundle.toString();
        }
        StringBuilder sb = new StringBuilder();
        for (String str : bundle.keySet()) {
            sb.append(sb.length() != 0 ? ", " : "Bundle[{");
            sb.append(b(str));
            sb.append("=");
            sb.append(bundle.get(str));
        }
        sb.append("}]");
        return sb.toString();
    }

    protected final String a(C0309l c0309l) {
        if (c0309l == null) {
            return null;
        }
        if (!t()) {
            return c0309l.toString();
        }
        return "Event{appId='" + c0309l.f2312a + "', name='" + a(c0309l.f2313b) + "', params=" + a(c0309l.f2317f) + "}";
    }

    protected final String a(zzan zzanVar) {
        if (zzanVar == null) {
            return null;
        }
        if (!t()) {
            return zzanVar.toString();
        }
        return "origin=" + zzanVar.f2508c + ",name=" + a(zzanVar.f2506a) + ",params=" + a(zzanVar.f2507b);
    }

    protected final String a(String str) {
        if (str == null) {
            return null;
        }
        return !t() ? str : a(str, C0381zc.f2495b, C0381zc.f2494a, f2429c);
    }

    protected final String b(String str) {
        if (str == null) {
            return null;
        }
        return !t() ? str : a(str, C0376yc.f2477b, C0376yc.f2476a, f2430d);
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Xb c() {
        return super.c();
    }

    protected final String c(String str) {
        if (str == null) {
            return null;
        }
        if (!t()) {
            return str;
        }
        if (!str.startsWith("_exp_")) {
            return a(str, Bc.f1920b, Bc.f1919a, f2431e);
        }
        return "experiment_id(" + str + ")";
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

    @Override // com.google.android.gms.measurement.internal.AbstractC0356uc
    protected final boolean r() {
        return false;
    }
}
