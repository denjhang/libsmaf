package e.a.c;

import e.A;
import e.H;
import java.net.Proxy;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class j {
    public static String a(A a2) {
        String strC = a2.c();
        String strE = a2.e();
        if (strE == null) {
            return strC;
        }
        return strC + '?' + strE;
    }

    public static String a(H h, Proxy.Type type) {
        StringBuilder sb = new StringBuilder();
        sb.append(h.e());
        sb.append(' ');
        if (b(h, type)) {
            sb.append(h.g());
        } else {
            sb.append(a(h.g()));
        }
        sb.append(" HTTP/1.1");
        return sb.toString();
    }

    private static boolean b(H h, Proxy.Type type) {
        return !h.d() && type == Proxy.Type.HTTP;
    }
}
