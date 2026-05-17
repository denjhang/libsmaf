package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Zd implements Ia<InterfaceC0095be> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Zd f1618a = new Zd();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<InterfaceC0095be> f1619b;

    public Zd() {
        this(Ma.a(new C0088ae()));
    }

    private Zd(Ia<InterfaceC0095be> ia) {
        this.f1619b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((InterfaceC0095be) f1618a.h()).h();
    }

    public static boolean b() {
        return ((InterfaceC0095be) f1618a.h()).m();
    }

    public static boolean c() {
        return ((InterfaceC0095be) f1618a.h()).x();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ InterfaceC0095be h() {
        return this.f1619b.h();
    }
}
