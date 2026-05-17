package androidx.media;

import android.os.Bundle;
import android.support.v4.os.ResultReceiver;
import androidx.media.MediaBrowserServiceCompat;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class h extends MediaBrowserServiceCompat.i<Bundle> {

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final /* synthetic */ ResultReceiver f532f;
    final /* synthetic */ MediaBrowserServiceCompat g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    h(MediaBrowserServiceCompat mediaBrowserServiceCompat, Object obj, ResultReceiver resultReceiver) {
        super(obj);
        this.g = mediaBrowserServiceCompat;
        this.f532f = resultReceiver;
    }

    /* JADX WARN: Can't rename method to resolve collision */
    @Override // androidx.media.MediaBrowserServiceCompat.i
    void a(Bundle bundle) {
        this.f532f.b(-1, bundle);
    }

    /* JADX INFO: Access modifiers changed from: package-private */
    @Override // androidx.media.MediaBrowserServiceCompat.i
    /* JADX INFO: renamed from: c, reason: merged with bridge method [inline-methods] */
    public void a(Bundle bundle) {
        this.f532f.b(0, bundle);
    }
}
