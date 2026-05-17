package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Ce implements Ia<Be> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Ce f1422a = new Ce();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<Be> f1423b;

    public Ce() {
        this(Ma.a(new Fe()));
    }

    private Ce(Ia<Be> ia) {
        this.f1423b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((Be) f1422a.h()).h();
    }

    public static boolean b() {
        return ((Be) f1422a.h()).m();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ Be h() {
        return this.f1423b.h();
    }
}
