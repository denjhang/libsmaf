package com.google.firebase.iid;

import java.util.concurrent.ThreadFactory;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final /* synthetic */ class L implements ThreadFactory {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final ThreadFactory f2640a = new L();

    private L() {
    }

    @Override // java.util.concurrent.ThreadFactory
    public final Thread newThread(Runnable runnable) {
        return I.a(runnable);
    }
}
