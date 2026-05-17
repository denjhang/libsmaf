package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.qb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0195qb extends AbstractC0182ob {

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final byte[] f1791d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final boolean f1792e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private int f1793f;
    private int g;
    private int h;
    private int i;
    private int j;

    private C0195qb(byte[] bArr, int i, int i2, boolean z) {
        super();
        this.j = Integer.MAX_VALUE;
        this.f1791d = bArr;
        this.f1793f = i2 + i;
        this.h = i;
        this.i = this.h;
        this.f1792e = z;
    }

    private final void b() {
        this.f1793f += this.g;
        int i = this.f1793f;
        int i2 = i - this.i;
        int i3 = this.j;
        if (i2 <= i3) {
            this.g = 0;
        } else {
            this.g = i2 - i3;
            this.f1793f = i - this.g;
        }
    }

    public final int a() {
        return this.h - this.i;
    }

    public final int b(int i) {
        if (i < 0) {
            throw Ub.b();
        }
        int iA = i + a();
        int i2 = this.j;
        if (iA > i2) {
            throw Ub.a();
        }
        this.j = iA;
        b();
        return i2;
    }
}
