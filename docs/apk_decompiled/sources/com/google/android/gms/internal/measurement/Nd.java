package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Nd implements Ia<Qd> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Nd f1538a = new Nd();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<Qd> f1539b;

    public Nd() {
        this(Ma.a(new Pd()));
    }

    private Nd(Ia<Qd> ia) {
        this.f1539b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((Qd) f1538a.h()).h();
    }

    public static boolean b() {
        return ((Qd) f1538a.h()).m();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ Qd h() {
        return this.f1539b.h();
    }
}
