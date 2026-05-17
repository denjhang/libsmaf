package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Ke implements Ia<Ne> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Ke f1495a = new Ke();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<Ne> f1496b;

    public Ke() {
        this(Ma.a(new Me()));
    }

    private Ke(Ia<Ne> ia) {
        this.f1496b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((Ne) f1495a.h()).h();
    }

    public static boolean b() {
        return ((Ne) f1495a.h()).m();
    }

    public static boolean c() {
        return ((Ne) f1495a.h()).x();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ Ne h() {
        return this.f1496b.h();
    }
}
