package e;

import e.InterfaceC0413f;
import e.w;
import java.net.Proxy;
import java.net.ProxySelector;
import java.security.GeneralSecurityException;
import java.security.KeyStore;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import javax.net.SocketFactory;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLSocketFactory;
import javax.net.ssl.TrustManager;
import javax.net.ssl.TrustManagerFactory;
import javax.net.ssl.X509TrustManager;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class E implements Cloneable, InterfaceC0413f.a, P {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final List<F> f2821a = e.a.e.a(F.HTTP_2, F.HTTP_1_1);

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    static final List<C0421n> f2822b = e.a.e.a(C0421n.f3189b, C0421n.f3191d);
    final int A;
    final int B;
    final int C;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final r f2823c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final Proxy f2824d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final List<F> f2825e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final List<C0421n> f2826f;
    final List<B> g;
    final List<B> h;
    final w.a i;
    final ProxySelector j;
    final q k;
    final C0411d l;
    final e.a.a.e m;
    final SocketFactory n;
    final SSLSocketFactory o;
    final e.a.h.c p;
    final HostnameVerifier q;
    final C0415h r;
    final InterfaceC0410c s;
    final InterfaceC0410c t;
    final C0420m u;
    final t v;
    final boolean w;
    final boolean x;
    final boolean y;
    final int z;

    public static final class a {
        int A;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        Proxy f2828b;
        C0411d j;
        e.a.a.e k;
        SSLSocketFactory m;
        e.a.h.c n;
        InterfaceC0410c q;
        InterfaceC0410c r;
        C0420m s;
        t t;
        boolean u;
        boolean v;
        boolean w;
        int x;
        int y;
        int z;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        final List<B> f2831e = new ArrayList();

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        final List<B> f2832f = new ArrayList();

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        r f2827a = new r();

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        List<F> f2829c = E.f2821a;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        List<C0421n> f2830d = E.f2822b;
        w.a g = w.a(w.f3213a);
        ProxySelector h = ProxySelector.getDefault();
        q i = q.f3204a;
        SocketFactory l = SocketFactory.getDefault();
        HostnameVerifier o = e.a.h.d.f3152a;
        C0415h p = C0415h.f3167a;

        public a() {
            InterfaceC0410c interfaceC0410c = InterfaceC0410c.f3153a;
            this.q = interfaceC0410c;
            this.r = interfaceC0410c;
            this.s = new C0420m();
            this.t = t.f3211a;
            this.u = true;
            this.v = true;
            this.w = true;
            this.x = 10000;
            this.y = 10000;
            this.z = 10000;
            this.A = 0;
        }

        public E a() {
            return new E(this);
        }
    }

    static {
        e.a.a.f2892a = new D();
    }

    public E() {
        this(new a());
    }

    E(a aVar) {
        boolean z;
        e.a.h.c cVarA;
        this.f2823c = aVar.f2827a;
        this.f2824d = aVar.f2828b;
        this.f2825e = aVar.f2829c;
        this.f2826f = aVar.f2830d;
        this.g = e.a.e.a(aVar.f2831e);
        this.h = e.a.e.a(aVar.f2832f);
        this.i = aVar.g;
        this.j = aVar.h;
        this.k = aVar.i;
        this.l = aVar.j;
        this.m = aVar.k;
        this.n = aVar.l;
        Iterator<C0421n> it = this.f2826f.iterator();
        loop0: while (true) {
            while (it.hasNext()) {
                z = z || it.next().b();
            }
        }
        if (aVar.m == null && z) {
            X509TrustManager x509TrustManagerA = A();
            this.o = a(x509TrustManagerA);
            cVarA = e.a.h.c.a(x509TrustManagerA);
        } else {
            this.o = aVar.m;
            cVarA = aVar.n;
        }
        this.p = cVarA;
        this.q = aVar.o;
        this.r = aVar.p.a(this.p);
        this.s = aVar.q;
        this.t = aVar.r;
        this.u = aVar.s;
        this.v = aVar.t;
        this.w = aVar.u;
        this.x = aVar.v;
        this.y = aVar.w;
        this.z = aVar.x;
        this.A = aVar.y;
        this.B = aVar.z;
        this.C = aVar.A;
        if (this.g.contains(null)) {
            throw new IllegalStateException("Null interceptor: " + this.g);
        }
        if (this.h.contains(null)) {
            throw new IllegalStateException("Null network interceptor: " + this.h);
        }
    }

    private X509TrustManager A() {
        try {
            TrustManagerFactory trustManagerFactory = TrustManagerFactory.getInstance(TrustManagerFactory.getDefaultAlgorithm());
            trustManagerFactory.init((KeyStore) null);
            TrustManager[] trustManagers = trustManagerFactory.getTrustManagers();
            if (trustManagers.length == 1 && (trustManagers[0] instanceof X509TrustManager)) {
                return (X509TrustManager) trustManagers[0];
            }
            throw new IllegalStateException("Unexpected default trust managers:" + Arrays.toString(trustManagers));
        } catch (GeneralSecurityException e2) {
            throw e.a.e.a("No System TLS", (Exception) e2);
        }
    }

    private SSLSocketFactory a(X509TrustManager x509TrustManager) {
        try {
            SSLContext sSLContextB = e.a.f.f.a().b();
            sSLContextB.init(null, new TrustManager[]{x509TrustManager}, null);
            return sSLContextB.getSocketFactory();
        } catch (GeneralSecurityException e2) {
            throw e.a.e.a("No System TLS", (Exception) e2);
        }
    }

    public InterfaceC0413f a(H h) {
        return G.a(this, h, false);
    }

    public InterfaceC0410c b() {
        return this.t;
    }

    public C0415h c() {
        return this.r;
    }

    public int d() {
        return this.z;
    }

    public C0420m e() {
        return this.u;
    }

    public List<C0421n> f() {
        return this.f2826f;
    }

    public q g() {
        return this.k;
    }

    public r h() {
        return this.f2823c;
    }

    public t i() {
        return this.v;
    }

    public w.a j() {
        return this.i;
    }

    public boolean k() {
        return this.x;
    }

    public boolean l() {
        return this.w;
    }

    public HostnameVerifier m() {
        return this.q;
    }

    public List<B> n() {
        return this.g;
    }

    e.a.a.e o() {
        C0411d c0411d = this.l;
        return c0411d != null ? c0411d.f3154a : this.m;
    }

    public List<B> p() {
        return this.h;
    }

    public int q() {
        return this.C;
    }

    public List<F> r() {
        return this.f2825e;
    }

    public Proxy s() {
        return this.f2824d;
    }

    public InterfaceC0410c t() {
        return this.s;
    }

    public ProxySelector u() {
        return this.j;
    }

    public int v() {
        return this.A;
    }

    public boolean w() {
        return this.y;
    }

    public SocketFactory x() {
        return this.n;
    }

    public SSLSocketFactory y() {
        return this.o;
    }

    public int z() {
        return this.B;
    }
}
