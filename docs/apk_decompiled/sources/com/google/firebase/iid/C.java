package com.google.firebase.iid;

import android.content.Intent;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ Intent f2607a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Intent f2608b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ zzc f2609c;

    C(zzc zzcVar, Intent intent, Intent intent2) {
        this.f2609c = zzcVar;
        this.f2607a = intent;
        this.f2608b = intent2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2609c.c(this.f2607a);
        this.f2609c.d(this.f2608b);
    }
}
