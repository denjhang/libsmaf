package com.google.android.gms.common.internal;

import android.os.IBinder;
import android.os.Parcel;

/* JADX INFO: renamed from: com.google.android.gms.common.internal.n, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0076n implements InterfaceC0077o {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final IBinder f1276a;

    C0076n(IBinder iBinder) {
        this.f1276a = iBinder;
    }

    @Override // com.google.android.gms.common.internal.InterfaceC0077o
    public final void a(InterfaceC0075m interfaceC0075m, GetServiceRequest getServiceRequest) {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
            parcelObtain.writeStrongBinder(interfaceC0075m != null ? interfaceC0075m.asBinder() : null);
            if (getServiceRequest != null) {
                parcelObtain.writeInt(1);
                getServiceRequest.writeToParcel(parcelObtain, 0);
            } else {
                parcelObtain.writeInt(0);
            }
            this.f1276a.transact(46, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
        } finally {
            parcelObtain2.recycle();
            parcelObtain.recycle();
        }
    }

    @Override // android.os.IInterface
    public final IBinder asBinder() {
        return this.f1276a;
    }
}
