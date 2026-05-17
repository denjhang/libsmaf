package com.google.android.gms.common.images;

import android.net.Uri;
import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class c implements Parcelable.Creator<WebImage> {
    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ WebImage createFromParcel(Parcel parcel) {
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        int iY = 0;
        Uri uri = null;
        int iY2 = 0;
        int iY3 = 0;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            int iA2 = com.google.android.gms.common.internal.safeparcel.a.a(iA);
            if (iA2 == 1) {
                iY = com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA);
            } else if (iA2 == 2) {
                uri = (Uri) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, Uri.CREATOR);
            } else if (iA2 == 3) {
                iY2 = com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA);
            } else if (iA2 != 4) {
                com.google.android.gms.common.internal.safeparcel.a.D(parcel, iA);
            } else {
                iY3 = com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA);
            }
        }
        com.google.android.gms.common.internal.safeparcel.a.q(parcel, iB);
        return new WebImage(iY, uri, iY2, iY3);
    }

    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ WebImage[] newArray(int i) {
        return new WebImage[i];
    }
}
