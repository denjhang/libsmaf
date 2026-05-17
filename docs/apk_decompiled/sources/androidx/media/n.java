package androidx.media;

import androidx.media.MediaBrowserServiceCompat;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class n implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ MediaBrowserServiceCompat.k f543a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ MediaBrowserServiceCompat.j f544b;

    n(MediaBrowserServiceCompat.j jVar, MediaBrowserServiceCompat.k kVar) {
        this.f544b = jVar;
        this.f543a = kVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        MediaBrowserServiceCompat.b bVarRemove = MediaBrowserServiceCompat.this.f496c.remove(this.f543a.asBinder());
        if (bVarRemove != null) {
            bVarRemove.f505f.asBinder().unlinkToDeath(bVarRemove, 0);
        }
    }
}
