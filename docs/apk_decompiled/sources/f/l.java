package f;

import java.io.InterruptedIOException;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class l extends B {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private B f3250e;

    public l(B b2) {
        if (b2 == null) {
            throw new IllegalArgumentException("delegate == null");
        }
        this.f3250e = b2;
    }

    @Override // f.B
    public B a() {
        return this.f3250e.a();
    }

    @Override // f.B
    public B a(long j) {
        return this.f3250e.a(j);
    }

    @Override // f.B
    public B a(long j, TimeUnit timeUnit) {
        return this.f3250e.a(j, timeUnit);
    }

    public final l a(B b2) {
        if (b2 == null) {
            throw new IllegalArgumentException("delegate == null");
        }
        this.f3250e = b2;
        return this;
    }

    @Override // f.B
    public B b() {
        return this.f3250e.b();
    }

    @Override // f.B
    public long c() {
        return this.f3250e.c();
    }

    @Override // f.B
    public boolean d() {
        return this.f3250e.d();
    }

    @Override // f.B
    public void e() throws InterruptedIOException {
        this.f3250e.e();
    }

    public final B g() {
        return this.f3250e;
    }
}
