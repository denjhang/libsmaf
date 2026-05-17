package com.google.android.gms.measurement.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Yc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ long f2149a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Gc f2150b;

    Yc(Gc gc, long j) {
        this.f2150b = gc;
        this.f2149a = j;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2150b.l().r.a(this.f2149a);
        this.f2150b.d().A().a("Session timeout duration set", Long.valueOf(this.f2149a));
    }
}
