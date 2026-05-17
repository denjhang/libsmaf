package com.google.android.gms.common.internal;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class M extends c.a.a.a.d.c.b implements L {
    public M() {
        super("com.google.android.gms.common.internal.ICertData");
    }

    public static L a(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.common.internal.ICertData");
        return iInterfaceQueryLocalInterface instanceof L ? (L) iInterfaceQueryLocalInterface : new N(iBinder);
    }

    @Override // c.a.a.a.d.c.b
    protected final boolean a(int i, Parcel parcel, Parcel parcel2, int i2) {
        if (i == 1) {
            c.a.a.a.c.a aVarM = m();
            parcel2.writeNoException();
            c.a.a.a.d.c.c.a(parcel2, aVarM);
        } else {
            if (i != 2) {
                return false;
            }
            int iX = x();
            parcel2.writeNoException();
            parcel2.writeInt(iX);
        }
        return true;
    }
}
