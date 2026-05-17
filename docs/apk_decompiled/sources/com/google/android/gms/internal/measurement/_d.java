package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class _d implements Xd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1624a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final AbstractC0217ua<Long> f1625b;

    static {
        Aa aa = new Aa(C0223va.a("com.google.android.gms.measurement"));
        f1624a = aa.a("measurement.upload_dsid_enabled", false);
        f1625b = aa.a("measurement.id.upload_dsid_enabled", 0L);
    }

    @Override // com.google.android.gms.internal.measurement.Xd
    public final boolean h() {
        return f1624a.c().booleanValue();
    }
}
