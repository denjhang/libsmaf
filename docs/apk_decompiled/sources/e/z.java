package e;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class z {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String[] f3224a;

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final List<String> f3225a = new ArrayList(20);

        private void d(String str, String str2) {
            if (str == null) {
                throw new NullPointerException("name == null");
            }
            if (str.isEmpty()) {
                throw new IllegalArgumentException("name is empty");
            }
            int length = str.length();
            for (int i = 0; i < length; i++) {
                char cCharAt = str.charAt(i);
                if (cCharAt <= ' ' || cCharAt >= 127) {
                    throw new IllegalArgumentException(e.a.e.a("Unexpected char %#04x at %d in header name: %s", Integer.valueOf(cCharAt), Integer.valueOf(i), str));
                }
            }
            if (str2 == null) {
                throw new NullPointerException("value for name " + str + " == null");
            }
            int length2 = str2.length();
            for (int i2 = 0; i2 < length2; i2++) {
                char cCharAt2 = str2.charAt(i2);
                if ((cCharAt2 <= 31 && cCharAt2 != '\t') || cCharAt2 >= 127) {
                    throw new IllegalArgumentException(e.a.e.a("Unexpected char %#04x at %d in %s value: %s", Integer.valueOf(cCharAt2), Integer.valueOf(i2), str, str2));
                }
            }
        }

        a a(String str) {
            int iIndexOf = str.indexOf(":", 1);
            if (iIndexOf != -1) {
                b(str.substring(0, iIndexOf), str.substring(iIndexOf + 1));
                return this;
            }
            if (str.startsWith(":")) {
                b("", str.substring(1));
                return this;
            }
            b("", str);
            return this;
        }

        public a a(String str, String str2) {
            d(str, str2);
            b(str, str2);
            return this;
        }

        public z a() {
            return new z(this);
        }

        public a b(String str) {
            int i = 0;
            while (i < this.f3225a.size()) {
                if (str.equalsIgnoreCase(this.f3225a.get(i))) {
                    this.f3225a.remove(i);
                    this.f3225a.remove(i);
                    i -= 2;
                }
                i += 2;
            }
            return this;
        }

        a b(String str, String str2) {
            this.f3225a.add(str);
            this.f3225a.add(str2.trim());
            return this;
        }

        public a c(String str, String str2) {
            d(str, str2);
            b(str);
            b(str, str2);
            return this;
        }
    }

    z(a aVar) {
        List<String> list = aVar.f3225a;
        this.f3224a = (String[]) list.toArray(new String[list.size()]);
    }

    private static String a(String[] strArr, String str) {
        for (int length = strArr.length - 2; length >= 0; length -= 2) {
            if (str.equalsIgnoreCase(strArr[length])) {
                return strArr[length + 1];
            }
        }
        return null;
    }

    public a a() {
        a aVar = new a();
        Collections.addAll(aVar.f3225a, this.f3224a);
        return aVar;
    }

    public String a(int i) {
        return this.f3224a[i * 2];
    }

    public String a(String str) {
        return a(this.f3224a, str);
    }

    public int b() {
        return this.f3224a.length / 2;
    }

    public String b(int i) {
        return this.f3224a[(i * 2) + 1];
    }

    public List<String> b(String str) {
        int iB = b();
        ArrayList arrayList = null;
        for (int i = 0; i < iB; i++) {
            if (str.equalsIgnoreCase(a(i))) {
                if (arrayList == null) {
                    arrayList = new ArrayList(2);
                }
                arrayList.add(b(i));
            }
        }
        return arrayList != null ? Collections.unmodifiableList(arrayList) : Collections.emptyList();
    }

    public boolean equals(Object obj) {
        return (obj instanceof z) && Arrays.equals(((z) obj).f3224a, this.f3224a);
    }

    public int hashCode() {
        return Arrays.hashCode(this.f3224a);
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        int iB = b();
        for (int i = 0; i < iB; i++) {
            sb.append(a(i));
            sb.append(": ");
            sb.append(b(i));
            sb.append("\n");
        }
        return sb.toString();
    }
}
