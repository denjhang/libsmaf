package e;

import e.z;
import java.io.Closeable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class K implements Closeable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final H f2862a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final F f2863b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final int f2864c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final String f2865d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final y f2866e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final z f2867f;
    final M g;
    final K h;
    final K i;
    final K j;
    final long k;
    final long l;
    private volatile C0412e m;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        H f2868a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        F f2869b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        int f2870c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        String f2871d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        y f2872e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        z.a f2873f;
        M g;
        K h;
        K i;
        K j;
        long k;
        long l;

        public a() {
            this.f2870c = -1;
            this.f2873f = new z.a();
        }

        a(K k) {
            this.f2870c = -1;
            this.f2868a = k.f2862a;
            this.f2869b = k.f2863b;
            this.f2870c = k.f2864c;
            this.f2871d = k.f2865d;
            this.f2872e = k.f2866e;
            this.f2873f = k.f2867f.a();
            this.g = k.g;
            this.h = k.h;
            this.i = k.i;
            this.j = k.j;
            this.k = k.k;
            this.l = k.l;
        }

        private void a(String str, K k) {
            if (k.g != null) {
                throw new IllegalArgumentException(str + ".body != null");
            }
            if (k.h != null) {
                throw new IllegalArgumentException(str + ".networkResponse != null");
            }
            if (k.i != null) {
                throw new IllegalArgumentException(str + ".cacheResponse != null");
            }
            if (k.j == null) {
                return;
            }
            throw new IllegalArgumentException(str + ".priorResponse != null");
        }

        private void d(K k) {
            if (k.g != null) {
                throw new IllegalArgumentException("priorResponse.body != null");
            }
        }

        public a a(int i) {
            this.f2870c = i;
            return this;
        }

        public a a(long j) {
            this.l = j;
            return this;
        }

        public a a(F f2) {
            this.f2869b = f2;
            return this;
        }

        public a a(H h) {
            this.f2868a = h;
            return this;
        }

        public a a(K k) {
            if (k != null) {
                a("cacheResponse", k);
            }
            this.i = k;
            return this;
        }

        public a a(M m) {
            this.g = m;
            return this;
        }

        public a a(y yVar) {
            this.f2872e = yVar;
            return this;
        }

        public a a(z zVar) {
            this.f2873f = zVar.a();
            return this;
        }

        public a a(String str) {
            this.f2871d = str;
            return this;
        }

        public a a(String str, String str2) {
            this.f2873f.a(str, str2);
            return this;
        }

        public K a() {
            if (this.f2868a == null) {
                throw new IllegalStateException("request == null");
            }
            if (this.f2869b == null) {
                throw new IllegalStateException("protocol == null");
            }
            if (this.f2870c >= 0) {
                if (this.f2871d != null) {
                    return new K(this);
                }
                throw new IllegalStateException("message == null");
            }
            throw new IllegalStateException("code < 0: " + this.f2870c);
        }

        public a b(long j) {
            this.k = j;
            return this;
        }

        public a b(K k) {
            if (k != null) {
                a("networkResponse", k);
            }
            this.h = k;
            return this;
        }

        public a c(K k) {
            if (k != null) {
                d(k);
            }
            this.j = k;
            return this;
        }
    }

    K(a aVar) {
        this.f2862a = aVar.f2868a;
        this.f2863b = aVar.f2869b;
        this.f2864c = aVar.f2870c;
        this.f2865d = aVar.f2871d;
        this.f2866e = aVar.f2872e;
        this.f2867f = aVar.f2873f.a();
        this.g = aVar.g;
        this.h = aVar.h;
        this.i = aVar.i;
        this.j = aVar.j;
        this.k = aVar.k;
        this.l = aVar.l;
    }

    public M a() {
        return this.g;
    }

    public String a(String str) {
        return a(str, null);
    }

    public String a(String str, String str2) {
        String strA = this.f2867f.a(str);
        return strA != null ? strA : str2;
    }

    public C0412e b() {
        C0412e c0412e = this.m;
        if (c0412e != null) {
            return c0412e;
        }
        C0412e c0412eA = C0412e.a(this.f2867f);
        this.m = c0412eA;
        return c0412eA;
    }

    public int c() {
        return this.f2864c;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        M m = this.g;
        if (m == null) {
            throw new IllegalStateException("response is not eligible for a body and must not be closed");
        }
        m.close();
    }

    public y d() {
        return this.f2866e;
    }

    public z e() {
        return this.f2867f;
    }

    public a f() {
        return new a(this);
    }

    public K g() {
        return this.j;
    }

    public long h() {
        return this.l;
    }

    public H i() {
        return this.f2862a;
    }

    public long j() {
        return this.k;
    }

    public String toString() {
        return "Response{protocol=" + this.f2863b + ", code=" + this.f2864c + ", message=" + this.f2865d + ", url=" + this.f2862a.g() + '}';
    }
}
