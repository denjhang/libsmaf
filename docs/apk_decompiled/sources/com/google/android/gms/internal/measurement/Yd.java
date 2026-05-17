package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Yd implements Ia<Xd> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Yd f1611a = new Yd();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<Xd> f1612b;

    public Yd() {
        this(Ma.a(new _d()));
    }

    private Yd(Ia<Xd> ia) {
        this.f1612b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((Xd) f1611a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ Xd h() {
        return this.f1612b.h();
    }
}
