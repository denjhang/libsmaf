package com.google.android.gms.measurement.internal;

import java.util.List;
import java.util.concurrent.Callable;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.gc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class CallableC0287gc implements Callable<List<me>> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ zzm f2257a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ String f2258b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ String f2259c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ BinderC0282fc f2260d;

    CallableC0287gc(BinderC0282fc binderC0282fc, zzm zzmVar, String str, String str2) {
        this.f2260d = binderC0282fc;
        this.f2257a = zzmVar;
        this.f2258b = str;
        this.f2259c = str2;
    }

    @Override // java.util.concurrent.Callable
    public final /* synthetic */ List<me> call() {
        this.f2260d.f2247a.r();
        return this.f2260d.f2247a.j().a(this.f2257a.f2516a, this.f2258b, this.f2259c);
    }
}
