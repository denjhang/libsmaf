package com.google.android.gms.measurement.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Ca implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ String f1926a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ long f1927b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ C0378z f1928c;

    Ca(C0378z c0378z, String str, long j) {
        this.f1928c = c0378z;
        this.f1926a = str;
        this.f1927b = j;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f1928c.d(this.f1926a, this.f1927b);
    }
}
