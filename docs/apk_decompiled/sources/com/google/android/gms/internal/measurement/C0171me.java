package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.me, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0171me implements InterfaceC0150je {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1755a = new Aa(C0223va.a("com.google.android.gms.measurement")).a("measurement.service.audience.invalidate_config_cache_after_app_unisntall", true);

    @Override // com.google.android.gms.internal.measurement.InterfaceC0150je
    public final boolean h() {
        return f1755a.c().booleanValue();
    }
}
