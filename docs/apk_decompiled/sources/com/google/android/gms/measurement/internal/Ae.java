package com.google.android.gms.measurement.internal;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Ae implements Parcelable.Creator<zzv> {
    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ zzv createFromParcel(Parcel parcel) {
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        long jA = 0;
        long jA2 = 0;
        long jA3 = 0;
        String strN = null;
        String strN2 = null;
        zzkj zzkjVar = null;
        String strN3 = null;
        zzan zzanVar = null;
        zzan zzanVar2 = null;
        zzan zzanVar3 = null;
        boolean zR = false;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 2:
                    strN = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 3:
                    strN2 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 4:
                    zzkjVar = (zzkj) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, zzkj.CREATOR);
                    break;
                case 5:
                    jA = com.google.android.gms.common.internal.safeparcel.a.A(parcel, iA);
                    break;
                case 6:
                    zR = com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA);
                    break;
                case 7:
                    strN3 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 8:
                    zzanVar = (zzan) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, zzan.CREATOR);
                    break;
                case 9:
                    jA2 = com.google.android.gms.common.internal.safeparcel.a.A(parcel, iA);
                    break;
                case 10:
                    zzanVar2 = (zzan) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, zzan.CREATOR);
                    break;
                case 11:
                    jA3 = com.google.android.gms.common.internal.safeparcel.a.A(parcel, iA);
                    break;
                case 12:
                    zzanVar3 = (zzan) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, zzan.CREATOR);
                    break;
                default:
                    com.google.android.gms.common.internal.safeparcel.a.D(parcel, iA);
                    break;
            }
        }
        com.google.android.gms.common.internal.safeparcel.a.q(parcel, iB);
        return new zzv(strN, strN2, zzkjVar, jA, zR, strN3, zzanVar, jA2, zzanVar2, jA3, zzanVar3);
    }

    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ zzv[] newArray(int i) {
        return new zzv[i];
    }
}
