package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Pd implements Qd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1555a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final AbstractC0217ua<Long> f1556b;

    static {
        Aa aa = new Aa(C0223va.a("com.google.android.gms.measurement"));
        f1555a = aa.a("measurement.service.disable_install_state_reporting", false);
        f1556b = aa.a("measurement.id.service.disable_install_state_reporting", 0L);
    }

    @Override // com.google.android.gms.internal.measurement.Qd
    public final boolean h() {
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.Qd
    public final boolean m() {
        return f1555a.c().booleanValue();
    }
}
