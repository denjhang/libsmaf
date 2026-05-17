package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Sd implements Ia<Rd> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Sd f1573a = new Sd();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<Rd> f1574b;

    public Sd() {
        this(Ma.a(new Ud()));
    }

    private Sd(Ia<Rd> ia) {
        this.f1574b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((Rd) f1573a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ Rd h() {
        return this.f1574b.h();
    }
}
