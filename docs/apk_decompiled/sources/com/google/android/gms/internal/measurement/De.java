package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class De implements Ia<He> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static De f1434a = new De();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<He> f1435b;

    public De() {
        this(Ma.a(new Ge()));
    }

    private De(Ia<He> ia) {
        this.f1435b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((He) f1434a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ He h() {
        return this.f1435b.h();
    }
}
