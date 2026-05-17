package com.google.android.gms.auth.api.signin;

import android.accounts.Account;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.auth.api.signin.internal.GoogleSignInOptionsExtensionParcelable;
import com.google.android.gms.common.api.Scope;
import java.util.ArrayList;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class c implements Parcelable.Creator<GoogleSignInOptions> {
    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ GoogleSignInOptions createFromParcel(Parcel parcel) {
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        ArrayList arrayListC = null;
        Account account = null;
        String strN = null;
        String strN2 = null;
        ArrayList arrayListC2 = null;
        int iY = 0;
        boolean zR = false;
        boolean zR2 = false;
        boolean zR3 = false;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    iY = com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA);
                    break;
                case 2:
                    arrayListC = com.google.android.gms.common.internal.safeparcel.a.c(parcel, iA, Scope.CREATOR);
                    break;
                case 3:
                    account = (Account) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, Account.CREATOR);
                    break;
                case 4:
                    zR = com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA);
                    break;
                case 5:
                    zR2 = com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA);
                    break;
                case 6:
                    zR3 = com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA);
                    break;
                case 7:
                    strN = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 8:
                    strN2 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 9:
                    arrayListC2 = com.google.android.gms.common.internal.safeparcel.a.c(parcel, iA, GoogleSignInOptionsExtensionParcelable.CREATOR);
                    break;
                default:
                    com.google.android.gms.common.internal.safeparcel.a.D(parcel, iA);
                    break;
            }
        }
        com.google.android.gms.common.internal.safeparcel.a.q(parcel, iB);
        return new GoogleSignInOptions(iY, (ArrayList<Scope>) arrayListC, account, zR, zR2, zR3, strN, strN2, (ArrayList<GoogleSignInOptionsExtensionParcelable>) arrayListC2);
    }

    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ GoogleSignInOptions[] newArray(int i) {
        return new GoogleSignInOptions[i];
    }
}
