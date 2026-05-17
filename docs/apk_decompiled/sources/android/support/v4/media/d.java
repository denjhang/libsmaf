package android.support.v4.media;

import android.content.ComponentName;
import android.support.v4.media.MediaBrowserCompat;
import android.util.Log;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class d implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ComponentName f64a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ MediaBrowserCompat.i.a f65b;

    d(MediaBrowserCompat.i.a aVar, ComponentName componentName) {
        this.f65b = aVar;
        this.f64a = componentName;
    }

    @Override // java.lang.Runnable
    public void run() {
        if (MediaBrowserCompat.f0a) {
            Log.d("MediaBrowserCompat", "MediaServiceConnection.onServiceDisconnected name=" + this.f64a + " this=" + this + " mServiceConnection=" + MediaBrowserCompat.i.this.h);
            MediaBrowserCompat.i.this.b();
        }
        if (this.f65b.a("onServiceDisconnected")) {
            MediaBrowserCompat.i iVar = MediaBrowserCompat.i.this;
            iVar.i = null;
            iVar.j = null;
            iVar.f27e.a(null);
            MediaBrowserCompat.i iVar2 = MediaBrowserCompat.i.this;
            iVar2.g = 4;
            iVar2.f25c.c();
        }
    }
}
