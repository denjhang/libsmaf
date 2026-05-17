package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.ba, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0259ba implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ long f2183a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ C0378z f2184b;

    RunnableC0259ba(C0378z c0378z, long j) {
        this.f2184b = c0378z;
        this.f2183a = j;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2184b.b(this.f2183a);
    }
}
