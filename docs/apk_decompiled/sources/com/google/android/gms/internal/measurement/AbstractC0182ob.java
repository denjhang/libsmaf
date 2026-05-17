package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ob, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class AbstractC0182ob {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int f1766a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f1767b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private boolean f1768c;

    private AbstractC0182ob() {
        this.f1766a = 100;
        this.f1767b = Integer.MAX_VALUE;
        this.f1768c = false;
    }

    public static int a(int i) {
        return (-(i & 1)) ^ (i >>> 1);
    }

    public static long a(long j) {
        return (-(j & 1)) ^ (j >>> 1);
    }

    static AbstractC0182ob a(byte[] bArr, int i, int i2, boolean z) {
        C0195qb c0195qb = new C0195qb(bArr, 0, i2, false);
        try {
            c0195qb.b(i2);
            return c0195qb;
        } catch (Ub e2) {
            throw new IllegalArgumentException(e2);
        }
    }
}
