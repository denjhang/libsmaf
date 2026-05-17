package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Ad implements Ia<Ed> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Ad f1396a = new Ad();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<Ed> f1397b;

    public Ad() {
        this(Ma.a(new Cd()));
    }

    private Ad(Ia<Ed> ia) {
        this.f1397b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((Ed) f1396a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ Ed h() {
        return this.f1397b.h();
    }
}
