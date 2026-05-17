package com.google.android.gms.measurement.internal;

import java.util.Iterator;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.m, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0314m implements Iterator<String> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Iterator<String> f2329a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ zzam f2330b;

    C0314m(zzam zzamVar) {
        this.f2330b = zzamVar;
        this.f2329a = this.f2330b.f2505a.keySet().iterator();
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f2329a.hasNext();
    }

    @Override // java.util.Iterator
    public final /* synthetic */ String next() {
        return this.f2329a.next();
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException("Remove not supported");
    }
}
