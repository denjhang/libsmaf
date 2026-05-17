package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Je implements Ia<Ie> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Je f1491a = new Je();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<Ie> f1492b;

    public Je() {
        this(Ma.a(new Le()));
    }

    private Je(Ia<Ie> ia) {
        this.f1492b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((Ie) f1491a.h()).h();
    }

    public static boolean b() {
        return ((Ie) f1491a.h()).m();
    }

    public static boolean c() {
        return ((Ie) f1491a.h()).x();
    }

    public static boolean d() {
        return ((Ie) f1491a.h()).y();
    }

    public static boolean e() {
        return ((Ie) f1491a.h()).b();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ Ie h() {
        return this.f1492b.h();
    }
}
