package e;

import e.a.b.g;
import java.lang.ref.Reference;
import java.net.Socket;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.List;
import java.util.concurrent.Executor;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: renamed from: e.m, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0420m {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Executor f3182a = new ThreadPoolExecutor(0, Integer.MAX_VALUE, 60, TimeUnit.SECONDS, new SynchronousQueue(), e.a.e.a("OkHttp ConnectionPool", true));

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final int f3183b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final long f3184c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Runnable f3185d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final Deque<e.a.b.c> f3186e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final e.a.b.d f3187f;
    boolean g;

    public C0420m() {
        this(5, 5L, TimeUnit.MINUTES);
    }

    public C0420m(int i, long j, TimeUnit timeUnit) {
        this.f3185d = new RunnableC0419l(this);
        this.f3186e = new ArrayDeque();
        this.f3187f = new e.a.b.d();
        this.f3183b = i;
        this.f3184c = timeUnit.toNanos(j);
        if (j > 0) {
            return;
        }
        throw new IllegalArgumentException("keepAliveDuration <= 0: " + j);
    }

    private int a(e.a.b.c cVar, long j) {
        List<Reference<e.a.b.g>> list = cVar.n;
        int i = 0;
        while (i < list.size()) {
            Reference<e.a.b.g> reference = list.get(i);
            if (reference.get() != null) {
                i++;
            } else {
                e.a.f.f.a().a("A connection to " + cVar.c().a().k() + " was leaked. Did you forget to close a response body?", ((g.a) reference).f2935a);
                list.remove(i);
                cVar.k = true;
                if (list.isEmpty()) {
                    cVar.o = j - this.f3184c;
                    return 0;
                }
            }
        }
        return list.size();
    }

    long a(long j) {
        synchronized (this) {
            long j2 = Long.MIN_VALUE;
            e.a.b.c cVar = null;
            int i = 0;
            int i2 = 0;
            for (e.a.b.c cVar2 : this.f3186e) {
                if (a(cVar2, j) > 0) {
                    i2++;
                } else {
                    i++;
                    long j3 = j - cVar2.o;
                    if (j3 > j2) {
                        cVar = cVar2;
                        j2 = j3;
                    }
                }
            }
            if (j2 < this.f3184c && i <= this.f3183b) {
                if (i > 0) {
                    return this.f3184c - j2;
                }
                if (i2 > 0) {
                    return this.f3184c;
                }
                this.g = false;
                return -1L;
            }
            this.f3186e.remove(cVar);
            e.a.e.a(cVar.d());
            return 0L;
        }
    }

    e.a.b.c a(C0408a c0408a, e.a.b.g gVar, N n) {
        for (e.a.b.c cVar : this.f3186e) {
            if (cVar.a(c0408a, n)) {
                gVar.a(cVar, true);
                return cVar;
            }
        }
        return null;
    }

    Socket a(C0408a c0408a, e.a.b.g gVar) {
        for (e.a.b.c cVar : this.f3186e) {
            if (cVar.a(c0408a, null) && cVar.b() && cVar != gVar.b()) {
                return gVar.a(cVar);
            }
        }
        return null;
    }

    boolean a(e.a.b.c cVar) {
        if (cVar.k || this.f3183b == 0) {
            this.f3186e.remove(cVar);
            return true;
        }
        notifyAll();
        return false;
    }

    void b(e.a.b.c cVar) {
        if (!this.g) {
            this.g = true;
            f3182a.execute(this.f3185d);
        }
        this.f3186e.add(cVar);
    }
}
