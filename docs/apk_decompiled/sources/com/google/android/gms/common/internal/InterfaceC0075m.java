package com.google.android.gms.common.internal;

import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* JADX INFO: renamed from: com.google.android.gms.common.internal.m, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public interface InterfaceC0075m extends IInterface {

    /* JADX INFO: renamed from: com.google.android.gms.common.internal.m$a */
    public static abstract class a extends c.a.a.a.d.c.b implements InterfaceC0075m {
        public a() {
            super("com.google.android.gms.common.internal.IGmsCallbacks");
        }

        @Override // c.a.a.a.d.c.b
        protected final boolean a(int i, Parcel parcel, Parcel parcel2, int i2) {
            if (i == 1) {
                a(parcel.readInt(), parcel.readStrongBinder(), (Bundle) c.a.a.a.d.c.c.a(parcel, Bundle.CREATOR));
            } else if (i == 2) {
                b(parcel.readInt(), (Bundle) c.a.a.a.d.c.c.a(parcel, Bundle.CREATOR));
            } else {
                if (i != 3) {
                    return false;
                }
                a(parcel.readInt(), parcel.readStrongBinder(), (zzb) c.a.a.a.d.c.c.a(parcel, zzb.CREATOR));
            }
            parcel2.writeNoException();
            return true;
        }
    }

    void a(int i, IBinder iBinder, Bundle bundle);

    void a(int i, IBinder iBinder, zzb zzbVar);

    void b(int i, Bundle bundle);
}
