package com.google.android.gms.common.internal;

import android.os.IBinder;
import android.os.Parcel;
import c.a.a.a.c.a;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class A extends c.a.a.a.d.b.a implements InterfaceC0078p {
    A(IBinder iBinder) {
        super(iBinder, "com.google.android.gms.common.internal.ISignInButtonCreator");
    }

    @Override // com.google.android.gms.common.internal.InterfaceC0078p
    public final c.a.a.a.c.a a(c.a.a.a.c.a aVar, SignInButtonConfig signInButtonConfig) {
        Parcel parcelE = e();
        c.a.a.a.d.b.c.a(parcelE, aVar);
        c.a.a.a.d.b.c.a(parcelE, signInButtonConfig);
        Parcel parcelA = a(2, parcelE);
        c.a.a.a.c.a aVarA = a.AbstractBinderC0017a.a(parcelA.readStrongBinder());
        parcelA.recycle();
        return aVarA;
    }
}
