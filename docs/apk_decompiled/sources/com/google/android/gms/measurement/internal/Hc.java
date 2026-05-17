package com.google.android.gms.measurement.internal;

import android.os.Bundle;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Hc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ String f1983a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ String f1984b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ long f1985c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ Bundle f1986d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ boolean f1987e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ boolean f1988f;
    private final /* synthetic */ boolean g;
    private final /* synthetic */ String h;
    private final /* synthetic */ Gc i;

    Hc(Gc gc, String str, String str2, long j, Bundle bundle, boolean z, boolean z2, boolean z3, String str3) {
        this.i = gc;
        this.f1983a = str;
        this.f1984b = str2;
        this.f1985c = j;
        this.f1986d = bundle;
        this.f1987e = z;
        this.f1988f = z2;
        this.g = z3;
        this.h = str3;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.i.a(this.f1983a, this.f1984b, this.f1985c, this.f1986d, this.f1987e, this.f1988f, this.g, this.h);
    }
}
