package com.google.android.gms.measurement.internal;

import com.google.android.gms.internal.measurement.Ef;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class pe implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ Ef f2379a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ AppMeasurementDynamiteService f2380b;

    pe(AppMeasurementDynamiteService appMeasurementDynamiteService, Ef ef) {
        this.f2380b = appMeasurementDynamiteService;
        this.f2379a = ef;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2380b.f1910a.v().a(this.f2379a, this.f2380b.f1910a.b());
    }
}
