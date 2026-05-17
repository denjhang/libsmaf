package androidx.media;

import android.text.TextUtils;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class B implements z {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f491a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f492b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int f493c;

    B(String str, int i, int i2) {
        this.f491a = str;
        this.f492b = i;
        this.f493c = i2;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof B)) {
            return false;
        }
        B b2 = (B) obj;
        return TextUtils.equals(this.f491a, b2.f491a) && this.f492b == b2.f492b && this.f493c == b2.f493c;
    }

    public int hashCode() {
        return b.d.c.c.a(this.f491a, Integer.valueOf(this.f492b), Integer.valueOf(this.f493c));
    }
}
