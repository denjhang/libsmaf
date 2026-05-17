package com.google.android.gms.measurement.internal;

import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class ge implements Cb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ String f2261a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ ee f2262b;

    ge(ee eeVar, String str) {
        this.f2262b = eeVar;
        this.f2261a = str;
    }

    @Override // com.google.android.gms.measurement.internal.Cb
    public final void a(String str, int i, Throwable th, byte[] bArr, Map<String, List<String>> map) {
        this.f2262b.a(i, th, bArr, this.f2261a);
    }
}
