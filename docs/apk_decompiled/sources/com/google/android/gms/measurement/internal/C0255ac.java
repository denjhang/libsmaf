package com.google.android.gms.measurement.internal;

import android.os.Process;
import java.util.concurrent.BlockingQueue;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.ac, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0255ac extends Thread {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Object f2178a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final BlockingQueue<Yb<?>> f2179b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ Xb f2180c;

    public C0255ac(Xb xb, String str, BlockingQueue<Yb<?>> blockingQueue) {
        this.f2180c = xb;
        com.google.android.gms.common.internal.r.a(str);
        com.google.android.gms.common.internal.r.a(blockingQueue);
        this.f2178a = new Object();
        this.f2179b = blockingQueue;
        setName(str);
    }

    private final void a(InterruptedException interruptedException) {
        this.f2180c.d().w().a(String.valueOf(getName()).concat(" was interrupted"), interruptedException);
    }

    public final void a() {
        synchronized (this.f2178a) {
            this.f2178a.notifyAll();
        }
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public final void run() {
        boolean z = false;
        while (!z) {
            try {
                this.f2180c.k.acquire();
                z = true;
            } catch (InterruptedException e2) {
                a(e2);
            }
        }
        try {
            int threadPriority = Process.getThreadPriority(Process.myTid());
            while (true) {
                Yb<?> ybPoll = this.f2179b.poll();
                if (ybPoll == null) {
                    synchronized (this.f2178a) {
                        if (this.f2179b.peek() == null && !this.f2180c.l) {
                            try {
                                this.f2178a.wait(30000L);
                            } catch (InterruptedException e3) {
                                a(e3);
                            }
                        }
                    }
                    synchronized (this.f2180c.j) {
                        if (this.f2179b.peek() == null) {
                            break;
                        }
                    }
                } else {
                    Process.setThreadPriority(ybPoll.f2146b ? threadPriority : 10);
                    ybPoll.run();
                }
            }
            synchronized (this.f2180c.j) {
                this.f2180c.k.release();
                this.f2180c.j.notifyAll();
                if (this == this.f2180c.f2137d) {
                    Xb.a(this.f2180c, null);
                } else if (this == this.f2180c.f2138e) {
                    Xb.b(this.f2180c, null);
                } else {
                    this.f2180c.d().t().a("Current scheduler thread is neither worker nor network");
                }
            }
        } catch (Throwable th) {
            synchronized (this.f2180c.j) {
                this.f2180c.k.release();
                this.f2180c.j.notifyAll();
                if (this == this.f2180c.f2137d) {
                    Xb.a(this.f2180c, null);
                } else if (this == this.f2180c.f2138e) {
                    Xb.b(this.f2180c, null);
                } else {
                    this.f2180c.d().t().a("Current scheduler thread is neither worker nor network");
                }
                throw th;
            }
        }
    }
}
