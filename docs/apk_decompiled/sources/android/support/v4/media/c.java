package android.support.v4.media;

import android.content.ComponentName;
import android.os.IBinder;
import android.os.Messenger;
import android.os.RemoteException;
import android.support.v4.media.MediaBrowserCompat;
import android.util.Log;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ComponentName f61a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ IBinder f62b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ MediaBrowserCompat.i.a f63c;

    c(MediaBrowserCompat.i.a aVar, ComponentName componentName, IBinder iBinder) {
        this.f63c = aVar;
        this.f61a = componentName;
        this.f62b = iBinder;
    }

    @Override // java.lang.Runnable
    public void run() {
        if (MediaBrowserCompat.f0a) {
            Log.d("MediaBrowserCompat", "MediaServiceConnection.onServiceConnected name=" + this.f61a + " binder=" + this.f62b);
            MediaBrowserCompat.i.this.b();
        }
        if (this.f63c.a("onServiceConnected")) {
            MediaBrowserCompat.i iVar = MediaBrowserCompat.i.this;
            iVar.i = new MediaBrowserCompat.l(this.f62b, iVar.f26d);
            MediaBrowserCompat.i iVar2 = MediaBrowserCompat.i.this;
            iVar2.j = new Messenger(iVar2.f27e);
            MediaBrowserCompat.i iVar3 = MediaBrowserCompat.i.this;
            iVar3.f27e.a(iVar3.j);
            MediaBrowserCompat.i.this.g = 2;
            try {
                if (MediaBrowserCompat.f0a) {
                    Log.d("MediaBrowserCompat", "ServiceCallbacks.onConnect...");
                    MediaBrowserCompat.i.this.b();
                }
                MediaBrowserCompat.i.this.i.a(MediaBrowserCompat.i.this.f23a, MediaBrowserCompat.i.this.j);
            } catch (RemoteException unused) {
                Log.w("MediaBrowserCompat", "RemoteException during connect for " + MediaBrowserCompat.i.this.f24b);
                if (MediaBrowserCompat.f0a) {
                    Log.d("MediaBrowserCompat", "ServiceCallbacks.onConnect...");
                    MediaBrowserCompat.i.this.b();
                }
            }
        }
    }
}
