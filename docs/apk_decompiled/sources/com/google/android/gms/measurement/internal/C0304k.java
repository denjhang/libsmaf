package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.k, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0304k {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final String f2298a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final String f2299b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final long f2300c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final long f2301d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final long f2302e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final long f2303f;
    final long g;
    final Long h;
    final Long i;
    final Long j;
    final Boolean k;

    C0304k(String str, String str2, long j, long j2, long j3, long j4, long j5, Long l, Long l2, Long l3, Boolean bool) {
        com.google.android.gms.common.internal.r.b(str);
        com.google.android.gms.common.internal.r.b(str2);
        com.google.android.gms.common.internal.r.a(j >= 0);
        com.google.android.gms.common.internal.r.a(j2 >= 0);
        com.google.android.gms.common.internal.r.a(j3 >= 0);
        com.google.android.gms.common.internal.r.a(j5 >= 0);
        this.f2298a = str;
        this.f2299b = str2;
        this.f2300c = j;
        this.f2301d = j2;
        this.f2302e = j3;
        this.f2303f = j4;
        this.g = j5;
        this.h = l;
        this.i = l2;
        this.j = l3;
        this.k = bool;
    }

    C0304k(String str, String str2, long j, long j2, long j3, long j4, Long l, Long l2, Long l3, Boolean bool) {
        this(str, str2, j, j2, 0L, j3, 0L, null, null, null, null);
    }

    final C0304k a(long j) {
        return new C0304k(this.f2298a, this.f2299b, this.f2300c, this.f2301d, this.f2302e, j, this.g, this.h, this.i, this.j, this.k);
    }

    final C0304k a(long j, long j2) {
        return new C0304k(this.f2298a, this.f2299b, this.f2300c, this.f2301d, this.f2302e, this.f2303f, j, Long.valueOf(j2), this.i, this.j, this.k);
    }

    final C0304k a(Long l, Long l2, Boolean bool) {
        return new C0304k(this.f2298a, this.f2299b, this.f2300c, this.f2301d, this.f2302e, this.f2303f, this.g, this.h, l, l2, (bool == null || bool.booleanValue()) ? bool : null);
    }
}
