package e.a.c;

import e.A;
import e.C0422o;
import e.K;
import e.q;
import e.z;
import java.util.List;
import java.util.regex.Pattern;
import org.apache.http.client.methods.HttpHead;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Pattern f2942a = Pattern.compile(" +([^ \"=]*)=(:?\"([^\"]*)\"|([^ \"=]*)) *(:?,|$)");

    public static int a(String str, int i) {
        try {
            long j = Long.parseLong(str);
            if (j > 2147483647L) {
                return Integer.MAX_VALUE;
            }
            if (j < 0) {
                return 0;
            }
            return (int) j;
        } catch (NumberFormatException unused) {
            return i;
        }
    }

    public static int a(String str, int i, String str2) {
        while (i < str.length() && str2.indexOf(str.charAt(i)) == -1) {
            i++;
        }
        return i;
    }

    public static long a(K k) {
        return a(k.e());
    }

    public static long a(z zVar) {
        return a(zVar.a("Content-Length"));
    }

    private static long a(String str) {
        if (str == null) {
            return -1L;
        }
        try {
            return Long.parseLong(str);
        } catch (NumberFormatException unused) {
            return -1L;
        }
    }

    public static void a(q qVar, A a2, z zVar) {
        if (qVar == q.f3204a) {
            return;
        }
        List<C0422o> listA = C0422o.a(a2, zVar);
        if (listA.isEmpty()) {
            return;
        }
        qVar.a(a2, listA);
    }

    public static int b(String str, int i) {
        char cCharAt;
        while (i < str.length() && ((cCharAt = str.charAt(i)) == ' ' || cCharAt == '\t')) {
            i++;
        }
        return i;
    }

    public static boolean b(K k) {
        if (k.i().e().equals(HttpHead.METHOD_NAME)) {
            return false;
        }
        int iC = k.c();
        return (((iC >= 100 && iC < 200) || iC == 204 || iC == 304) && a(k) == -1 && !HTTP.CHUNK_CODING.equalsIgnoreCase(k.a("Transfer-Encoding"))) ? false : true;
    }
}
