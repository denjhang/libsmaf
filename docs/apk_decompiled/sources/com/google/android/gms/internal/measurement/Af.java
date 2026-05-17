package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Af implements Ia<Df> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Af f1398a = new Af();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<Df> f1399b;

    public Af() {
        this(Ma.a(new Cf()));
    }

    private Af(Ia<Df> ia) {
        this.f1399b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((Df) f1398a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ Df h() {
        return this.f1399b.h();
    }
}
