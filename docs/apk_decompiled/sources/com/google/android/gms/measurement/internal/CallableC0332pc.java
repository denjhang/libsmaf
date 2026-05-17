package com.google.android.gms.measurement.internal;

import java.util.concurrent.Callable;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.pc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class CallableC0332pc implements Callable<byte[]> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ zzan f2374a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ String f2375b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ BinderC0282fc f2376c;

    CallableC0332pc(BinderC0282fc binderC0282fc, zzan zzanVar, String str) {
        this.f2376c = binderC0282fc;
        this.f2374a = zzanVar;
        this.f2375b = str;
    }

    @Override // java.util.concurrent.Callable
    public final /* synthetic */ byte[] call() {
        this.f2376c.f2247a.r();
        this.f2376c.f2247a.l().a(this.f2374a, this.f2375b);
        throw null;
    }
}
