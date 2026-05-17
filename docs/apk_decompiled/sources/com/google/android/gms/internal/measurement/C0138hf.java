package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.hf, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0138hf implements Ia<InterfaceC0131gf> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static C0138hf f1720a = new C0138hf();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<InterfaceC0131gf> f1721b;

    public C0138hf() {
        this(Ma.a(new C0151jf()));
    }

    private C0138hf(Ia<InterfaceC0131gf> ia) {
        this.f1721b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((InterfaceC0131gf) f1720a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ InterfaceC0131gf h() {
        return this.f1721b.h();
    }
}
