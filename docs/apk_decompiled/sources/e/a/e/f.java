package e.a.e;

import e.B;
import e.E;
import e.F;
import e.H;
import e.K;
import e.M;
import e.z;
import f.z;
import java.io.IOException;
import java.net.ProtocolException;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class f implements e.a.c.c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final f.i f3021a = f.i.b("connection");

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final f.i f3022b = f.i.b("host");

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final f.i f3023c = f.i.b("keep-alive");

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static final f.i f3024d = f.i.b("proxy-connection");

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static final f.i f3025e = f.i.b("transfer-encoding");

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private static final f.i f3026f = f.i.b("te");
    private static final f.i g = f.i.b("encoding");
    private static final f.i h = f.i.b("upgrade");
    private static final List<f.i> i = e.a.e.a(f3021a, f3022b, f3023c, f3024d, f3026f, f3025e, g, h, c.f2999c, c.f3000d, c.f3001e, c.f3002f);
    private static final List<f.i> j = e.a.e.a(f3021a, f3022b, f3023c, f3024d, f3026f, f3025e, g, h);
    private final E k;
    private final B.a l;
    final e.a.b.g m;
    private final m n;
    private s o;

    class a extends f.k {

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        boolean f3027b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        long f3028c;

        a(z zVar) {
            super(zVar);
            this.f3027b = false;
            this.f3028c = 0L;
        }

        private void a(IOException iOException) {
            if (this.f3027b) {
                return;
            }
            this.f3027b = true;
            f fVar = f.this;
            fVar.m.a(false, fVar, this.f3028c, iOException);
        }

        @Override // f.z
        public long a(f.f fVar, long j) throws IOException {
            try {
                long jA = a().a(fVar, j);
                if (jA > 0) {
                    this.f3028c += jA;
                }
                return jA;
            } catch (IOException e2) {
                a(e2);
                throw e2;
            }
        }

        @Override // f.k, f.z, java.io.Closeable, java.lang.AutoCloseable
        public void close() {
            super.close();
            a(null);
        }
    }

    public f(E e2, B.a aVar, e.a.b.g gVar, m mVar) {
        this.k = e2;
        this.l = aVar;
        this.m = gVar;
        this.n = mVar;
    }

    public static K.a a(List<c> list) throws ProtocolException {
        z.a aVar = new z.a();
        int size = list.size();
        z.a aVar2 = aVar;
        e.a.c.l lVarA = null;
        for (int i2 = 0; i2 < size; i2++) {
            c cVar = list.get(i2);
            if (cVar != null) {
                f.i iVar = cVar.g;
                String strH = cVar.h.h();
                if (iVar.equals(c.f2998b)) {
                    lVarA = e.a.c.l.a("HTTP/1.1 " + strH);
                } else if (!j.contains(iVar)) {
                    e.a.a.f2892a.a(aVar2, iVar.h(), strH);
                }
            } else if (lVarA != null && lVarA.f2958b == 100) {
                aVar2 = new z.a();
                lVarA = null;
            }
        }
        if (lVarA == null) {
            throw new ProtocolException("Expected ':status' header not present");
        }
        K.a aVar3 = new K.a();
        aVar3.a(F.HTTP_2);
        aVar3.a(lVarA.f2958b);
        aVar3.a(lVarA.f2959c);
        aVar3.a(aVar2.a());
        return aVar3;
    }

    public static List<c> b(H h2) {
        e.z zVarC = h2.c();
        ArrayList arrayList = new ArrayList(zVarC.b() + 4);
        arrayList.add(new c(c.f2999c, h2.e()));
        arrayList.add(new c(c.f3000d, e.a.c.j.a(h2.g())));
        String strA = h2.a("Host");
        if (strA != null) {
            arrayList.add(new c(c.f3002f, strA));
        }
        arrayList.add(new c(c.f3001e, h2.g().m()));
        int iB = zVarC.b();
        for (int i2 = 0; i2 < iB; i2++) {
            f.i iVarB = f.i.b(zVarC.a(i2).toLowerCase(Locale.US));
            if (!i.contains(iVarB)) {
                arrayList.add(new c(iVarB, zVarC.b(i2)));
            }
        }
        return arrayList;
    }

    @Override // e.a.c.c
    public K.a a(boolean z) throws ProtocolException {
        K.a aVarA = a(this.o.j());
        if (z && e.a.a.f2892a.a(aVarA) == 100) {
            return null;
        }
        return aVarA;
    }

    @Override // e.a.c.c
    public M a(K k) {
        e.a.b.g gVar = this.m;
        gVar.f2934f.e(gVar.f2933e);
        return new e.a.c.i(k.a("Content-Type"), e.a.c.f.a(k), f.r.a(new a(this.o.e())));
    }

    @Override // e.a.c.c
    public f.y a(H h2, long j2) {
        return this.o.d();
    }

    @Override // e.a.c.c
    public void a() {
        this.o.d().close();
    }

    @Override // e.a.c.c
    public void a(H h2) {
        if (this.o != null) {
            return;
        }
        this.o = this.n.a(b(h2), h2.a() != null);
        this.o.h().a(this.l.a(), TimeUnit.MILLISECONDS);
        this.o.l().a(this.l.b(), TimeUnit.MILLISECONDS);
    }

    @Override // e.a.c.c
    public void b() {
        this.n.flush();
    }
}
