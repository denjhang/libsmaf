package androidx.media;

import android.os.Bundle;
import android.os.IBinder;
import android.os.RemoteException;
import android.util.Log;
import androidx.media.MediaBrowserServiceCompat;
import androidx.media.MediaBrowserServiceCompat.b;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class m implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ MediaBrowserServiceCompat.k f537a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ String f538b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ int f539c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ int f540d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final /* synthetic */ Bundle f541e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final /* synthetic */ MediaBrowserServiceCompat.j f542f;

    m(MediaBrowserServiceCompat.j jVar, MediaBrowserServiceCompat.k kVar, String str, int i, int i2, Bundle bundle) {
        this.f542f = jVar;
        this.f537a = kVar;
        this.f538b = str;
        this.f539c = i;
        this.f540d = i2;
        this.f541e = bundle;
    }

    @Override // java.lang.Runnable
    public void run() {
        IBinder iBinderAsBinder = this.f537a.asBinder();
        MediaBrowserServiceCompat.this.f496c.remove(iBinderAsBinder);
        MediaBrowserServiceCompat.b bVar = MediaBrowserServiceCompat.this.new b(this.f538b, this.f539c, this.f540d, this.f541e, this.f537a);
        MediaBrowserServiceCompat mediaBrowserServiceCompat = MediaBrowserServiceCompat.this;
        mediaBrowserServiceCompat.f497d = bVar;
        bVar.h = mediaBrowserServiceCompat.a(this.f538b, this.f540d, this.f541e);
        MediaBrowserServiceCompat mediaBrowserServiceCompat2 = MediaBrowserServiceCompat.this;
        mediaBrowserServiceCompat2.f497d = null;
        if (bVar.h == null) {
            Log.i("MBServiceCompat", "No root for client " + this.f538b + " from service " + m.class.getName());
            try {
                this.f537a.a();
                return;
            } catch (RemoteException unused) {
                Log.w("MBServiceCompat", "Calling onConnectFailed() failed. Ignoring. pkg=" + this.f538b);
                return;
            }
        }
        try {
            mediaBrowserServiceCompat2.f496c.put(iBinderAsBinder, bVar);
            iBinderAsBinder.linkToDeath(bVar, 0);
            if (MediaBrowserServiceCompat.this.f499f == null) {
                return;
            }
            MediaBrowserServiceCompat.k kVar = this.f537a;
            bVar.h.b();
            throw null;
        } catch (RemoteException unused2) {
            Log.w("MBServiceCompat", "Calling onConnect() failed. Dropping client. pkg=" + this.f538b);
            MediaBrowserServiceCompat.this.f496c.remove(iBinderAsBinder);
        }
    }
}
