package com.google.android.gms.measurement.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Jc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ String f2000a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ String f2001b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ Object f2002c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ long f2003d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ Gc f2004e;

    Jc(Gc gc, String str, String str2, Object obj, long j) {
        this.f2004e = gc;
        this.f2000a = str;
        this.f2001b = str2;
        this.f2002c = obj;
        this.f2003d = j;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2004e.a(this.f2000a, this.f2001b, this.f2002c, this.f2003d);
    }
}
