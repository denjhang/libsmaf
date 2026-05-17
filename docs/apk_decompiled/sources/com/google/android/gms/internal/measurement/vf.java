package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class vf implements sf {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1846a = new Aa(C0223va.a("com.google.android.gms.measurement")).a("measurement.integration.disable_firebase_instance_id", false);

    @Override // com.google.android.gms.internal.measurement.sf
    public final boolean h() {
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.sf
    public final boolean m() {
        return f1846a.c().booleanValue();
    }
}
