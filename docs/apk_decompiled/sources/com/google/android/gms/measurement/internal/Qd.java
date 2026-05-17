package com.google.android.gms.measurement.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Qd implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ long f2083a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Nd f2084b;

    Qd(Nd nd, long j) {
        this.f2084b = nd;
        this.f2083a = j;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2084b.a(this.f2083a);
    }
}
