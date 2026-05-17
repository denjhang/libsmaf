package com.google.android.gms.measurement.internal;

import android.os.Bundle;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Oc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ Bundle f2064a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Gc f2065b;

    Oc(Gc gc, Bundle bundle) {
        this.f2065b = gc;
        this.f2064a = bundle;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2065b.d(this.f2064a);
    }
}
