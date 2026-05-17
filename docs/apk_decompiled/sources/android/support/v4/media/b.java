package android.support.v4.media;

import android.os.Messenger;
import android.os.RemoteException;
import android.support.v4.media.MediaBrowserCompat;
import android.util.Log;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ MediaBrowserCompat.i f60a;

    b(MediaBrowserCompat.i iVar) {
        this.f60a = iVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        MediaBrowserCompat.i iVar = this.f60a;
        Messenger messenger = iVar.j;
        if (messenger != null) {
            try {
                iVar.i.a(messenger);
            } catch (RemoteException unused) {
                Log.w("MediaBrowserCompat", "RemoteException during connect for " + this.f60a.f24b);
            }
        }
        MediaBrowserCompat.i iVar2 = this.f60a;
        int i = iVar2.g;
        iVar2.c();
        if (i != 0) {
            this.f60a.g = i;
        }
        if (MediaBrowserCompat.f0a) {
            Log.d("MediaBrowserCompat", "disconnect...");
            this.f60a.b();
        }
    }
}
