package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ye, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0245ye implements InterfaceC0227ve {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1877a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1878b;

    static {
        Aa aa = new Aa(C0223va.a("com.google.android.gms.measurement"));
        f1877a = aa.a("measurement.collection.efficient_engagement_reporting_enabled", false);
        f1878b = aa.a("measurement.collection.redundant_engagement_removal_enabled", false);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0227ve
    public final boolean h() {
        return f1877a.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0227ve
    public final boolean m() {
        return f1878b.c().booleanValue();
    }
}
