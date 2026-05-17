package com.google.android.gms.common.api.internal;

import com.google.android.gms.common.api.a;
import com.google.android.gms.common.api.a.d;
import com.google.android.gms.common.internal.C0079q;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class E<O extends a.d> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final boolean f1053a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final int f1054b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final com.google.android.gms.common.api.a<O> f1055c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final O f1056d;

    public final String a() {
        return this.f1055c.a();
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof E)) {
            return false;
        }
        E e2 = (E) obj;
        return !this.f1053a && !e2.f1053a && C0079q.a(this.f1055c, e2.f1055c) && C0079q.a(this.f1056d, e2.f1056d);
    }

    public final int hashCode() {
        return this.f1054b;
    }
}
