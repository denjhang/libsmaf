package com.google.android.gms.internal.measurement;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Nf implements Parcelable.Creator<zzv> {
    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ zzv createFromParcel(Parcel parcel) {
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        long jA = 0;
        long jA2 = 0;
        String strN = null;
        String strN2 = null;
        String strN3 = null;
        Bundle bundleF = null;
        boolean zR = false;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    jA = com.google.android.gms.common.internal.safeparcel.a.A(parcel, iA);
                    break;
                case 2:
                    jA2 = com.google.android.gms.common.internal.safeparcel.a.A(parcel, iA);
                    break;
                case 3:
                    zR = com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA);
                    break;
                case 4:
                    strN = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 5:
                    strN2 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 6:
                    strN3 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 7:
                    bundleF = com.google.android.gms.common.internal.safeparcel.a.f(parcel, iA);
                    break;
                default:
                    com.google.android.gms.common.internal.safeparcel.a.D(parcel, iA);
                    break;
            }
        }
        com.google.android.gms.common.internal.safeparcel.a.q(parcel, iB);
        return new zzv(jA, jA2, zR, strN, strN2, strN3, bundleF);
    }

    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ zzv[] newArray(int i) {
        return new zzv[i];
    }
}
