package e;

import java.security.cert.Certificate;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;
import javax.net.ssl.SSLPeerUnverifiedException;

/* JADX INFO: renamed from: e.h, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0415h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final C0415h f3167a = new a().a();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Set<b> f3168b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final e.a.h.c f3169c;

    /* JADX INFO: renamed from: e.h$a */
    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final List<b> f3170a = new ArrayList();

        public C0415h a() {
            return new C0415h(new LinkedHashSet(this.f3170a), null);
        }
    }

    /* JADX INFO: renamed from: e.h$b */
    static final class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final String f3171a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final String f3172b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        final String f3173c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        final f.i f3174d;

        boolean a(String str) {
            if (!this.f3171a.startsWith("*.")) {
                return str.equals(this.f3172b);
            }
            int iIndexOf = str.indexOf(46);
            if ((str.length() - iIndexOf) - 1 == this.f3172b.length()) {
                String str2 = this.f3172b;
                if (str.regionMatches(false, iIndexOf + 1, str2, 0, str2.length())) {
                    return true;
                }
            }
            return false;
        }

        public boolean equals(Object obj) {
            if (obj instanceof b) {
                b bVar = (b) obj;
                if (this.f3171a.equals(bVar.f3171a) && this.f3173c.equals(bVar.f3173c) && this.f3174d.equals(bVar.f3174d)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return ((((527 + this.f3171a.hashCode()) * 31) + this.f3173c.hashCode()) * 31) + this.f3174d.hashCode();
        }

        public String toString() {
            return this.f3173c + this.f3174d.a();
        }
    }

    C0415h(Set<b> set, e.a.h.c cVar) {
        this.f3168b = set;
        this.f3169c = cVar;
    }

    static f.i a(X509Certificate x509Certificate) {
        return f.i.a(x509Certificate.getPublicKey().getEncoded()).c();
    }

    public static String a(Certificate certificate) {
        if (!(certificate instanceof X509Certificate)) {
            throw new IllegalArgumentException("Certificate pinning requires X509 certificates");
        }
        return "sha256/" + b((X509Certificate) certificate).a();
    }

    static f.i b(X509Certificate x509Certificate) {
        return f.i.a(x509Certificate.getPublicKey().getEncoded()).d();
    }

    C0415h a(e.a.h.c cVar) {
        return e.a.e.a(this.f3169c, cVar) ? this : new C0415h(this.f3168b, cVar);
    }

    List<b> a(String str) {
        List<b> listEmptyList = Collections.emptyList();
        for (b bVar : this.f3168b) {
            if (bVar.a(str)) {
                if (listEmptyList.isEmpty()) {
                    listEmptyList = new ArrayList<>();
                }
                listEmptyList.add(bVar);
            }
        }
        return listEmptyList;
    }

    public void a(String str, List<Certificate> list) {
        List<b> listA = a(str);
        if (listA.isEmpty()) {
            return;
        }
        e.a.h.c cVar = this.f3169c;
        if (cVar != null) {
            list = cVar.a(list, str);
        }
        int size = list.size();
        for (int i = 0; i < size; i++) {
            X509Certificate x509Certificate = (X509Certificate) list.get(i);
            int size2 = listA.size();
            f.i iVarB = null;
            f.i iVarA = null;
            for (int i2 = 0; i2 < size2; i2++) {
                b bVar = listA.get(i2);
                if (bVar.f3173c.equals("sha256/")) {
                    if (iVarB == null) {
                        iVarB = b(x509Certificate);
                    }
                    if (bVar.f3174d.equals(iVarB)) {
                        return;
                    }
                } else {
                    if (!bVar.f3173c.equals("sha1/")) {
                        throw new AssertionError("unsupported hashAlgorithm: " + bVar.f3173c);
                    }
                    if (iVarA == null) {
                        iVarA = a(x509Certificate);
                    }
                    if (bVar.f3174d.equals(iVarA)) {
                        return;
                    }
                }
            }
        }
        StringBuilder sb = new StringBuilder();
        sb.append("Certificate pinning failure!");
        sb.append("\n  Peer certificate chain:");
        int size3 = list.size();
        for (int i3 = 0; i3 < size3; i3++) {
            X509Certificate x509Certificate2 = (X509Certificate) list.get(i3);
            sb.append("\n    ");
            sb.append(a((Certificate) x509Certificate2));
            sb.append(": ");
            sb.append(x509Certificate2.getSubjectDN().getName());
        }
        sb.append("\n  Pinned certificates for ");
        sb.append(str);
        sb.append(":");
        int size4 = listA.size();
        for (int i4 = 0; i4 < size4; i4++) {
            b bVar2 = listA.get(i4);
            sb.append("\n    ");
            sb.append(bVar2);
        }
        throw new SSLPeerUnverifiedException(sb.toString());
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof C0415h) {
            C0415h c0415h = (C0415h) obj;
            if (e.a.e.a(this.f3169c, c0415h.f3169c) && this.f3168b.equals(c0415h.f3168b)) {
                return true;
            }
        }
        return false;
    }

    public int hashCode() {
        e.a.h.c cVar = this.f3169c;
        return ((cVar != null ? cVar.hashCode() : 0) * 31) + this.f3168b.hashCode();
    }
}
