package android.support.v4.media;

import android.content.Intent;
import android.support.v4.media.MediaBrowserCompat;
import android.support.v4.media.MediaBrowserCompat.i.a;
import android.util.Log;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ MediaBrowserCompat.i f59a;

    a(MediaBrowserCompat.i iVar) {
        this.f59a = iVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        MediaBrowserCompat.i iVar = this.f59a;
        if (iVar.g == 0) {
            return;
        }
        iVar.g = 2;
        if (MediaBrowserCompat.f0a && iVar.h != null) {
            throw new RuntimeException("mServiceConnection should be null. Instead it is " + this.f59a.h);
        }
        MediaBrowserCompat.i iVar2 = this.f59a;
        if (iVar2.i != null) {
            throw new RuntimeException("mServiceBinderWrapper should be null. Instead it is " + this.f59a.i);
        }
        if (iVar2.j != null) {
            throw new RuntimeException("mCallbacksMessenger should be null. Instead it is " + this.f59a.j);
        }
        Intent intent = new Intent("android.media.browse.MediaBrowserService");
        intent.setComponent(this.f59a.f24b);
        MediaBrowserCompat.i iVar3 = this.f59a;
        iVar3.h = iVar3.new a();
        boolean zBindService = false;
        try {
            zBindService = this.f59a.f23a.bindService(intent, this.f59a.h, 1);
        } catch (Exception unused) {
            Log.e("MediaBrowserCompat", "Failed binding to service " + this.f59a.f24b);
        }
        if (!zBindService) {
            this.f59a.c();
            this.f59a.f25c.b();
        }
        if (MediaBrowserCompat.f0a) {
            Log.d("MediaBrowserCompat", "connect...");
            this.f59a.b();
        }
    }
}
