package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Pe implements Ia<Oe> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Pe f1557a = new Pe();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<Oe> f1558b;

    public Pe() {
        this(Ma.a(new Re()));
    }

    private Pe(Ia<Oe> ia) {
        this.f1558b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((Oe) f1557a.h()).h();
    }

    public static boolean b() {
        return ((Oe) f1557a.h()).m();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ Oe h() {
        return this.f1558b.h();
    }
}
