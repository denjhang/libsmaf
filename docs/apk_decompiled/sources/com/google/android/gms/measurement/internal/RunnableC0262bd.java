package com.google.android.gms.measurement.internal;

import com.google.android.gms.internal.measurement.Ef;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.bd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0262bd implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ Ef f2188a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ AppMeasurementDynamiteService f2189b;

    RunnableC0262bd(AppMeasurementDynamiteService appMeasurementDynamiteService, Ef ef) {
        this.f2189b = appMeasurementDynamiteService;
        this.f2188a = ef;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2189b.f1910a.E().a(this.f2188a);
    }
}
