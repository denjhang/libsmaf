package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.le, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0164le implements Ia<InterfaceC0185oe> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static C0164le f1749a = new C0164le();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<InterfaceC0185oe> f1750b;

    public C0164le() {
        this(Ma.a(new C0178ne()));
    }

    private C0164le(Ia<InterfaceC0185oe> ia) {
        this.f1750b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((InterfaceC0185oe) f1749a.h()).h();
    }

    public static boolean b() {
        return ((InterfaceC0185oe) f1749a.h()).m();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ InterfaceC0185oe h() {
        return this.f1750b.h();
    }
}
