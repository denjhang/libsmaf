package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.re, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0203re implements Ia<InterfaceC0221ue> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static C0203re f1802a = new C0203re();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<InterfaceC0221ue> f1803b;

    public C0203re() {
        this(Ma.a(new C0215te()));
    }

    private C0203re(Ia<InterfaceC0221ue> ia) {
        this.f1803b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((InterfaceC0221ue) f1802a.h()).h();
    }

    public static boolean b() {
        return ((InterfaceC0221ue) f1802a.h()).m();
    }

    public static boolean c() {
        return ((InterfaceC0221ue) f1802a.h()).x();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ InterfaceC0221ue h() {
        return this.f1803b.h();
    }
}
