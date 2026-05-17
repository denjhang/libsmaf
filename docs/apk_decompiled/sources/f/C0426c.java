package f;

import java.io.IOException;
import java.io.InterruptedIOException;
import java.util.concurrent.TimeUnit;

/* JADX INFO: renamed from: f.c, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class C0426c extends B {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static final long f3235e = TimeUnit.SECONDS.toMillis(60);

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private static final long f3236f = TimeUnit.MILLISECONDS.toNanos(f3235e);
    static C0426c g;
    private boolean h;
    private C0426c i;
    private long j;

    /* JADX INFO: renamed from: f.c$a */
    private static final class a extends Thread {
        a() {
            super("Okio Watchdog");
            setDaemon(true);
        }

        /* JADX WARN: Code restructure failed: missing block: B:14:0x0015, code lost:
        
            r1.j();
         */
        @Override // java.lang.Thread, java.lang.Runnable
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public void run() {
            /*
                r3 = this;
            L0:
                java.lang.Class<f.c> r0 = f.C0426c.class
                monitor-enter(r0)     // Catch: java.lang.InterruptedException -> L0
                f.c r1 = f.C0426c.g()     // Catch: java.lang.Throwable -> L19
                if (r1 != 0) goto Lb
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
                goto L0
            Lb:
                f.c r2 = f.C0426c.g     // Catch: java.lang.Throwable -> L19
                if (r1 != r2) goto L14
                r1 = 0
                f.C0426c.g = r1     // Catch: java.lang.Throwable -> L19
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
                return
            L14:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
                r1.j()     // Catch: java.lang.InterruptedException -> L0
                goto L0
            L19:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
                goto L1d
            L1c:
                throw r1
            L1d:
                goto L1c
            */
            throw new UnsupportedOperationException("Method not decompiled: f.C0426c.a.run():void");
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:26:0x005e A[Catch: all -> 0x006b, TRY_LEAVE, TryCatch #0 {, blocks: (B:4:0x0003, B:6:0x0007, B:7:0x0016, B:10:0x0022, B:11:0x002b, B:17:0x003c, B:18:0x0042, B:20:0x0046, B:23:0x0051, B:24:0x0054, B:26:0x005e, B:16:0x0036, B:29:0x0065, B:30:0x006a), top: B:36:0x0003 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static synchronized void a(f.C0426c r6, long r7, boolean r9) {
        /*
            java.lang.Class<f.c> r0 = f.C0426c.class
            monitor-enter(r0)
            f.c r1 = f.C0426c.g     // Catch: java.lang.Throwable -> L6b
            if (r1 != 0) goto L16
            f.c r1 = new f.c     // Catch: java.lang.Throwable -> L6b
            r1.<init>()     // Catch: java.lang.Throwable -> L6b
            f.C0426c.g = r1     // Catch: java.lang.Throwable -> L6b
            f.c$a r1 = new f.c$a     // Catch: java.lang.Throwable -> L6b
            r1.<init>()     // Catch: java.lang.Throwable -> L6b
            r1.start()     // Catch: java.lang.Throwable -> L6b
        L16:
            long r1 = java.lang.System.nanoTime()     // Catch: java.lang.Throwable -> L6b
            r3 = 0
            int r5 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r5 == 0) goto L2f
            if (r9 == 0) goto L2f
            long r3 = r6.c()     // Catch: java.lang.Throwable -> L6b
            long r3 = r3 - r1
            long r7 = java.lang.Math.min(r7, r3)     // Catch: java.lang.Throwable -> L6b
        L2b:
            long r7 = r7 + r1
            r6.j = r7     // Catch: java.lang.Throwable -> L6b
            goto L3c
        L2f:
            int r5 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r5 == 0) goto L34
            goto L2b
        L34:
            if (r9 == 0) goto L65
            long r7 = r6.c()     // Catch: java.lang.Throwable -> L6b
            r6.j = r7     // Catch: java.lang.Throwable -> L6b
        L3c:
            long r7 = r6.b(r1)     // Catch: java.lang.Throwable -> L6b
            f.c r9 = f.C0426c.g     // Catch: java.lang.Throwable -> L6b
        L42:
            f.c r3 = r9.i     // Catch: java.lang.Throwable -> L6b
            if (r3 == 0) goto L54
            f.c r3 = r9.i     // Catch: java.lang.Throwable -> L6b
            long r3 = r3.b(r1)     // Catch: java.lang.Throwable -> L6b
            int r5 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r5 >= 0) goto L51
            goto L54
        L51:
            f.c r9 = r9.i     // Catch: java.lang.Throwable -> L6b
            goto L42
        L54:
            f.c r7 = r9.i     // Catch: java.lang.Throwable -> L6b
            r6.i = r7     // Catch: java.lang.Throwable -> L6b
            r9.i = r6     // Catch: java.lang.Throwable -> L6b
            f.c r6 = f.C0426c.g     // Catch: java.lang.Throwable -> L6b
            if (r9 != r6) goto L63
            java.lang.Class<f.c> r6 = f.C0426c.class
            r6.notify()     // Catch: java.lang.Throwable -> L6b
        L63:
            monitor-exit(r0)
            return
        L65:
            java.lang.AssertionError r6 = new java.lang.AssertionError     // Catch: java.lang.Throwable -> L6b
            r6.<init>()     // Catch: java.lang.Throwable -> L6b
            throw r6     // Catch: java.lang.Throwable -> L6b
        L6b:
            r6 = move-exception
            monitor-exit(r0)
            goto L6f
        L6e:
            throw r6
        L6f:
            goto L6e
        */
        throw new UnsupportedOperationException("Method not decompiled: f.C0426c.a(f.c, long, boolean):void");
    }

    /* JADX WARN: Code restructure failed: missing block: B:8:0x000b, code lost:
    
        r1.i = r3.i;
        r3.i = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:9:0x0012, code lost:
    
        r3 = false;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static synchronized boolean a(f.C0426c r3) {
        /*
            java.lang.Class<f.c> r0 = f.C0426c.class
            monitor-enter(r0)
            f.c r1 = f.C0426c.g     // Catch: java.lang.Throwable -> L1a
        L5:
            if (r1 == 0) goto L18
            f.c r2 = r1.i     // Catch: java.lang.Throwable -> L1a
            if (r2 != r3) goto L15
            f.c r2 = r3.i     // Catch: java.lang.Throwable -> L1a
            r1.i = r2     // Catch: java.lang.Throwable -> L1a
            r1 = 0
            r3.i = r1     // Catch: java.lang.Throwable -> L1a
            r3 = 0
        L13:
            monitor-exit(r0)
            return r3
        L15:
            f.c r1 = r1.i     // Catch: java.lang.Throwable -> L1a
            goto L5
        L18:
            r3 = 1
            goto L13
        L1a:
            r3 = move-exception
            monitor-exit(r0)
            goto L1e
        L1d:
            throw r3
        L1e:
            goto L1d
        */
        throw new UnsupportedOperationException("Method not decompiled: f.C0426c.a(f.c):boolean");
    }

    private long b(long j) {
        return this.j - j;
    }

    static C0426c g() throws InterruptedException {
        C0426c c0426c = g.i;
        if (c0426c == null) {
            long jNanoTime = System.nanoTime();
            C0426c.class.wait(f3235e);
            if (g.i != null || System.nanoTime() - jNanoTime < f3236f) {
                return null;
            }
            return g;
        }
        long jB = c0426c.b(System.nanoTime());
        if (jB > 0) {
            long j = jB / 1000000;
            C0426c.class.wait(j, (int) (jB - (1000000 * j)));
            return null;
        }
        g.i = c0426c.i;
        c0426c.i = null;
        return c0426c;
    }

    public final y a(y yVar) {
        return new C0424a(this, yVar);
    }

    public final z a(z zVar) {
        return new C0425b(this, zVar);
    }

    final IOException a(IOException iOException) {
        return !i() ? iOException : b(iOException);
    }

    final void a(boolean z) {
        if (i() && z) {
            throw b((IOException) null);
        }
    }

    protected IOException b(IOException iOException) {
        InterruptedIOException interruptedIOException = new InterruptedIOException("timeout");
        if (iOException != null) {
            interruptedIOException.initCause(iOException);
        }
        return interruptedIOException;
    }

    public final void h() {
        if (this.h) {
            throw new IllegalStateException("Unbalanced enter/exit");
        }
        long jF = f();
        boolean zD = d();
        if (jF != 0 || zD) {
            this.h = true;
            a(this, jF, zD);
        }
    }

    public final boolean i() {
        if (!this.h) {
            return false;
        }
        this.h = false;
        return a(this);
    }

    protected void j() {
    }
}
