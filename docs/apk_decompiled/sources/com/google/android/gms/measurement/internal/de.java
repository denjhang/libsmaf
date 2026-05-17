package com.google.android.gms.measurement.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class de implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ je f2221a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ ee f2222b;

    de(ee eeVar, je jeVar) {
        this.f2222b = eeVar;
        this.f2221a = jeVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2222b.a(this.f2221a);
        this.f2222b.a();
    }
}
