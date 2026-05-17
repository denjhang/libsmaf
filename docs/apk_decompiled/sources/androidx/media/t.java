package androidx.media;

import android.os.Bundle;
import android.support.v4.os.ResultReceiver;
import android.util.Log;
import androidx.media.MediaBrowserServiceCompat;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class t implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ MediaBrowserServiceCompat.k f570a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ String f571b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ Bundle f572c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ ResultReceiver f573d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final /* synthetic */ MediaBrowserServiceCompat.j f574e;

    t(MediaBrowserServiceCompat.j jVar, MediaBrowserServiceCompat.k kVar, String str, Bundle bundle, ResultReceiver resultReceiver) {
        this.f574e = jVar;
        this.f570a = kVar;
        this.f571b = str;
        this.f572c = bundle;
        this.f573d = resultReceiver;
    }

    @Override // java.lang.Runnable
    public void run() {
        MediaBrowserServiceCompat.b bVar = MediaBrowserServiceCompat.this.f496c.get(this.f570a.asBinder());
        if (bVar != null) {
            MediaBrowserServiceCompat.this.b(this.f571b, this.f572c, bVar, this.f573d);
            return;
        }
        Log.w("MBServiceCompat", "search for callback that isn't registered query=" + this.f571b);
    }
}
