package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.bf, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0096bf implements Ia<InterfaceC0124ff> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static C0096bf f1654a = new C0096bf();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<InterfaceC0124ff> f1655b;

    public C0096bf() {
        this(Ma.a(new C0110df()));
    }

    private C0096bf(Ia<InterfaceC0124ff> ia) {
        this.f1655b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((InterfaceC0124ff) f1654a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ InterfaceC0124ff h() {
        return this.f1655b.h();
    }
}
