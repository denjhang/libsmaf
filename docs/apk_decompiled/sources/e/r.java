package e;

import e.G;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.Iterator;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class r {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private Runnable f3207c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private ExecutorService f3208d;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f3205a = 64;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f3206b = 5;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final Deque<G.a> f3209e = new ArrayDeque();

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final Deque<G.a> f3210f = new ArrayDeque();
    private final Deque<G> g = new ArrayDeque();

    private <T> void a(Deque<T> deque, T t, boolean z) {
        int iB;
        Runnable runnable;
        synchronized (this) {
            if (!deque.remove(t)) {
                throw new AssertionError("Call wasn't in-flight!");
            }
            if (z) {
                c();
            }
            iB = b();
            runnable = this.f3207c;
        }
        if (iB != 0 || runnable == null) {
            return;
        }
        runnable.run();
    }

    private int b(G.a aVar) {
        int i = 0;
        for (G.a aVar2 : this.f3210f) {
            if (!aVar2.c().f2843e && aVar2.d().equals(aVar.d())) {
                i++;
            }
        }
        return i;
    }

    private void c() {
        if (this.f3210f.size() < this.f3205a && !this.f3209e.isEmpty()) {
            Iterator<G.a> it = this.f3209e.iterator();
            while (it.hasNext()) {
                G.a next = it.next();
                if (b(next) < this.f3206b) {
                    it.remove();
                    this.f3210f.add(next);
                    a().execute(next);
                }
                if (this.f3210f.size() >= this.f3205a) {
                    return;
                }
            }
        }
    }

    public synchronized ExecutorService a() {
        if (this.f3208d == null) {
            this.f3208d = new ThreadPoolExecutor(0, Integer.MAX_VALUE, 60L, TimeUnit.SECONDS, new SynchronousQueue(), e.a.e.a("OkHttp Dispatcher", false));
        }
        return this.f3208d;
    }

    void a(G.a aVar) {
        a(this.f3210f, aVar, true);
    }

    synchronized void a(G g) {
        this.g.add(g);
    }

    public synchronized int b() {
        return this.f3210f.size() + this.g.size();
    }

    void b(G g) {
        a(this.g, g, false);
    }
}
