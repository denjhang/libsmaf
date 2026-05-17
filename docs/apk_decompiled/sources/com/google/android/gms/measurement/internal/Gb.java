package com.google.android.gms.measurement.internal;

import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Gb implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Cb f1967a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final int f1968b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Throwable f1969c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final byte[] f1970d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final String f1971e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final Map<String, List<String>> f1972f;

    private Gb(String str, Cb cb, int i, Throwable th, byte[] bArr, Map<String, List<String>> map) {
        com.google.android.gms.common.internal.r.a(cb);
        this.f1967a = cb;
        this.f1968b = i;
        this.f1969c = th;
        this.f1970d = bArr;
        this.f1971e = str;
        this.f1972f = map;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f1967a.a(this.f1971e, this.f1968b, this.f1969c, this.f1970d, this.f1972f);
    }
}
