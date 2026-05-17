package e;

import java.net.URI;
import java.net.URISyntaxException;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import org.apache.http.HttpHost;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class A {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final char[] f2797a = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final String f2798b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final String f2799c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final String f2800d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final String f2801e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final int f2802f;
    private final List<String> g;
    private final List<String> h;
    private final String i;
    private final String j;

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        String f2803a;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        String f2806d;
        List<String> g;
        String h;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        String f2804b = "";

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        String f2805c = "";

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        int f2807e = -1;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        final List<String> f2808f = new ArrayList();

        /* JADX INFO: renamed from: e.A$a$a, reason: collision with other inner class name */
        enum EnumC0030a {
            SUCCESS,
            MISSING_SCHEME,
            UNSUPPORTED_SCHEME,
            INVALID_PORT,
            INVALID_HOST
        }

        public a() {
            this.f2808f.add("");
        }

        private static String a(String str, int i, int i2) {
            return e.a.e.a(A.a(str, i, i2, false));
        }

        private void a(String str, int i, int i2, boolean z, boolean z2) {
            String strA = A.a(str, i, i2, " \"<>^`{}|/\\?#", z2, false, false, true, null);
            if (f(strA)) {
                return;
            }
            if (g(strA)) {
                d();
                return;
            }
            if (this.f2808f.get(r11.size() - 1).isEmpty()) {
                this.f2808f.set(r11.size() - 1, strA);
            } else {
                this.f2808f.add(strA);
            }
            if (z) {
                this.f2808f.add("");
            }
        }

        private static int b(String str, int i, int i2) {
            int i3;
            try {
                i3 = Integer.parseInt(A.a(str, i, i2, "", false, false, false, true, null));
            } catch (NumberFormatException unused) {
            }
            if (i3 <= 0 || i3 > 65535) {
                return -1;
            }
            return i3;
        }

        private static int c(String str, int i, int i2) {
            while (i < i2) {
                char cCharAt = str.charAt(i);
                if (cCharAt == ':') {
                    return i;
                }
                if (cCharAt == '[') {
                    do {
                        i++;
                        if (i < i2) {
                        }
                    } while (str.charAt(i) != ']');
                }
                i++;
            }
            return i2;
        }

        private void d() {
            if (!this.f2808f.remove(r0.size() - 1).isEmpty() || this.f2808f.isEmpty()) {
                this.f2808f.add("");
            } else {
                this.f2808f.set(r0.size() - 1, "");
            }
        }

        private void d(String str, int i, int i2) {
            if (i == i2) {
                return;
            }
            char cCharAt = str.charAt(i);
            if (cCharAt == '/' || cCharAt == '\\') {
                this.f2808f.clear();
                this.f2808f.add("");
                i++;
            } else {
                List<String> list = this.f2808f;
                list.set(list.size() - 1, "");
            }
            while (true) {
                int i3 = i;
                if (i3 >= i2) {
                    return;
                }
                i = e.a.e.a(str, i3, i2, "/\\");
                boolean z = i < i2;
                a(str, i3, i, z, true);
                if (z) {
                    i++;
                }
            }
        }

        private static int e(String str, int i, int i2) {
            if (i2 - i < 2) {
                return -1;
            }
            char cCharAt = str.charAt(i);
            if ((cCharAt >= 'a' && cCharAt <= 'z') || (cCharAt >= 'A' && cCharAt <= 'Z')) {
                while (true) {
                    i++;
                    if (i >= i2) {
                        break;
                    }
                    char cCharAt2 = str.charAt(i);
                    if (cCharAt2 < 'a' || cCharAt2 > 'z') {
                        if (cCharAt2 < 'A' || cCharAt2 > 'Z') {
                            if (cCharAt2 < '0' || cCharAt2 > '9') {
                                if (cCharAt2 != '+' && cCharAt2 != '-' && cCharAt2 != '.') {
                                    if (cCharAt2 == ':') {
                                        return i;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            return -1;
        }

        private static int f(String str, int i, int i2) {
            int i3 = 0;
            while (i < i2) {
                char cCharAt = str.charAt(i);
                if (cCharAt != '\\' && cCharAt != '/') {
                    break;
                }
                i3++;
                i++;
            }
            return i3;
        }

        private boolean f(String str) {
            return str.equals(".") || str.equalsIgnoreCase("%2e");
        }

        private boolean g(String str) {
            return str.equals("..") || str.equalsIgnoreCase("%2e.") || str.equalsIgnoreCase(".%2e") || str.equalsIgnoreCase("%2e%2e");
        }

        EnumC0030a a(A a2, String str) {
            int iA;
            int i;
            int i2;
            int iA2 = e.a.e.a(str, 0, str.length());
            int iB = e.a.e.b(str, iA2, str.length());
            if (e(str, iA2, iB) != -1) {
                if (str.regionMatches(true, iA2, "https:", 0, 6)) {
                    this.f2803a = "https";
                    iA2 += 6;
                } else {
                    if (!str.regionMatches(true, iA2, "http:", 0, 5)) {
                        return EnumC0030a.UNSUPPORTED_SCHEME;
                    }
                    this.f2803a = HttpHost.DEFAULT_SCHEME_NAME;
                    iA2 += 5;
                }
            } else {
                if (a2 == null) {
                    return EnumC0030a.MISSING_SCHEME;
                }
                this.f2803a = a2.f2798b;
            }
            int iF = f(str, iA2, iB);
            char c2 = '?';
            char c3 = '#';
            if (iF >= 2 || a2 == null || !a2.f2798b.equals(this.f2803a)) {
                int i3 = iA2 + iF;
                boolean z = false;
                boolean z2 = false;
                while (true) {
                    iA = e.a.e.a(str, i3, iB, "@/\\?#");
                    byte bCharAt = iA != iB ? str.charAt(iA) : (byte) -1;
                    if (bCharAt == -1 || bCharAt == c3 || bCharAt == 47 || bCharAt == 92 || bCharAt == c2) {
                        break;
                    }
                    if (bCharAt == 64) {
                        if (z) {
                            i2 = iA;
                            this.f2805c += "%40" + A.a(str, i3, i2, " \"':;<=>@[]^`{}|/\\?#", true, false, false, true, null);
                        } else {
                            int iA3 = e.a.e.a(str, i3, iA, ':');
                            i2 = iA;
                            String strA = A.a(str, i3, iA3, " \"':;<=>@[]^`{}|/\\?#", true, false, false, true, null);
                            if (z2) {
                                strA = this.f2804b + "%40" + strA;
                            }
                            this.f2804b = strA;
                            if (iA3 != i2) {
                                this.f2805c = A.a(str, iA3 + 1, i2, " \"':;<=>@[]^`{}|/\\?#", true, false, false, true, null);
                                z = true;
                            }
                            z2 = true;
                        }
                        i3 = i2 + 1;
                    }
                    c2 = '?';
                    c3 = '#';
                }
                i = iA;
                int iC = c(str, i3, i);
                int i4 = iC + 1;
                if (i4 < i) {
                    this.f2806d = a(str, i3, iC);
                    this.f2807e = b(str, i4, i);
                    if (this.f2807e == -1) {
                        return EnumC0030a.INVALID_PORT;
                    }
                } else {
                    this.f2806d = a(str, i3, iC);
                    this.f2807e = A.a(this.f2803a);
                }
                if (this.f2806d == null) {
                    return EnumC0030a.INVALID_HOST;
                }
            } else {
                this.f2804b = a2.f();
                this.f2805c = a2.b();
                this.f2806d = a2.f2801e;
                this.f2807e = a2.f2802f;
                this.f2808f.clear();
                this.f2808f.addAll(a2.d());
                if (iA2 == iB || str.charAt(iA2) == '#') {
                    a(a2.e());
                }
                i = iA2;
            }
            int iA4 = e.a.e.a(str, i, iB, "?#");
            d(str, i, iA4);
            if (iA4 < iB && str.charAt(iA4) == '?') {
                int iA5 = e.a.e.a(str, iA4, iB, '#');
                this.g = A.d(A.a(str, iA4 + 1, iA5, " \"'<>#", true, false, true, true, null));
                iA4 = iA5;
            }
            if (iA4 < iB && str.charAt(iA4) == '#') {
                this.h = A.a(str, 1 + iA4, iB, "", true, false, false, false, null);
            }
            return EnumC0030a.SUCCESS;
        }

        public a a(int i) {
            if (i > 0 && i <= 65535) {
                this.f2807e = i;
                return this;
            }
            throw new IllegalArgumentException("unexpected port: " + i);
        }

        public a a(String str) {
            this.g = str != null ? A.d(A.a(str, " \"'<>#", true, false, true, true)) : null;
            return this;
        }

        public A a() {
            if (this.f2803a == null) {
                throw new IllegalStateException("scheme == null");
            }
            if (this.f2806d != null) {
                return new A(this);
            }
            throw new IllegalStateException("host == null");
        }

        int b() {
            int i = this.f2807e;
            return i != -1 ? i : A.a(this.f2803a);
        }

        public a b(String str) {
            if (str == null) {
                throw new NullPointerException("host == null");
            }
            String strA = a(str, 0, str.length());
            if (strA != null) {
                this.f2806d = strA;
                return this;
            }
            throw new IllegalArgumentException("unexpected host: " + str);
        }

        a c() {
            int size = this.f2808f.size();
            for (int i = 0; i < size; i++) {
                this.f2808f.set(i, A.a(this.f2808f.get(i), "[]", true, true, false, true));
            }
            List<String> list = this.g;
            if (list != null) {
                int size2 = list.size();
                for (int i2 = 0; i2 < size2; i2++) {
                    String str = this.g.get(i2);
                    if (str != null) {
                        this.g.set(i2, A.a(str, "\\^`{|}", true, true, true, true));
                    }
                }
            }
            String str2 = this.h;
            if (str2 != null) {
                this.h = A.a(str2, " \"#<>\\^`{|}", true, true, false, false);
            }
            return this;
        }

        public a c(String str) {
            if (str == null) {
                throw new NullPointerException("password == null");
            }
            this.f2805c = A.a(str, " \"':;<=>@[]^`{}|/\\?#", false, false, false, true);
            return this;
        }

        public a d(String str) {
            if (str == null) {
                throw new NullPointerException("scheme == null");
            }
            String str2 = HttpHost.DEFAULT_SCHEME_NAME;
            if (!str.equalsIgnoreCase(HttpHost.DEFAULT_SCHEME_NAME)) {
                str2 = "https";
                if (!str.equalsIgnoreCase("https")) {
                    throw new IllegalArgumentException("unexpected scheme: " + str);
                }
            }
            this.f2803a = str2;
            return this;
        }

        public a e(String str) {
            if (str == null) {
                throw new NullPointerException("username == null");
            }
            this.f2804b = A.a(str, " \"':;<=>@[]^`{}|/\\?#", false, false, false, true);
            return this;
        }

        public String toString() {
            StringBuilder sb = new StringBuilder();
            sb.append(this.f2803a);
            sb.append("://");
            if (!this.f2804b.isEmpty() || !this.f2805c.isEmpty()) {
                sb.append(this.f2804b);
                if (!this.f2805c.isEmpty()) {
                    sb.append(':');
                    sb.append(this.f2805c);
                }
                sb.append('@');
            }
            if (this.f2806d.indexOf(58) != -1) {
                sb.append('[');
                sb.append(this.f2806d);
                sb.append(']');
            } else {
                sb.append(this.f2806d);
            }
            int iB = b();
            if (iB != A.a(this.f2803a)) {
                sb.append(':');
                sb.append(iB);
            }
            A.b(sb, this.f2808f);
            if (this.g != null) {
                sb.append('?');
                A.a(sb, this.g);
            }
            if (this.h != null) {
                sb.append('#');
                sb.append(this.h);
            }
            return sb.toString();
        }
    }

    A(a aVar) {
        this.f2798b = aVar.f2803a;
        this.f2799c = a(aVar.f2804b, false);
        this.f2800d = a(aVar.f2805c, false);
        this.f2801e = aVar.f2806d;
        this.f2802f = aVar.b();
        this.g = a(aVar.f2808f, false);
        List<String> list = aVar.g;
        this.h = list != null ? a(list, true) : null;
        String str = aVar.h;
        this.i = str != null ? a(str, false) : null;
        this.j = aVar.toString();
    }

    public static int a(String str) {
        if (str.equals(HttpHost.DEFAULT_SCHEME_NAME)) {
            return 80;
        }
        return str.equals("https") ? 443 : -1;
    }

    static String a(String str, int i, int i2, String str2, boolean z, boolean z2, boolean z3, boolean z4, Charset charset) {
        int iCharCount = i;
        while (iCharCount < i2) {
            int iCodePointAt = str.codePointAt(iCharCount);
            if (iCodePointAt < 32 || iCodePointAt == 127 || (iCodePointAt >= 128 && z4)) {
                f.f fVar = new f.f();
                fVar.a(str, i, iCharCount);
                a(fVar, str, iCharCount, i2, str2, z, z2, z3, z4, charset);
                return fVar.f();
            }
            if (str2.indexOf(iCodePointAt) != -1 || ((iCodePointAt == 37 && (!z || (z2 && !a(str, iCharCount, i2)))) || (iCodePointAt == 43 && z3))) {
                f.f fVar2 = new f.f();
                fVar2.a(str, i, iCharCount);
                a(fVar2, str, iCharCount, i2, str2, z, z2, z3, z4, charset);
                return fVar2.f();
            }
            iCharCount += Character.charCount(iCodePointAt);
        }
        return str.substring(i, i2);
    }

    static String a(String str, int i, int i2, boolean z) {
        for (int i3 = i; i3 < i2; i3++) {
            char cCharAt = str.charAt(i3);
            if (cCharAt == '%' || (cCharAt == '+' && z)) {
                f.f fVar = new f.f();
                fVar.a(str, i, i3);
                a(fVar, str, i3, i2, z);
                return fVar.f();
            }
        }
        return str.substring(i, i2);
    }

    static String a(String str, String str2, boolean z, boolean z2, boolean z3, boolean z4) {
        return a(str, 0, str.length(), str2, z, z2, z3, z4, null);
    }

    static String a(String str, String str2, boolean z, boolean z2, boolean z3, boolean z4, Charset charset) {
        return a(str, 0, str.length(), str2, z, z2, z3, z4, charset);
    }

    static String a(String str, boolean z) {
        return a(str, 0, str.length(), z);
    }

    private List<String> a(List<String> list, boolean z) {
        int size = list.size();
        ArrayList arrayList = new ArrayList(size);
        for (int i = 0; i < size; i++) {
            String str = list.get(i);
            arrayList.add(str != null ? a(str, z) : null);
        }
        return Collections.unmodifiableList(arrayList);
    }

    static void a(f.f fVar, String str, int i, int i2, String str2, boolean z, boolean z2, boolean z3, boolean z4, Charset charset) {
        f.f fVar2 = null;
        while (i < i2) {
            int iCodePointAt = str.codePointAt(i);
            if (!z || (iCodePointAt != 9 && iCodePointAt != 10 && iCodePointAt != 12 && iCodePointAt != 13)) {
                if (iCodePointAt == 43 && z3) {
                    fVar.d(z ? "+" : "%2B");
                } else if (iCodePointAt < 32 || iCodePointAt == 127 || ((iCodePointAt >= 128 && z4) || str2.indexOf(iCodePointAt) != -1 || (iCodePointAt == 37 && (!z || (z2 && !a(str, i, i2)))))) {
                    if (fVar2 == null) {
                        fVar2 = new f.f();
                    }
                    if (charset == null || charset.equals(e.a.e.j)) {
                        fVar2.c(iCodePointAt);
                    } else {
                        fVar2.a(str, i, Character.charCount(iCodePointAt) + i, charset);
                    }
                    while (!fVar2.q()) {
                        int i3 = fVar2.readByte() & 255;
                        fVar.writeByte(37);
                        fVar.writeByte((int) f2797a[(i3 >> 4) & 15]);
                        fVar.writeByte((int) f2797a[i3 & 15]);
                    }
                } else {
                    fVar.c(iCodePointAt);
                }
            }
            i += Character.charCount(iCodePointAt);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0039  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    static void a(f.f r5, java.lang.String r6, int r7, int r8, boolean r9) {
        /*
        L0:
            if (r7 >= r8) goto L42
            int r0 = r6.codePointAt(r7)
            r1 = 37
            if (r0 != r1) goto L2d
            int r1 = r7 + 2
            if (r1 >= r8) goto L2d
            int r2 = r7 + 1
            char r2 = r6.charAt(r2)
            int r2 = e.a.e.a(r2)
            char r3 = r6.charAt(r1)
            int r3 = e.a.e.a(r3)
            r4 = -1
            if (r2 == r4) goto L39
            if (r3 == r4) goto L39
            int r7 = r2 << 4
            int r7 = r7 + r3
            r5.writeByte(r7)
            r7 = r1
            goto L3c
        L2d:
            r1 = 43
            if (r0 != r1) goto L39
            if (r9 == 0) goto L39
            r1 = 32
            r5.writeByte(r1)
            goto L3c
        L39:
            r5.c(r0)
        L3c:
            int r0 = java.lang.Character.charCount(r0)
            int r7 = r7 + r0
            goto L0
        L42:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: e.A.a(f.f, java.lang.String, int, int, boolean):void");
    }

    static void a(StringBuilder sb, List<String> list) {
        int size = list.size();
        for (int i = 0; i < size; i += 2) {
            String str = list.get(i);
            String str2 = list.get(i + 1);
            if (i > 0) {
                sb.append('&');
            }
            sb.append(str);
            if (str2 != null) {
                sb.append('=');
                sb.append(str2);
            }
        }
    }

    static boolean a(String str, int i, int i2) {
        int i3 = i + 2;
        return i3 < i2 && str.charAt(i) == '%' && e.a.e.a(str.charAt(i + 1)) != -1 && e.a.e.a(str.charAt(i3)) != -1;
    }

    static void b(StringBuilder sb, List<String> list) {
        int size = list.size();
        for (int i = 0; i < size; i++) {
            sb.append('/');
            sb.append(list.get(i));
        }
    }

    public static A c(String str) {
        a aVar = new a();
        if (aVar.a(null, str) == a.EnumC0030a.SUCCESS) {
            return aVar.a();
        }
        return null;
    }

    static List<String> d(String str) {
        String strSubstring;
        ArrayList arrayList = new ArrayList();
        int i = 0;
        while (i <= str.length()) {
            int iIndexOf = str.indexOf(38, i);
            if (iIndexOf == -1) {
                iIndexOf = str.length();
            }
            int iIndexOf2 = str.indexOf(61, i);
            if (iIndexOf2 == -1 || iIndexOf2 > iIndexOf) {
                arrayList.add(str.substring(i, iIndexOf));
                strSubstring = null;
            } else {
                arrayList.add(str.substring(i, iIndexOf2));
                strSubstring = str.substring(iIndexOf2 + 1, iIndexOf);
            }
            arrayList.add(strSubstring);
            i = iIndexOf + 1;
        }
        return arrayList;
    }

    public String a() {
        if (this.i == null) {
            return null;
        }
        return this.j.substring(this.j.indexOf(35) + 1);
    }

    public a b(String str) {
        a aVar = new a();
        if (aVar.a(this, str) == a.EnumC0030a.SUCCESS) {
            return aVar;
        }
        return null;
    }

    public String b() {
        if (this.f2800d.isEmpty()) {
            return "";
        }
        return this.j.substring(this.j.indexOf(58, this.f2798b.length() + 3) + 1, this.j.indexOf(64));
    }

    public String c() {
        int iIndexOf = this.j.indexOf(47, this.f2798b.length() + 3);
        String str = this.j;
        return this.j.substring(iIndexOf, e.a.e.a(str, iIndexOf, str.length(), "?#"));
    }

    public List<String> d() {
        int iIndexOf = this.j.indexOf(47, this.f2798b.length() + 3);
        String str = this.j;
        int iA = e.a.e.a(str, iIndexOf, str.length(), "?#");
        ArrayList arrayList = new ArrayList();
        while (iIndexOf < iA) {
            int i = iIndexOf + 1;
            int iA2 = e.a.e.a(this.j, i, iA, '/');
            arrayList.add(this.j.substring(i, iA2));
            iIndexOf = iA2;
        }
        return arrayList;
    }

    public A e(String str) {
        a aVarB = b(str);
        if (aVarB != null) {
            return aVarB.a();
        }
        return null;
    }

    public String e() {
        if (this.h == null) {
            return null;
        }
        int iIndexOf = this.j.indexOf(63) + 1;
        String str = this.j;
        return this.j.substring(iIndexOf, e.a.e.a(str, iIndexOf, str.length(), '#'));
    }

    public boolean equals(Object obj) {
        return (obj instanceof A) && ((A) obj).j.equals(this.j);
    }

    public String f() {
        if (this.f2799c.isEmpty()) {
            return "";
        }
        int length = this.f2798b.length() + 3;
        String str = this.j;
        return this.j.substring(length, e.a.e.a(str, length, str.length(), ":@"));
    }

    public String g() {
        return this.f2801e;
    }

    public boolean h() {
        return this.f2798b.equals("https");
    }

    public int hashCode() {
        return this.j.hashCode();
    }

    public a i() {
        a aVar = new a();
        aVar.f2803a = this.f2798b;
        aVar.f2804b = f();
        aVar.f2805c = b();
        aVar.f2806d = this.f2801e;
        aVar.f2807e = this.f2802f != a(this.f2798b) ? this.f2802f : -1;
        aVar.f2808f.clear();
        aVar.f2808f.addAll(d());
        aVar.a(e());
        aVar.h = a();
        return aVar;
    }

    public int j() {
        return this.f2802f;
    }

    public String k() {
        if (this.h == null) {
            return null;
        }
        StringBuilder sb = new StringBuilder();
        a(sb, this.h);
        return sb.toString();
    }

    public String l() {
        a aVarB = b("/...");
        aVarB.e("");
        aVarB.c("");
        return aVarB.a().toString();
    }

    public String m() {
        return this.f2798b;
    }

    public URI n() {
        a aVarI = i();
        aVarI.c();
        String string = aVarI.toString();
        try {
            return new URI(string);
        } catch (URISyntaxException e2) {
            try {
                return URI.create(string.replaceAll("[\\u0000-\\u001F\\u007F-\\u009F\\p{javaWhitespace}]", ""));
            } catch (Exception unused) {
                throw new RuntimeException(e2);
            }
        }
    }

    public String toString() {
        return this.j;
    }
}
