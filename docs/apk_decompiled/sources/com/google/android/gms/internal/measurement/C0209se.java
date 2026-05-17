package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.se, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0209se implements InterfaceC0192pe {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1814a = new Aa(C0223va.a("com.google.android.gms.measurement")).a("measurement.service.use_appinfo_modified", false);

    @Override // com.google.android.gms.internal.measurement.InterfaceC0192pe
    public final boolean h() {
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0192pe
    public final boolean m() {
        return f1814a.c().booleanValue();
    }
}
