package c.a.a.a.f;

import java.util.concurrent.CancellationException;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class j {

    private static final class a implements b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final CountDownLatch f859a;

        private a() {
            this.f859a = new CountDownLatch(1);
        }

        /* synthetic */ a(A a2) {
            this();
        }

        @Override // c.a.a.a.f.b
        public final void a() {
            this.f859a.countDown();
        }

        @Override // c.a.a.a.f.c
        public final void a(Exception exc) {
            this.f859a.countDown();
        }

        @Override // c.a.a.a.f.d
        public final void a(Object obj) {
            this.f859a.countDown();
        }

        public final boolean a(long j, TimeUnit timeUnit) {
            return this.f859a.await(j, timeUnit);
        }

        public final void b() throws InterruptedException {
            this.f859a.await();
        }
    }

    interface b extends c.a.a.a.f.b, c, d<Object> {
    }

    public static <TResult> g<TResult> a(TResult tresult) {
        z zVar = new z();
        zVar.a(tresult);
        return zVar;
    }

    public static <TResult> TResult a(g<TResult> gVar) throws InterruptedException {
        com.google.android.gms.common.internal.r.a();
        com.google.android.gms.common.internal.r.a(gVar, "Task must not be null");
        if (gVar.d()) {
            return (TResult) b(gVar);
        }
        a aVar = new a(null);
        a(gVar, aVar);
        aVar.b();
        return (TResult) b(gVar);
    }

    public static <TResult> TResult a(g<TResult> gVar, long j, TimeUnit timeUnit) throws TimeoutException {
        com.google.android.gms.common.internal.r.a();
        com.google.android.gms.common.internal.r.a(gVar, "Task must not be null");
        com.google.android.gms.common.internal.r.a(timeUnit, "TimeUnit must not be null");
        if (gVar.d()) {
            return (TResult) b(gVar);
        }
        a aVar = new a(null);
        a(gVar, aVar);
        if (aVar.a(j, timeUnit)) {
            return (TResult) b(gVar);
        }
        throw new TimeoutException("Timed out waiting for Task");
    }

    private static void a(g<?> gVar, b bVar) {
        gVar.a(i.f857b, (d<? super Object>) bVar);
        gVar.a(i.f857b, (c) bVar);
        gVar.a(i.f857b, (c.a.a.a.f.b) bVar);
    }

    private static <TResult> TResult b(g<TResult> gVar) throws ExecutionException {
        if (gVar.e()) {
            return gVar.b();
        }
        if (gVar.c()) {
            throw new CancellationException("Task is already canceled");
        }
        throw new ExecutionException(gVar.a());
    }
}
