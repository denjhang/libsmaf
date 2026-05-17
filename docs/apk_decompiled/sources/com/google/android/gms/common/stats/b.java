package com.google.android.gms.common.stats;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.ArrayList;
import org.apache.http.protocol.HTTP;
import org.apache.http.util.LangUtils;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class b implements Parcelable.Creator<WakeLockEvent> {
    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ WakeLockEvent createFromParcel(Parcel parcel) {
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        long jA = 0;
        long jA2 = 0;
        long jA3 = 0;
        String strN = null;
        ArrayList<String> arrayListP = null;
        String strN2 = null;
        String strN3 = null;
        String strN4 = null;
        String strN5 = null;
        int iY = 0;
        int iY2 = 0;
        int iY3 = 0;
        int iY4 = 0;
        float fV = 0.0f;
        boolean zR = false;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    iY = com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA);
                    break;
                case 2:
                    jA = com.google.android.gms.common.internal.safeparcel.a.A(parcel, iA);
                    break;
                case 3:
                case 7:
                case 9:
                default:
                    com.google.android.gms.common.internal.safeparcel.a.D(parcel, iA);
                    break;
                case 4:
                    strN = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 5:
                    iY3 = com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA);
                    break;
                case 6:
                    arrayListP = com.google.android.gms.common.internal.safeparcel.a.p(parcel, iA);
                    break;
                case 8:
                    jA2 = com.google.android.gms.common.internal.safeparcel.a.A(parcel, iA);
                    break;
                case 10:
                    strN3 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 11:
                    iY2 = com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA);
                    break;
                case 12:
                    strN2 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case HTTP.CR /* 13 */:
                    strN4 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 14:
                    iY4 = com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA);
                    break;
                case 15:
                    fV = com.google.android.gms.common.internal.safeparcel.a.v(parcel, iA);
                    break;
                case 16:
                    jA3 = com.google.android.gms.common.internal.safeparcel.a.A(parcel, iA);
                    break;
                case LangUtils.HASH_SEED /* 17 */:
                    strN5 = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                    break;
                case 18:
                    zR = com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA);
                    break;
            }
        }
        com.google.android.gms.common.internal.safeparcel.a.q(parcel, iB);
        return new WakeLockEvent(iY, jA, iY2, strN, iY3, arrayListP, strN2, jA2, iY4, strN3, strN4, fV, jA3, strN5, zR);
    }

    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ WakeLockEvent[] newArray(int i) {
        return new WakeLockEvent[i];
    }
}
