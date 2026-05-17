package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Hd implements Ia<Kd> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Hd f1469a = new Hd();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<Kd> f1470b;

    public Hd() {
        this(Ma.a(new Jd()));
    }

    private Hd(Ia<Kd> ia) {
        this.f1470b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((Kd) f1469a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ Kd h() {
        return this.f1470b.h();
    }
}
