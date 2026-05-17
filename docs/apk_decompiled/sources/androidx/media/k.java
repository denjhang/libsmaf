package androidx.media;

import android.os.Parcel;
import android.support.v4.media.MediaBrowserCompat;
import androidx.media.MediaBrowserServiceCompat;
import androidx.media.v;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class k extends MediaBrowserServiceCompat.i<MediaBrowserCompat.MediaItem> {

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final /* synthetic */ v.c f535f;
    final /* synthetic */ MediaBrowserServiceCompat.e g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    k(MediaBrowserServiceCompat.e eVar, Object obj, v.c cVar) {
        super(obj);
        this.g = eVar;
        this.f535f = cVar;
    }

    /* JADX INFO: Access modifiers changed from: package-private */
    @Override // androidx.media.MediaBrowserServiceCompat.i
    public void a(MediaBrowserCompat.MediaItem mediaItem) {
        Parcel parcelObtain;
        v.c cVar;
        if (mediaItem == null) {
            cVar = this.f535f;
            parcelObtain = null;
        } else {
            parcelObtain = Parcel.obtain();
            mediaItem.writeToParcel(parcelObtain, 0);
            cVar = this.f535f;
        }
        cVar.a(parcelObtain);
    }
}
