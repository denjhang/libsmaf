package com.google.android.gms.measurement.internal;

import android.text.TextUtils;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.cc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0267cc {
    private long A;
    private long B;
    private long C;
    private String D;
    private boolean E;
    private long F;
    private long G;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final _b f2202a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final String f2203b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private String f2204c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private String f2205d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private String f2206e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private String f2207f;
    private long g;
    private long h;
    private long i;
    private String j;
    private long k;
    private String l;
    private long m;
    private long n;
    private boolean o;
    private long p;
    private boolean q;
    private boolean r;
    private String s;
    private Boolean t;
    private long u;
    private List<String> v;
    private String w;
    private long x;
    private long y;
    private long z;

    C0267cc(_b _bVar, String str) {
        com.google.android.gms.common.internal.r.a(_bVar);
        com.google.android.gms.common.internal.r.b(str);
        this.f2202a = _bVar;
        this.f2203b = str;
        this.f2202a.c().h();
    }

    public final boolean A() {
        this.f2202a.c().h();
        return this.o;
    }

    public final long B() {
        this.f2202a.c().h();
        return this.g;
    }

    public final long C() {
        this.f2202a.c().h();
        return this.F;
    }

    public final long D() {
        this.f2202a.c().h();
        return this.G;
    }

    public final void E() {
        this.f2202a.c().h();
        long j = this.g + 1;
        if (j > 2147483647L) {
            this.f2202a.d().w().a("Bundle index overflow. appId", C0365wb.a(this.f2203b));
            j = 0;
        }
        this.E = true;
        this.g = j;
    }

    public final long F() {
        this.f2202a.c().h();
        return this.x;
    }

    public final long G() {
        this.f2202a.c().h();
        return this.y;
    }

    public final long H() {
        this.f2202a.c().h();
        return this.z;
    }

    public final long I() {
        this.f2202a.c().h();
        return this.A;
    }

    public final void a(long j) {
        this.f2202a.c().h();
        this.E |= this.h != j;
        this.h = j;
    }

    public final void a(Boolean bool) {
        this.f2202a.c().h();
        this.E |= !le.a(this.t, bool);
        this.t = bool;
    }

    public final void a(String str) {
        this.f2202a.c().h();
        this.E |= !le.d(this.f2204c, str);
        this.f2204c = str;
    }

    public final void a(List<String> list) {
        this.f2202a.c().h();
        if (le.a(this.v, list)) {
            return;
        }
        this.E = true;
        this.v = list != null ? new ArrayList(list) : null;
    }

    public final void a(boolean z) {
        this.f2202a.c().h();
        this.E |= this.o != z;
        this.o = z;
    }

    public final boolean a() {
        this.f2202a.c().h();
        return this.E;
    }

    public final long b() {
        this.f2202a.c().h();
        return this.C;
    }

    public final void b(long j) {
        this.f2202a.c().h();
        this.E |= this.i != j;
        this.i = j;
    }

    public final void b(String str) {
        this.f2202a.c().h();
        if (TextUtils.isEmpty(str)) {
            str = null;
        }
        this.E |= !le.d(this.f2205d, str);
        this.f2205d = str;
    }

    public final void b(boolean z) {
        this.f2202a.c().h();
        this.E |= this.q != z;
        this.q = z;
    }

    public final long c() {
        this.f2202a.c().h();
        return this.B;
    }

    public final void c(long j) {
        this.f2202a.c().h();
        this.E |= this.k != j;
        this.k = j;
    }

    public final void c(String str) {
        this.f2202a.c().h();
        if (TextUtils.isEmpty(str)) {
            str = null;
        }
        this.E |= !le.d(this.s, str);
        this.s = str;
    }

    public final void c(boolean z) {
        this.f2202a.c().h();
        this.E |= this.r != z;
        this.r = z;
    }

    public final String d() {
        this.f2202a.c().h();
        return this.D;
    }

    public final void d(long j) {
        this.f2202a.c().h();
        this.E |= this.m != j;
        this.m = j;
    }

    public final void d(String str) {
        this.f2202a.c().h();
        if (TextUtils.isEmpty(str)) {
            str = null;
        }
        this.E |= !le.d(this.w, str);
        this.w = str;
    }

    public final String e() {
        this.f2202a.c().h();
        String str = this.D;
        i((String) null);
        return str;
    }

    public final void e(long j) {
        this.f2202a.c().h();
        this.E |= this.n != j;
        this.n = j;
    }

    public final void e(String str) {
        this.f2202a.c().h();
        this.E |= !le.d(this.f2206e, str);
        this.f2206e = str;
    }

    public final long f() {
        this.f2202a.c().h();
        return this.p;
    }

    public final void f(long j) {
        this.f2202a.c().h();
        this.E |= this.u != j;
        this.u = j;
    }

    public final void f(String str) {
        this.f2202a.c().h();
        this.E |= !le.d(this.f2207f, str);
        this.f2207f = str;
    }

    public final void g(long j) {
        com.google.android.gms.common.internal.r.a(j >= 0);
        this.f2202a.c().h();
        this.E = (this.g != j) | this.E;
        this.g = j;
    }

    public final void g(String str) {
        this.f2202a.c().h();
        this.E |= !le.d(this.j, str);
        this.j = str;
    }

    public final boolean g() {
        this.f2202a.c().h();
        return this.q;
    }

    public final void h(long j) {
        this.f2202a.c().h();
        this.E |= this.F != j;
        this.F = j;
    }

    public final void h(String str) {
        this.f2202a.c().h();
        this.E |= !le.d(this.l, str);
        this.l = str;
    }

    public final boolean h() {
        this.f2202a.c().h();
        return this.r;
    }

    public final Boolean i() {
        this.f2202a.c().h();
        return this.t;
    }

    public final void i(long j) {
        this.f2202a.c().h();
        this.E |= this.G != j;
        this.G = j;
    }

    public final void i(String str) {
        this.f2202a.c().h();
        this.E |= !le.d(this.D, str);
        this.D = str;
    }

    public final List<String> j() {
        this.f2202a.c().h();
        return this.v;
    }

    public final void j(long j) {
        this.f2202a.c().h();
        this.E |= this.x != j;
        this.x = j;
    }

    public final void k() {
        this.f2202a.c().h();
        this.E = false;
    }

    public final void k(long j) {
        this.f2202a.c().h();
        this.E |= this.y != j;
        this.y = j;
    }

    public final String l() {
        this.f2202a.c().h();
        return this.f2203b;
    }

    public final void l(long j) {
        this.f2202a.c().h();
        this.E |= this.z != j;
        this.z = j;
    }

    public final String m() {
        this.f2202a.c().h();
        return this.f2204c;
    }

    public final void m(long j) {
        this.f2202a.c().h();
        this.E |= this.A != j;
        this.A = j;
    }

    public final String n() {
        this.f2202a.c().h();
        return this.f2205d;
    }

    public final void n(long j) {
        this.f2202a.c().h();
        this.E |= this.C != j;
        this.C = j;
    }

    public final String o() {
        this.f2202a.c().h();
        return this.s;
    }

    public final void o(long j) {
        this.f2202a.c().h();
        this.E |= this.B != j;
        this.B = j;
    }

    public final String p() {
        this.f2202a.c().h();
        return this.w;
    }

    public final void p(long j) {
        this.f2202a.c().h();
        this.E |= this.p != j;
        this.p = j;
    }

    public final String q() {
        this.f2202a.c().h();
        return this.f2206e;
    }

    public final String r() {
        this.f2202a.c().h();
        return this.f2207f;
    }

    public final long s() {
        this.f2202a.c().h();
        return this.h;
    }

    public final long t() {
        this.f2202a.c().h();
        return this.i;
    }

    public final String u() {
        this.f2202a.c().h();
        return this.j;
    }

    public final long v() {
        this.f2202a.c().h();
        return this.k;
    }

    public final String w() {
        this.f2202a.c().h();
        return this.l;
    }

    public final long x() {
        this.f2202a.c().h();
        return this.m;
    }

    public final long y() {
        this.f2202a.c().h();
        return this.n;
    }

    public final long z() {
        this.f2202a.c().h();
        return this.u;
    }
}
