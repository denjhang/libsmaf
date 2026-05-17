package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.te, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0215te implements InterfaceC0221ue {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1823a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1824b;

    static {
        Aa aa = new Aa(C0223va.a("com.google.android.gms.measurement"));
        f1823a = aa.a("measurement.client.sessions.check_on_startup", true);
        f1824b = aa.a("measurement.client.sessions.start_session_before_view_screen", true);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0221ue
    public final boolean h() {
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0221ue
    public final boolean m() {
        return f1823a.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0221ue
    public final boolean x() {
        return f1824b.c().booleanValue();
    }
}
