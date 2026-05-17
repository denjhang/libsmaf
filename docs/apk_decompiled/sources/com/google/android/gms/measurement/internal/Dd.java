package com.google.android.gms.measurement.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Dd implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ InterfaceC0326ob f1947a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Ed f1948b;

    Dd(Ed ed, InterfaceC0326ob interfaceC0326ob) {
        this.f1948b = ed;
        this.f1947a = interfaceC0326ob;
    }

    @Override // java.lang.Runnable
    public final void run() {
        synchronized (this.f1948b) {
            Ed.a(this.f1948b, false);
            if (!this.f1948b.f1953c.B()) {
                this.f1948b.f1953c.d().B().a("Connected to service");
                this.f1948b.f1953c.a(this.f1947a);
            }
        }
    }
}
