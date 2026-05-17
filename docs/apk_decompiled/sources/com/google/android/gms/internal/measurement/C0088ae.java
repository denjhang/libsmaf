package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ae, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0088ae implements InterfaceC0095be {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1632a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1633b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1634c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static final AbstractC0217ua<Long> f1635d;

    static {
        Aa aa = new Aa(C0223va.a("com.google.android.gms.measurement"));
        f1632a = aa.a("measurement.sdk.dynamite.allow_remote_dynamite", false);
        f1633b = aa.a("measurement.collection.init_params_control_enabled", true);
        f1634c = aa.a("measurement.sdk.dynamite.use_dynamite2", false);
        f1635d = aa.a("measurement.id.sdk.dynamite.use_dynamite", 0L);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0095be
    public final boolean h() {
        return f1632a.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0095be
    public final boolean m() {
        return f1633b.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0095be
    public final boolean x() {
        return f1634c.c().booleanValue();
    }
}
