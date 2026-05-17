package com.google.android.gms.measurement.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class zzan extends AbstractSafeParcelable {
    public static final Parcelable.Creator<zzan> CREATOR = new C0329p();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f2506a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public final zzam f2507b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    public final String f2508c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    public final long f2509d;

    zzan(zzan zzanVar, long j) {
        com.google.android.gms.common.internal.r.a(zzanVar);
        this.f2506a = zzanVar.f2506a;
        this.f2507b = zzanVar.f2507b;
        this.f2508c = zzanVar.f2508c;
        this.f2509d = j;
    }

    public zzan(String str, zzam zzamVar, String str2, long j) {
        this.f2506a = str;
        this.f2507b = zzamVar;
        this.f2508c = str2;
        this.f2509d = j;
    }

    public final String toString() {
        String str = this.f2508c;
        String str2 = this.f2506a;
        String strValueOf = String.valueOf(this.f2507b);
        StringBuilder sb = new StringBuilder(String.valueOf(str).length() + 21 + String.valueOf(str2).length() + String.valueOf(strValueOf).length());
        sb.append("origin=");
        sb.append(str);
        sb.append(",name=");
        sb.append(str2);
        sb.append(",params=");
        sb.append(strValueOf);
        return sb.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, this.f2506a, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, (Parcelable) this.f2507b, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 4, this.f2508c, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 5, this.f2509d);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
