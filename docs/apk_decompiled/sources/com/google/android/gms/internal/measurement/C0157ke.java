package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ke, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0157ke implements Ia<InterfaceC0150je> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static C0157ke f1739a = new C0157ke();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<InterfaceC0150je> f1740b;

    public C0157ke() {
        this(Ma.a(new C0171me()));
    }

    private C0157ke(Ia<InterfaceC0150je> ia) {
        this.f1740b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((InterfaceC0150je) f1739a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ InterfaceC0150je h() {
        return this.f1740b.h();
    }
}
