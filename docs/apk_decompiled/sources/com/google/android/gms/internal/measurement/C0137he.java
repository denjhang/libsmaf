package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.he, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0137he implements InterfaceC0144ie {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1719a = new Aa(C0223va.a("com.google.android.gms.measurement")).a("measurement.client.firebase_feature_rollout.v1.enable", true);

    @Override // com.google.android.gms.internal.measurement.InterfaceC0144ie
    public final boolean h() {
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0144ie
    public final boolean m() {
        return f1719a.c().booleanValue();
    }
}
