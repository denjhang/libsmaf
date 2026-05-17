package com.google.android.gms.common.images;

import android.net.Uri;
import com.google.android.gms.common.internal.C0079q;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Uri f1183a;

    public b(Uri uri) {
        this.f1183a = uri;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof b)) {
            return false;
        }
        if (this == obj) {
            return true;
        }
        return C0079q.a(((b) obj).f1183a, this.f1183a);
    }

    public final int hashCode() {
        return C0079q.a(this.f1183a);
    }
}
