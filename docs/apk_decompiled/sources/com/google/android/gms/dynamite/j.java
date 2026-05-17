package com.google.android.gms.dynamite;

import android.os.IBinder;
import android.os.Parcel;
import c.a.a.a.c.a;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class j extends c.a.a.a.d.c.a implements i {
    j(IBinder iBinder) {
        super(iBinder, "com.google.android.gms.dynamite.IDynamiteLoader");
    }

    @Override // com.google.android.gms.dynamite.i
    public final int a(c.a.a.a.c.a aVar, String str, boolean z) {
        Parcel parcelH = h();
        c.a.a.a.d.c.c.a(parcelH, aVar);
        parcelH.writeString(str);
        c.a.a.a.d.c.c.a(parcelH, z);
        Parcel parcelA = a(5, parcelH);
        int i = parcelA.readInt();
        parcelA.recycle();
        return i;
    }

    @Override // com.google.android.gms.dynamite.i
    public final c.a.a.a.c.a a(c.a.a.a.c.a aVar, String str, int i) {
        Parcel parcelH = h();
        c.a.a.a.d.c.c.a(parcelH, aVar);
        parcelH.writeString(str);
        parcelH.writeInt(i);
        Parcel parcelA = a(2, parcelH);
        c.a.a.a.c.a aVarA = a.AbstractBinderC0017a.a(parcelA.readStrongBinder());
        parcelA.recycle();
        return aVarA;
    }

    @Override // com.google.android.gms.dynamite.i
    public final int b(c.a.a.a.c.a aVar, String str, boolean z) {
        Parcel parcelH = h();
        c.a.a.a.d.c.c.a(parcelH, aVar);
        parcelH.writeString(str);
        c.a.a.a.d.c.c.a(parcelH, z);
        Parcel parcelA = a(3, parcelH);
        int i = parcelA.readInt();
        parcelA.recycle();
        return i;
    }

    @Override // com.google.android.gms.dynamite.i
    public final c.a.a.a.c.a b(c.a.a.a.c.a aVar, String str, int i) {
        Parcel parcelH = h();
        c.a.a.a.d.c.c.a(parcelH, aVar);
        parcelH.writeString(str);
        parcelH.writeInt(i);
        Parcel parcelA = a(4, parcelH);
        c.a.a.a.c.a aVarA = a.AbstractBinderC0017a.a(parcelA.readStrongBinder());
        parcelA.recycle();
        return aVarA;
    }

    @Override // com.google.android.gms.dynamite.i
    public final int d() {
        Parcel parcelA = a(6, h());
        int i = parcelA.readInt();
        parcelA.recycle();
        return i;
    }
}
