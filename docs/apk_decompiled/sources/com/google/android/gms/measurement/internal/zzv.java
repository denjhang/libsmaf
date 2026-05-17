package com.google.android.gms.measurement.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class zzv extends AbstractSafeParcelable {
    public static final Parcelable.Creator<zzv> CREATOR = new Ae();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f2522a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public String f2523b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    public zzkj f2524c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    public long f2525d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    public boolean f2526e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    public String f2527f;
    public zzan g;
    public long h;
    public zzan i;
    public long j;
    public zzan k;

    zzv(zzv zzvVar) {
        com.google.android.gms.common.internal.r.a(zzvVar);
        this.f2522a = zzvVar.f2522a;
        this.f2523b = zzvVar.f2523b;
        this.f2524c = zzvVar.f2524c;
        this.f2525d = zzvVar.f2525d;
        this.f2526e = zzvVar.f2526e;
        this.f2527f = zzvVar.f2527f;
        this.g = zzvVar.g;
        this.h = zzvVar.h;
        this.i = zzvVar.i;
        this.j = zzvVar.j;
        this.k = zzvVar.k;
    }

    zzv(String str, String str2, zzkj zzkjVar, long j, boolean z, String str3, zzan zzanVar, long j2, zzan zzanVar2, long j3, zzan zzanVar3) {
        this.f2522a = str;
        this.f2523b = str2;
        this.f2524c = zzkjVar;
        this.f2525d = j;
        this.f2526e = z;
        this.f2527f = str3;
        this.g = zzanVar;
        this.h = j2;
        this.i = zzanVar2;
        this.j = j3;
        this.k = zzanVar3;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, this.f2522a, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, this.f2523b, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 4, (Parcelable) this.f2524c, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 5, this.f2525d);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 6, this.f2526e);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 7, this.f2527f, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 8, (Parcelable) this.g, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 9, this.h);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 10, (Parcelable) this.i, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 11, this.j);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 12, (Parcelable) this.k, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
