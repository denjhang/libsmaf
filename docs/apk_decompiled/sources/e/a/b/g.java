package e.a.b;

import e.B;
import e.C0408a;
import e.C0420m;
import e.E;
import e.InterfaceC0413f;
import e.N;
import e.a.b.f;
import e.w;
import java.io.IOException;
import java.lang.ref.Reference;
import java.lang.ref.WeakReference;
import java.net.Socket;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C0408a f2929a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private f.a f2930b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private N f2931c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final C0420m f2932d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    public final InterfaceC0413f f2933e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    public final w f2934f;
    private final Object g;
    private final f h;
    private int i;
    private c j;
    private boolean k;
    private boolean l;
    private boolean m;
    private e.a.c.c n;

    public static final class a extends WeakReference<g> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final Object f2935a;

        a(g gVar, Object obj) {
            super(gVar);
            this.f2935a = obj;
        }
    }

    public g(C0420m c0420m, C0408a c0408a, InterfaceC0413f interfaceC0413f, w wVar, Object obj) {
        this.f2932d = c0420m;
        this.f2929a = c0408a;
        this.f2933e = interfaceC0413f;
        this.f2934f = wVar;
        this.h = new f(c0408a, h(), interfaceC0413f, wVar);
        this.g = obj;
    }

    private c a(int i, int i2, int i3, int i4, boolean z) throws Throwable {
        Socket socketG;
        Socket socketA;
        c cVar;
        c cVar2;
        c cVar3;
        N nC;
        boolean z2;
        boolean z3;
        f.a aVar;
        synchronized (this.f2932d) {
            if (this.l) {
                throw new IllegalStateException("released");
            }
            if (this.n != null) {
                throw new IllegalStateException("codec != null");
            }
            if (this.m) {
                throw new IOException("Canceled");
            }
            c cVar4 = this.j;
            socketG = g();
            socketA = null;
            if (this.j != null) {
                cVar2 = this.j;
                cVar = null;
            } else {
                cVar = cVar4;
                cVar2 = null;
            }
            if (!this.k) {
                cVar = null;
            }
            if (cVar2 == null) {
                e.a.a.f2892a.a(this.f2932d, this.f2929a, this, null);
                if (this.j != null) {
                    cVar3 = this.j;
                    nC = null;
                    z2 = true;
                } else {
                    nC = this.f2931c;
                    cVar3 = cVar2;
                }
            } else {
                cVar3 = cVar2;
                nC = null;
            }
            z2 = false;
        }
        e.a.e.a(socketG);
        if (cVar != null) {
            this.f2934f.b(this.f2933e, cVar);
        }
        if (z2) {
            this.f2934f.a(this.f2933e, cVar3);
        }
        if (cVar3 != null) {
            return cVar3;
        }
        if (nC != null || ((aVar = this.f2930b) != null && aVar.b())) {
            z3 = false;
        } else {
            this.f2930b = this.h.b();
            z3 = true;
        }
        synchronized (this.f2932d) {
            if (this.m) {
                throw new IOException("Canceled");
            }
            if (z3) {
                List<N> listA = this.f2930b.a();
                int size = listA.size();
                int i5 = 0;
                while (true) {
                    if (i5 >= size) {
                        break;
                    }
                    N n = listA.get(i5);
                    e.a.a.f2892a.a(this.f2932d, this.f2929a, this, n);
                    if (this.j != null) {
                        cVar3 = this.j;
                        this.f2931c = n;
                        z2 = true;
                        break;
                    }
                    i5++;
                }
            }
            if (!z2) {
                if (nC == null) {
                    nC = this.f2930b.c();
                }
                this.f2931c = nC;
                this.i = 0;
                cVar3 = new c(this.f2932d, nC);
                a(cVar3, false);
            }
        }
        if (!z2) {
            cVar3.a(i, i2, i3, i4, z, this.f2933e, this.f2934f);
            h().a(cVar3.c());
            synchronized (this.f2932d) {
                this.k = true;
                e.a.a.f2892a.b(this.f2932d, cVar3);
                if (cVar3.b()) {
                    socketA = e.a.a.f2892a.a(this.f2932d, this.f2929a, this);
                    cVar3 = this.j;
                }
            }
            e.a.e.a(socketA);
        }
        this.f2934f.a(this.f2933e, cVar3);
        return cVar3;
    }

    private c a(int i, int i2, int i3, int i4, boolean z, boolean z2) throws Throwable {
        while (true) {
            c cVarA = a(i, i2, i3, i4, z);
            synchronized (this.f2932d) {
                if (cVarA.l == 0) {
                    return cVarA;
                }
                if (cVarA.a(z2)) {
                    return cVarA;
                }
                d();
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x004a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private java.net.Socket a(boolean r2, boolean r3, boolean r4) {
        /*
            r1 = this;
            r0 = 0
            if (r4 == 0) goto L5
            r1.n = r0
        L5:
            r4 = 1
            if (r3 == 0) goto La
            r1.l = r4
        La:
            e.a.b.c r3 = r1.j
            if (r3 == 0) goto L4e
            if (r2 == 0) goto L12
            r3.k = r4
        L12:
            e.a.c.c r2 = r1.n
            if (r2 != 0) goto L4e
            boolean r2 = r1.l
            if (r2 != 0) goto L20
            e.a.b.c r2 = r1.j
            boolean r2 = r2.k
            if (r2 == 0) goto L4e
        L20:
            e.a.b.c r2 = r1.j
            r1.b(r2)
            e.a.b.c r2 = r1.j
            java.util.List<java.lang.ref.Reference<e.a.b.g>> r2 = r2.n
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L4a
            e.a.b.c r2 = r1.j
            long r3 = java.lang.System.nanoTime()
            r2.o = r3
            e.a.a r2 = e.a.a.f2892a
            e.m r3 = r1.f2932d
            e.a.b.c r4 = r1.j
            boolean r2 = r2.a(r3, r4)
            if (r2 == 0) goto L4a
            e.a.b.c r2 = r1.j
            java.net.Socket r2 = r2.d()
            goto L4b
        L4a:
            r2 = r0
        L4b:
            r1.j = r0
            goto L4f
        L4e:
            r2 = r0
        L4f:
            return r2
        */
        throw new UnsupportedOperationException("Method not decompiled: e.a.b.g.a(boolean, boolean, boolean):java.net.Socket");
    }

    private void b(c cVar) {
        int size = cVar.n.size();
        for (int i = 0; i < size; i++) {
            if (cVar.n.get(i).get() == this) {
                cVar.n.remove(i);
                return;
            }
        }
        throw new IllegalStateException();
    }

    private Socket g() {
        c cVar = this.j;
        if (cVar == null || !cVar.k) {
            return null;
        }
        return a(false, false, true);
    }

    private d h() {
        return e.a.a.f2892a.a(this.f2932d);
    }

    public e.a.c.c a() {
        e.a.c.c cVar;
        synchronized (this.f2932d) {
            cVar = this.n;
        }
        return cVar;
    }

    public e.a.c.c a(E e2, B.a aVar, boolean z) {
        try {
            e.a.c.c cVarA = a(aVar.c(), aVar.a(), aVar.b(), e2.q(), e2.w(), z).a(e2, aVar, this);
            synchronized (this.f2932d) {
                this.n = cVarA;
            }
            return cVarA;
        } catch (IOException e3) {
            throw new e(e3);
        }
    }

    public Socket a(c cVar) {
        if (this.n != null || this.j.n.size() != 1) {
            throw new IllegalStateException();
        }
        Reference<g> reference = this.j.n.get(0);
        Socket socketA = a(true, false, false);
        this.j = cVar;
        cVar.n.add(reference);
        return socketA;
    }

    public void a(c cVar, boolean z) {
        if (this.j != null) {
            throw new IllegalStateException();
        }
        this.j = cVar;
        this.k = z;
        cVar.n.add(new a(this, this.g));
    }

    /* JADX WARN: Removed duplicated region for block: B:31:0x0054 A[Catch: all -> 0x0067, TryCatch #0 {, blocks: (B:4:0x0003, B:6:0x000a, B:8:0x0012, B:9:0x0017, B:11:0x001d, B:29:0x004a, B:31:0x0054, B:34:0x0059, B:26:0x0045, B:14:0x0022, B:16:0x0026, B:18:0x002e, B:20:0x0032, B:22:0x0038, B:25:0x003e), top: B:42:0x0003 }] */
    /* JADX WARN: Removed duplicated region for block: B:33:0x0058  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(java.io.IOException r7) {
        /*
            r6 = this;
            e.m r0 = r6.f2932d
            monitor-enter(r0)
            boolean r1 = r7 instanceof e.a.e.y     // Catch: java.lang.Throwable -> L67
            r2 = 0
            r3 = 0
            r4 = 1
            if (r1 == 0) goto L22
            e.a.e.y r7 = (e.a.e.y) r7     // Catch: java.lang.Throwable -> L67
            e.a.e.b r1 = r7.f3118a     // Catch: java.lang.Throwable -> L67
            e.a.e.b r5 = e.a.e.b.REFUSED_STREAM     // Catch: java.lang.Throwable -> L67
            if (r1 != r5) goto L17
            int r1 = r6.i     // Catch: java.lang.Throwable -> L67
            int r1 = r1 + r4
            r6.i = r1     // Catch: java.lang.Throwable -> L67
        L17:
            e.a.e.b r7 = r7.f3118a     // Catch: java.lang.Throwable -> L67
            e.a.e.b r1 = e.a.e.b.REFUSED_STREAM     // Catch: java.lang.Throwable -> L67
            if (r7 != r1) goto L45
            int r7 = r6.i     // Catch: java.lang.Throwable -> L67
            if (r7 <= r4) goto L49
            goto L45
        L22:
            e.a.b.c r1 = r6.j     // Catch: java.lang.Throwable -> L67
            if (r1 == 0) goto L49
            e.a.b.c r1 = r6.j     // Catch: java.lang.Throwable -> L67
            boolean r1 = r1.b()     // Catch: java.lang.Throwable -> L67
            if (r1 == 0) goto L32
            boolean r1 = r7 instanceof e.a.e.a     // Catch: java.lang.Throwable -> L67
            if (r1 == 0) goto L49
        L32:
            e.a.b.c r1 = r6.j     // Catch: java.lang.Throwable -> L67
            int r1 = r1.l     // Catch: java.lang.Throwable -> L67
            if (r1 != 0) goto L47
            e.N r1 = r6.f2931c     // Catch: java.lang.Throwable -> L67
            if (r1 == 0) goto L45
            if (r7 == 0) goto L45
            e.a.b.f r1 = r6.h     // Catch: java.lang.Throwable -> L67
            e.N r5 = r6.f2931c     // Catch: java.lang.Throwable -> L67
            r1.a(r5, r7)     // Catch: java.lang.Throwable -> L67
        L45:
            r6.f2931c = r3     // Catch: java.lang.Throwable -> L67
        L47:
            r7 = 1
            goto L4a
        L49:
            r7 = 0
        L4a:
            e.a.b.c r1 = r6.j     // Catch: java.lang.Throwable -> L67
            java.net.Socket r7 = r6.a(r7, r2, r4)     // Catch: java.lang.Throwable -> L67
            e.a.b.c r2 = r6.j     // Catch: java.lang.Throwable -> L67
            if (r2 != 0) goto L58
            boolean r2 = r6.k     // Catch: java.lang.Throwable -> L67
            if (r2 != 0) goto L59
        L58:
            r1 = r3
        L59:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L67
            e.a.e.a(r7)
            if (r1 == 0) goto L66
            e.w r7 = r6.f2934f
            e.f r0 = r6.f2933e
            r7.b(r0, r1)
        L66:
            return
        L67:
            r7 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L67
            throw r7
        */
        throw new UnsupportedOperationException("Method not decompiled: e.a.b.g.a(java.io.IOException):void");
    }

    public void a(boolean z, e.a.c.c cVar, long j, IOException iOException) {
        c cVar2;
        Socket socketA;
        boolean z2;
        this.f2934f.b(this.f2933e, j);
        synchronized (this.f2932d) {
            if (cVar != null) {
                if (cVar == this.n) {
                    if (!z) {
                        this.j.l++;
                    }
                    cVar2 = this.j;
                    socketA = a(z, false, true);
                    if (this.j != null) {
                        cVar2 = null;
                    }
                    z2 = this.l;
                }
            }
            throw new IllegalStateException("expected " + this.n + " but was " + cVar);
        }
        e.a.e.a(socketA);
        if (cVar2 != null) {
            this.f2934f.b(this.f2933e, cVar2);
        }
        if (iOException != null) {
            this.f2934f.a(this.f2933e, iOException);
        } else if (z2) {
            this.f2934f.a(this.f2933e);
        }
    }

    public synchronized c b() {
        return this.j;
    }

    public boolean c() {
        f.a aVar;
        return this.f2931c != null || ((aVar = this.f2930b) != null && aVar.b()) || this.h.a();
    }

    public void d() {
        c cVar;
        Socket socketA;
        synchronized (this.f2932d) {
            cVar = this.j;
            socketA = a(true, false, false);
            if (this.j != null) {
                cVar = null;
            }
        }
        e.a.e.a(socketA);
        if (cVar != null) {
            this.f2934f.b(this.f2933e, cVar);
        }
    }

    public void e() {
        c cVar;
        Socket socketA;
        synchronized (this.f2932d) {
            cVar = this.j;
            socketA = a(false, true, false);
            if (this.j != null) {
                cVar = null;
            }
        }
        e.a.e.a(socketA);
        if (cVar != null) {
            this.f2934f.b(this.f2933e, cVar);
        }
    }

    public N f() {
        return this.f2931c;
    }

    public String toString() {
        c cVarB = b();
        return cVarB != null ? cVarB.toString() : this.f2929a.toString();
    }
}
