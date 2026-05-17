package androidx.media;

import android.os.Build;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class y {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    z f586a;

    public y(String str, int i, int i2) {
        this.f586a = Build.VERSION.SDK_INT >= 28 ? new A(str, i, i2) : new B(str, i, i2);
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof y) {
            return this.f586a.equals(((y) obj).f586a);
        }
        return false;
    }

    public int hashCode() {
        return this.f586a.hashCode();
    }
}
