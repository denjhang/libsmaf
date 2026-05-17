package com.google.android.gms.measurement.internal;

import java.util.concurrent.Callable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class he implements Callable<String> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ zzm f2271a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ ee f2272b;

    he(ee eeVar, zzm zzmVar) {
        this.f2272b = eeVar;
        this.f2271a = zzmVar;
    }

    @Override // java.util.concurrent.Callable
    public final /* synthetic */ String call() {
        C0267cc c0267ccC = this.f2272b.c(this.f2271a);
        if (c0267ccC != null) {
            return c0267ccC.m();
        }
        this.f2272b.d().w().a("App info was null when attempting to get app instance id");
        return null;
    }
}
