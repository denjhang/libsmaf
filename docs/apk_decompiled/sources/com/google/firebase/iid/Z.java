package com.google.firebase.iid;

import android.util.Base64;
import com.google.android.gms.common.internal.C0079q;
import java.security.KeyPair;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Z {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final KeyPair f2667a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final long f2668b;

    Z(KeyPair keyPair, long j) {
        this.f2667a = keyPair;
        this.f2668b = j;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final String b() {
        return Base64.encodeToString(this.f2667a.getPublic().getEncoded(), 11);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final String c() {
        return Base64.encodeToString(this.f2667a.getPrivate().getEncoded(), 11);
    }

    final KeyPair a() {
        return this.f2667a;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof Z)) {
            return false;
        }
        Z z = (Z) obj;
        return this.f2668b == z.f2668b && this.f2667a.getPublic().equals(z.f2667a.getPublic()) && this.f2667a.getPrivate().equals(z.f2667a.getPrivate());
    }

    public final int hashCode() {
        return C0079q.a(this.f2667a.getPublic(), this.f2667a.getPrivate(), Long.valueOf(this.f2668b));
    }
}
