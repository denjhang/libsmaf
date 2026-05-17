package androidx.media;

import androidx.media.MediaBrowserServiceCompat;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class i implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ MediaBrowserServiceCompat.b f533a;

    i(MediaBrowserServiceCompat.b bVar) {
        this.f533a = bVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        MediaBrowserServiceCompat.b bVar = this.f533a;
        MediaBrowserServiceCompat.this.f496c.remove(bVar.f505f.asBinder());
    }
}
