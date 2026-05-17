package com.google.android.gms.signin.internal;

import android.os.IBinder;
import android.os.Parcel;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class g extends c.a.a.a.d.b.a implements f {
    g(IBinder iBinder) {
        super(iBinder, "com.google.android.gms.signin.internal.ISignInService");
    }

    @Override // com.google.android.gms.signin.internal.f
    public final void a(zah zahVar, d dVar) {
        Parcel parcelE = e();
        c.a.a.a.d.b.c.a(parcelE, zahVar);
        c.a.a.a.d.b.c.a(parcelE, dVar);
        b(12, parcelE);
    }
}
