package com.google.android.gms.measurement.internal;

import java.util.List;
import java.util.concurrent.Callable;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.jc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class CallableC0302jc implements Callable<List<me>> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ String f2291a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ String f2292b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ String f2293c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ BinderC0282fc f2294d;

    CallableC0302jc(BinderC0282fc binderC0282fc, String str, String str2, String str3) {
        this.f2294d = binderC0282fc;
        this.f2291a = str;
        this.f2292b = str2;
        this.f2293c = str3;
    }

    @Override // java.util.concurrent.Callable
    public final /* synthetic */ List<me> call() {
        this.f2294d.f2247a.r();
        return this.f2294d.f2247a.j().a(this.f2291a, this.f2292b, this.f2293c);
    }
}
