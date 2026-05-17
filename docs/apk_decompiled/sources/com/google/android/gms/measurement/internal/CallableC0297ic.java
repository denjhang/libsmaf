package com.google.android.gms.measurement.internal;

import java.util.List;
import java.util.concurrent.Callable;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.ic, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class CallableC0297ic implements Callable<List<zzv>> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ zzm f2279a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ String f2280b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ String f2281c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ BinderC0282fc f2282d;

    CallableC0297ic(BinderC0282fc binderC0282fc, zzm zzmVar, String str, String str2) {
        this.f2282d = binderC0282fc;
        this.f2279a = zzmVar;
        this.f2280b = str;
        this.f2281c = str2;
    }

    @Override // java.util.concurrent.Callable
    public final /* synthetic */ List<zzv> call() {
        this.f2282d.f2247a.r();
        return this.f2282d.f2247a.j().b(this.f2279a.f2516a, this.f2280b, this.f2281c);
    }
}
