package androidx.media;

import android.os.Bundle;
import android.os.IBinder;
import android.os.RemoteException;
import android.util.Log;
import androidx.media.MediaBrowserServiceCompat;
import androidx.media.MediaBrowserServiceCompat.b;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class r implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ MediaBrowserServiceCompat.k f558a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ String f559b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ int f560c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ int f561d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final /* synthetic */ Bundle f562e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final /* synthetic */ MediaBrowserServiceCompat.j f563f;

    r(MediaBrowserServiceCompat.j jVar, MediaBrowserServiceCompat.k kVar, String str, int i, int i2, Bundle bundle) {
        this.f563f = jVar;
        this.f558a = kVar;
        this.f559b = str;
        this.f560c = i;
        this.f561d = i2;
        this.f562e = bundle;
    }

    @Override // java.lang.Runnable
    public void run() {
        IBinder iBinderAsBinder = this.f558a.asBinder();
        MediaBrowserServiceCompat.this.f496c.remove(iBinderAsBinder);
        MediaBrowserServiceCompat.b bVar = MediaBrowserServiceCompat.this.new b(this.f559b, this.f560c, this.f561d, this.f562e, this.f558a);
        MediaBrowserServiceCompat.this.f496c.put(iBinderAsBinder, bVar);
        try {
            iBinderAsBinder.linkToDeath(bVar, 0);
        } catch (RemoteException unused) {
            Log.w("MBServiceCompat", "IBinder is already dead.");
        }
    }
}
