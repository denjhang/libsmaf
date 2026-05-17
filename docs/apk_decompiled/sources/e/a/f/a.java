package e.a.f;

import android.os.Build;
import android.util.Log;
import e.F;
import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.security.Security;
import java.security.cert.Certificate;
import java.security.cert.TrustAnchor;
import java.security.cert.X509Certificate;
import java.util.List;
import javax.net.ssl.SSLPeerUnverifiedException;
import javax.net.ssl.SSLSocket;
import javax.net.ssl.X509TrustManager;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a extends f {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Class<?> f3119c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final e<Socket> f3120d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final e<Socket> f3121e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final e<Socket> f3122f;
    private final e<Socket> g;
    private final c h = c.a();

    /* JADX INFO: renamed from: e.a.f.a$a, reason: collision with other inner class name */
    static final class C0032a extends e.a.h.c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Object f3123a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final Method f3124b;

        C0032a(Object obj, Method method) {
            this.f3123a = obj;
            this.f3124b = method;
        }

        @Override // e.a.h.c
        public List<Certificate> a(List<Certificate> list, String str) throws SSLPeerUnverifiedException {
            try {
                return (List) this.f3124b.invoke(this.f3123a, (X509Certificate[]) list.toArray(new X509Certificate[list.size()]), "RSA", str);
            } catch (IllegalAccessException e2) {
                throw new AssertionError(e2);
            } catch (InvocationTargetException e3) {
                SSLPeerUnverifiedException sSLPeerUnverifiedException = new SSLPeerUnverifiedException(e3.getMessage());
                sSLPeerUnverifiedException.initCause(e3);
                throw sSLPeerUnverifiedException;
            }
        }

        public boolean equals(Object obj) {
            return obj instanceof C0032a;
        }

        public int hashCode() {
            return 0;
        }
    }

    static final class b implements e.a.h.e {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final X509TrustManager f3125a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final Method f3126b;

        b(X509TrustManager x509TrustManager, Method method) {
            this.f3126b = method;
            this.f3125a = x509TrustManager;
        }

        @Override // e.a.h.e
        public X509Certificate a(X509Certificate x509Certificate) {
            try {
                TrustAnchor trustAnchor = (TrustAnchor) this.f3126b.invoke(this.f3125a, x509Certificate);
                if (trustAnchor != null) {
                    return trustAnchor.getTrustedCert();
                }
                return null;
            } catch (IllegalAccessException e2) {
                throw e.a.e.a("unable to get issues and signature", (Exception) e2);
            } catch (InvocationTargetException unused) {
                return null;
            }
        }

        public boolean equals(Object obj) {
            if (obj == this) {
                return true;
            }
            if (!(obj instanceof b)) {
                return false;
            }
            b bVar = (b) obj;
            return this.f3125a.equals(bVar.f3125a) && this.f3126b.equals(bVar.f3126b);
        }

        public int hashCode() {
            return this.f3125a.hashCode() + (this.f3126b.hashCode() * 31);
        }
    }

    static final class c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Method f3127a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final Method f3128b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final Method f3129c;

        c(Method method, Method method2, Method method3) {
            this.f3127a = method;
            this.f3128b = method2;
            this.f3129c = method3;
        }

        static c a() throws NoSuchMethodException {
            Method method;
            Method method2;
            Method method3 = null;
            try {
                Class<?> cls = Class.forName("dalvik.system.CloseGuard");
                Method method4 = cls.getMethod("get", new Class[0]);
                method2 = cls.getMethod("open", String.class);
                method = cls.getMethod("warnIfOpen", new Class[0]);
                method3 = method4;
            } catch (Exception unused) {
                method = null;
                method2 = null;
            }
            return new c(method3, method2, method);
        }

        Object a(String str) {
            Method method = this.f3127a;
            if (method != null) {
                try {
                    Object objInvoke = method.invoke(null, new Object[0]);
                    this.f3128b.invoke(objInvoke, str);
                    return objInvoke;
                } catch (Exception unused) {
                }
            }
            return null;
        }

        boolean a(Object obj) {
            if (obj == null) {
                return false;
            }
            try {
                this.f3129c.invoke(obj, new Object[0]);
                return true;
            } catch (Exception unused) {
                return false;
            }
        }
    }

    a(Class<?> cls, e<Socket> eVar, e<Socket> eVar2, e<Socket> eVar3, e<Socket> eVar4) {
        this.f3119c = cls;
        this.f3120d = eVar;
        this.f3121e = eVar2;
        this.f3122f = eVar3;
        this.g = eVar4;
    }

    private boolean a(String str, Class<?> cls, Object obj) {
        try {
            return ((Boolean) cls.getMethod("isCleartextTrafficPermitted", new Class[0]).invoke(obj, new Object[0])).booleanValue();
        } catch (NoSuchMethodException unused) {
            return super.b(str);
        }
    }

    private boolean b(String str, Class<?> cls, Object obj) {
        try {
            return ((Boolean) cls.getMethod("isCleartextTrafficPermitted", String.class).invoke(obj, str)).booleanValue();
        } catch (NoSuchMethodException unused) {
            return a(str, cls, obj);
        }
    }

    public static f d() {
        Class<?> cls;
        e eVar;
        e eVar2;
        try {
            try {
                cls = Class.forName("com.android.org.conscrypt.SSLParametersImpl");
            } catch (ClassNotFoundException unused) {
                cls = Class.forName("org.apache.harmony.xnet.provider.jsse.SSLParametersImpl");
            }
            Class<?> cls2 = cls;
            e eVar3 = new e(null, "setUseSessionTickets", Boolean.TYPE);
            e eVar4 = new e(null, "setHostname", String.class);
            if (e()) {
                e eVar5 = new e(byte[].class, "getAlpnSelectedProtocol", new Class[0]);
                eVar2 = new e(null, "setAlpnProtocols", byte[].class);
                eVar = eVar5;
            } else {
                eVar = null;
                eVar2 = null;
            }
            return new a(cls2, eVar3, eVar4, eVar, eVar2);
        } catch (ClassNotFoundException unused2) {
            return null;
        }
    }

    private static boolean e() {
        if (Security.getProvider("GMSCore_OpenSSL") != null) {
            return true;
        }
        try {
            Class.forName("android.net.Network");
            return true;
        } catch (ClassNotFoundException unused) {
            return false;
        }
    }

    @Override // e.a.f.f
    public e.a.h.c a(X509TrustManager x509TrustManager) {
        try {
            Class<?> cls = Class.forName("android.net.http.X509TrustManagerExtensions");
            return new C0032a(cls.getConstructor(X509TrustManager.class).newInstance(x509TrustManager), cls.getMethod("checkServerTrusted", X509Certificate[].class, String.class, String.class));
        } catch (Exception unused) {
            return super.a(x509TrustManager);
        }
    }

    @Override // e.a.f.f
    public Object a(String str) {
        return this.h.a(str);
    }

    @Override // e.a.f.f
    public void a(int i, String str, Throwable th) {
        int iMin;
        int i2 = i != 5 ? 3 : 5;
        if (th != null) {
            str = str + '\n' + Log.getStackTraceString(th);
        }
        int i3 = 0;
        int length = str.length();
        while (i3 < length) {
            int iIndexOf = str.indexOf(10, i3);
            if (iIndexOf == -1) {
                iIndexOf = length;
            }
            while (true) {
                iMin = Math.min(iIndexOf, i3 + 4000);
                Log.println(i2, "OkHttp", str.substring(i3, iMin));
                if (iMin >= iIndexOf) {
                    break;
                } else {
                    i3 = iMin;
                }
            }
            i3 = iMin + 1;
        }
    }

    @Override // e.a.f.f
    public void a(String str, Object obj) {
        if (this.h.a(obj)) {
            return;
        }
        a(5, str, (Throwable) null);
    }

    @Override // e.a.f.f
    public void a(Socket socket, InetSocketAddress inetSocketAddress, int i) throws IOException {
        try {
            socket.connect(inetSocketAddress, i);
        } catch (AssertionError e2) {
            if (!e.a.e.a(e2)) {
                throw e2;
            }
            throw new IOException(e2);
        } catch (ClassCastException e3) {
            if (Build.VERSION.SDK_INT != 26) {
                throw e3;
            }
            IOException iOException = new IOException("Exception in connect");
            iOException.initCause(e3);
            throw iOException;
        } catch (SecurityException e4) {
            IOException iOException2 = new IOException("Exception in connect");
            iOException2.initCause(e4);
            throw iOException2;
        }
    }

    @Override // e.a.f.f
    public void a(SSLSocket sSLSocket, String str, List<F> list) {
        if (str != null) {
            this.f3120d.c(sSLSocket, true);
            this.f3121e.c(sSLSocket, str);
        }
        e<Socket> eVar = this.g;
        if (eVar == null || !eVar.a(sSLSocket)) {
            return;
        }
        this.g.d(sSLSocket, f.b(list));
    }

    @Override // e.a.f.f
    public e.a.h.e b(X509TrustManager x509TrustManager) {
        try {
            Method declaredMethod = x509TrustManager.getClass().getDeclaredMethod("findTrustAnchorByIssuerAndSignature", X509Certificate.class);
            declaredMethod.setAccessible(true);
            return new b(x509TrustManager, declaredMethod);
        } catch (NoSuchMethodException unused) {
            return super.b(x509TrustManager);
        }
    }

    @Override // e.a.f.f
    public String b(SSLSocket sSLSocket) {
        byte[] bArr;
        e<Socket> eVar = this.f3122f;
        if (eVar == null || !eVar.a(sSLSocket) || (bArr = (byte[]) this.f3122f.d(sSLSocket, new Object[0])) == null) {
            return null;
        }
        return new String(bArr, e.a.e.j);
    }

    @Override // e.a.f.f
    public boolean b(String str) {
        try {
            Class<?> cls = Class.forName("android.security.NetworkSecurityPolicy");
            return b(str, cls, cls.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]));
        } catch (ClassNotFoundException | NoSuchMethodException unused) {
            return super.b(str);
        } catch (IllegalAccessException e2) {
            e = e2;
            throw e.a.e.a("unable to determine cleartext support", e);
        } catch (IllegalArgumentException e3) {
            e = e3;
            throw e.a.e.a("unable to determine cleartext support", e);
        } catch (InvocationTargetException e4) {
            e = e4;
            throw e.a.e.a("unable to determine cleartext support", e);
        }
    }
}
