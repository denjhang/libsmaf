package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.zd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0250zd implements Ia<InterfaceC0244yd> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static C0250zd f1881a = new C0250zd();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<InterfaceC0244yd> f1882b;

    public C0250zd() {
        this(Ma.a(new Bd()));
    }

    private C0250zd(Ia<InterfaceC0244yd> ia) {
        this.f1882b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((InterfaceC0244yd) f1881a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ InterfaceC0244yd h() {
        return this.f1882b.h();
    }
}
