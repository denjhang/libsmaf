package com.google.android.gms.measurement.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Td {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private long f2109a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private long f2110b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final AbstractC0284g f2111c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ Nd f2112d;

    public Td(Nd nd) {
        this.f2112d = nd;
        this.f2111c = new Wd(this, this.f2112d.f2438a);
        this.f2109a = nd.g().b();
        this.f2110b = this.f2109a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void c() {
        this.f2112d.h();
        a(false, false);
        this.f2112d.o().a(this.f2112d.g().b());
    }

    final void a() {
        this.f2111c.c();
        this.f2109a = 0L;
        this.f2110b = this.f2109a;
    }

    final void a(long j) {
        this.f2112d.h();
        this.f2111c.c();
        this.f2109a = j;
        this.f2110b = this.f2109a;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x00bb  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final boolean a(boolean r9, boolean r10) {
        /*
            Method dump skipped, instruction units count: 264
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.Td.a(boolean, boolean):boolean");
    }

    final long b() {
        long jB = this.f2112d.g().b();
        long j = jB - this.f2110b;
        this.f2110b = jB;
        return j;
    }

    final void b(long j) {
        this.f2111c.c();
        if (this.f2109a != 0) {
            this.f2112d.l().x.a(this.f2112d.l().x.a() + (j - this.f2109a));
        }
    }
}
