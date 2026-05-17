package com.google.android.gms.auth.api.signin;

import android.net.Uri;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.api.Scope;
import java.util.ArrayList;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class a implements Parcelable.Creator<GoogleSignInAccount> {
    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ GoogleSignInAccount createFromParcel(Parcel parcel) {
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        String strN = null;
        String strN2 = null;
        String strN3 = null;
        String strN4 = null;
        Uri uri = null;
        String strN5 = null;
        String strN6 = null;
        ArrayList arrayListC = null;
        String strN7 = null;
        String strN8 = null;
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
                    strN2 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 4:
                    strN3 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 5:
                    strN4 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 6:
                    uri = (Uri) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, Uri.CREATOR);
                    break;
                case 7:
                    strN5 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 8:
                    jA = com.google.android.gms.common.internal.safeparcel.a.A(parcel, iA);
                    break;
                case 9:
                    strN6 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 10:
                    arrayListC = com.google.android.gms.common.internal.safeparcel.a.c(parcel, iA, Scope.CREATOR);
                    break;
                case 11:
                    strN7 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 12:
                    strN8 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                default:
                    com.google.android.gms.common.internal.safeparcel.a.D(parcel, iA);
                    break;
            }
        }
        com.google.android.gms.common.internal.safeparcel.a.q(parcel, iB);
        return new GoogleSignInAccount(iY, strN, strN2, strN3, strN4, uri, strN5, jA, strN6, arrayListC, strN7, strN8);
    }

    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ GoogleSignInAccount[] newArray(int i) {
        return new GoogleSignInAccount[i];
    }
}
