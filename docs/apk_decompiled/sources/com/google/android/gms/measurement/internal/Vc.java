package com.google.android.gms.measurement.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Vc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ long f2125a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Gc f2126b;

    Vc(Gc gc, long j) {
        this.f2126b = gc;
        this.f2125a = j;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2126b.l().q.a(this.f2125a);
        this.f2126b.d().A().a("Minimum session duration set", Long.valueOf(this.f2125a));
    }
}
