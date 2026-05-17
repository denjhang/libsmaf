package com.google.android.gms.common;

import java.util.Arrays;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class p extends o {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final byte[] f1297b;

    p(byte[] bArr) {
        super(Arrays.copyOfRange(bArr, 0, 25));
        this.f1297b = bArr;
    }

    @Override // com.google.android.gms.common.o
    final byte[] e() {
        return this.f1297b;
    }
}
