package com.google.android.gms.measurement.internal;

import android.content.ComponentName;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Gd implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ ComponentName f1977a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Ed f1978b;

    Gd(Ed ed, ComponentName componentName) {
        this.f1978b = ed;
        this.f1977a = componentName;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f1978b.f1953c.a(this.f1977a);
    }
}
