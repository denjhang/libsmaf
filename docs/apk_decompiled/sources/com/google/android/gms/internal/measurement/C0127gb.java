package com.google.android.gms.internal.measurement;

import java.util.Arrays;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.gb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0127gb implements InterfaceC0141ib {
    private C0127gb() {
    }

    /* synthetic */ C0127gb(C0120fb c0120fb) {
        this();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0141ib
    public final byte[] a(byte[] bArr, int i, int i2) {
        return Arrays.copyOfRange(bArr, i, i2 + i);
    }
}
