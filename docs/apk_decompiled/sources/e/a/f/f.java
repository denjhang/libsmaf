package e.a.f;

import e.E;
import e.F;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.security.NoSuchAlgorithmException;
import java.security.Security;
import java.util.ArrayList;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLSocket;
import javax.net.ssl.X509TrustManager;
import org.apache.http.conn.ssl.SSLSocketFactory;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final f f3142a = d();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Logger f3143b = Logger.getLogger(E.class.getName());

    public static f a() {
        return f3142a;
    }

    public static List<String> a(List<F> list) {
        ArrayList arrayList = new ArrayList(list.size());
        int size = list.size();
        for (int i = 0; i < size; i++) {
            F f2 = list.get(i);
            if (f2 != F.HTTP_1_0) {
                arrayList.add(f2.toString());
            }
        }
        return arrayList;
    }

    static byte[] b(List<F> list) {
        f.f fVar = new f.f();
        int size = list.size();
        for (int i = 0; i < size; i++) {
            F f2 = list.get(i);
            if (f2 != F.HTTP_1_0) {
                fVar.writeByte(f2.toString().length());
                fVar.d(f2.toString());
            }
        }
        return fVar.d();
    }

    public static boolean c() {
        if ("conscrypt".equals(System.getProperty("okhttp.platform"))) {
            return true;
        }
        return "Conscrypt".equals(Security.getProviders()[0].getName());
    }

    private static f d() {
        f fVarD;
        f fVarD2 = a.d();
        if (fVarD2 != null) {
            return fVarD2;
        }
        if (c() && (fVarD = b.d()) != null) {
            return fVarD;
        }
        c cVarD = c.d();
        if (cVarD != null) {
            return cVarD;
        }
        f fVarD3 = d.d();
        return fVarD3 != null ? fVarD3 : new f();
    }

    public e.a.h.c a(X509TrustManager x509TrustManager) {
        return new e.a.h.a(b(x509TrustManager));
    }

    public Object a(String str) {
        if (f3143b.isLoggable(Level.FINE)) {
            return new Throwable(str);
        }
        return null;
    }

    public void a(int i, String str, Throwable th) {
        f3143b.log(i == 5 ? Level.WARNING : Level.INFO, str, th);
    }

    public void a(String str, Object obj) {
        if (obj == null) {
            str = str + " To see where this was allocated, set the OkHttpClient logger level to FINE: Logger.getLogger(OkHttpClient.class.getName()).setLevel(Level.FINE);";
        }
        a(5, str, (Throwable) obj);
    }

    public void a(Socket socket, InetSocketAddress inetSocketAddress, int i) throws IOException {
        socket.connect(inetSocketAddress, i);
    }

    public void a(SSLSocket sSLSocket) {
    }

    public void a(SSLSocket sSLSocket, String str, List<F> list) {
    }

    public e.a.h.e b(X509TrustManager x509TrustManager) {
        return new e.a.h.b(x509TrustManager.getAcceptedIssuers());
    }

    public String b(SSLSocket sSLSocket) {
        return null;
    }

    public SSLContext b() {
        try {
            return SSLContext.getInstance(SSLSocketFactory.TLS);
        } catch (NoSuchAlgorithmException e2) {
            throw new IllegalStateException("No TLS provider", e2);
        }
    }

    public boolean b(String str) {
        return true;
    }
}
