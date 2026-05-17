package com.google.android.gms.measurement.internal;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import android.util.Pair;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.wb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0365wb extends AbstractC0356uc {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private char f2446c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private long f2447d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private String f2448e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final C0375yb f2449f;
    private final C0375yb g;
    private final C0375yb h;
    private final C0375yb i;
    private final C0375yb j;
    private final C0375yb k;
    private final C0375yb l;
    private final C0375yb m;
    private final C0375yb n;

    C0365wb(_b _bVar) {
        super(_bVar);
        this.f2446c = (char) 0;
        this.f2447d = -1L;
        this.f2449f = new C0375yb(this, 6, false, false);
        this.g = new C0375yb(this, 6, true, false);
        this.h = new C0375yb(this, 6, false, true);
        this.i = new C0375yb(this, 5, false, false);
        this.j = new C0375yb(this, 5, true, false);
        this.k = new C0375yb(this, 5, false, true);
        this.l = new C0375yb(this, 4, false, false);
        this.m = new C0375yb(this, 3, false, false);
        this.n = new C0375yb(this, 2, false, false);
    }

    private final String D() {
        String str;
        synchronized (this) {
            if (this.f2448e == null) {
                this.f2448e = this.f2438a.B() != null ? this.f2438a.B() : ze.n();
            }
            str = this.f2448e;
        }
        return str;
    }

    protected static Object a(String str) {
        if (str == null) {
            return null;
        }
        return new Bb(str);
    }

    private static String a(boolean z, Object obj) {
        String className;
        if (obj == null) {
            return "";
        }
        if (obj instanceof Integer) {
            obj = Long.valueOf(((Integer) obj).intValue());
        }
        int i = 0;
        if (obj instanceof Long) {
            if (!z) {
                return String.valueOf(obj);
            }
            Long l = (Long) obj;
            if (Math.abs(l.longValue()) < 100) {
                return String.valueOf(obj);
            }
            String str = String.valueOf(obj).charAt(0) == '-' ? "-" : "";
            String strValueOf = String.valueOf(Math.abs(l.longValue()));
            long jRound = Math.round(Math.pow(10.0d, strValueOf.length() - 1));
            long jRound2 = Math.round(Math.pow(10.0d, strValueOf.length()) - 1.0d);
            StringBuilder sb = new StringBuilder(str.length() + 43 + str.length());
            sb.append(str);
            sb.append(jRound);
            sb.append("...");
            sb.append(str);
            sb.append(jRound2);
            return sb.toString();
        }
        if (obj instanceof Boolean) {
            return String.valueOf(obj);
        }
        if (!(obj instanceof Throwable)) {
            return obj instanceof Bb ? ((Bb) obj).f1918a : z ? "-" : String.valueOf(obj);
        }
        Throwable th = (Throwable) obj;
        StringBuilder sb2 = new StringBuilder(z ? th.getClass().getName() : th.toString());
        String strB = b(_b.class.getCanonicalName());
        StackTraceElement[] stackTrace = th.getStackTrace();
        int length = stackTrace.length;
        while (true) {
            if (i >= length) {
                break;
            }
            StackTraceElement stackTraceElement = stackTrace[i];
            if (!stackTraceElement.isNativeMethod() && (className = stackTraceElement.getClassName()) != null && b(className).equals(strB)) {
                sb2.append(": ");
                sb2.append(stackTraceElement);
                break;
            }
            i++;
        }
        return sb2.toString();
    }

    static String a(boolean z, String str, Object obj, Object obj2, Object obj3) {
        String str2 = "";
        if (str == null) {
            str = "";
        }
        String strA = a(z, obj);
        String strA2 = a(z, obj2);
        String strA3 = a(z, obj3);
        StringBuilder sb = new StringBuilder();
        if (!TextUtils.isEmpty(str)) {
            sb.append(str);
            str2 = ": ";
        }
        if (!TextUtils.isEmpty(strA)) {
            sb.append(str2);
            sb.append(strA);
            str2 = ", ";
        }
        if (!TextUtils.isEmpty(strA2)) {
            sb.append(str2);
            sb.append(strA2);
            str2 = ", ";
        }
        if (!TextUtils.isEmpty(strA3)) {
            sb.append(str2);
            sb.append(strA3);
        }
        return sb.toString();
    }

    private static String b(String str) {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        int iLastIndexOf = str.lastIndexOf(46);
        return iLastIndexOf == -1 ? str : str.substring(0, iLastIndexOf);
    }

    public final C0375yb A() {
        return this.m;
    }

    public final C0375yb B() {
        return this.n;
    }

    public final String C() {
        Pair<String, Long> pairA = l().f2013e.a();
        if (pairA == null || pairA == Kb.f2011c) {
            return null;
        }
        String strValueOf = String.valueOf(pairA.second);
        String str = (String) pairA.first;
        StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 1 + String.valueOf(str).length());
        sb.append(strValueOf);
        sb.append(":");
        sb.append(str);
        return sb.toString();
    }

    protected final void a(int i, String str) {
        Log.println(i, D(), str);
    }

    protected final void a(int i, boolean z, boolean z2, String str, Object obj, Object obj2, Object obj3) {
        String str2;
        if (!z && a(i)) {
            a(i, a(false, str, obj, obj2, obj3));
        }
        if (z2 || i < 5) {
            return;
        }
        com.google.android.gms.common.internal.r.a(str);
        Xb xbT = this.f2438a.t();
        if (xbT == null) {
            str2 = "Scheduler not set. Not logging error/warn";
        } else {
            if (xbT.s()) {
                if (i < 0) {
                    i = 0;
                }
                xbT.a(new RunnableC0380zb(this, i >= 9 ? 8 : i, str, obj, obj2, obj3));
                return;
            }
            str2 = "Scheduler not initialized. Not logging error/warn";
        }
        a(6, str2);
    }

    protected final boolean a(int i) {
        return Log.isLoggable(D(), i);
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

    public final C0375yb t() {
        return this.f2449f;
    }

    public final C0375yb u() {
        return this.g;
    }

    public final C0375yb v() {
        return this.h;
    }

    public final C0375yb w() {
        return this.i;
    }

    public final C0375yb x() {
        return this.j;
    }

    public final C0375yb y() {
        return this.k;
    }

    public final C0375yb z() {
        return this.l;
    }
}
