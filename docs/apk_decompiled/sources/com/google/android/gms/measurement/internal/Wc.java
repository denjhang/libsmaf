package com.google.android.gms.measurement.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Wc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ boolean f2131a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Gc f2132b;

    Wc(Gc gc, boolean z) {
        this.f2132b = gc;
        this.f2131a = z;
    }

    @Override // java.lang.Runnable
    public final void run() {
        boolean zH = this.f2132b.f2438a.h();
        boolean zB = this.f2132b.f2438a.b();
        this.f2132b.f2438a.a(this.f2131a);
        if (zB == this.f2131a) {
            this.f2132b.f2438a.d().B().a("Default data collection state already set to", Boolean.valueOf(this.f2131a));
        }
        if (this.f2132b.f2438a.h() == zH || this.f2132b.f2438a.h() != this.f2132b.f2438a.b()) {
            this.f2132b.f2438a.d().y().a("Default data collection is different than actual status", Boolean.valueOf(this.f2131a), Boolean.valueOf(zH));
        }
        this.f2132b.M();
    }
}
