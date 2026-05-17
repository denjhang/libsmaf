package e;

import e.A;
import java.net.Proxy;
import java.net.ProxySelector;
import java.util.List;
import javax.net.SocketFactory;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.SSLSocketFactory;
import org.apache.http.HttpHost;

/* JADX INFO: renamed from: e.a, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0408a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final A f2886a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final t f2887b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final SocketFactory f2888c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final InterfaceC0410c f2889d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final List<F> f2890e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final List<C0421n> f2891f;
    final ProxySelector g;
    final Proxy h;
    final SSLSocketFactory i;
    final HostnameVerifier j;
    final C0415h k;

    public C0408a(String str, int i, t tVar, SocketFactory socketFactory, SSLSocketFactory sSLSocketFactory, HostnameVerifier hostnameVerifier, C0415h c0415h, InterfaceC0410c interfaceC0410c, Proxy proxy, List<F> list, List<C0421n> list2, ProxySelector proxySelector) {
        A.a aVar = new A.a();
        aVar.d(sSLSocketFactory != null ? "https" : HttpHost.DEFAULT_SCHEME_NAME);
        aVar.b(str);
        aVar.a(i);
        this.f2886a = aVar.a();
        if (tVar == null) {
            throw new NullPointerException("dns == null");
        }
        this.f2887b = tVar;
        if (socketFactory == null) {
            throw new NullPointerException("socketFactory == null");
        }
        this.f2888c = socketFactory;
        if (interfaceC0410c == null) {
            throw new NullPointerException("proxyAuthenticator == null");
        }
        this.f2889d = interfaceC0410c;
        if (list == null) {
            throw new NullPointerException("protocols == null");
        }
        this.f2890e = e.a.e.a(list);
        if (list2 == null) {
            throw new NullPointerException("connectionSpecs == null");
        }
        this.f2891f = e.a.e.a(list2);
        if (proxySelector == null) {
            throw new NullPointerException("proxySelector == null");
        }
        this.g = proxySelector;
        this.h = proxy;
        this.i = sSLSocketFactory;
        this.j = hostnameVerifier;
        this.k = c0415h;
    }

    public C0415h a() {
        return this.k;
    }

    boolean a(C0408a c0408a) {
        return this.f2887b.equals(c0408a.f2887b) && this.f2889d.equals(c0408a.f2889d) && this.f2890e.equals(c0408a.f2890e) && this.f2891f.equals(c0408a.f2891f) && this.g.equals(c0408a.g) && e.a.e.a(this.h, c0408a.h) && e.a.e.a(this.i, c0408a.i) && e.a.e.a(this.j, c0408a.j) && e.a.e.a(this.k, c0408a.k) && k().j() == c0408a.k().j();
    }

    public List<C0421n> b() {
        return this.f2891f;
    }

    public t c() {
        return this.f2887b;
    }

    public HostnameVerifier d() {
        return this.j;
    }

    public List<F> e() {
        return this.f2890e;
    }

    public boolean equals(Object obj) {
        if (obj instanceof C0408a) {
            C0408a c0408a = (C0408a) obj;
            if (this.f2886a.equals(c0408a.f2886a) && a(c0408a)) {
                return true;
            }
        }
        return false;
    }

    public Proxy f() {
        return this.h;
    }

    public InterfaceC0410c g() {
        return this.f2889d;
    }

    public ProxySelector h() {
        return this.g;
    }

    public int hashCode() {
        int iHashCode = (((((((((((527 + this.f2886a.hashCode()) * 31) + this.f2887b.hashCode()) * 31) + this.f2889d.hashCode()) * 31) + this.f2890e.hashCode()) * 31) + this.f2891f.hashCode()) * 31) + this.g.hashCode()) * 31;
        Proxy proxy = this.h;
        int iHashCode2 = (iHashCode + (proxy != null ? proxy.hashCode() : 0)) * 31;
        SSLSocketFactory sSLSocketFactory = this.i;
        int iHashCode3 = (iHashCode2 + (sSLSocketFactory != null ? sSLSocketFactory.hashCode() : 0)) * 31;
        HostnameVerifier hostnameVerifier = this.j;
        int iHashCode4 = (iHashCode3 + (hostnameVerifier != null ? hostnameVerifier.hashCode() : 0)) * 31;
        C0415h c0415h = this.k;
        return iHashCode4 + (c0415h != null ? c0415h.hashCode() : 0);
    }

    public SocketFactory i() {
        return this.f2888c;
    }

    public SSLSocketFactory j() {
        return this.i;
    }

    public A k() {
        return this.f2886a;
    }

    public String toString() {
        Object obj;
        StringBuilder sb = new StringBuilder();
        sb.append("Address{");
        sb.append(this.f2886a.g());
        sb.append(":");
        sb.append(this.f2886a.j());
        if (this.h != null) {
            sb.append(", proxy=");
            obj = this.h;
        } else {
            sb.append(", proxySelector=");
            obj = this.g;
        }
        sb.append(obj);
        sb.append("}");
        return sb.toString();
    }
}
