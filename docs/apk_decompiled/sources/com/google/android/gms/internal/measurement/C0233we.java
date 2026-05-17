package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.we, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0233we implements Ia<InterfaceC0227ve> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static C0233we f1857a = new C0233we();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<InterfaceC0227ve> f1858b;

    public C0233we() {
        this(Ma.a(new C0245ye()));
    }

    private C0233we(Ia<InterfaceC0227ve> ia) {
        this.f1858b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((InterfaceC0227ve) f1857a.h()).h();
    }

    public static boolean b() {
        return ((InterfaceC0227ve) f1857a.h()).m();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ InterfaceC0227ve h() {
        return this.f1858b.h();
    }
}
