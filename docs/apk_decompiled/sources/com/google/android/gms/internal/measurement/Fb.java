package com.google.android.gms.internal.measurement;

import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Fb extends C0083a implements Ja {
    Fb(IBinder iBinder) {
        super(iBinder, "com.google.android.finsky.externalreferrer.IGetInstallReferrerService");
    }

    @Override // com.google.android.gms.internal.measurement.Ja
    public final Bundle b(Bundle bundle) {
        Parcel parcelE = e();
        C0187p.a(parcelE, bundle);
        Parcel parcelA = a(1, parcelE);
        Bundle bundle2 = (Bundle) C0187p.a(parcelA, Bundle.CREATOR);
        parcelA.recycle();
        return bundle2;
    }
}
