package androidx.media;

import android.media.session.MediaSessionManager;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class A implements z {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final MediaSessionManager.RemoteUserInfo f487a;

    A(String str, int i, int i2) {
        this.f487a = new MediaSessionManager.RemoteUserInfo(str, i, i2);
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof A) {
            return this.f487a.equals(((A) obj).f487a);
        }
        return false;
    }

    public int hashCode() {
        return b.d.c.c.a(this.f487a);
    }
}
