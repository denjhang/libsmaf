package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Ua extends Pa {
    Ua() {
    }

    @Override // com.google.android.gms.internal.measurement.Pa
    public final void a(Throwable th, Throwable th2) {
        th.addSuppressed(th2);
    }
}
