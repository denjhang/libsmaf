package com.google.android.gms.measurement.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Tc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ boolean f2107a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Gc f2108b;

    Tc(Gc gc, boolean z) {
        this.f2108b = gc;
        this.f2107a = z;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2108b.c(this.f2107a);
    }
}
