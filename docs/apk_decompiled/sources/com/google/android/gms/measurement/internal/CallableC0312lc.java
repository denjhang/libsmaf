package com.google.android.gms.measurement.internal;

import java.util.List;
import java.util.concurrent.Callable;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.lc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class CallableC0312lc implements Callable<List<zzv>> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ String f2320a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ String f2321b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ String f2322c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ BinderC0282fc f2323d;

    CallableC0312lc(BinderC0282fc binderC0282fc, String str, String str2, String str3) {
        this.f2323d = binderC0282fc;
        this.f2320a = str;
        this.f2321b = str2;
        this.f2322c = str3;
    }

    @Override // java.util.concurrent.Callable
    public final /* synthetic */ List<zzv> call() {
        this.f2323d.f2247a.r();
        return this.f2323d.f2247a.j().b(this.f2320a, this.f2321b, this.f2322c);
    }
}
