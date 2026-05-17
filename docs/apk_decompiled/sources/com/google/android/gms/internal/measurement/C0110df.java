package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.df, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0110df implements InterfaceC0124ff {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1673a = new Aa(C0223va.a("com.google.android.gms.measurement")).a("measurement.reset_analytics.persist_time", true);

    @Override // com.google.android.gms.internal.measurement.InterfaceC0124ff
    public final boolean h() {
        return f1673a.c().booleanValue();
    }
}
