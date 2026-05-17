package com.google.android.gms.common.api.internal;

import com.google.android.gms.signin.internal.zaj;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class y implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ zaj f1119a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ w f1120b;

    y(w wVar, zaj zajVar) {
        this.f1120b = wVar;
        this.f1119a = zajVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f1120b.b(this.f1119a);
    }
}
