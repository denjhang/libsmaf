package com.google.android.gms.measurement.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Mc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ Ac f2036a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Gc f2037b;

    Mc(Gc gc, Ac ac) {
        this.f2037b = gc;
        this.f2036a = ac;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2037b.a(this.f2036a);
    }
}
