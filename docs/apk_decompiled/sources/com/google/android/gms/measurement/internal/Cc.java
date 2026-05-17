package com.google.android.gms.measurement.internal;

import android.content.Context;
import android.os.Bundle;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Cc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final Context f1929a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    String f1930b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    String f1931c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    String f1932d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    Boolean f1933e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    long f1934f;
    com.google.android.gms.internal.measurement.zzv g;
    boolean h;

    public Cc(Context context, com.google.android.gms.internal.measurement.zzv zzvVar) {
        this.h = true;
        com.google.android.gms.common.internal.r.a(context);
        Context applicationContext = context.getApplicationContext();
        com.google.android.gms.common.internal.r.a(applicationContext);
        this.f1929a = applicationContext;
        if (zzvVar != null) {
            this.g = zzvVar;
            this.f1930b = zzvVar.f1891f;
            this.f1931c = zzvVar.f1890e;
            this.f1932d = zzvVar.f1889d;
            this.h = zzvVar.f1888c;
            this.f1934f = zzvVar.f1887b;
            Bundle bundle = zzvVar.g;
            if (bundle != null) {
                this.f1933e = Boolean.valueOf(bundle.getBoolean("dataCollectionDefaultEnabled", true));
            }
        }
    }
}
