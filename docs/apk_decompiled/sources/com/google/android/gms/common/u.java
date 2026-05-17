package com.google.android.gms.common;

import android.os.IBinder;
import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class u implements Parcelable.Creator<zzk> {
    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ zzk createFromParcel(Parcel parcel) {
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        String strN = null;
        IBinder iBinderX = null;
        boolean zR = false;
        boolean zR2 = false;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            int iA2 = com.google.android.gms.common.internal.safeparcel.a.a(iA);
            if (iA2 == 1) {
                strN = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
            } else if (iA2 == 2) {
                iBinderX = com.google.android.gms.common.internal.safeparcel.a.x(parcel, iA);
            } else if (iA2 == 3) {
                zR = com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA);
            } else if (iA2 != 4) {
                com.google.android.gms.common.internal.safeparcel.a.D(parcel, iA);
            } else {
                zR2 = com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA);
            }
        }
        com.google.android.gms.common.internal.safeparcel.a.q(parcel, iB);
        return new zzk(strN, iBinderX, zR, zR2);
    }

    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ zzk[] newArray(int i) {
        return new zzk[i];
    }
}
