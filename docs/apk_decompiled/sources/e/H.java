package e;

import e.z;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.client.methods.HttpPost;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class H {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final A f2847a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final String f2848b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final z f2849c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final J f2850d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final Object f2851e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private volatile C0412e f2852f;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        A f2853a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        String f2854b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        z.a f2855c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        J f2856d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        Object f2857e;

        public a() {
            this.f2854b = HttpGet.METHOD_NAME;
            this.f2855c = new z.a();
        }

        a(H h) {
            this.f2853a = h.f2847a;
            this.f2854b = h.f2848b;
            this.f2856d = h.f2850d;
            this.f2857e = h.f2851e;
            this.f2855c = h.f2849c.a();
        }

        public a a(A a2) {
            if (a2 == null) {
                throw new NullPointerException("url == null");
            }
            this.f2853a = a2;
            return this;
        }

        public a a(J j) {
            a(HttpPost.METHOD_NAME, j);
            return this;
        }

        public a a(z zVar) {
            this.f2855c = zVar.a();
            return this;
        }

        public a a(String str) {
            this.f2855c.b(str);
            return this;
        }

        public a a(String str, J j) {
            if (str == null) {
                throw new NullPointerException("method == null");
            }
            if (str.length() == 0) {
                throw new IllegalArgumentException("method.length() == 0");
            }
            if (j != null && !e.a.c.g.b(str)) {
                throw new IllegalArgumentException("method " + str + " must not have a request body.");
            }
            if (j != null || !e.a.c.g.e(str)) {
                this.f2854b = str;
                this.f2856d = j;
                return this;
            }
            throw new IllegalArgumentException("method " + str + " must have a request body.");
        }

        public a a(String str, String str2) {
            this.f2855c.a(str, str2);
            return this;
        }

        public H a() {
            if (this.f2853a != null) {
                return new H(this);
            }
            throw new IllegalStateException("url == null");
        }

        public a b() {
            a(HttpGet.METHOD_NAME, (J) null);
            return this;
        }

        /* JADX WARN: Removed duplicated region for block: B:12:0x0045  */
        /* JADX WARN: Removed duplicated region for block: B:14:0x0049  */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public e.H.a b(java.lang.String r7) {
            /*
                r6 = this;
                if (r7 == 0) goto L60
                r1 = 1
                r2 = 0
                r4 = 0
                r5 = 3
                java.lang.String r3 = "ws:"
                r0 = r7
                boolean r0 = r0.regionMatches(r1, r2, r3, r4, r5)
                if (r0 == 0) goto L26
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "http:"
                r0.append(r1)
                r1 = 3
            L1a:
                java.lang.String r7 = r7.substring(r1)
                r0.append(r7)
                java.lang.String r7 = r0.toString()
                goto L3f
            L26:
                r1 = 1
                r2 = 0
                r4 = 0
                r5 = 4
                java.lang.String r3 = "wss:"
                r0 = r7
                boolean r0 = r0.regionMatches(r1, r2, r3, r4, r5)
                if (r0 == 0) goto L3f
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "https:"
                r0.append(r1)
                r1 = 4
                goto L1a
            L3f:
                e.A r0 = e.A.c(r7)
                if (r0 == 0) goto L49
                r6.a(r0)
                return r6
            L49:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "unexpected url: "
                r1.append(r2)
                r1.append(r7)
                java.lang.String r7 = r1.toString()
                r0.<init>(r7)
                throw r0
            L60:
                java.lang.NullPointerException r7 = new java.lang.NullPointerException
                java.lang.String r0 = "url == null"
                r7.<init>(r0)
                goto L69
            L68:
                throw r7
            L69:
                goto L68
            */
            throw new UnsupportedOperationException("Method not decompiled: e.H.a.b(java.lang.String):e.H$a");
        }

        public a b(String str, String str2) {
            this.f2855c.c(str, str2);
            return this;
        }
    }

    H(a aVar) {
        this.f2847a = aVar.f2853a;
        this.f2848b = aVar.f2854b;
        this.f2849c = aVar.f2855c.a();
        this.f2850d = aVar.f2856d;
        Object obj = aVar.f2857e;
        this.f2851e = obj == null ? this : obj;
    }

    public J a() {
        return this.f2850d;
    }

    public String a(String str) {
        return this.f2849c.a(str);
    }

    public C0412e b() {
        C0412e c0412e = this.f2852f;
        if (c0412e != null) {
            return c0412e;
        }
        C0412e c0412eA = C0412e.a(this.f2849c);
        this.f2852f = c0412eA;
        return c0412eA;
    }

    public z c() {
        return this.f2849c;
    }

    public boolean d() {
        return this.f2847a.h();
    }

    public String e() {
        return this.f2848b;
    }

    public a f() {
        return new a(this);
    }

    public A g() {
        return this.f2847a;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("Request{method=");
        sb.append(this.f2848b);
        sb.append(", url=");
        sb.append(this.f2847a);
        sb.append(", tag=");
        Object obj = this.f2851e;
        if (obj == this) {
            obj = null;
        }
        sb.append(obj);
        sb.append('}');
        return sb.toString();
    }
}
