package e.a.e;

import e.a.e.r;
import java.io.Closeable;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.net.Socket;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class m implements Closeable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final ExecutorService f3051a = new ThreadPoolExecutor(0, Integer.MAX_VALUE, 60, TimeUnit.SECONDS, new SynchronousQueue(), e.a.e.a("OkHttp Http2Connection", true));

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final boolean f3052b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final b f3053c;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final String f3055e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    int f3056f;
    int g;
    boolean h;
    private final ScheduledExecutorService i;
    private final ExecutorService j;
    final w k;
    private boolean l;
    long n;
    final Socket r;
    final t s;
    final d t;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final Map<Integer, s> f3054d = new LinkedHashMap();
    long m = 0;
    x o = new x();
    final x p = new x();
    boolean q = false;
    final Set<Integer> u = new LinkedHashSet();

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        Socket f3057a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        String f3058b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        f.h f3059c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        f.g f3060d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        b f3061e = b.f3063a;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        w f3062f = w.f3115a;
        boolean g;
        int h;

        public a(boolean z) {
            this.g = z;
        }

        public a a(int i) {
            this.h = i;
            return this;
        }

        public a a(b bVar) {
            this.f3061e = bVar;
            return this;
        }

        public a a(Socket socket, String str, f.h hVar, f.g gVar) {
            this.f3057a = socket;
            this.f3058b = str;
            this.f3059c = hVar;
            this.f3060d = gVar;
            return this;
        }

        public m a() {
            return new m(this);
        }
    }

    public static abstract class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final b f3063a = new n();

        public void a(m mVar) {
        }

        public abstract void a(s sVar);
    }

    final class c extends e.a.b {

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final boolean f3064b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        final int f3065c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        final int f3066d;

        c(boolean z, int i, int i2) {
            super("OkHttp %s ping %08x%08x", m.this.f3055e, Integer.valueOf(i), Integer.valueOf(i2));
            this.f3064b = z;
            this.f3065c = i;
            this.f3066d = i2;
        }

        @Override // e.a.b
        public void b() {
            m.this.a(this.f3064b, this.f3065c, this.f3066d);
        }
    }

    class d extends e.a.b implements r.b {

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final r f3068b;

        d(r rVar) {
            super("OkHttp %s", m.this.f3055e);
            this.f3068b = rVar;
        }

        private void a(x xVar) {
            try {
                m.this.i.execute(new q(this, "OkHttp %s ACK Settings", new Object[]{m.this.f3055e}, xVar));
            } catch (RejectedExecutionException unused) {
            }
        }

        @Override // e.a.e.r.b
        public void a() {
        }

        @Override // e.a.e.r.b
        public void a(int i, int i2, int i3, boolean z) {
        }

        @Override // e.a.e.r.b
        public void a(int i, int i2, List<e.a.e.c> list) {
            m.this.a(i2, list);
        }

        @Override // e.a.e.r.b
        public void a(int i, long j) {
            if (i == 0) {
                synchronized (m.this) {
                    m.this.n += j;
                    m.this.notifyAll();
                }
                return;
            }
            s sVarA = m.this.a(i);
            if (sVarA != null) {
                synchronized (sVarA) {
                    sVarA.a(j);
                }
            }
        }

        @Override // e.a.e.r.b
        public void a(int i, e.a.e.b bVar) {
            if (m.this.b(i)) {
                m.this.a(i, bVar);
                return;
            }
            s sVarC = m.this.c(i);
            if (sVarC != null) {
                sVarC.c(bVar);
            }
        }

        @Override // e.a.e.r.b
        public void a(int i, e.a.e.b bVar, f.i iVar) {
            s[] sVarArr;
            iVar.e();
            synchronized (m.this) {
                sVarArr = (s[]) m.this.f3054d.values().toArray(new s[m.this.f3054d.size()]);
                m.this.h = true;
            }
            for (s sVar : sVarArr) {
                if (sVar.c() > i && sVar.f()) {
                    sVar.c(e.a.e.b.REFUSED_STREAM);
                    m.this.c(sVar.c());
                }
            }
        }

        @Override // e.a.e.r.b
        public void a(boolean z, int i, int i2) {
            if (!z) {
                try {
                    m.this.i.execute(m.this.new c(true, i, i2));
                } catch (RejectedExecutionException unused) {
                }
            } else {
                synchronized (m.this) {
                    m.this.l = false;
                    m.this.notifyAll();
                }
            }
        }

        @Override // e.a.e.r.b
        public void a(boolean z, int i, int i2, List<e.a.e.c> list) {
            if (m.this.b(i)) {
                m.this.a(i, list, z);
                return;
            }
            synchronized (m.this) {
                s sVarA = m.this.a(i);
                if (sVarA != null) {
                    sVarA.a(list);
                    if (z) {
                        sVarA.i();
                        return;
                    }
                    return;
                }
                if (m.this.h) {
                    return;
                }
                if (i <= m.this.f3056f) {
                    return;
                }
                if (i % 2 == m.this.g % 2) {
                    return;
                }
                s sVar = new s(i, m.this, false, z, list);
                m.this.f3056f = i;
                m.this.f3054d.put(Integer.valueOf(i), sVar);
                m.f3051a.execute(new o(this, "OkHttp %s stream %d", new Object[]{m.this.f3055e, Integer.valueOf(i)}, sVar));
            }
        }

        @Override // e.a.e.r.b
        public void a(boolean z, int i, f.h hVar, int i2) throws IOException {
            if (m.this.b(i)) {
                m.this.a(i, hVar, i2, z);
                return;
            }
            s sVarA = m.this.a(i);
            if (sVarA == null) {
                m.this.c(i, e.a.e.b.PROTOCOL_ERROR);
                hVar.skip(i2);
            } else {
                sVarA.a(hVar, i2);
                if (z) {
                    sVarA.i();
                }
            }
        }

        @Override // e.a.e.r.b
        public void a(boolean z, x xVar) {
            s[] sVarArr;
            long j;
            int i;
            synchronized (m.this) {
                int iC = m.this.p.c();
                if (z) {
                    m.this.p.a();
                }
                m.this.p.a(xVar);
                a(xVar);
                int iC2 = m.this.p.c();
                sVarArr = null;
                if (iC2 == -1 || iC2 == iC) {
                    j = 0;
                } else {
                    j = iC2 - iC;
                    if (!m.this.q) {
                        m.this.a(j);
                        m.this.q = true;
                    }
                    if (!m.this.f3054d.isEmpty()) {
                        sVarArr = (s[]) m.this.f3054d.values().toArray(new s[m.this.f3054d.size()]);
                    }
                }
                m.f3051a.execute(new p(this, "OkHttp %s settings", m.this.f3055e));
            }
            if (sVarArr == null || j == 0) {
                return;
            }
            for (s sVar : sVarArr) {
                synchronized (sVar) {
                    sVar.a(j);
                }
            }
        }

        @Override // e.a.b
        protected void b() throws Throwable {
            e.a.e.b bVar;
            m mVar;
            e.a.e.b bVar2 = e.a.e.b.INTERNAL_ERROR;
            try {
            } catch (Throwable th) {
                th = th;
            }
            try {
                try {
                    this.f3068b.a(this);
                    while (this.f3068b.a(false, (r.b) this)) {
                    }
                    bVar = e.a.e.b.NO_ERROR;
                    try {
                        bVar2 = e.a.e.b.CANCEL;
                        mVar = m.this;
                    } catch (IOException unused) {
                        bVar = e.a.e.b.PROTOCOL_ERROR;
                        bVar2 = e.a.e.b.PROTOCOL_ERROR;
                        mVar = m.this;
                    }
                } catch (IOException unused2) {
                }
            } catch (IOException unused3) {
            } catch (Throwable th2) {
                th = th2;
                bVar = bVar2;
                try {
                    m.this.a(bVar, bVar2);
                } catch (IOException unused4) {
                }
                e.a.e.a(this.f3068b);
                throw th;
            }
            mVar.a(bVar, bVar2);
            e.a.e.a(this.f3068b);
        }
    }

    m(a aVar) {
        this.k = aVar.f3062f;
        boolean z = aVar.g;
        this.f3052b = z;
        this.f3053c = aVar.f3061e;
        this.g = z ? 1 : 2;
        if (aVar.g) {
            this.g += 2;
        }
        if (aVar.g) {
            this.o.a(7, 16777216);
        }
        this.f3055e = aVar.f3058b;
        this.i = new ScheduledThreadPoolExecutor(1, e.a.e.a(e.a.e.a("OkHttp %s Writer", this.f3055e), false));
        if (aVar.h != 0) {
            ScheduledExecutorService scheduledExecutorService = this.i;
            c cVar = new c(false, 0, 0);
            int i = aVar.h;
            scheduledExecutorService.scheduleAtFixedRate(cVar, i, i, TimeUnit.MILLISECONDS);
        }
        this.j = new ThreadPoolExecutor(0, 1, 60L, TimeUnit.SECONDS, new LinkedBlockingQueue(), e.a.e.a(e.a.e.a("OkHttp %s Push Observer", this.f3055e), true));
        this.p.a(7, 65535);
        this.p.a(5, 16384);
        this.n = this.p.c();
        this.r = aVar.f3057a;
        this.s = new t(aVar.f3060d, this.f3052b);
        this.t = new d(new r(aVar.f3059c, this.f3052b));
    }

    private s b(int i, List<e.a.e.c> list, boolean z) {
        int i2;
        s sVar;
        boolean z2;
        boolean z3 = !z;
        synchronized (this.s) {
            synchronized (this) {
                if (this.g > 1073741823) {
                    a(e.a.e.b.REFUSED_STREAM);
                }
                if (this.h) {
                    throw new e.a.e.a();
                }
                i2 = this.g;
                this.g += 2;
                sVar = new s(i2, this, z3, false, list);
                z2 = !z || this.n == 0 || sVar.f3087b == 0;
                if (sVar.g()) {
                    this.f3054d.put(Integer.valueOf(i2), sVar);
                }
            }
            if (i == 0) {
                this.s.a(z3, i2, i, list);
            } else {
                if (this.f3052b) {
                    throw new IllegalArgumentException("client streams shouldn't have associated stream IDs");
                }
                this.s.a(i, i2, list);
            }
        }
        if (z2) {
            this.s.flush();
        }
        return sVar;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void e() {
        try {
            a(e.a.e.b.PROTOCOL_ERROR, e.a.e.b.PROTOCOL_ERROR);
        } catch (IOException unused) {
        }
    }

    synchronized s a(int i) {
        return this.f3054d.get(Integer.valueOf(i));
    }

    public s a(List<e.a.e.c> list, boolean z) {
        return b(0, list, z);
    }

    void a(int i, long j) {
        try {
            this.i.execute(new h(this, "OkHttp Window Update %s stream %d", new Object[]{this.f3055e, Integer.valueOf(i)}, i, j));
        } catch (RejectedExecutionException unused) {
        }
    }

    void a(int i, e.a.e.b bVar) {
        this.j.execute(new l(this, "OkHttp %s Push Reset[%s]", new Object[]{this.f3055e, Integer.valueOf(i)}, i, bVar));
    }

    void a(int i, f.h hVar, int i2, boolean z) throws IOException {
        f.f fVar = new f.f();
        long j = i2;
        hVar.e(j);
        hVar.a(fVar, j);
        if (fVar.size() == j) {
            this.j.execute(new k(this, "OkHttp %s Push Data[%s]", new Object[]{this.f3055e, Integer.valueOf(i)}, i, fVar, i2, z));
            return;
        }
        throw new IOException(fVar.size() + " != " + i2);
    }

    void a(int i, List<e.a.e.c> list) {
        synchronized (this) {
            if (this.u.contains(Integer.valueOf(i))) {
                c(i, e.a.e.b.PROTOCOL_ERROR);
                return;
            }
            this.u.add(Integer.valueOf(i));
            try {
                this.j.execute(new i(this, "OkHttp %s Push Request[%s]", new Object[]{this.f3055e, Integer.valueOf(i)}, i, list));
            } catch (RejectedExecutionException unused) {
            }
        }
    }

    void a(int i, List<e.a.e.c> list, boolean z) {
        try {
            this.j.execute(new j(this, "OkHttp %s Push Headers[%s]", new Object[]{this.f3055e, Integer.valueOf(i)}, i, list, z));
        } catch (RejectedExecutionException unused) {
        }
    }

    public void a(int i, boolean z, f.f fVar, long j) {
        int iMin;
        long j2;
        if (j == 0) {
            this.s.a(z, i, fVar, 0);
            return;
        }
        while (j > 0) {
            synchronized (this) {
                while (this.n <= 0) {
                    try {
                        if (!this.f3054d.containsKey(Integer.valueOf(i))) {
                            throw new IOException("stream closed");
                        }
                        wait();
                    } catch (InterruptedException unused) {
                        throw new InterruptedIOException();
                    }
                }
                iMin = Math.min((int) Math.min(j, this.n), this.s.b());
                j2 = iMin;
                this.n -= j2;
            }
            j -= j2;
            this.s.a(z && j == 0, i, fVar, iMin);
        }
    }

    void a(long j) {
        this.n += j;
        if (j > 0) {
            notifyAll();
        }
    }

    public void a(e.a.e.b bVar) {
        synchronized (this.s) {
            synchronized (this) {
                if (this.h) {
                    return;
                }
                this.h = true;
                this.s.a(this.f3056f, bVar, e.a.e.f2985a);
            }
        }
    }

    void a(e.a.e.b bVar, e.a.e.b bVar2) throws IOException {
        s[] sVarArr = null;
        try {
            a(bVar);
            e = null;
        } catch (IOException e2) {
            e = e2;
        }
        synchronized (this) {
            if (!this.f3054d.isEmpty()) {
                sVarArr = (s[]) this.f3054d.values().toArray(new s[this.f3054d.size()]);
                this.f3054d.clear();
            }
        }
        if (sVarArr != null) {
            for (s sVar : sVarArr) {
                try {
                    sVar.a(bVar2);
                } catch (IOException e3) {
                    if (e != null) {
                        e = e3;
                    }
                }
            }
        }
        try {
            this.s.close();
        } catch (IOException e4) {
            if (e == null) {
                e = e4;
            }
        }
        try {
            this.r.close();
        } catch (IOException e5) {
            e = e5;
        }
        this.i.shutdown();
        this.j.shutdown();
        if (e != null) {
            throw e;
        }
    }

    void a(boolean z) {
        if (z) {
            this.s.a();
            this.s.b(this.o);
            if (this.o.c() != 65535) {
                this.s.a(0, r6 - 65535);
            }
        }
        new Thread(this.t).start();
    }

    void a(boolean z, int i, int i2) {
        boolean z2;
        if (!z) {
            synchronized (this) {
                z2 = this.l;
                this.l = true;
            }
            if (z2) {
                e();
                return;
            }
        }
        try {
            this.s.a(z, i, i2);
        } catch (IOException unused) {
            e();
        }
    }

    void b(int i, e.a.e.b bVar) {
        this.s.a(i, bVar);
    }

    public synchronized boolean b() {
        return this.h;
    }

    boolean b(int i) {
        return i != 0 && (i & 1) == 0;
    }

    public synchronized int c() {
        return this.p.b(Integer.MAX_VALUE);
    }

    synchronized s c(int i) {
        s sVarRemove;
        sVarRemove = this.f3054d.remove(Integer.valueOf(i));
        notifyAll();
        return sVarRemove;
    }

    void c(int i, e.a.e.b bVar) {
        try {
            this.i.execute(new g(this, "OkHttp %s stream %d", new Object[]{this.f3055e, Integer.valueOf(i)}, i, bVar));
        } catch (RejectedExecutionException unused) {
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
        a(e.a.e.b.NO_ERROR, e.a.e.b.CANCEL);
    }

    public void d() {
        a(true);
    }

    public void flush() {
        this.s.flush();
    }
}
