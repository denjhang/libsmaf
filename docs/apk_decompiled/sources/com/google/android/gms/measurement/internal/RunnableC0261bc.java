package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.bc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0261bc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ Cc f2186a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ _b f2187b;

    RunnableC0261bc(_b _bVar, Cc cc) {
        this.f2187b = _bVar;
        this.f2186a = cc;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2187b.a(this.f2186a);
        this.f2187b.a();
    }
}
