package androidx.media;

import android.support.v4.os.ResultReceiver;
import android.util.Log;
import androidx.media.MediaBrowserServiceCompat;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class q implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ MediaBrowserServiceCompat.k f554a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ String f555b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ ResultReceiver f556c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ MediaBrowserServiceCompat.j f557d;

    q(MediaBrowserServiceCompat.j jVar, MediaBrowserServiceCompat.k kVar, String str, ResultReceiver resultReceiver) {
        this.f557d = jVar;
        this.f554a = kVar;
        this.f555b = str;
        this.f556c = resultReceiver;
    }

    @Override // java.lang.Runnable
    public void run() {
        MediaBrowserServiceCompat.b bVar = MediaBrowserServiceCompat.this.f496c.get(this.f554a.asBinder());
        if (bVar != null) {
            MediaBrowserServiceCompat.this.a(this.f555b, bVar, this.f556c);
            return;
        }
        Log.w("MBServiceCompat", "getMediaItem for callback that isn't registered id=" + this.f555b);
    }
}
