package com.google.android.gms.dynamite;

import android.os.IBinder;
import android.os.Parcel;
import c.a.a.a.c.a;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class l extends c.a.a.a.d.c.a implements k {
    l(IBinder iBinder) {
        super(iBinder, "com.google.android.gms.dynamite.IDynamiteLoaderV2");
    }

    @Override // com.google.android.gms.dynamite.k
    public final c.a.a.a.c.a a(c.a.a.a.c.a aVar, String str, int i, c.a.a.a.c.a aVar2) {
        Parcel parcelH = h();
        c.a.a.a.d.c.c.a(parcelH, aVar);
        parcelH.writeString(str);
        parcelH.writeInt(i);
        c.a.a.a.d.c.c.a(parcelH, aVar2);
        Parcel parcelA = a(2, parcelH);
        c.a.a.a.c.a aVarA = a.AbstractBinderC0017a.a(parcelA.readStrongBinder());
        parcelA.recycle();
        return aVarA;
    }

    @Override // com.google.android.gms.dynamite.k
    public final c.a.a.a.c.a b(c.a.a.a.c.a aVar, String str, int i, c.a.a.a.c.a aVar2) {
        Parcel parcelH = h();
        c.a.a.a.d.c.c.a(parcelH, aVar);
        parcelH.writeString(str);
        parcelH.writeInt(i);
        c.a.a.a.d.c.c.a(parcelH, aVar2);
        Parcel parcelA = a(3, parcelH);
        c.a.a.a.c.a aVarA = a.AbstractBinderC0017a.a(parcelA.readStrongBinder());
        parcelA.recycle();
        return aVarA;
    }
}
