package e.a.c;

import e.A;
import e.B;
import e.C0408a;
import e.C0415h;
import e.E;
import e.H;
import e.InterfaceC0413f;
import e.J;
import e.K;
import e.M;
import e.N;
import e.w;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.net.ProtocolException;
import java.net.Proxy;
import java.net.SocketTimeoutException;
import java.security.cert.CertificateException;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.SSLHandshakeException;
import javax.net.ssl.SSLPeerUnverifiedException;
import javax.net.ssl.SSLSocketFactory;
import org.apache.http.HttpHeaders;
import org.apache.http.HttpStatus;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.client.methods.HttpHead;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class k implements B {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final E f2952a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final boolean f2953b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private volatile e.a.b.g f2954c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private Object f2955d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private volatile boolean f2956e;

    public k(E e2, boolean z) {
        this.f2952a = e2;
        this.f2953b = z;
    }

    private int a(K k, int i) {
        String strA = k.a(HttpHeaders.RETRY_AFTER);
        if (strA == null) {
            return i;
        }
        if (strA.matches("\\d+")) {
            return Integer.valueOf(strA).intValue();
        }
        return Integer.MAX_VALUE;
    }

    private H a(K k, N n) throws ProtocolException {
        String strA;
        A aE;
        if (k == null) {
            throw new IllegalStateException();
        }
        int iC = k.c();
        String strE = k.i().e();
        if (iC == 307 || iC == 308) {
            if (!strE.equals(HttpGet.METHOD_NAME) && !strE.equals(HttpHead.METHOD_NAME)) {
                return null;
            }
        } else {
            if (iC == 401) {
                return this.f2952a.b().a(n, k);
            }
            if (iC == 503) {
                if ((k.g() == null || k.g().c() != 503) && a(k, Integer.MAX_VALUE) == 0) {
                    return k.i();
                }
                return null;
            }
            if (iC == 407) {
                if ((n != null ? n.b() : this.f2952a.s()).type() == Proxy.Type.HTTP) {
                    return this.f2952a.t().a(n, k);
                }
                throw new ProtocolException("Received HTTP_PROXY_AUTH (407) code while not using proxy");
            }
            if (iC == 408) {
                if (!this.f2952a.w()) {
                    return null;
                }
                k.i().a();
                if ((k.g() == null || k.g().c() != 408) && a(k, 0) <= 0) {
                    return k.i();
                }
                return null;
            }
            switch (iC) {
                case HttpStatus.SC_MULTIPLE_CHOICES /* 300 */:
                case HttpStatus.SC_MOVED_PERMANENTLY /* 301 */:
                case HttpStatus.SC_MOVED_TEMPORARILY /* 302 */:
                case HttpStatus.SC_SEE_OTHER /* 303 */:
                    break;
                default:
                    return null;
            }
        }
        if (!this.f2952a.k() || (strA = k.a(HttpHeaders.LOCATION)) == null || (aE = k.i().g().e(strA)) == null) {
            return null;
        }
        if (!aE.m().equals(k.i().g().m()) && !this.f2952a.l()) {
            return null;
        }
        H.a aVarF = k.i().f();
        if (g.b(strE)) {
            boolean zD = g.d(strE);
            if (g.c(strE)) {
                aVarF.a(HttpGet.METHOD_NAME, (J) null);
            } else {
                aVarF.a(strE, zD ? k.i().a() : null);
            }
            if (!zD) {
                aVarF.a("Transfer-Encoding");
                aVarF.a("Content-Length");
                aVarF.a("Content-Type");
            }
        }
        if (!a(k, aE)) {
            aVarF.a("Authorization");
        }
        aVarF.a(aE);
        return aVarF.a();
    }

    private C0408a a(A a2) {
        SSLSocketFactory sSLSocketFactory;
        HostnameVerifier hostnameVerifierM;
        C0415h c0415hC;
        if (a2.h()) {
            SSLSocketFactory sSLSocketFactoryY = this.f2952a.y();
            hostnameVerifierM = this.f2952a.m();
            sSLSocketFactory = sSLSocketFactoryY;
            c0415hC = this.f2952a.c();
        } else {
            sSLSocketFactory = null;
            hostnameVerifierM = null;
            c0415hC = null;
        }
        return new C0408a(a2.g(), a2.j(), this.f2952a.i(), this.f2952a.x(), sSLSocketFactory, hostnameVerifierM, c0415hC, this.f2952a.t(), this.f2952a.s(), this.f2952a.r(), this.f2952a.f(), this.f2952a.u());
    }

    private boolean a(K k, A a2) {
        A aG = k.i().g();
        return aG.g().equals(a2.g()) && aG.j() == a2.j() && aG.m().equals(a2.m());
    }

    private boolean a(IOException iOException, e.a.b.g gVar, boolean z, H h) {
        gVar.a(iOException);
        if (!this.f2952a.w()) {
            return false;
        }
        if (z) {
            h.a();
        }
        return a(iOException, z) && gVar.c();
    }

    private boolean a(IOException iOException, boolean z) {
        if (iOException instanceof ProtocolException) {
            return false;
        }
        return iOException instanceof InterruptedIOException ? (iOException instanceof SocketTimeoutException) && !z : (((iOException instanceof SSLHandshakeException) && (iOException.getCause() instanceof CertificateException)) || (iOException instanceof SSLPeerUnverifiedException)) ? false : true;
    }

    @Override // e.B
    public K a(B.a aVar) throws IOException {
        K kA;
        H hA;
        H hD = aVar.d();
        h hVar = (h) aVar;
        InterfaceC0413f interfaceC0413fE = hVar.e();
        w wVarG = hVar.g();
        e.a.b.g gVar = new e.a.b.g(this.f2952a.e(), a(hD.g()), interfaceC0413fE, wVarG, this.f2955d);
        this.f2954c = gVar;
        K k = null;
        int i = 0;
        while (!this.f2956e) {
            try {
                try {
                    kA = hVar.a(hD, gVar, null, null);
                    if (k != null) {
                        K.a aVarF = kA.f();
                        K.a aVarF2 = k.f();
                        aVarF2.a((M) null);
                        aVarF.c(aVarF2.a());
                        kA = aVarF.a();
                    }
                    hA = a(kA, gVar.f());
                } catch (e.a.b.e e2) {
                    if (!a(e2.a(), gVar, false, hD)) {
                        throw e2.a();
                    }
                } catch (IOException e3) {
                    if (!a(e3, gVar, !(e3 instanceof e.a.e.a), hD)) {
                        throw e3;
                    }
                }
                if (hA == null) {
                    if (!this.f2953b) {
                        gVar.e();
                    }
                    return kA;
                }
                e.a.e.a(kA.a());
                int i2 = i + 1;
                if (i2 > 20) {
                    gVar.e();
                    throw new ProtocolException("Too many follow-up requests: " + i2);
                }
                hA.a();
                if (!a(kA, hA.g())) {
                    gVar.e();
                    gVar = new e.a.b.g(this.f2952a.e(), a(hA.g()), interfaceC0413fE, wVarG, this.f2955d);
                    this.f2954c = gVar;
                } else if (gVar.a() != null) {
                    throw new IllegalStateException("Closing the body of " + kA + " didn't close its backing stream. Bad interceptor?");
                }
                k = kA;
                hD = hA;
                i = i2;
            } catch (Throwable th) {
                gVar.a((IOException) null);
                gVar.e();
                throw th;
            }
        }
        gVar.e();
        throw new IOException("Canceled");
    }

    public void a(Object obj) {
        this.f2955d = obj;
    }

    public boolean a() {
        return this.f2956e;
    }
}
