package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class zf implements Ia<yf> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static zf f1884a = new zf();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<yf> f1885b;

    public zf() {
        this(Ma.a(new Bf()));
    }

    private zf(Ia<yf> ia) {
        this.f1885b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((yf) f1884a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ yf h() {
        return this.f1885b.h();
    }
}
