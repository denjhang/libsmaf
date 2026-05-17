package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ne, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0178ne implements InterfaceC0185oe {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1758a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final AbstractC0217ua<Long> f1759b;

    static {
        Aa aa = new Aa(C0223va.a("com.google.android.gms.measurement"));
        f1758a = aa.a("measurement.service.fix_gmp_version", false);
        f1759b = aa.a("measurement.id.service.fix_gmp_version", 0L);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0185oe
    public final boolean h() {
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0185oe
    public final boolean m() {
        return f1758a.c().booleanValue();
    }
}
