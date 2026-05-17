package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.of, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0186of implements Ia<rf> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static C0186of f1771a = new C0186of();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<rf> f1772b;

    public C0186of() {
        this(Ma.a(new qf()));
    }

    private C0186of(Ia<rf> ia) {
        this.f1772b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((rf) f1771a.h()).h();
    }

    public static boolean b() {
        return ((rf) f1771a.h()).m();
    }

    public static boolean c() {
        return ((rf) f1771a.h()).x();
    }

    public static boolean d() {
        return ((rf) f1771a.h()).y();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ rf h() {
        return this.f1772b.h();
    }
}
