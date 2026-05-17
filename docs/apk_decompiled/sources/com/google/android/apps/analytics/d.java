package com.google.android.apps.analytics;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final long f935a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final String f936b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int f937c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f938d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private int f939e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private int f940f;
    private int g;
    private int h;
    private int i;
    private boolean j;
    private boolean k;
    final String l;
    final String m;
    final String n;
    final String o;
    final int p;
    final int q;
    final int r;
    c s;
    private l t;
    private h u;

    d(long j, String str, int i, int i2, int i3, int i4, int i5, String str2, String str3, String str4, String str5, int i6, int i7, int i8) {
        this.f935a = j;
        this.f936b = str;
        this.f937c = i;
        this.f939e = i2;
        this.f940f = i3;
        this.g = i4;
        this.h = i5;
        this.l = str2;
        this.m = str3;
        this.n = str4;
        this.o = str5;
        this.p = i6;
        this.r = i8;
        this.q = i7;
        this.i = -1;
        this.k = false;
    }

    d(d dVar, String str) {
        this(dVar.f935a, str, dVar.f937c, dVar.f939e, dVar.f940f, dVar.g, dVar.h, dVar.l, dVar.m, dVar.n, dVar.o, dVar.p, dVar.q, dVar.r);
        this.f938d = dVar.f938d;
        this.i = dVar.i;
        this.j = dVar.j;
        this.k = dVar.k;
        this.s = dVar.s;
        this.t = dVar.t;
        this.u = dVar.u;
    }

    int a() {
        return this.f938d;
    }

    void a(int i) {
        this.f937c = i;
    }

    public void a(c cVar) {
        this.s = cVar;
    }

    public void a(h hVar) {
        if (this.m.equals("__##GOOGLEITEM##__")) {
            this.u = hVar;
            return;
        }
        throw new IllegalStateException("Attempted to add an item to an event of type " + this.m);
    }

    public void a(l lVar) {
        if (this.m.equals("__##GOOGLETRANSACTION##__")) {
            this.t = lVar;
            return;
        }
        throw new IllegalStateException("Attempted to add a transction to an event of type " + this.m);
    }

    void a(boolean z) {
        this.j = z;
    }

    void b(int i) {
        this.g = i;
    }

    boolean b() {
        return this.j;
    }

    public c c() {
        return this.s;
    }

    void c(int i) {
        this.f939e = i;
    }

    public h d() {
        return this.u;
    }

    void d(int i) {
        this.f940f = i;
    }

    int e() {
        return this.f937c;
    }

    void e(int i) {
        this.i = i;
    }

    int f() {
        return this.g;
    }

    void f(int i) {
        this.h = i;
    }

    int g() {
        return this.f939e;
    }

    int h() {
        return this.f940f;
    }

    public l i() {
        return this.t;
    }

    boolean j() {
        return this.k;
    }

    int k() {
        return this.i;
    }

    int l() {
        return this.h;
    }

    public boolean m() {
        return this.f939e != -1;
    }

    public String toString() {
        return "id:" + this.f935a + " random:" + this.f937c + " timestampCurrent:" + this.g + " timestampPrevious:" + this.f940f + " timestampFirst:" + this.f939e + " visits:" + this.h + " value:" + this.p + " category:" + this.m + " action:" + this.n + " label:" + this.o + " width:" + this.q + " height:" + this.r;
    }
}
