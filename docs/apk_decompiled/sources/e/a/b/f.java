package e.a.b;

import e.A;
import e.C0408a;
import e.InterfaceC0413f;
import e.N;
import e.w;
import java.io.IOException;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.Proxy;
import java.net.SocketAddress;
import java.net.SocketException;
import java.net.UnknownHostException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.NoSuchElementException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final C0408a f2921a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final d f2922b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final InterfaceC0413f f2923c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final w f2924d;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private int f2926f;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private List<Proxy> f2925e = Collections.emptyList();
    private List<InetSocketAddress> g = Collections.emptyList();
    private final List<N> h = new ArrayList();

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final List<N> f2927a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private int f2928b = 0;

        a(List<N> list) {
            this.f2927a = list;
        }

        public List<N> a() {
            return new ArrayList(this.f2927a);
        }

        public boolean b() {
            return this.f2928b < this.f2927a.size();
        }

        public N c() {
            if (!b()) {
                throw new NoSuchElementException();
            }
            List<N> list = this.f2927a;
            int i = this.f2928b;
            this.f2928b = i + 1;
            return list.get(i);
        }
    }

    public f(C0408a c0408a, d dVar, InterfaceC0413f interfaceC0413f, w wVar) {
        this.f2921a = c0408a;
        this.f2922b = dVar;
        this.f2923c = interfaceC0413f;
        this.f2924d = wVar;
        a(c0408a.k(), c0408a.f());
    }

    static String a(InetSocketAddress inetSocketAddress) {
        InetAddress address = inetSocketAddress.getAddress();
        return address == null ? inetSocketAddress.getHostName() : address.getHostAddress();
    }

    private void a(A a2, Proxy proxy) {
        List<Proxy> listA;
        if (proxy != null) {
            listA = Collections.singletonList(proxy);
        } else {
            List<Proxy> listSelect = this.f2921a.h().select(a2.n());
            listA = (listSelect == null || listSelect.isEmpty()) ? e.a.e.a(Proxy.NO_PROXY) : e.a.e.a(listSelect);
        }
        this.f2925e = listA;
        this.f2926f = 0;
    }

    private void a(Proxy proxy) throws SocketException, UnknownHostException {
        String strG;
        int iJ;
        this.g = new ArrayList();
        if (proxy.type() == Proxy.Type.DIRECT || proxy.type() == Proxy.Type.SOCKS) {
            strG = this.f2921a.k().g();
            iJ = this.f2921a.k().j();
        } else {
            SocketAddress socketAddressAddress = proxy.address();
            if (!(socketAddressAddress instanceof InetSocketAddress)) {
                throw new IllegalArgumentException("Proxy.address() is not an InetSocketAddress: " + socketAddressAddress.getClass());
            }
            InetSocketAddress inetSocketAddress = (InetSocketAddress) socketAddressAddress;
            strG = a(inetSocketAddress);
            iJ = inetSocketAddress.getPort();
        }
        if (iJ < 1 || iJ > 65535) {
            throw new SocketException("No route to " + strG + ":" + iJ + "; port is out of range");
        }
        if (proxy.type() == Proxy.Type.SOCKS) {
            this.g.add(InetSocketAddress.createUnresolved(strG, iJ));
            return;
        }
        this.f2924d.a(this.f2923c, strG);
        List<InetAddress> listLookup = this.f2921a.c().lookup(strG);
        if (listLookup.isEmpty()) {
            throw new UnknownHostException(this.f2921a.c() + " returned no addresses for " + strG);
        }
        this.f2924d.a(this.f2923c, strG, listLookup);
        int size = listLookup.size();
        for (int i = 0; i < size; i++) {
            this.g.add(new InetSocketAddress(listLookup.get(i), iJ));
        }
    }

    private boolean c() {
        return this.f2926f < this.f2925e.size();
    }

    private Proxy d() throws SocketException, UnknownHostException {
        if (c()) {
            List<Proxy> list = this.f2925e;
            int i = this.f2926f;
            this.f2926f = i + 1;
            Proxy proxy = list.get(i);
            a(proxy);
            return proxy;
        }
        throw new SocketException("No route to " + this.f2921a.k().g() + "; exhausted proxy configurations: " + this.f2925e);
    }

    public void a(N n, IOException iOException) {
        if (n.b().type() != Proxy.Type.DIRECT && this.f2921a.h() != null) {
            this.f2921a.h().connectFailed(this.f2921a.k().n(), n.b().address(), iOException);
        }
        this.f2922b.b(n);
    }

    public boolean a() {
        return c() || !this.h.isEmpty();
    }

    public a b() throws SocketException, UnknownHostException {
        if (!a()) {
            throw new NoSuchElementException();
        }
        ArrayList arrayList = new ArrayList();
        while (c()) {
            Proxy proxyD = d();
            int size = this.g.size();
            for (int i = 0; i < size; i++) {
                N n = new N(this.f2921a, proxyD, this.g.get(i));
                if (this.f2922b.c(n)) {
                    this.h.add(n);
                } else {
                    arrayList.add(n);
                }
            }
            if (!arrayList.isEmpty()) {
                break;
            }
        }
        if (arrayList.isEmpty()) {
            arrayList.addAll(this.h);
            this.h.clear();
        }
        return new a(arrayList);
    }
}
