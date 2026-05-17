package com.google.android.gms.common.data;

import android.database.CursorWindow;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class c implements Parcelable.Creator<DataHolder> {
    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ DataHolder createFromParcel(Parcel parcel) {
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        String[] strArrO = null;
        CursorWindow[] cursorWindowArr = null;
        Bundle bundleF = null;
        int iY = 0;
        int iY2 = 0;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            int iA2 = com.google.android.gms.common.internal.safeparcel.a.a(iA);
            if (iA2 == 1) {
                strArrO = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
            } else if (iA2 == 2) {
                cursorWindowArr = (CursorWindow[]) com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA, CursorWindow.CREATOR);
            } else if (iA2 == 3) {
                iY2 = com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA);
            } else if (iA2 == 4) {
                bundleF = com.google.android.gms.common.internal.safeparcel.a.f(parcel, iA);
            } else if (iA2 != 1000) {
                com.google.android.gms.common.internal.safeparcel.a.D(parcel, iA);
            } else {
                iY = com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA);
            }
        }
        com.google.android.gms.common.internal.safeparcel.a.q(parcel, iB);
        DataHolder dataHolder = new DataHolder(iY, strArrO, cursorWindowArr, iY2, bundleF);
        dataHolder.c();
        return dataHolder;
    }

    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ DataHolder[] newArray(int i) {
        return new DataHolder[i];
    }
}
