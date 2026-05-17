package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ud, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0220ud implements Ia<InterfaceC0238xd> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static C0220ud f1838a = new C0220ud();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<InterfaceC0238xd> f1839b;

    public C0220ud() {
        this(Ma.a(new C0232wd()));
    }

    private C0220ud(Ia<InterfaceC0238xd> ia) {
        this.f1839b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((InterfaceC0238xd) f1838a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ InterfaceC0238xd h() {
        return this.f1839b.h();
    }
}
