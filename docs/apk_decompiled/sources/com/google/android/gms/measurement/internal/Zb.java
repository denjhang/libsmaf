package com.google.android.gms.measurement.internal;

import java.lang.Thread;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Zb implements Thread.UncaughtExceptionHandler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f2154a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Xb f2155b;

    public Zb(Xb xb, String str) {
        this.f2155b = xb;
        com.google.android.gms.common.internal.r.a(str);
        this.f2154a = str;
    }

    @Override // java.lang.Thread.UncaughtExceptionHandler
    public final synchronized void uncaughtException(Thread thread, Throwable th) {
        this.f2155b.d().t().a(this.f2154a, th);
    }
}
