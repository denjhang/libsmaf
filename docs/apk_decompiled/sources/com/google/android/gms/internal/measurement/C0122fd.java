package com.google.android.gms.internal.measurement;

import java.util.Iterator;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.fd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0122fd implements Iterator<String> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Iterator<String> f1702a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ C0108dd f1703b;

    C0122fd(C0108dd c0108dd) {
        this.f1703b = c0108dd;
        this.f1702a = this.f1703b.f1670a.iterator();
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f1702a.hasNext();
    }

    @Override // java.util.Iterator
    public final /* synthetic */ String next() {
        return this.f1702a.next();
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException();
    }
}
