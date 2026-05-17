package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.a, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0252a implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ String f2173a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ long f2174b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ C0378z f2175c;

    RunnableC0252a(C0378z c0378z, String str, long j) {
        this.f2175c = c0378z;
        this.f2173a = str;
        this.f2174b = j;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2175c.c(this.f2173a, this.f2174b);
    }
}
