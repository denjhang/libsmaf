package com.google.android.gms.common.server.response;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.server.converter.zaa;
import com.google.android.gms.common.server.response.FastJsonResponse;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class a implements Parcelable.Creator<FastJsonResponse.Field> {
    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ FastJsonResponse.Field createFromParcel(Parcel parcel) {
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        String strN = null;
        String strN2 = null;
        zaa zaaVar = null;
        int iY = 0;
        int iY2 = 0;
        boolean zR = false;
        int iY3 = 0;
        boolean zR2 = false;
        int iY4 = 0;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    iY = com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA);
                    break;
                case 2:
                    iY2 = com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA);
                    break;
                case 3:
                    zR = com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA);
                    break;
                case 4:
                    iY3 = com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA);
                    break;
                case 5:
                    zR2 = com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA);
                    break;
                case 6:
                    strN = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 7:
                    iY4 = com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA);
                    break;
                case 8:
                    strN2 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 9:
                    zaaVar = (zaa) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, zaa.CREATOR);
                    break;
                default:
                    com.google.android.gms.common.internal.safeparcel.a.D(parcel, iA);
                    break;
            }
        }
        com.google.android.gms.common.internal.safeparcel.a.q(parcel, iB);
        return new FastJsonResponse.Field(iY, iY2, zR, iY3, zR2, strN, iY4, strN2, zaaVar);
    }

    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ FastJsonResponse.Field[] newArray(int i) {
        return new FastJsonResponse.Field[i];
    }
}
