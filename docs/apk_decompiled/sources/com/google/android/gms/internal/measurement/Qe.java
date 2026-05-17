package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Qe implements Ia<Te> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Qe f1563a = new Qe();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<Te> f1564b;

    public Qe() {
        this(Ma.a(new Se()));
    }

    private Qe(Ia<Te> ia) {
        this.f1564b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((Te) f1563a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ Te h() {
        return this.f1564b.h();
    }
}
