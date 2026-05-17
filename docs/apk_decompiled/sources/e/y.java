package e;

import java.security.cert.Certificate;
import java.util.Collections;
import java.util.List;
import javax.net.ssl.SSLPeerUnverifiedException;
import javax.net.ssl.SSLSession;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class y {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final O f3220a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final C0417j f3221b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final List<Certificate> f3222c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final List<Certificate> f3223d;

    private y(O o, C0417j c0417j, List<Certificate> list, List<Certificate> list2) {
        this.f3220a = o;
        this.f3221b = c0417j;
        this.f3222c = list;
        this.f3223d = list2;
    }

    public static y a(SSLSession sSLSession) {
        Certificate[] peerCertificates;
        String cipherSuite = sSLSession.getCipherSuite();
        if (cipherSuite == null) {
            throw new IllegalStateException("cipherSuite == null");
        }
        C0417j c0417jA = C0417j.a(cipherSuite);
        String protocol = sSLSession.getProtocol();
        if (protocol == null) {
            throw new IllegalStateException("tlsVersion == null");
        }
        O oA = O.a(protocol);
        try {
            peerCertificates = sSLSession.getPeerCertificates();
        } catch (SSLPeerUnverifiedException unused) {
            peerCertificates = null;
        }
        List listA = peerCertificates != null ? e.a.e.a(peerCertificates) : Collections.emptyList();
        Certificate[] localCertificates = sSLSession.getLocalCertificates();
        return new y(oA, c0417jA, listA, localCertificates != null ? e.a.e.a(localCertificates) : Collections.emptyList());
    }

    public C0417j a() {
        return this.f3221b;
    }

    public List<Certificate> b() {
        return this.f3222c;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof y)) {
            return false;
        }
        y yVar = (y) obj;
        return this.f3220a.equals(yVar.f3220a) && this.f3221b.equals(yVar.f3221b) && this.f3222c.equals(yVar.f3222c) && this.f3223d.equals(yVar.f3223d);
    }

    public int hashCode() {
        return ((((((527 + this.f3220a.hashCode()) * 31) + this.f3221b.hashCode()) * 31) + this.f3222c.hashCode()) * 31) + this.f3223d.hashCode();
    }
}
