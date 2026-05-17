package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.xe, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0239xe implements Ia<Ae> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static C0239xe f1869a = new C0239xe();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<Ae> f1870b;

    public C0239xe() {
        this(Ma.a(new C0251ze()));
    }

    private C0239xe(Ia<Ae> ia) {
        this.f1870b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((Ae) f1869a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ Ae h() {
        return this.f1870b.h();
    }
}
