package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.qe, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0198qe implements Ia<InterfaceC0192pe> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static C0198qe f1794a = new C0198qe();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<InterfaceC0192pe> f1795b;

    public C0198qe() {
        this(Ma.a(new C0209se()));
    }

    private C0198qe(Ia<InterfaceC0192pe> ia) {
        this.f1795b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((InterfaceC0192pe) f1794a.h()).h();
    }

    public static boolean b() {
        return ((InterfaceC0192pe) f1794a.h()).m();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ InterfaceC0192pe h() {
        return this.f1795b.h();
    }
}
