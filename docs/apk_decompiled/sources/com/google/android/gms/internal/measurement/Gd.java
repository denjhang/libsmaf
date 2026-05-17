package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Gd implements Ia<Fd> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Gd f1461a = new Gd();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<Fd> f1462b;

    public Gd() {
        this(Ma.a(new Id()));
    }

    private Gd(Ia<Fd> ia) {
        this.f1462b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((Fd) f1461a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ Fd h() {
        return this.f1462b.h();
    }
}
