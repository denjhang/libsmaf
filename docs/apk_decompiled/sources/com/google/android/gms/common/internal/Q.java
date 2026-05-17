package com.google.android.gms.common.internal;

import android.os.IBinder;
import android.os.Parcel;
import com.google.android.gms.common.zzk;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Q extends c.a.a.a.d.c.a implements O {
    Q(IBinder iBinder) {
        super(iBinder, "com.google.android.gms.common.internal.IGoogleCertificatesApi");
    }

    @Override // com.google.android.gms.common.internal.O
    public final boolean a(zzk zzkVar, c.a.a.a.c.a aVar) {
        Parcel parcelH = h();
        c.a.a.a.d.c.c.a(parcelH, zzkVar);
        c.a.a.a.d.c.c.a(parcelH, aVar);
        Parcel parcelA = a(5, parcelH);
        boolean zA = c.a.a.a.d.c.c.a(parcelA);
        parcelA.recycle();
        return zA;
    }
}
