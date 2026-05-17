package com.google.firebase.iid;

import android.os.Build;
import android.os.IBinder;
import android.os.Message;
import android.os.Messenger;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.RemoteException;
import android.util.Log;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class zzm implements Parcelable {
    public static final Parcelable.Creator<zzm> CREATOR = new M();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Messenger f2728a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private X f2729b;

    public static final class a extends ClassLoader {
        @Override // java.lang.ClassLoader
        protected final Class<?> loadClass(String str, boolean z) {
            if (!"com.google.android.gms.iid.MessengerCompat".equals(str)) {
                return super.loadClass(str, z);
            }
            if (!FirebaseInstanceId.f()) {
                return zzm.class;
            }
            Log.d("FirebaseInstanceId", "Using renamed FirebaseIidMessengerCompat class");
            return zzm.class;
        }
    }

    public zzm(IBinder iBinder) {
        if (Build.VERSION.SDK_INT >= 21) {
            this.f2728a = new Messenger(iBinder);
        } else {
            this.f2729b = new W(iBinder);
        }
    }

    private final IBinder a() {
        Messenger messenger = this.f2728a;
        return messenger != null ? messenger.getBinder() : this.f2729b.asBinder();
    }

    public final void a(Message message) throws RemoteException {
        Messenger messenger = this.f2728a;
        if (messenger != null) {
            messenger.send(message);
        } else {
            this.f2729b.a(message);
        }
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object obj) {
        if (obj == null) {
            return false;
        }
        try {
            return a().equals(((zzm) obj).a());
        } catch (ClassCastException unused) {
            return false;
        }
    }

    public int hashCode() {
        return a().hashCode();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        Messenger messenger = this.f2728a;
        parcel.writeStrongBinder(messenger != null ? messenger.getBinder() : this.f2729b.asBinder());
    }
}
