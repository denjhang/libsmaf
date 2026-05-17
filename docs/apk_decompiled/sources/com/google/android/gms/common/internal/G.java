package com.google.android.gms.common.internal;

import android.accounts.Account;
import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.Feature;
import com.google.android.gms.common.api.Scope;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class G implements Parcelable.Creator<GetServiceRequest> {
    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ GetServiceRequest createFromParcel(Parcel parcel) {
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        String strN = null;
        IBinder iBinderX = null;
        Scope[] scopeArr = null;
        Bundle bundleF = null;
        Account account = null;
        Feature[] featureArr = null;
        Feature[] featureArr2 = null;
        int iY = 0;
        int iY2 = 0;
        int iY3 = 0;
        boolean zR = false;
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
                    iY3 = com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA);
                    break;
                case 4:
                    strN = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 5:
                    iBinderX = com.google.android.gms.common.internal.safeparcel.a.x(parcel, iA);
                    break;
                case 6:
                    scopeArr = (Scope[]) com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA, Scope.CREATOR);
                    break;
                case 7:
                    bundleF = com.google.android.gms.common.internal.safeparcel.a.f(parcel, iA);
                    break;
                case 8:
                    account = (Account) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, Account.CREATOR);
                    break;
                case 9:
                default:
                    com.google.android.gms.common.internal.safeparcel.a.D(parcel, iA);
                    break;
                case 10:
                    featureArr = (Feature[]) com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA, Feature.CREATOR);
                    break;
                case 11:
                    featureArr2 = (Feature[]) com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA, Feature.CREATOR);
                    break;
                case 12:
                    zR = com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA);
                    break;
            }
        }
        com.google.android.gms.common.internal.safeparcel.a.q(parcel, iB);
        return new GetServiceRequest(iY, iY2, iY3, strN, iBinderX, scopeArr, bundleF, account, featureArr, featureArr2, zR);
    }

    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ GetServiceRequest[] newArray(int i) {
        return new GetServiceRequest[i];
    }
}
