package com.google.android.gms.measurement.internal;

import com.google.android.gms.internal.measurement.Ef;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Bd implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ Ef f1921a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ String f1922b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ String f1923c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ AppMeasurementDynamiteService f1924d;

    Bd(AppMeasurementDynamiteService appMeasurementDynamiteService, Ef ef, String str, String str2) {
        this.f1924d = appMeasurementDynamiteService;
        this.f1921a = ef;
        this.f1922b = str;
        this.f1923c = str2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f1924d.f1910a.E().a(this.f1921a, this.f1922b, this.f1923c);
    }
}
