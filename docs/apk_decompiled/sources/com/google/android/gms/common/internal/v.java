package com.google.android.gms.common.internal;

import android.accounts.Account;
import android.os.IBinder;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.api.Scope;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class v implements Parcelable.Creator<AuthAccountRequest> {
    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ AuthAccountRequest createFromParcel(Parcel parcel) {
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        IBinder iBinderX = null;
        Scope[] scopeArr = null;
        Integer numZ = null;
        Integer numZ2 = null;
        Account account = null;
        int iY = 0;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    iY = com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA);
                    break;
                case 2:
                    iBinderX = com.google.android.gms.common.internal.safeparcel.a.x(parcel, iA);
                    break;
                case 3:
                    scopeArr = (Scope[]) com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA, Scope.CREATOR);
                    break;
                case 4:
                    numZ = com.google.android.gms.common.internal.safeparcel.a.z(parcel, iA);
                    break;
                case 5:
                    numZ2 = com.google.android.gms.common.internal.safeparcel.a.z(parcel, iA);
                    break;
                case 6:
                    account = (Account) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, Account.CREATOR);
                    break;
                default:
                    com.google.android.gms.common.internal.safeparcel.a.D(parcel, iA);
                    break;
            }
        }
        com.google.android.gms.common.internal.safeparcel.a.q(parcel, iB);
        return new AuthAccountRequest(iY, iBinderX, scopeArr, numZ, numZ2, account);
    }

    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ AuthAccountRequest[] newArray(int i) {
        return new AuthAccountRequest[i];
    }
}
