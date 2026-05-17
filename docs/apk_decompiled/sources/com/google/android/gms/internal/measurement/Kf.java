package com.google.android.gms.internal.measurement;

import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Kf extends C0083a implements If {
    Kf(IBinder iBinder) {
        super(iBinder, "com.google.android.gms.measurement.api.internal.IEventHandlerProxy");
    }

    @Override // com.google.android.gms.internal.measurement.If
    public final void a(String str, String str2, Bundle bundle, long j) {
        Parcel parcelE = e();
        parcelE.writeString(str);
        parcelE.writeString(str2);
        C0187p.a(parcelE, bundle);
        parcelE.writeLong(j);
        b(1, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.If
    public final int h() {
        Parcel parcelA = a(2, e());
        int i = parcelA.readInt();
        parcelA.recycle();
        return i;
    }
}
