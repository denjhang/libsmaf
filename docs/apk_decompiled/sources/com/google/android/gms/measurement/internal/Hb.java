package com.google.android.gms.measurement.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Hb implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ boolean f1981a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Ib f1982b;

    Hb(Ib ib, boolean z) {
        this.f1982b = ib;
        this.f1981a = z;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f1982b.f1992a.a(this.f1981a);
    }
}
