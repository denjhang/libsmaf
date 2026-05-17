package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.j, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0299j implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ InterfaceC0371xc f2287a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ AbstractC0284g f2288b;

    RunnableC0299j(AbstractC0284g abstractC0284g, InterfaceC0371xc interfaceC0371xc) {
        this.f2288b = abstractC0284g;
        this.f2287a = interfaceC0371xc;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2287a.f();
        if (ye.a()) {
            this.f2287a.c().a(this);
            return;
        }
        boolean zB = this.f2288b.b();
        AbstractC0284g.a(this.f2288b, 0L);
        if (zB) {
            this.f2288b.a();
        }
    }
}
