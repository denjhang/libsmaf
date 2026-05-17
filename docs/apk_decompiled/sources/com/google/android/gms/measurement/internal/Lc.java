package com.google.android.gms.measurement.internal;

import android.os.Bundle;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Lc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ Bundle f2025a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Gc f2026b;

    Lc(Gc gc, Bundle bundle) {
        this.f2026b = gc;
        this.f2025a = bundle;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2026b.c(this.f2025a);
    }
}
