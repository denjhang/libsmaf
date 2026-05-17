package com.google.android.gms.measurement.internal;

import com.google.android.gms.internal.measurement.Ef;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.be, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0263be implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ Ef f2190a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ String f2191b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ String f2192c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ boolean f2193d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ AppMeasurementDynamiteService f2194e;

    RunnableC0263be(AppMeasurementDynamiteService appMeasurementDynamiteService, Ef ef, String str, String str2, boolean z) {
        this.f2194e = appMeasurementDynamiteService;
        this.f2190a = ef;
        this.f2191b = str;
        this.f2192c = str2;
        this.f2193d = z;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2194e.f1910a.E().a(this.f2190a, this.f2191b, this.f2192c, this.f2193d);
    }
}
