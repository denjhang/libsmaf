package e.a.d;

import e.A;
import e.E;
import e.H;
import e.K;
import e.M;
import e.a.b.g;
import e.a.c.i;
import e.a.c.j;
import e.z;
import f.B;
import f.h;
import f.l;
import f.r;
import f.y;
import f.z;
import java.io.EOFException;
import java.io.IOException;
import java.net.ProtocolException;
import java.util.concurrent.TimeUnit;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class b implements e.a.c.c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final E f2962a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final g f2963b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final h f2964c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final f.g f2965d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    int f2966e = 0;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private long f2967f = 262144;

    private abstract class a implements z {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        protected final l f2968a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        protected boolean f2969b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        protected long f2970c;

        private a() {
            this.f2968a = new l(b.this.f2964c.p());
            this.f2970c = 0L;
        }

        @Override // f.z
        public long a(f.f fVar, long j) throws IOException {
            try {
                long jA = b.this.f2964c.a(fVar, j);
                if (jA > 0) {
                    this.f2970c += jA;
                }
                return jA;
            } catch (IOException e2) {
                a(false, e2);
                throw e2;
            }
        }

        protected final void a(boolean z, IOException iOException) {
            b bVar = b.this;
            int i = bVar.f2966e;
            if (i == 6) {
                return;
            }
            if (i != 5) {
                throw new IllegalStateException("state: " + b.this.f2966e);
            }
            bVar.a(this.f2968a);
            b bVar2 = b.this;
            bVar2.f2966e = 6;
            g gVar = bVar2.f2963b;
            if (gVar != null) {
                gVar.a(!z, bVar2, this.f2970c, iOException);
            }
        }

        @Override // f.z
        public B p() {
            return this.f2968a;
        }
    }

    /* JADX INFO: renamed from: e.a.d.b$b, reason: collision with other inner class name */
    private final class C0031b implements y {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final l f2972a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private boolean f2973b;

        C0031b() {
            this.f2972a = new l(b.this.f2965d.p());
        }

        @Override // f.y
        public void b(f.f fVar, long j) {
            if (this.f2973b) {
                throw new IllegalStateException("closed");
            }
            if (j == 0) {
                return;
            }
            b.this.f2965d.f(j);
            b.this.f2965d.d("\r\n");
            b.this.f2965d.b(fVar, j);
            b.this.f2965d.d("\r\n");
        }

        @Override // f.y, java.io.Closeable, java.lang.AutoCloseable
        public synchronized void close() {
            if (this.f2973b) {
                return;
            }
            this.f2973b = true;
            b.this.f2965d.d("0\r\n\r\n");
            b.this.a(this.f2972a);
            b.this.f2966e = 3;
        }

        @Override // f.y, java.io.Flushable
        public synchronized void flush() {
            if (this.f2973b) {
                return;
            }
            b.this.f2965d.flush();
        }

        @Override // f.y
        public B p() {
            return this.f2972a;
        }
    }

    private class c extends a {

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private final A f2975e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        private long f2976f;
        private boolean g;

        c(A a2) {
            super();
            this.f2976f = -1L;
            this.g = true;
            this.f2975e = a2;
        }

        private void a() throws ProtocolException {
            if (this.f2976f != -1) {
                b.this.f2964c.r();
            }
            try {
                this.f2976f = b.this.f2964c.u();
                String strTrim = b.this.f2964c.r().trim();
                if (this.f2976f < 0 || !(strTrim.isEmpty() || strTrim.startsWith(";"))) {
                    throw new ProtocolException("expected chunk size and optional extensions but was \"" + this.f2976f + strTrim + "\"");
                }
                if (this.f2976f == 0) {
                    this.g = false;
                    e.a.c.f.a(b.this.f2962a.g(), this.f2975e, b.this.e());
                    a(true, (IOException) null);
                }
            } catch (NumberFormatException e2) {
                throw new ProtocolException(e2.getMessage());
            }
        }

        @Override // e.a.d.b.a, f.z
        public long a(f.f fVar, long j) throws IOException {
            if (j < 0) {
                throw new IllegalArgumentException("byteCount < 0: " + j);
            }
            if (this.f2969b) {
                throw new IllegalStateException("closed");
            }
            if (!this.g) {
                return -1L;
            }
            long j2 = this.f2976f;
            if (j2 == 0 || j2 == -1) {
                a();
                if (!this.g) {
                    return -1L;
                }
            }
            long jA = super.a(fVar, Math.min(j, this.f2976f));
            if (jA != -1) {
                this.f2976f -= jA;
                return jA;
            }
            ProtocolException protocolException = new ProtocolException("unexpected end of stream");
            a(false, (IOException) protocolException);
            throw protocolException;
        }

        @Override // f.z, java.io.Closeable, java.lang.AutoCloseable
        public void close() {
            if (this.f2969b) {
                return;
            }
            if (this.g && !e.a.e.a(this, 100, TimeUnit.MILLISECONDS)) {
                a(false, (IOException) null);
            }
            this.f2969b = true;
        }
    }

    private final class d implements y {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final l f2977a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private boolean f2978b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private long f2979c;

        d(long j) {
            this.f2977a = new l(b.this.f2965d.p());
            this.f2979c = j;
        }

        @Override // f.y
        public void b(f.f fVar, long j) throws ProtocolException {
            if (this.f2978b) {
                throw new IllegalStateException("closed");
            }
            e.a.e.a(fVar.size(), 0L, j);
            if (j <= this.f2979c) {
                b.this.f2965d.b(fVar, j);
                this.f2979c -= j;
                return;
            }
            throw new ProtocolException("expected " + this.f2979c + " bytes but received " + j);
        }

        @Override // f.y, java.io.Closeable, java.lang.AutoCloseable
        public void close() throws ProtocolException {
            if (this.f2978b) {
                return;
            }
            this.f2978b = true;
            if (this.f2979c > 0) {
                throw new ProtocolException("unexpected end of stream");
            }
            b.this.a(this.f2977a);
            b.this.f2966e = 3;
        }

        @Override // f.y, java.io.Flushable
        public void flush() {
            if (this.f2978b) {
                return;
            }
            b.this.f2965d.flush();
        }

        @Override // f.y
        public B p() {
            return this.f2977a;
        }
    }

    private class e extends a {

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private long f2981e;

        e(long j) {
            super();
            this.f2981e = j;
            if (this.f2981e == 0) {
                a(true, (IOException) null);
            }
        }

        @Override // e.a.d.b.a, f.z
        public long a(f.f fVar, long j) throws IOException {
            if (j < 0) {
                throw new IllegalArgumentException("byteCount < 0: " + j);
            }
            if (this.f2969b) {
                throw new IllegalStateException("closed");
            }
            long j2 = this.f2981e;
            if (j2 == 0) {
                return -1L;
            }
            long jA = super.a(fVar, Math.min(j2, j));
            if (jA == -1) {
                ProtocolException protocolException = new ProtocolException("unexpected end of stream");
                a(false, (IOException) protocolException);
                throw protocolException;
            }
            this.f2981e -= jA;
            if (this.f2981e == 0) {
                a(true, (IOException) null);
            }
            return jA;
        }

        @Override // f.z, java.io.Closeable, java.lang.AutoCloseable
        public void close() {
            if (this.f2969b) {
                return;
            }
            if (this.f2981e != 0 && !e.a.e.a(this, 100, TimeUnit.MILLISECONDS)) {
                a(false, (IOException) null);
            }
            this.f2969b = true;
        }
    }

    private class f extends a {

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private boolean f2983e;

        f() {
            super();
        }

        @Override // e.a.d.b.a, f.z
        public long a(f.f fVar, long j) throws IOException {
            if (j < 0) {
                throw new IllegalArgumentException("byteCount < 0: " + j);
            }
            if (this.f2969b) {
                throw new IllegalStateException("closed");
            }
            if (this.f2983e) {
                return -1L;
            }
            long jA = super.a(fVar, j);
            if (jA != -1) {
                return jA;
            }
            this.f2983e = true;
            a(true, (IOException) null);
            return -1L;
        }

        @Override // f.z, java.io.Closeable, java.lang.AutoCloseable
        public void close() {
            if (this.f2969b) {
                return;
            }
            if (!this.f2983e) {
                a(false, (IOException) null);
            }
            this.f2969b = true;
        }
    }

    public b(E e2, g gVar, h hVar, f.g gVar2) {
        this.f2962a = e2;
        this.f2963b = gVar;
        this.f2964c = hVar;
        this.f2965d = gVar2;
    }

    private String f() {
        String strC = this.f2964c.c(this.f2967f);
        this.f2967f -= (long) strC.length();
        return strC;
    }

    @Override // e.a.c.c
    public K.a a(boolean z) {
        int i = this.f2966e;
        if (i != 1 && i != 3) {
            throw new IllegalStateException("state: " + this.f2966e);
        }
        try {
            e.a.c.l lVarA = e.a.c.l.a(f());
            K.a aVar = new K.a();
            aVar.a(lVarA.f2957a);
            aVar.a(lVarA.f2958b);
            aVar.a(lVarA.f2959c);
            aVar.a(e());
            if (z && lVarA.f2958b == 100) {
                return null;
            }
            if (lVarA.f2958b == 100) {
                this.f2966e = 3;
                return aVar;
            }
            this.f2966e = 4;
            return aVar;
        } catch (EOFException e2) {
            IOException iOException = new IOException("unexpected end of stream on " + this.f2963b);
            iOException.initCause(e2);
            throw iOException;
        }
    }

    @Override // e.a.c.c
    public M a(K k) {
        g gVar = this.f2963b;
        gVar.f2934f.e(gVar.f2933e);
        String strA = k.a("Content-Type");
        if (!e.a.c.f.b(k)) {
            return new i(strA, 0L, r.a(b(0L)));
        }
        if (HTTP.CHUNK_CODING.equalsIgnoreCase(k.a("Transfer-Encoding"))) {
            return new i(strA, -1L, r.a(a(k.i().g())));
        }
        long jA = e.a.c.f.a(k);
        return jA != -1 ? new i(strA, jA, r.a(b(jA))) : new i(strA, -1L, r.a(d()));
    }

    public y a(long j) {
        if (this.f2966e == 1) {
            this.f2966e = 2;
            return new d(j);
        }
        throw new IllegalStateException("state: " + this.f2966e);
    }

    @Override // e.a.c.c
    public y a(H h, long j) {
        if (HTTP.CHUNK_CODING.equalsIgnoreCase(h.a("Transfer-Encoding"))) {
            return c();
        }
        if (j != -1) {
            return a(j);
        }
        throw new IllegalStateException("Cannot stream a request body without chunked encoding or a known content length!");
    }

    public z a(A a2) {
        if (this.f2966e == 4) {
            this.f2966e = 5;
            return new c(a2);
        }
        throw new IllegalStateException("state: " + this.f2966e);
    }

    @Override // e.a.c.c
    public void a() {
        this.f2965d.flush();
    }

    @Override // e.a.c.c
    public void a(H h) {
        a(h.c(), j.a(h, this.f2963b.b().c().b().type()));
    }

    public void a(e.z zVar, String str) {
        if (this.f2966e != 0) {
            throw new IllegalStateException("state: " + this.f2966e);
        }
        this.f2965d.d(str).d("\r\n");
        int iB = zVar.b();
        for (int i = 0; i < iB; i++) {
            this.f2965d.d(zVar.a(i)).d(": ").d(zVar.b(i)).d("\r\n");
        }
        this.f2965d.d("\r\n");
        this.f2966e = 1;
    }

    void a(l lVar) {
        B bG = lVar.g();
        lVar.a(B.f3226a);
        bG.a();
        bG.b();
    }

    public z b(long j) {
        if (this.f2966e == 4) {
            this.f2966e = 5;
            return new e(j);
        }
        throw new IllegalStateException("state: " + this.f2966e);
    }

    @Override // e.a.c.c
    public void b() {
        this.f2965d.flush();
    }

    public y c() {
        if (this.f2966e == 1) {
            this.f2966e = 2;
            return new C0031b();
        }
        throw new IllegalStateException("state: " + this.f2966e);
    }

    public z d() {
        if (this.f2966e != 4) {
            throw new IllegalStateException("state: " + this.f2966e);
        }
        g gVar = this.f2963b;
        if (gVar == null) {
            throw new IllegalStateException("streamAllocation == null");
        }
        this.f2966e = 5;
        gVar.d();
        return new f();
    }

    public e.z e() {
        z.a aVar = new z.a();
        while (true) {
            String strF = f();
            if (strF.length() == 0) {
                return aVar.a();
            }
            e.a.a.f2892a.a(aVar, strF);
        }
    }
}
