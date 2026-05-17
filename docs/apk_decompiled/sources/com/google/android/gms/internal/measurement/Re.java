package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Re implements Oe {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1569a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1570b;

    static {
        Aa aa = new Aa(C0223va.a("com.google.android.gms.measurement"));
        f1569a = aa.a("measurement.personalized_ads_signals_collection_enabled", true);
        f1570b = aa.a("measurement.personalized_ads_property_translation_enabled", true);
    }

    @Override // com.google.android.gms.internal.measurement.Oe
    public final boolean h() {
        return f1569a.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.Oe
    public final boolean m() {
        return f1570b.c().booleanValue();
    }
}
