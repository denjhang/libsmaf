package androidx.media;

import android.os.Bundle;
import android.os.Parcelable;
import android.support.v4.media.MediaBrowserCompat;
import android.support.v4.os.ResultReceiver;
import androidx.media.MediaBrowserServiceCompat;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class g extends MediaBrowserServiceCompat.i<List<MediaBrowserCompat.MediaItem>> {

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final /* synthetic */ ResultReceiver f531f;
    final /* synthetic */ MediaBrowserServiceCompat g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    g(MediaBrowserServiceCompat mediaBrowserServiceCompat, Object obj, ResultReceiver resultReceiver) {
        super(obj);
        this.g = mediaBrowserServiceCompat;
        this.f531f = resultReceiver;
    }

    /* JADX INFO: Access modifiers changed from: package-private */
    @Override // androidx.media.MediaBrowserServiceCompat.i
    public void a(List<MediaBrowserCompat.MediaItem> list) {
        if ((a() & 4) != 0 || list == null) {
            this.f531f.b(-1, null);
            return;
        }
        Bundle bundle = new Bundle();
        bundle.putParcelableArray("search_results", (Parcelable[]) list.toArray(new MediaBrowserCompat.MediaItem[0]));
        this.f531f.b(0, bundle);
    }
}
