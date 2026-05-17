package e;

import java.net.InetSocketAddress;
import java.net.Proxy;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class N {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final C0408a f2877a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final Proxy f2878b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final InetSocketAddress f2879c;

    public N(C0408a c0408a, Proxy proxy, InetSocketAddress inetSocketAddress) {
        if (c0408a == null) {
            throw new NullPointerException("address == null");
        }
        if (proxy == null) {
            throw new NullPointerException("proxy == null");
        }
        if (inetSocketAddress == null) {
            throw new NullPointerException("inetSocketAddress == null");
        }
        this.f2877a = c0408a;
        this.f2878b = proxy;
        this.f2879c = inetSocketAddress;
    }

    public C0408a a() {
        return this.f2877a;
    }

    public Proxy b() {
        return this.f2878b;
    }

    public boolean c() {
        return this.f2877a.i != null && this.f2878b.type() == Proxy.Type.HTTP;
    }

    public InetSocketAddress d() {
        return this.f2879c;
    }

    public boolean equals(Object obj) {
        if (obj instanceof N) {
            N n = (N) obj;
            if (n.f2877a.equals(this.f2877a) && n.f2878b.equals(this.f2878b) && n.f2879c.equals(this.f2879c)) {
                return true;
            }
        }
        return false;
    }

    public int hashCode() {
        return ((((527 + this.f2877a.hashCode()) * 31) + this.f2878b.hashCode()) * 31) + this.f2879c.hashCode();
    }

    public String toString() {
        return "Route{" + this.f2879c + "}";
    }
}
