package androidx.media;

import android.os.Bundle;
import android.os.IBinder;
import android.util.Log;
import androidx.media.MediaBrowserServiceCompat;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class o implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ MediaBrowserServiceCompat.k f545a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ String f546b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ IBinder f547c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ Bundle f548d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final /* synthetic */ MediaBrowserServiceCompat.j f549e;

    o(MediaBrowserServiceCompat.j jVar, MediaBrowserServiceCompat.k kVar, String str, IBinder iBinder, Bundle bundle) {
        this.f549e = jVar;
        this.f545a = kVar;
        this.f546b = str;
        this.f547c = iBinder;
        this.f548d = bundle;
    }

    @Override // java.lang.Runnable
    public void run() {
        MediaBrowserServiceCompat.b bVar = MediaBrowserServiceCompat.this.f496c.get(this.f545a.asBinder());
        if (bVar != null) {
            MediaBrowserServiceCompat.this.a(this.f546b, bVar, this.f547c, this.f548d);
            return;
        }
        Log.w("MBServiceCompat", "addSubscription for callback that isn't registered id=" + this.f546b);
    }
}
