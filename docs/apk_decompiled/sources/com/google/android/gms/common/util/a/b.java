package com.google.android.gms.common.util.a;

import android.os.Process;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class b implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Runnable f1350a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final int f1351b;

    public b(Runnable runnable, int i) {
        this.f1350a = runnable;
        this.f1351b = i;
    }

    @Override // java.lang.Runnable
    public final void run() {
        Process.setThreadPriority(this.f1351b);
        this.f1350a.run();
    }
}
