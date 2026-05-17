package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ee, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0116ee implements Ia<InterfaceC0102ce> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static C0116ee f1689a = new C0116ee();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<InterfaceC0102ce> f1690b;

    public C0116ee() {
        this(Ma.a(new C0130ge()));
    }

    private C0116ee(Ia<InterfaceC0102ce> ia) {
        this.f1690b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((InterfaceC0102ce) f1689a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ InterfaceC0102ce h() {
        return this.f1690b.h();
    }
}
