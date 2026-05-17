package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class We implements Ia<Ze> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static We f1600a = new We();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<Ze> f1601b;

    public We() {
        this(Ma.a(new Ye()));
    }

    private We(Ia<Ze> ia) {
        this.f1601b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((Ze) f1600a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ Ze h() {
        return this.f1601b.h();
    }
}
