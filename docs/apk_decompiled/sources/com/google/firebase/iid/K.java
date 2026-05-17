package com.google.firebase.iid;

import java.util.concurrent.Executor;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final /* synthetic */ class K implements Executor {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final Executor f2639a = new K();

    private K() {
    }

    @Override // java.util.concurrent.Executor
    public final void execute(Runnable runnable) {
        runnable.run();
    }
}
