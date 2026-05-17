package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class uf implements Ia<xf> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static uf f1840a = new uf();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Ia<xf> f1841b;

    public uf() {
        this(Ma.a(new wf()));
    }

    private uf(Ia<xf> ia) {
        this.f1841b = Ma.a((Ia) ia);
    }

    public static boolean a() {
        return ((xf) f1840a.h()).h();
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final /* synthetic */ xf h() {
        return this.f1841b.h();
    }
}
