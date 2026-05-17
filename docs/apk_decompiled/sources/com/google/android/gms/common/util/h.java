package com.google.android.gms.common.util;

import android.os.SystemClock;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class h implements e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final h f1358a = new h();

    private h() {
    }

    public static e d() {
        return f1358a;
    }

    @Override // com.google.android.gms.common.util.e
    public long a() {
        return System.currentTimeMillis();
    }

    @Override // com.google.android.gms.common.util.e
    public long b() {
        return SystemClock.elapsedRealtime();
    }

    @Override // com.google.android.gms.common.util.e
    public long c() {
        return System.nanoTime();
    }
}
