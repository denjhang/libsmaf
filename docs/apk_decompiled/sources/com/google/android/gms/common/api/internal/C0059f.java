package com.google.android.gms.common.api.internal;

/* JADX INFO: renamed from: com.google.android.gms.common.api.internal.f, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0059f<L> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final L f1093a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final String f1094b;

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof C0059f)) {
            return false;
        }
        C0059f c0059f = (C0059f) obj;
        return this.f1093a == c0059f.f1093a && this.f1094b.equals(c0059f.f1094b);
    }

    public final int hashCode() {
        return (System.identityHashCode(this.f1093a) * 31) + this.f1094b.hashCode();
    }
}
