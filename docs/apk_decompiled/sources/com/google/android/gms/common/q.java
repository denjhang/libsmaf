package com.google.android.gms.common;

import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
abstract class q extends o {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final WeakReference<byte[]> f1298b = new WeakReference<>(null);

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private WeakReference<byte[]> f1299c;

    q(byte[] bArr) {
        super(bArr);
        this.f1299c = f1298b;
    }

    @Override // com.google.android.gms.common.o
    final byte[] e() {
        byte[] bArrF;
        synchronized (this) {
            bArrF = this.f1299c.get();
            if (bArrF == null) {
                bArrF = f();
                this.f1299c = new WeakReference<>(bArrF);
            }
        }
        return bArrF;
    }

    protected abstract byte[] f();
}
