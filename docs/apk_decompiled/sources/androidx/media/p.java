package androidx.media;

import android.os.IBinder;
import android.util.Log;
import androidx.media.MediaBrowserServiceCompat;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class p implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ MediaBrowserServiceCompat.k f550a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ String f551b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ IBinder f552c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ MediaBrowserServiceCompat.j f553d;

    p(MediaBrowserServiceCompat.j jVar, MediaBrowserServiceCompat.k kVar, String str, IBinder iBinder) {
        this.f553d = jVar;
        this.f550a = kVar;
        this.f551b = str;
        this.f552c = iBinder;
    }

    @Override // java.lang.Runnable
    public void run() {
        MediaBrowserServiceCompat.b bVar = MediaBrowserServiceCompat.this.f496c.get(this.f550a.asBinder());
        if (bVar == null) {
            Log.w("MBServiceCompat", "removeSubscription for callback that isn't registered id=" + this.f551b);
            return;
        }
        if (MediaBrowserServiceCompat.this.a(this.f551b, bVar, this.f552c)) {
            return;
        }
        Log.w("MBServiceCompat", "removeSubscription called for " + this.f551b + " which is not subscribed");
    }
}
