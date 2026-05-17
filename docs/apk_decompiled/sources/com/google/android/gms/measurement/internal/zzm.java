package com.google.android.gms.measurement.internal;

import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class zzm extends AbstractSafeParcelable {
    public static final Parcelable.Creator<zzm> CREATOR = new re();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f2516a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public final String f2517b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    public final String f2518c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    public final String f2519d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    public final long f2520e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    public final long f2521f;
    public final String g;
    public final boolean h;
    public final boolean i;
    public final long j;
    public final String k;
    public final long l;
    public final long m;
    public final int n;
    public final boolean o;
    public final boolean p;
    public final boolean q;
    public final String r;
    public final Boolean s;
    public final long t;
    public final List<String> u;
    public final String v;

    zzm(String str, String str2, String str3, long j, String str4, long j2, long j3, String str5, boolean z, boolean z2, String str6, long j4, long j5, int i, boolean z3, boolean z4, boolean z5, String str7, Boolean bool, long j6, List<String> list, String str8) {
        com.google.android.gms.common.internal.r.b(str);
        this.f2516a = str;
        this.f2517b = TextUtils.isEmpty(str2) ? null : str2;
        this.f2518c = str3;
        this.j = j;
        this.f2519d = str4;
        this.f2520e = j2;
        this.f2521f = j3;
        this.g = str5;
        this.h = z;
        this.i = z2;
        this.k = str6;
        this.l = j4;
        this.m = j5;
        this.n = i;
        this.o = z3;
        this.p = z4;
        this.q = z5;
        this.r = str7;
        this.s = bool;
        this.t = j6;
        this.u = list;
        this.v = str8;
    }

    zzm(String str, String str2, String str3, String str4, long j, long j2, String str5, boolean z, boolean z2, long j3, String str6, long j4, long j5, int i, boolean z3, boolean z4, boolean z5, String str7, Boolean bool, long j6, List<String> list, String str8) {
        this.f2516a = str;
        this.f2517b = str2;
        this.f2518c = str3;
        this.j = j3;
        this.f2519d = str4;
        this.f2520e = j;
        this.f2521f = j2;
        this.g = str5;
        this.h = z;
        this.i = z2;
        this.k = str6;
        this.l = j4;
        this.m = j5;
        this.n = i;
        this.o = z3;
        this.p = z4;
        this.q = z5;
        this.r = str7;
        this.s = bool;
        this.t = j6;
        this.u = list;
        this.v = str8;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, this.f2516a, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, this.f2517b, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 4, this.f2518c, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 5, this.f2519d, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 6, this.f2520e);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 7, this.f2521f);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 8, this.g, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 9, this.h);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 10, this.i);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 11, this.j);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 12, this.k, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 13, this.l);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 14, this.m);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 15, this.n);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 16, this.o);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 17, this.p);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 18, this.q);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 19, this.r, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 21, this.s, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 22, this.t);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 23, this.u, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 24, this.v, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
