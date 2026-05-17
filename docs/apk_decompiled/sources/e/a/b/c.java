package e.a.b;

import e.A;
import e.B;
import e.C0408a;
import e.C0415h;
import e.C0420m;
import e.C0421n;
import e.E;
import e.F;
import e.H;
import e.InterfaceC0413f;
import e.InterfaceC0418k;
import e.K;
import e.N;
import e.a.e.m;
import e.a.e.s;
import e.w;
import e.y;
import f.h;
import f.r;
import f.z;
import java.io.IOException;
import java.lang.ref.Reference;
import java.net.ConnectException;
import java.net.Proxy;
import java.net.Socket;
import java.net.SocketException;
import java.net.SocketTimeoutException;
import java.security.cert.Certificate;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.TimeUnit;
import javax.net.ssl.SSLPeerUnverifiedException;
import javax.net.ssl.SSLSession;
import javax.net.ssl.SSLSocket;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class c extends m.b implements InterfaceC0418k {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final C0420m f2913b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final N f2914c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private Socket f2915d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private Socket f2916e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private y f2917f;
    private F g;
    private m h;
    private h i;
    private f.g j;
    public boolean k;
    public int l;
    public int m = 1;
    public final List<Reference<g>> n = new ArrayList();
    public long o = Long.MAX_VALUE;

    public c(C0420m c0420m, N n) {
        this.f2913b = c0420m;
        this.f2914c = n;
    }

    private H a(int i, int i2, H h, A a2) throws IOException {
        String str = "CONNECT " + e.a.e.a(a2, true) + " HTTP/1.1";
        while (true) {
            e.a.d.b bVar = new e.a.d.b(null, null, this.i, this.j);
            this.i.p().a(i, TimeUnit.MILLISECONDS);
            this.j.p().a(i2, TimeUnit.MILLISECONDS);
            bVar.a(h.c(), str);
            bVar.a();
            K.a aVarA = bVar.a(false);
            aVarA.a(h);
            K kA = aVarA.a();
            long jA = e.a.c.f.a(kA);
            if (jA == -1) {
                jA = 0;
            }
            z zVarB = bVar.b(jA);
            e.a.e.b(zVarB, Integer.MAX_VALUE, TimeUnit.MILLISECONDS);
            zVarB.close();
            int iC = kA.c();
            if (iC == 200) {
                if (this.i.o().q() && this.j.o().q()) {
                    return null;
                }
                throw new IOException("TLS tunnel buffered too many bytes!");
            }
            if (iC != 407) {
                throw new IOException("Unexpected response code for CONNECT: " + kA.c());
            }
            H hA = this.f2914c.a().g().a(this.f2914c, kA);
            if (hA == null) {
                throw new IOException("Failed to authenticate with proxy");
            }
            if ("close".equalsIgnoreCase(kA.a("Connection"))) {
                return hA;
            }
            h = hA;
        }
    }

    private void a(int i, int i2, int i3, InterfaceC0413f interfaceC0413f, w wVar) throws IOException {
        H hE = e();
        A aG = hE.g();
        for (int i4 = 0; i4 < 21; i4++) {
            a(i, i2, interfaceC0413f, wVar);
            hE = a(i2, i3, hE, aG);
            if (hE == null) {
                return;
            }
            e.a.e.a(this.f2915d);
            this.f2915d = null;
            this.j = null;
            this.i = null;
            wVar.a(interfaceC0413f, this.f2914c.d(), this.f2914c.b(), null);
        }
    }

    private void a(int i, int i2, InterfaceC0413f interfaceC0413f, w wVar) throws IOException {
        Proxy proxyB = this.f2914c.b();
        this.f2915d = (proxyB.type() == Proxy.Type.DIRECT || proxyB.type() == Proxy.Type.HTTP) ? this.f2914c.a().i().createSocket() : new Socket(proxyB);
        wVar.a(interfaceC0413f, this.f2914c.d(), proxyB);
        this.f2915d.setSoTimeout(i2);
        try {
            e.a.f.f.a().a(this.f2915d, this.f2914c.d(), i);
            try {
                this.i = r.a(r.b(this.f2915d));
                this.j = r.a(r.a(this.f2915d));
            } catch (NullPointerException e2) {
                if ("throw with null exception".equals(e2.getMessage())) {
                    throw new IOException(e2);
                }
            }
        } catch (ConnectException e3) {
            ConnectException connectException = new ConnectException("Failed to connect to " + this.f2914c.d());
            connectException.initCause(e3);
            throw connectException;
        }
    }

    private void a(b bVar) throws Throwable {
        SSLSocket sSLSocket;
        C0408a c0408aA = this.f2914c.a();
        try {
            try {
                sSLSocket = (SSLSocket) c0408aA.j().createSocket(this.f2915d, c0408aA.k().g(), c0408aA.k().j(), true);
            } catch (AssertionError e2) {
                e = e2;
            }
        } catch (Throwable th) {
            th = th;
            sSLSocket = null;
        }
        try {
            C0421n c0421nA = bVar.a(sSLSocket);
            if (c0421nA.c()) {
                e.a.f.f.a().a(sSLSocket, c0408aA.k().g(), c0408aA.e());
            }
            sSLSocket.startHandshake();
            SSLSession session = sSLSocket.getSession();
            if (!a(session)) {
                throw new IOException("a valid ssl session was not established");
            }
            y yVarA = y.a(session);
            if (c0408aA.d().verify(c0408aA.k().g(), session)) {
                c0408aA.a().a(c0408aA.k().g(), yVarA.b());
                String strB = c0421nA.c() ? e.a.f.f.a().b(sSLSocket) : null;
                this.f2916e = sSLSocket;
                this.i = r.a(r.b(this.f2916e));
                this.j = r.a(r.a(this.f2916e));
                this.f2917f = yVarA;
                this.g = strB != null ? F.a(strB) : F.HTTP_1_1;
                if (sSLSocket != null) {
                    e.a.f.f.a().a(sSLSocket);
                    return;
                }
                return;
            }
            X509Certificate x509Certificate = (X509Certificate) yVarA.b().get(0);
            throw new SSLPeerUnverifiedException("Hostname " + c0408aA.k().g() + " not verified:\n    certificate: " + C0415h.a((Certificate) x509Certificate) + "\n    DN: " + x509Certificate.getSubjectDN().getName() + "\n    subjectAltNames: " + e.a.h.d.a(x509Certificate));
        } catch (AssertionError e3) {
            e = e3;
            if (!e.a.e.a(e)) {
                throw e;
            }
            throw new IOException(e);
        } catch (Throwable th2) {
            th = th2;
            if (sSLSocket != null) {
                e.a.f.f.a().a(sSLSocket);
            }
            e.a.e.a((Socket) sSLSocket);
            throw th;
        }
    }

    private void a(b bVar, int i, InterfaceC0413f interfaceC0413f, w wVar) throws Throwable {
        if (this.f2914c.a().j() == null) {
            this.g = F.HTTP_1_1;
            this.f2916e = this.f2915d;
            return;
        }
        wVar.g(interfaceC0413f);
        a(bVar);
        wVar.a(interfaceC0413f, this.f2917f);
        if (this.g == F.HTTP_2) {
            this.f2916e.setSoTimeout(0);
            m.a aVar = new m.a(true);
            aVar.a(this.f2916e, this.f2914c.a().k().g(), this.i, this.j);
            aVar.a(this);
            aVar.a(i);
            this.h = aVar.a();
            this.h.d();
        }
    }

    private boolean a(SSLSession sSLSession) {
        return ("NONE".equals(sSLSession.getProtocol()) || "SSL_NULL_WITH_NULL_NULL".equals(sSLSession.getCipherSuite())) ? false : true;
    }

    private H e() {
        H.a aVar = new H.a();
        aVar.a(this.f2914c.a().k());
        aVar.b("Host", e.a.e.a(this.f2914c.a().k(), true));
        aVar.b("Proxy-Connection", HTTP.CONN_KEEP_ALIVE);
        aVar.b("User-Agent", e.a.f.a());
        return aVar.a();
    }

    public e.a.c.c a(E e2, B.a aVar, g gVar) throws SocketException {
        m mVar = this.h;
        if (mVar != null) {
            return new e.a.e.f(e2, aVar, gVar, mVar);
        }
        this.f2916e.setSoTimeout(aVar.a());
        this.i.p().a(aVar.a(), TimeUnit.MILLISECONDS);
        this.j.p().a(aVar.b(), TimeUnit.MILLISECONDS);
        return new e.a.d.b(e2, gVar, this.i, this.j);
    }

    public y a() {
        return this.f2917f;
    }

    /* JADX WARN: Removed duplicated region for block: B:35:0x00d2  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x00e2 A[ORIG_RETURN, RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:53:0x011d  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x0124  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x0129  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x0131 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(int r17, int r18, int r19, int r20, boolean r21, e.InterfaceC0413f r22, e.w r23) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 316
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: e.a.b.c.a(int, int, int, int, boolean, e.f, e.w):void");
    }

    @Override // e.a.e.m.b
    public void a(m mVar) {
        synchronized (this.f2913b) {
            this.m = mVar.c();
        }
    }

    @Override // e.a.e.m.b
    public void a(s sVar) {
        sVar.a(e.a.e.b.REFUSED_STREAM);
    }

    public boolean a(A a2) {
        if (a2.j() != this.f2914c.a().k().j()) {
            return false;
        }
        if (a2.g().equals(this.f2914c.a().k().g())) {
            return true;
        }
        return this.f2917f != null && e.a.h.d.f3152a.verify(a2.g(), (X509Certificate) this.f2917f.b().get(0));
    }

    public boolean a(C0408a c0408a, N n) {
        if (this.n.size() >= this.m || this.k || !e.a.a.f2892a.a(this.f2914c.a(), c0408a)) {
            return false;
        }
        if (c0408a.k().g().equals(c().a().k().g())) {
            return true;
        }
        if (this.h == null || n == null || n.b().type() != Proxy.Type.DIRECT || this.f2914c.b().type() != Proxy.Type.DIRECT || !this.f2914c.d().equals(n.d()) || n.a().d() != e.a.h.d.f3152a || !a(c0408a.k())) {
            return false;
        }
        try {
            c0408a.a().a(c0408a.k().g(), a().b());
            return true;
        } catch (SSLPeerUnverifiedException unused) {
            return false;
        }
    }

    public boolean a(boolean z) {
        if (this.f2916e.isClosed() || this.f2916e.isInputShutdown() || this.f2916e.isOutputShutdown()) {
            return false;
        }
        if (this.h != null) {
            return !r0.b();
        }
        if (z) {
            try {
                int soTimeout = this.f2916e.getSoTimeout();
                try {
                    this.f2916e.setSoTimeout(1);
                    return !this.i.q();
                } finally {
                    this.f2916e.setSoTimeout(soTimeout);
                }
            } catch (SocketTimeoutException unused) {
            } catch (IOException unused2) {
                return false;
            }
        }
        return true;
    }

    public boolean b() {
        return this.h != null;
    }

    public N c() {
        return this.f2914c;
    }

    public Socket d() {
        return this.f2916e;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("Connection{");
        sb.append(this.f2914c.a().k().g());
        sb.append(":");
        sb.append(this.f2914c.a().k().j());
        sb.append(", proxy=");
        sb.append(this.f2914c.b());
        sb.append(" hostAddress=");
        sb.append(this.f2914c.d());
        sb.append(" cipherSuite=");
        y yVar = this.f2917f;
        sb.append(yVar != null ? yVar.a() : "none");
        sb.append(" protocol=");
        sb.append(this.g);
        sb.append('}');
        return sb.toString();
    }
}
