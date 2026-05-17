package com.google.android.gms.measurement.internal;

import android.content.ComponentName;
import android.content.Context;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Id implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ Ed f1997a;

    Id(Ed ed) {
        this.f1997a = ed;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C0318md c0318md = this.f1997a.f1953c;
        Context contextE = c0318md.e();
        this.f1997a.f1953c.f();
        c0318md.a(new ComponentName(contextE, "com.google.android.gms.measurement.AppMeasurementService"));
    }
}
