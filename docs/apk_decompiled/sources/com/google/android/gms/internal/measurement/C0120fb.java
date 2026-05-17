package com.google.android.gms.internal.measurement;

import java.util.NoSuchElementException;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.fb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0120fb extends AbstractC0134hb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f1699a = 0;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final int f1700b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ AbstractC0099cb f1701c;

    C0120fb(AbstractC0099cb abstractC0099cb) {
        this.f1701c = abstractC0099cb;
        this.f1700b = this.f1701c.h();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0161lb
    public final byte h() {
        int i = this.f1699a;
        if (i >= this.f1700b) {
            throw new NoSuchElementException();
        }
        this.f1699a = i + 1;
        return this.f1701c.b(i);
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f1699a < this.f1700b;
    }
}
