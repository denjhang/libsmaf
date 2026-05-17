package com.google.android.gms.measurement.internal;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class ke implements Parcelable.Creator<zzkj> {
    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ zzkj createFromParcel(Parcel parcel) {
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        String strN = null;
        Long lB = null;
        Float fW = null;
        String strN2 = null;
        String strN3 = null;
        Double dU = null;
        long jA = 0;
        int iY = 0;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    iY = com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA);
                    break;
                case 2:
                    strN = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 3:
                    jA = com.google.android.gms.common.internal.safeparcel.a.A(parcel, iA);
                    break;
                case 4:
                    lB = com.google.android.gms.common.internal.safeparcel.a.B(parcel, iA);
                    break;
                case 5:
                    fW = com.google.android.gms.common.internal.safeparcel.a.w(parcel, iA);
                    break;
                case 6:
                    strN2 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 7:
                    strN3 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 8:
                    dU = com.google.android.gms.common.internal.safeparcel.a.u(parcel, iA);
                    break;
                default:
                    com.google.android.gms.common.internal.safeparcel.a.D(parcel, iA);
                    break;
            }
        }
        com.google.android.gms.common.internal.safeparcel.a.q(parcel, iB);
        return new zzkj(iY, strN, jA, lB, fW, strN2, strN3, dU);
    }

    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ zzkj[] newArray(int i) {
        return new zzkj[i];
    }
}
