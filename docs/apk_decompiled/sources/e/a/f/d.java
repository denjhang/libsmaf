package e.a.f;

import e.F;
import java.lang.reflect.InvocationHandler;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;
import java.util.List;
import javax.net.ssl.SSLSocket;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class d extends f {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Method f3132c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Method f3133d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final Method f3134e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final Class<?> f3135f;
    private final Class<?> g;

    private static class a implements InvocationHandler {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final List<String> f3136a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        boolean f3137b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        String f3138c;

        a(List<String> list) {
            this.f3136a = list;
        }

        @Override // java.lang.reflect.InvocationHandler
        public Object invoke(Object obj, Method method, Object[] objArr) {
            Object obj2;
            String name = method.getName();
            Class<?> returnType = method.getReturnType();
            if (objArr == null) {
                objArr = e.a.e.f2986b;
            }
            if (name.equals("supports") && Boolean.TYPE == returnType) {
                return true;
            }
            if (name.equals("unsupported") && Void.TYPE == returnType) {
                this.f3137b = true;
                return null;
            }
            if (name.equals("protocols") && objArr.length == 0) {
                return this.f3136a;
            }
            if ((!name.equals("selectProtocol") && !name.equals("select")) || String.class != returnType || objArr.length != 1 || !(objArr[0] instanceof List)) {
                if ((!name.equals("protocolSelected") && !name.equals("selected")) || objArr.length != 1) {
                    return method.invoke(this, objArr);
                }
                this.f3138c = (String) objArr[0];
                return null;
            }
            List list = (List) objArr[0];
            int size = list.size();
            int i = 0;
            while (true) {
                if (i >= size) {
                    obj2 = this.f3136a.get(0);
                    break;
                }
                if (this.f3136a.contains(list.get(i))) {
                    obj2 = list.get(i);
                    break;
                }
                i++;
            }
            String str = (String) obj2;
            this.f3138c = str;
            return str;
        }
    }

    d(Method method, Method method2, Method method3, Class<?> cls, Class<?> cls2) {
        this.f3132c = method;
        this.f3133d = method2;
        this.f3134e = method3;
        this.f3135f = cls;
        this.g = cls2;
    }

    public static f d() {
        try {
            Class<?> cls = Class.forName("org.eclipse.jetty.alpn.ALPN");
            Class<?> cls2 = Class.forName("org.eclipse.jetty.alpn.ALPN$Provider");
            return new d(cls.getMethod("put", SSLSocket.class, cls2), cls.getMethod("get", SSLSocket.class), cls.getMethod("remove", SSLSocket.class), Class.forName("org.eclipse.jetty.alpn.ALPN$ClientProvider"), Class.forName("org.eclipse.jetty.alpn.ALPN$ServerProvider"));
        } catch (ClassNotFoundException | NoSuchMethodException unused) {
            return null;
        }
    }

    @Override // e.a.f.f
    public void a(SSLSocket sSLSocket) {
        try {
            this.f3134e.invoke(null, sSLSocket);
        } catch (IllegalAccessException | InvocationTargetException e2) {
            throw e.a.e.a("unable to remove alpn", (Exception) e2);
        }
    }

    @Override // e.a.f.f
    public void a(SSLSocket sSLSocket, String str, List<F> list) {
        try {
            this.f3132c.invoke(null, sSLSocket, Proxy.newProxyInstance(f.class.getClassLoader(), new Class[]{this.f3135f, this.g}, new a(f.a(list))));
        } catch (IllegalAccessException | InvocationTargetException e2) {
            throw e.a.e.a("unable to set alpn", (Exception) e2);
        }
    }

    @Override // e.a.f.f
    public String b(SSLSocket sSLSocket) {
        try {
            a aVar = (a) Proxy.getInvocationHandler(this.f3133d.invoke(null, sSLSocket));
            if (!aVar.f3137b && aVar.f3138c == null) {
                f.a().a(4, "ALPN callback dropped: HTTP/2 is disabled. Is alpn-boot on the boot class path?", (Throwable) null);
                return null;
            }
            if (aVar.f3137b) {
                return null;
            }
            return aVar.f3138c;
        } catch (IllegalAccessException | InvocationTargetException e2) {
            throw e.a.e.a("unable to get selected protocol", (Exception) e2);
        }
    }
}
