package com.google.android.gms.measurement.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Ld implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ ee f2027a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Runnable f2028b;

    Ld(Kd kd, ee eeVar, Runnable runnable) {
        this.f2027a = eeVar;
        this.f2028b = runnable;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2027a.r();
        this.f2027a.a(this.f2028b);
        this.f2027a.q();
    }
}
