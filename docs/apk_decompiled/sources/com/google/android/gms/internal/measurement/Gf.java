package com.google.android.gms.internal.measurement;

import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Gf extends C0083a implements Ef {
    Gf(IBinder iBinder) {
        super(iBinder, "com.google.android.gms.measurement.api.internal.IBundleReceiver");
    }

    @Override // com.google.android.gms.internal.measurement.Ef
    public final void b(Bundle bundle) {
        Parcel parcelE = e();
        C0187p.a(parcelE, bundle);
        b(1, parcelE);
    }
}
