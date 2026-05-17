package com.google.android.gms.measurement.internal;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.p, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0329p implements Parcelable.Creator<zzan> {
    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ zzan createFromParcel(Parcel parcel) {
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        String strN = null;
        zzam zzamVar = null;
        String strN2 = null;
        long jA = 0;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            int iA2 = com.google.android.gms.common.internal.safeparcel.a.a(iA);
            if (iA2 == 2) {
                strN = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
            } else if (iA2 == 3) {
                zzamVar = (zzam) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, zzam.CREATOR);
            } else if (iA2 == 4) {
                strN2 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
            } else if (iA2 != 5) {
                com.google.android.gms.common.internal.safeparcel.a.D(parcel, iA);
            } else {
                jA = com.google.android.gms.common.internal.safeparcel.a.A(parcel, iA);
            }
        }
        com.google.android.gms.common.internal.safeparcel.a.q(parcel, iB);
        return new zzan(strN, zzamVar, strN2, jA);
    }

    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ zzan[] newArray(int i) {
        return new zzan[i];
    }
}
