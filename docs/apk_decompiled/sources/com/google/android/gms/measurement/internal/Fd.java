package com.google.android.gms.measurement.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Fd implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ InterfaceC0326ob f1963a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Ed f1964b;

    Fd(Ed ed, InterfaceC0326ob interfaceC0326ob) {
        this.f1964b = ed;
        this.f1963a = interfaceC0326ob;
    }

    @Override // java.lang.Runnable
    public final void run() {
        synchronized (this.f1964b) {
            Ed.a(this.f1964b, false);
            if (!this.f1964b.f1953c.B()) {
                this.f1964b.f1953c.d().A().a("Connected to remote service");
                this.f1964b.f1953c.a(this.f1963a);
            }
        }
    }
}
