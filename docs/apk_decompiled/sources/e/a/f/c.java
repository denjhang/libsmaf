package e.a.f;

import e.F;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.List;
import javax.net.ssl.SSLParameters;
import javax.net.ssl.SSLSocket;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class c extends f {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final Method f3130c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final Method f3131d;

    c(Method method, Method method2) {
        this.f3130c = method;
        this.f3131d = method2;
    }

    public static c d() {
        try {
            return new c(SSLParameters.class.getMethod("setApplicationProtocols", String[].class), SSLSocket.class.getMethod("getApplicationProtocol", new Class[0]));
        } catch (NoSuchMethodException unused) {
            return null;
        }
    }

    @Override // e.a.f.f
    public void a(SSLSocket sSLSocket, String str, List<F> list) {
        try {
            SSLParameters sSLParameters = sSLSocket.getSSLParameters();
            List<String> listA = f.a(list);
            this.f3130c.invoke(sSLParameters, listA.toArray(new String[listA.size()]));
            sSLSocket.setSSLParameters(sSLParameters);
        } catch (IllegalAccessException | InvocationTargetException e2) {
            throw e.a.e.a("unable to set ssl parameters", (Exception) e2);
        }
    }

    @Override // e.a.f.f
    public String b(SSLSocket sSLSocket) {
        try {
            String str = (String) this.f3131d.invoke(sSLSocket, new Object[0]);
            if (str == null) {
                return null;
            }
            if (str.equals("")) {
                return null;
            }
            return str;
        } catch (IllegalAccessException | InvocationTargetException e2) {
            throw e.a.e.a("unable to get selected protocols", (Exception) e2);
        }
    }
}
