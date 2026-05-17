package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class tf implements Ia<sf> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static tf f1825a = new tf();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<sf> f1826b;

    public tf() {
        this(Ma.a(new vf()));
    }

    private tf(Ia<sf> ia) {
        this.f1826b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((sf) f1825a.h()).h();
    }

    public static boolean b() {
        return ((sf) f1825a.h()).m();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ sf h() {
        return this.f1826b.h();
    }
}
