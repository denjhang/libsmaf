package com.google.firebase.analytics.a;

import java.util.concurrent.Executor;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final /* synthetic */ class d implements Executor {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final Executor f2548a = new d();

    private d() {
    }

    @Override // java.util.concurrent.Executor
    public final void execute(Runnable runnable) {
        runnable.run();
    }
}
