package f;

import java.io.InterruptedIOException;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class B {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final B f3226a = new A();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private boolean f3227b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private long f3228c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private long f3229d;

    public B a() {
        this.f3227b = false;
        return this;
    }

    public B a(long j) {
        this.f3227b = true;
        this.f3228c = j;
        return this;
    }

    public B a(long j, TimeUnit timeUnit) {
        if (j >= 0) {
            if (timeUnit == null) {
                throw new IllegalArgumentException("unit == null");
            }
            this.f3229d = timeUnit.toNanos(j);
            return this;
        }
        throw new IllegalArgumentException("timeout < 0: " + j);
    }

    public B b() {
        this.f3229d = 0L;
        return this;
    }

    public long c() {
        if (this.f3227b) {
            return this.f3228c;
        }
        throw new IllegalStateException("No deadline");
    }

    public boolean d() {
        return this.f3227b;
    }

    public void e() throws InterruptedIOException {
        if (Thread.interrupted()) {
            throw new InterruptedIOException("thread interrupted");
        }
        if (this.f3227b && this.f3228c - System.nanoTime() <= 0) {
            throw new InterruptedIOException("deadline reached");
        }
    }

    public long f() {
        return this.f3229d;
    }
}
