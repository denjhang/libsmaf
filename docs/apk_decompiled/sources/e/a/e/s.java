package e.a.e;

import f.B;
import f.C0426c;
import f.z;
import java.io.EOFException;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.net.SocketTimeoutException;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class s {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    long f3087b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final int f3088c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final m f3089d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final List<e.a.e.c> f3090e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private List<e.a.e.c> f3091f;
    private boolean g;
    private final b h;
    final a i;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    long f3086a = 0;
    final c j = new c();
    final c k = new c();
    e.a.e.b l = null;

    final class a implements f.y {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final f.f f3092a = new f.f();

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        boolean f3093b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        boolean f3094c;

        a() {
        }

        private void a(boolean z) throws IOException {
            long jMin;
            synchronized (s.this) {
                s.this.k.h();
                while (s.this.f3087b <= 0 && !this.f3094c && !this.f3093b && s.this.l == null) {
                    try {
                        s.this.k();
                    } finally {
                    }
                }
                s.this.k.k();
                s.this.b();
                jMin = Math.min(s.this.f3087b, this.f3092a.size());
                s.this.f3087b -= jMin;
            }
            s.this.k.h();
            try {
                s.this.f3089d.a(s.this.f3088c, z && jMin == this.f3092a.size(), this.f3092a, jMin);
            } finally {
            }
        }

        @Override // f.y
        public void b(f.f fVar, long j) throws IOException {
            this.f3092a.b(fVar, j);
            while (this.f3092a.size() >= 16384) {
                a(false);
            }
        }

        @Override // f.y, java.io.Closeable, java.lang.AutoCloseable
        public void close() throws IOException {
            synchronized (s.this) {
                if (this.f3093b) {
                    return;
                }
                if (!s.this.i.f3094c) {
                    if (this.f3092a.size() > 0) {
                        while (this.f3092a.size() > 0) {
                            a(true);
                        }
                    } else {
                        s sVar = s.this;
                        sVar.f3089d.a(sVar.f3088c, true, (f.f) null, 0L);
                    }
                }
                synchronized (s.this) {
                    this.f3093b = true;
                }
                s.this.f3089d.flush();
                s.this.a();
            }
        }

        @Override // f.y, java.io.Flushable
        public void flush() throws IOException {
            synchronized (s.this) {
                s.this.b();
            }
            while (this.f3092a.size() > 0) {
                a(false);
                s.this.f3089d.flush();
            }
        }

        @Override // f.y
        public B p() {
            return s.this.k;
        }
    }

    private final class b implements z {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final f.f f3096a = new f.f();

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final f.f f3097b = new f.f();

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final long f3098c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        boolean f3099d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        boolean f3100e;

        b(long j) {
            this.f3098c = j;
        }

        private void a() throws IOException {
            if (this.f3099d) {
                throw new IOException("stream closed");
            }
            e.a.e.b bVar = s.this.l;
            if (bVar != null) {
                throw new y(bVar);
            }
        }

        private void b() throws IOException {
            s.this.j.h();
            while (this.f3097b.size() == 0 && !this.f3100e && !this.f3099d && s.this.l == null) {
                try {
                    s.this.k();
                } finally {
                    s.this.j.k();
                }
            }
        }

        @Override // f.z
        public long a(f.f fVar, long j) {
            if (j < 0) {
                throw new IllegalArgumentException("byteCount < 0: " + j);
            }
            synchronized (s.this) {
                b();
                a();
                if (this.f3097b.size() == 0) {
                    return -1L;
                }
                long jA = this.f3097b.a(fVar, Math.min(j, this.f3097b.size()));
                s.this.f3086a += jA;
                if (s.this.f3086a >= s.this.f3089d.o.c() / 2) {
                    s.this.f3089d.a(s.this.f3088c, s.this.f3086a);
                    s.this.f3086a = 0L;
                }
                synchronized (s.this.f3089d) {
                    s.this.f3089d.m += jA;
                    if (s.this.f3089d.m >= s.this.f3089d.o.c() / 2) {
                        s.this.f3089d.a(0, s.this.f3089d.m);
                        s.this.f3089d.m = 0L;
                    }
                }
                return jA;
            }
        }

        void a(f.h hVar, long j) throws EOFException {
            boolean z;
            boolean z2;
            boolean z3;
            while (j > 0) {
                synchronized (s.this) {
                    z = this.f3100e;
                    z2 = true;
                    z3 = this.f3097b.size() + j > this.f3098c;
                }
                if (z3) {
                    hVar.skip(j);
                    s.this.b(e.a.e.b.FLOW_CONTROL_ERROR);
                    return;
                }
                if (z) {
                    hVar.skip(j);
                    return;
                }
                long jA = hVar.a(this.f3096a, j);
                if (jA == -1) {
                    throw new EOFException();
                }
                j -= jA;
                synchronized (s.this) {
                    if (this.f3097b.size() != 0) {
                        z2 = false;
                    }
                    this.f3097b.a(this.f3096a);
                    if (z2) {
                        s.this.notifyAll();
                    }
                }
            }
        }

        @Override // f.z, java.io.Closeable, java.lang.AutoCloseable
        public void close() {
            synchronized (s.this) {
                this.f3099d = true;
                this.f3097b.b();
                s.this.notifyAll();
            }
            s.this.a();
        }

        @Override // f.z
        public B p() {
            return s.this.j;
        }
    }

    class c extends C0426c {
        c() {
        }

        @Override // f.C0426c
        protected IOException b(IOException iOException) {
            SocketTimeoutException socketTimeoutException = new SocketTimeoutException("timeout");
            if (iOException != null) {
                socketTimeoutException.initCause(iOException);
            }
            return socketTimeoutException;
        }

        @Override // f.C0426c
        protected void j() {
            s.this.b(e.a.e.b.CANCEL);
        }

        public void k() throws IOException {
            if (i()) {
                throw b((IOException) null);
            }
        }
    }

    s(int i, m mVar, boolean z, boolean z2, List<e.a.e.c> list) {
        if (mVar == null) {
            throw new NullPointerException("connection == null");
        }
        if (list == null) {
            throw new NullPointerException("requestHeaders == null");
        }
        this.f3088c = i;
        this.f3089d = mVar;
        this.f3087b = mVar.p.c();
        this.h = new b(mVar.o.c());
        this.i = new a();
        this.h.f3100e = z2;
        this.i.f3094c = z;
        this.f3090e = list;
    }

    private boolean d(e.a.e.b bVar) {
        synchronized (this) {
            if (this.l != null) {
                return false;
            }
            if (this.h.f3100e && this.i.f3094c) {
                return false;
            }
            this.l = bVar;
            notifyAll();
            this.f3089d.c(this.f3088c);
            return true;
        }
    }

    void a() {
        boolean z;
        boolean zG;
        synchronized (this) {
            z = !this.h.f3100e && this.h.f3099d && (this.i.f3094c || this.i.f3093b);
            zG = g();
        }
        if (z) {
            a(e.a.e.b.CANCEL);
        } else {
            if (zG) {
                return;
            }
            this.f3089d.c(this.f3088c);
        }
    }

    void a(long j) {
        this.f3087b += j;
        if (j > 0) {
            notifyAll();
        }
    }

    public void a(e.a.e.b bVar) {
        if (d(bVar)) {
            this.f3089d.b(this.f3088c, bVar);
        }
    }

    void a(f.h hVar, int i) throws EOFException {
        this.h.a(hVar, i);
    }

    void a(List<e.a.e.c> list) {
        boolean zG;
        synchronized (this) {
            zG = true;
            this.g = true;
            if (this.f3091f == null) {
                this.f3091f = list;
                zG = g();
                notifyAll();
            } else {
                ArrayList arrayList = new ArrayList();
                arrayList.addAll(this.f3091f);
                arrayList.add(null);
                arrayList.addAll(list);
                this.f3091f = arrayList;
            }
        }
        if (zG) {
            return;
        }
        this.f3089d.c(this.f3088c);
    }

    void b() throws IOException {
        a aVar = this.i;
        if (aVar.f3093b) {
            throw new IOException("stream closed");
        }
        if (aVar.f3094c) {
            throw new IOException("stream finished");
        }
        e.a.e.b bVar = this.l;
        if (bVar != null) {
            throw new y(bVar);
        }
    }

    public void b(e.a.e.b bVar) {
        if (d(bVar)) {
            this.f3089d.c(this.f3088c, bVar);
        }
    }

    public int c() {
        return this.f3088c;
    }

    synchronized void c(e.a.e.b bVar) {
        if (this.l == null) {
            this.l = bVar;
            notifyAll();
        }
    }

    public f.y d() {
        synchronized (this) {
            if (!this.g && !f()) {
                throw new IllegalStateException("reply before requesting the sink");
            }
        }
        return this.i;
    }

    public z e() {
        return this.h;
    }

    public boolean f() {
        return this.f3089d.f3052b == ((this.f3088c & 1) == 1);
    }

    public synchronized boolean g() {
        if (this.l != null) {
            return false;
        }
        if ((this.h.f3100e || this.h.f3099d) && (this.i.f3094c || this.i.f3093b)) {
            if (this.g) {
                return false;
            }
        }
        return true;
    }

    public B h() {
        return this.j;
    }

    void i() {
        boolean zG;
        synchronized (this) {
            this.h.f3100e = true;
            zG = g();
            notifyAll();
        }
        if (zG) {
            return;
        }
        this.f3089d.c(this.f3088c);
    }

    public synchronized List<e.a.e.c> j() {
        List<e.a.e.c> list;
        if (!f()) {
            throw new IllegalStateException("servers cannot read response headers");
        }
        this.j.h();
        while (this.f3091f == null && this.l == null) {
            try {
                k();
            } catch (Throwable th) {
                this.j.k();
                throw th;
            }
        }
        this.j.k();
        list = this.f3091f;
        if (list == null) {
            throw new y(this.l);
        }
        this.f3091f = null;
        return list;
    }

    void k() throws InterruptedIOException {
        try {
            wait();
        } catch (InterruptedException unused) {
            throw new InterruptedIOException();
        }
    }

    public B l() {
        return this.k;
    }
}
