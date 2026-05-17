package android.support.v4.os;

import android.os.Bundle;
import android.os.Handler;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.RemoteException;
import android.support.v4.os.a;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class ResultReceiver implements Parcelable {
    public static final Parcelable.Creator<ResultReceiver> CREATOR = new android.support.v4.os.b();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final boolean f113a = false;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final Handler f114b = null;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    android.support.v4.os.a f115c;

    class a extends a.AbstractBinderC0006a {
        a() {
        }

        @Override // android.support.v4.os.a
        public void a(int i, Bundle bundle) {
            ResultReceiver resultReceiver = ResultReceiver.this;
            Handler handler = resultReceiver.f114b;
            if (handler != null) {
                handler.post(resultReceiver.new b(i, bundle));
            } else {
                resultReceiver.a(i, bundle);
            }
        }
    }

    class b implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final int f117a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final Bundle f118b;

        b(int i, Bundle bundle) {
            this.f117a = i;
            this.f118b = bundle;
        }

        @Override // java.lang.Runnable
        public void run() {
            ResultReceiver.this.a(this.f117a, this.f118b);
        }
    }

    ResultReceiver(Parcel parcel) {
        this.f115c = a.AbstractBinderC0006a.a(parcel.readStrongBinder());
    }

    protected void a(int i, Bundle bundle) {
    }

    public void b(int i, Bundle bundle) {
        if (this.f113a) {
            Handler handler = this.f114b;
            if (handler != null) {
                handler.post(new b(i, bundle));
                return;
            } else {
                a(i, bundle);
                return;
            }
        }
        android.support.v4.os.a aVar = this.f115c;
        if (aVar != null) {
            try {
                aVar.a(i, bundle);
            } catch (RemoteException unused) {
            }
        }
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        synchronized (this) {
            if (this.f115c == null) {
                this.f115c = new a();
            }
            parcel.writeStrongBinder(this.f115c.asBinder());
        }
    }
}
