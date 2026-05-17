package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Td implements Ia<Wd> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Td f1578a = new Td();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<Wd> f1579b;

    public Td() {
        this(Ma.a(new Vd()));
    }

    private Td(Ia<Wd> ia) {
        this.f1579b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((Wd) f1578a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ Wd h() {
        return this.f1579b.h();
    }
}
