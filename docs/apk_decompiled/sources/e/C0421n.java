package e;

import java.util.Arrays;
import java.util.List;
import javax.net.ssl.SSLSocket;

/* JADX INFO: renamed from: e.n, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0421n {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final C0417j[] f3188a = {C0417j.Ya, C0417j.bb, C0417j.Za, C0417j.cb, C0417j.ib, C0417j.hb, C0417j.Ja, C0417j.Ka, C0417j.ha, C0417j.ia, C0417j.F, C0417j.J, C0417j.j};

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public static final C0421n f3189b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    public static final C0421n f3190c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    public static final C0421n f3191d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final boolean f3192e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final boolean f3193f;
    final String[] g;
    final String[] h;

    /* JADX INFO: renamed from: e.n$a */
    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        boolean f3194a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        String[] f3195b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        String[] f3196c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        boolean f3197d;

        public a(C0421n c0421n) {
            this.f3194a = c0421n.f3192e;
            this.f3195b = c0421n.g;
            this.f3196c = c0421n.h;
            this.f3197d = c0421n.f3193f;
        }

        a(boolean z) {
            this.f3194a = z;
        }

        public a a(boolean z) {
            if (!this.f3194a) {
                throw new IllegalStateException("no TLS extensions for cleartext connections");
            }
            this.f3197d = z;
            return this;
        }

        public a a(O... oArr) {
            if (!this.f3194a) {
                throw new IllegalStateException("no TLS versions for cleartext connections");
            }
            String[] strArr = new String[oArr.length];
            for (int i = 0; i < oArr.length; i++) {
                strArr[i] = oArr[i].g;
            }
            b(strArr);
            return this;
        }

        public a a(C0417j... c0417jArr) {
            if (!this.f3194a) {
                throw new IllegalStateException("no cipher suites for cleartext connections");
            }
            String[] strArr = new String[c0417jArr.length];
            for (int i = 0; i < c0417jArr.length; i++) {
                strArr[i] = c0417jArr[i].jb;
            }
            a(strArr);
            return this;
        }

        public a a(String... strArr) {
            if (!this.f3194a) {
                throw new IllegalStateException("no cipher suites for cleartext connections");
            }
            if (strArr.length == 0) {
                throw new IllegalArgumentException("At least one cipher suite is required");
            }
            this.f3195b = (String[]) strArr.clone();
            return this;
        }

        public C0421n a() {
            return new C0421n(this);
        }

        public a b(String... strArr) {
            if (!this.f3194a) {
                throw new IllegalStateException("no TLS versions for cleartext connections");
            }
            if (strArr.length == 0) {
                throw new IllegalArgumentException("At least one TLS version is required");
            }
            this.f3196c = (String[]) strArr.clone();
            return this;
        }
    }

    static {
        a aVar = new a(true);
        aVar.a(f3188a);
        aVar.a(O.TLS_1_3, O.TLS_1_2, O.TLS_1_1, O.TLS_1_0);
        aVar.a(true);
        f3189b = aVar.a();
        a aVar2 = new a(f3189b);
        aVar2.a(O.TLS_1_0);
        aVar2.a(true);
        f3190c = aVar2.a();
        f3191d = new a(false).a();
    }

    C0421n(a aVar) {
        this.f3192e = aVar.f3194a;
        this.g = aVar.f3195b;
        this.h = aVar.f3196c;
        this.f3193f = aVar.f3197d;
    }

    private C0421n b(SSLSocket sSLSocket, boolean z) {
        String[] strArrA = this.g != null ? e.a.e.a(C0417j.f3175a, sSLSocket.getEnabledCipherSuites(), this.g) : sSLSocket.getEnabledCipherSuites();
        String[] strArrA2 = this.h != null ? e.a.e.a(e.a.e.q, sSLSocket.getEnabledProtocols(), this.h) : sSLSocket.getEnabledProtocols();
        String[] supportedCipherSuites = sSLSocket.getSupportedCipherSuites();
        int iA = e.a.e.a(C0417j.f3175a, supportedCipherSuites, "TLS_FALLBACK_SCSV");
        if (z && iA != -1) {
            strArrA = e.a.e.a(strArrA, supportedCipherSuites[iA]);
        }
        a aVar = new a(this);
        aVar.a(strArrA);
        aVar.b(strArrA2);
        return aVar.a();
    }

    public List<C0417j> a() {
        String[] strArr = this.g;
        if (strArr != null) {
            return C0417j.a(strArr);
        }
        return null;
    }

    void a(SSLSocket sSLSocket, boolean z) {
        C0421n c0421nB = b(sSLSocket, z);
        String[] strArr = c0421nB.h;
        if (strArr != null) {
            sSLSocket.setEnabledProtocols(strArr);
        }
        String[] strArr2 = c0421nB.g;
        if (strArr2 != null) {
            sSLSocket.setEnabledCipherSuites(strArr2);
        }
    }

    public boolean a(SSLSocket sSLSocket) {
        if (!this.f3192e) {
            return false;
        }
        String[] strArr = this.h;
        if (strArr != null && !e.a.e.b(e.a.e.q, strArr, sSLSocket.getEnabledProtocols())) {
            return false;
        }
        String[] strArr2 = this.g;
        return strArr2 == null || e.a.e.b(C0417j.f3175a, strArr2, sSLSocket.getEnabledCipherSuites());
    }

    public boolean b() {
        return this.f3192e;
    }

    public boolean c() {
        return this.f3193f;
    }

    public List<O> d() {
        String[] strArr = this.h;
        if (strArr != null) {
            return O.a(strArr);
        }
        return null;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof C0421n)) {
            return false;
        }
        if (obj == this) {
            return true;
        }
        C0421n c0421n = (C0421n) obj;
        boolean z = this.f3192e;
        if (z != c0421n.f3192e) {
            return false;
        }
        return !z || (Arrays.equals(this.g, c0421n.g) && Arrays.equals(this.h, c0421n.h) && this.f3193f == c0421n.f3193f);
    }

    public int hashCode() {
        if (this.f3192e) {
            return ((((527 + Arrays.hashCode(this.g)) * 31) + Arrays.hashCode(this.h)) * 31) + (!this.f3193f ? 1 : 0);
        }
        return 17;
    }

    public String toString() {
        if (!this.f3192e) {
            return "ConnectionSpec()";
        }
        return "ConnectionSpec(cipherSuites=" + (this.g != null ? a().toString() : "[all enabled]") + ", tlsVersions=" + (this.h != null ? d().toString() : "[all enabled]") + ", supportsTlsExtensions=" + this.f3193f + ")";
    }
}
