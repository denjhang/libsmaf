package com.google.android.gms.measurement.internal;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.ArrayList;
import org.apache.http.conn.params.ConnManagerParams;
import org.apache.http.protocol.HTTP;
import org.apache.http.util.LangUtils;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class re implements Parcelable.Creator<zzm> {
    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ zzm createFromParcel(Parcel parcel) {
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        long jA = 0;
        long jA2 = 0;
        long jA3 = 0;
        long jA4 = 0;
        long jA5 = 0;
        String strN = null;
        String strN2 = null;
        String strN3 = null;
        String strN4 = null;
        String strN5 = null;
        String strN6 = null;
        String strN7 = null;
        Boolean boolS = null;
        ArrayList<String> arrayListP = null;
        String strN8 = null;
        long jA6 = -2147483648L;
        boolean zR = true;
        boolean zR2 = false;
        int iY = 0;
        boolean zR3 = true;
        boolean zR4 = true;
        boolean zR5 = false;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
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
                    jA = com.google.android.gms.common.internal.safeparcel.a.A(parcel, iA);
                    break;
                case 7:
                    jA2 = com.google.android.gms.common.internal.safeparcel.a.A(parcel, iA);
                    break;
                case 8:
                    strN5 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 9:
                    zR = com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA);
                    break;
                case 10:
                    zR2 = com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA);
                    break;
                case 11:
                    jA6 = com.google.android.gms.common.internal.safeparcel.a.A(parcel, iA);
                    break;
                case 12:
                    strN6 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case HTTP.CR /* 13 */:
                    jA3 = com.google.android.gms.common.internal.safeparcel.a.A(parcel, iA);
                    break;
                case 14:
                    jA4 = com.google.android.gms.common.internal.safeparcel.a.A(parcel, iA);
                    break;
                case 15:
                    iY = com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA);
                    break;
                case 16:
                    zR3 = com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA);
                    break;
                case LangUtils.HASH_SEED /* 17 */:
                    zR4 = com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA);
                    break;
                case 18:
                    zR5 = com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA);
                    break;
                case 19:
                    strN7 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case ConnManagerParams.DEFAULT_MAX_TOTAL_CONNECTIONS /* 20 */:
                default:
                    com.google.android.gms.common.internal.safeparcel.a.D(parcel, iA);
                    break;
                case 21:
                    boolS = com.google.android.gms.common.internal.safeparcel.a.s(parcel, iA);
                    break;
                case 22:
                    jA5 = com.google.android.gms.common.internal.safeparcel.a.A(parcel, iA);
                    break;
                case 23:
                    arrayListP = com.google.android.gms.common.internal.safeparcel.a.p(parcel, iA);
                    break;
                case 24:
                    strN8 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
            }
        }
        com.google.android.gms.common.internal.safeparcel.a.q(parcel, iB);
        return new zzm(strN, strN2, strN3, strN4, jA, jA2, strN5, zR, zR2, jA6, strN6, jA3, jA4, iY, zR3, zR4, zR5, strN7, boolS, jA5, arrayListP, strN8);
    }

    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ zzm[] newArray(int i) {
        return new zzm[i];
    }
}
