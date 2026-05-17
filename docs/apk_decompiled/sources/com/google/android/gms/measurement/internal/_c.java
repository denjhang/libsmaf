package com.google.android.gms.measurement.internal;

import android.net.Uri;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class _c implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ boolean f2165a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Uri f2166b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ String f2167c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ String f2168d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ Xc f2169e;

    _c(Xc xc, boolean z, Uri uri, String str, String str2) {
        this.f2169e = xc;
        this.f2165a = z;
        this.f2166b = uri;
        this.f2167c = str;
        this.f2168d = str2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2169e.a(this.f2165a, this.f2166b, this.f2167c, this.f2168d);
    }
}
