package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class pf implements InterfaceC0172mf {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1785a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1786b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1787c;

    static {
        Aa aa = new Aa(C0223va.a("com.google.android.gms.measurement"));
        f1785a = aa.a("measurement.service.sessions.remove_disabled_session_number", true);
        f1786b = aa.a("measurement.service.sessions.session_number_enabled", true);
        f1787c = aa.a("measurement.service.sessions.session_number_backfill_enabled", true);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0172mf
    public final boolean h() {
        return f1785a.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0172mf
    public final boolean m() {
        return f1786b.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0172mf
    public final boolean x() {
        return f1787c.c().booleanValue();
    }
}
