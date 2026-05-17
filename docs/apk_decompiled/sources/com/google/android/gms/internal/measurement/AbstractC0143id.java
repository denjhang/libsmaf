package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.id, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
abstract class AbstractC0143id {
    AbstractC0143id() {
    }

    abstract int a(int i, byte[] bArr, int i2, int i3);

    abstract int a(CharSequence charSequence, byte[] bArr, int i, int i2);

    final boolean a(byte[] bArr, int i, int i2) {
        return a(0, bArr, i, i2) == 0;
    }

    abstract String b(byte[] bArr, int i, int i2);
}
