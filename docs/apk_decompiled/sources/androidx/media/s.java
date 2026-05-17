package androidx.media;

import android.os.IBinder;
import androidx.media.MediaBrowserServiceCompat;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class s implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ MediaBrowserServiceCompat.k f564a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ MediaBrowserServiceCompat.j f565b;

    s(MediaBrowserServiceCompat.j jVar, MediaBrowserServiceCompat.k kVar) {
        this.f565b = jVar;
        this.f564a = kVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        IBinder iBinderAsBinder = this.f564a.asBinder();
        MediaBrowserServiceCompat.b bVarRemove = MediaBrowserServiceCompat.this.f496c.remove(iBinderAsBinder);
        if (bVarRemove != null) {
            iBinderAsBinder.unlinkToDeath(bVarRemove, 0);
        }
    }
}
