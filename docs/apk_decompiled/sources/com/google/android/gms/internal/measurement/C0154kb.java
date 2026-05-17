package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.kb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0154kb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final AbstractC0212tb f1737a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final byte[] f1738b;

    private C0154kb(int i) {
        this.f1738b = new byte[i];
        this.f1737a = AbstractC0212tb.a(this.f1738b);
    }

    /* synthetic */ C0154kb(int i, C0120fb c0120fb) {
        this(i);
    }

    public final AbstractC0099cb a() {
        this.f1737a.b();
        return new C0168mb(this.f1738b);
    }

    public final AbstractC0212tb b() {
        return this.f1737a;
    }
}
