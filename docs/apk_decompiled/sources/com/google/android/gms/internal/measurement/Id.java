package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Id implements Fd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1474a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final AbstractC0217ua<Long> f1475b;

    static {
        Aa aa = new Aa(C0223va.a("com.google.android.gms.measurement"));
        f1474a = aa.a("measurement.app_launch.event_ordering_fix", false);
        f1475b = aa.a("measurement.id.app_launch.event_ordering_fix", 0L);
    }

    @Override // com.google.android.gms.internal.measurement.Fd
    public final boolean h() {
        return f1474a.c().booleanValue();
    }
}
