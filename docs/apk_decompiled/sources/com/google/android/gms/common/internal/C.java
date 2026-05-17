package com.google.android.gms.common.internal;

import android.os.IBinder;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.ConnectionResult;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C implements Parcelable.Creator<ResolveAccountResponse> {
    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ ResolveAccountResponse createFromParcel(Parcel parcel) {
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        IBinder iBinderX = null;
        ConnectionResult connectionResult = null;
        int iY = 0;
        boolean zR = false;
        boolean zR2 = false;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            int iA2 = com.google.android.gms.common.internal.safeparcel.a.a(iA);
            if (iA2 == 1) {
                iY = com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA);
            } else if (iA2 == 2) {
                iBinderX = com.google.android.gms.common.internal.safeparcel.a.x(parcel, iA);
            } else if (iA2 == 3) {
                connectionResult = (ConnectionResult) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, ConnectionResult.CREATOR);
            } else if (iA2 == 4) {
                zR = com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA);
            } else if (iA2 != 5) {
                com.google.android.gms.common.internal.safeparcel.a.D(parcel, iA);
            } else {
                zR2 = com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA);
            }
        }
        com.google.android.gms.common.internal.safeparcel.a.q(parcel, iB);
        return new ResolveAccountResponse(iY, iBinderX, connectionResult, zR, zR2);
    }

    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ ResolveAccountResponse[] newArray(int i) {
        return new ResolveAccountResponse[i];
    }
}
