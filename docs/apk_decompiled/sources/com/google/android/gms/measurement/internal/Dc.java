package com.google.android.gms.measurement.internal;

import com.google.android.gms.internal.measurement.Ef;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Dc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ Ef f1943a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ zzan f1944b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ String f1945c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ AppMeasurementDynamiteService f1946d;

    Dc(AppMeasurementDynamiteService appMeasurementDynamiteService, Ef ef, zzan zzanVar, String str) {
        this.f1946d = appMeasurementDynamiteService;
        this.f1943a = ef;
        this.f1944b = zzanVar;
        this.f1945c = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f1946d.f1910a.E().a(this.f1943a, this.f1944b, this.f1945c);
    }
}
