package com.google.android.gms.measurement.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Pd implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ long f2076a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Nd f2077b;

    Pd(Nd nd, long j) {
        this.f2077b = nd;
        this.f2076a = j;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2077b.b(this.f2076a);
    }
}
