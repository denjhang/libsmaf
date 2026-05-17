package com.google.firebase.iid;

import android.os.IBinder;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import android.util.Log;

/* JADX INFO: renamed from: com.google.firebase.iid.k, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0393k {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Messenger f2683a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final zzm f2684b;

    C0393k(IBinder iBinder) throws RemoteException {
        String interfaceDescriptor = iBinder.getInterfaceDescriptor();
        if ("android.os.IMessenger".equals(interfaceDescriptor)) {
            this.f2683a = new Messenger(iBinder);
            this.f2684b = null;
        } else if ("com.google.android.gms.iid.IMessengerCompat".equals(interfaceDescriptor)) {
            this.f2684b = new zzm(iBinder);
            this.f2683a = null;
        } else {
            String strValueOf = String.valueOf(interfaceDescriptor);
            Log.w("MessengerIpcClient", strValueOf.length() != 0 ? "Invalid interface descriptor: ".concat(strValueOf) : new String("Invalid interface descriptor: "));
            throw new RemoteException();
        }
    }

    final void a(Message message) throws RemoteException {
        Messenger messenger = this.f2683a;
        if (messenger != null) {
            messenger.send(message);
            return;
        }
        zzm zzmVar = this.f2684b;
        if (zzmVar == null) {
            throw new IllegalStateException("Both messengers are null");
        }
        zzmVar.a(message);
    }
}
