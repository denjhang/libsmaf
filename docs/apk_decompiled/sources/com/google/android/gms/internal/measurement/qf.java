package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class qf implements rf {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1796a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1797b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1798c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1799d;

    static {
        Aa aa = new Aa(C0223va.a("com.google.android.gms.measurement"));
        f1796a = aa.a("measurement.client.sessions.background_sessions_enabled", true);
        f1797b = aa.a("measurement.client.sessions.immediate_start_enabled_foreground", true);
        f1798c = aa.a("measurement.client.sessions.remove_expired_session_properties_enabled", true);
        f1799d = aa.a("measurement.client.sessions.session_id_enabled", true);
    }

    @Override // com.google.android.gms.internal.measurement.rf
    public final boolean h() {
        return f1796a.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.rf
    public final boolean m() {
        return f1797b.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.rf
    public final boolean x() {
        return f1798c.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.rf
    public final boolean y() {
        return f1799d.c().booleanValue();
    }
}
