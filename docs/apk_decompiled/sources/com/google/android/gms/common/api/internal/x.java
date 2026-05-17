package com.google.android.gms.common.api.internal;

import com.google.android.gms.common.ConnectionResult;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class x implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ w f1118a;

    x(w wVar) {
        this.f1118a = wVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f1118a.h.b(new ConnectionResult(4));
    }
}
