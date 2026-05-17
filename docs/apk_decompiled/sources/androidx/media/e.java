package androidx.media;

import android.os.Bundle;
import android.os.RemoteException;
import android.support.v4.media.MediaBrowserCompat;
import android.util.Log;
import androidx.media.MediaBrowserServiceCompat;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class e extends MediaBrowserServiceCompat.i<List<MediaBrowserCompat.MediaItem>> {

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final /* synthetic */ MediaBrowserServiceCompat.b f529f;
    final /* synthetic */ String g;
    final /* synthetic */ Bundle h;
    final /* synthetic */ Bundle i;
    final /* synthetic */ MediaBrowserServiceCompat j;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    e(MediaBrowserServiceCompat mediaBrowserServiceCompat, Object obj, MediaBrowserServiceCompat.b bVar, String str, Bundle bundle, Bundle bundle2) {
        super(obj);
        this.j = mediaBrowserServiceCompat;
        this.f529f = bVar;
        this.g = str;
        this.h = bundle;
        this.i = bundle2;
    }

    /* JADX INFO: Access modifiers changed from: package-private */
    @Override // androidx.media.MediaBrowserServiceCompat.i
    public void a(List<MediaBrowserCompat.MediaItem> list) {
        if (this.j.f496c.get(this.f529f.f505f.asBinder()) != this.f529f) {
            if (MediaBrowserServiceCompat.f494a) {
                Log.d("MBServiceCompat", "Not sending onLoadChildren result for connection that has been disconnected. pkg=" + this.f529f.f500a + " id=" + this.g);
                return;
            }
            return;
        }
        if ((a() & 1) != 0) {
            list = this.j.a(list, this.h);
        }
        try {
            this.f529f.f505f.a(this.g, list, this.h, this.i);
        } catch (RemoteException unused) {
            Log.w("MBServiceCompat", "Calling onLoadChildren() failed for id=" + this.g + " package=" + this.f529f.f500a);
        }
    }
}
