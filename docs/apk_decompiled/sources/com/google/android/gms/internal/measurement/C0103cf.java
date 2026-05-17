package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.cf, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0103cf implements _e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1665a = new Aa(C0223va.a("com.google.android.gms.measurement")).a("measurement.experiment.enable_experiment_reporting", true);

    @Override // com.google.android.gms.internal.measurement._e
    public final boolean h() {
        return f1665a.c().booleanValue();
    }
}
