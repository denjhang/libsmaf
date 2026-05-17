package jp.co.acrodea.runtime.drm.agent;

import java.net.Socket;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class q extends Thread {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ p f3385a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Socket f3386b;

    q(p pVar, Socket socket) {
        this.f3385a = pVar;
        this.f3386b = socket;
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public void run() {
        this.f3385a.f3379a.n.incrementAndGet();
        try {
            this.f3385a.a(this.f3386b);
            synchronized (this.f3385a.f3379a.k) {
                this.f3385a.f3379a.n.decrementAndGet();
                this.f3385a.f3379a.k.notify();
            }
        } catch (Throwable th) {
            synchronized (this.f3385a.f3379a.k) {
                this.f3385a.f3379a.n.decrementAndGet();
                this.f3385a.f3379a.k.notify();
                throw th;
            }
        }
    }
}
