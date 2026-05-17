package com.google.android.gms.measurement.internal;

import java.util.List;
import java.util.concurrent.Callable;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.rc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class CallableC0341rc implements Callable<List<me>> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ zzm f2390a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ BinderC0282fc f2391b;

    CallableC0341rc(BinderC0282fc binderC0282fc, zzm zzmVar) {
        this.f2391b = binderC0282fc;
        this.f2390a = zzmVar;
    }

    @Override // java.util.concurrent.Callable
    public final /* synthetic */ List<me> call() {
        this.f2391b.f2247a.r();
        return this.f2391b.f2247a.j().a(this.f2390a.f2516a);
    }
}
