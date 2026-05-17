package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Ve implements Ia<Ue> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Ve f1587a = new Ve();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<Ue> f1588b;

    public Ve() {
        this(Ma.a(new Xe()));
    }

    private Ve(Ia<Ue> ia) {
        this.f1588b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((Ue) f1587a.h()).h();
    }

    public static double b() {
        return ((Ue) f1587a.h()).m();
    }

    public static long c() {
        return ((Ue) f1587a.h()).x();
    }

    public static long d() {
        return ((Ue) f1587a.h()).y();
    }

    public static String e() {
        return ((Ue) f1587a.h()).b();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ Ue h() {
        return this.f1588b.h();
    }
}
