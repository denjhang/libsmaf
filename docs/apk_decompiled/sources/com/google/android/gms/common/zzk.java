package com.google.android.gms.common;

import android.os.IBinder;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.RemoteException;
import android.util.Log;
import com.google.android.gms.common.internal.M;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class zzk extends AbstractSafeParcelable {
    public static final Parcelable.Creator<zzk> CREATOR = new u();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f1374a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final o f1375b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final boolean f1376c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final boolean f1377d;

    zzk(String str, IBinder iBinder, boolean z, boolean z2) {
        this.f1374a = str;
        this.f1375b = a(iBinder);
        this.f1376c = z;
        this.f1377d = z2;
    }

    zzk(String str, o oVar, boolean z, boolean z2) {
        this.f1374a = str;
        this.f1375b = oVar;
        this.f1376c = z;
        this.f1377d = z2;
    }

    private static o a(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        try {
            c.a.a.a.c.a aVarM = M.a(iBinder).m();
            byte[] bArr = aVarM == null ? null : (byte[]) c.a.a.a.c.b.a(aVarM);
            if (bArr != null) {
                return new p(bArr);
            }
            Log.e("GoogleCertificatesQuery", "Could not unwrap certificate");
            return null;
        } catch (RemoteException e2) {
            Log.e("GoogleCertificatesQuery", "Could not unwrap certificate", e2);
            return null;
        }
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1374a, false);
        o oVar = this.f1375b;
        if (oVar == null) {
            Log.w("GoogleCertificatesQuery", "certificate binder is null");
            oVar = null;
        } else {
            oVar.asBinder();
        }
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, (IBinder) oVar, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, this.f1376c);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 4, this.f1377d);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
