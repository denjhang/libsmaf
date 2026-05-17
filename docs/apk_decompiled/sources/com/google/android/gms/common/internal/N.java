package com.google.android.gms.common.internal;

import android.os.IBinder;
import android.os.Parcel;
import c.a.a.a.c.a;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class N extends c.a.a.a.d.c.a implements L {
    N(IBinder iBinder) {
        super(iBinder, "com.google.android.gms.common.internal.ICertData");
    }

    @Override // com.google.android.gms.common.internal.L
    public final c.a.a.a.c.a m() {
        Parcel parcelA = a(1, h());
        c.a.a.a.c.a aVarA = a.AbstractBinderC0017a.a(parcelA.readStrongBinder());
        parcelA.recycle();
        return aVarA;
    }

    @Override // com.google.android.gms.common.internal.L
    public final int x() {
        Parcel parcelA = a(2, h());
        int i = parcelA.readInt();
        parcelA.recycle();
        return i;
    }
}
