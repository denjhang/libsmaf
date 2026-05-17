package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.fe, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0123fe implements Ia<InterfaceC0144ie> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static C0123fe f1704a = new C0123fe();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<InterfaceC0144ie> f1705b;

    public C0123fe() {
        this(Ma.a(new C0137he()));
    }

    private C0123fe(Ia<InterfaceC0144ie> ia) {
        this.f1705b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((InterfaceC0144ie) f1704a.h()).h();
    }

    public static boolean b() {
        return ((InterfaceC0144ie) f1704a.h()).m();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ InterfaceC0144ie h() {
        return this.f1705b.h();
    }
}
