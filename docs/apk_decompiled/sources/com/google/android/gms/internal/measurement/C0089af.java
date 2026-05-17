package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.af, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0089af implements Ia<_e> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static C0089af f1636a = new C0089af();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<_e> f1637b;

    public C0089af() {
        this(Ma.a(new C0103cf()));
    }

    private C0089af(Ia<_e> ia) {
        this.f1637b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((_e) f1636a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ _e h() {
        return this.f1637b.h();
    }
}
