package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.nf, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0179nf implements Ia<InterfaceC0172mf> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static C0179nf f1760a = new C0179nf();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<InterfaceC0172mf> f1761b;

    public C0179nf() {
        this(Ma.a(new pf()));
    }

    private C0179nf(Ia<InterfaceC0172mf> ia) {
        this.f1761b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((InterfaceC0172mf) f1760a.h()).h();
    }

    public static boolean b() {
        return ((InterfaceC0172mf) f1760a.h()).m();
    }

    public static boolean c() {
        return ((InterfaceC0172mf) f1760a.h()).x();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ InterfaceC0172mf h() {
        return this.f1761b.h();
    }
}
