package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Me implements Ne {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1521a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1522b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1523c;

    static {
        Aa aa = new Aa(C0223va.a("com.google.android.gms.measurement"));
        f1521a = aa.a("measurement.lifecycle.app_backgrounded_engagement", false);
        f1522b = aa.a("measurement.lifecycle.app_backgrounded_tracking", false);
        f1523c = aa.a("measurement.lifecycle.app_in_background_parameter", false);
    }

    @Override // com.google.android.gms.internal.measurement.Ne
    public final boolean h() {
        return f1521a.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ne
    public final boolean m() {
        return f1522b.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ne
    public final boolean x() {
        return f1523c.c().booleanValue();
    }
}
