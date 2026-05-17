package e.a.b;

import e.C0421n;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.net.ProtocolException;
import java.net.UnknownServiceException;
import java.security.cert.CertificateException;
import java.util.Arrays;
import java.util.List;
import javax.net.ssl.SSLHandshakeException;
import javax.net.ssl.SSLPeerUnverifiedException;
import javax.net.ssl.SSLProtocolException;
import javax.net.ssl.SSLSocket;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final List<C0421n> f2909a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f2910b = 0;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private boolean f2911c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private boolean f2912d;

    public b(List<C0421n> list) {
        this.f2909a = list;
    }

    private boolean b(SSLSocket sSLSocket) {
        for (int i = this.f2910b; i < this.f2909a.size(); i++) {
            if (this.f2909a.get(i).a(sSLSocket)) {
                return true;
            }
        }
        return false;
    }

    public C0421n a(SSLSocket sSLSocket) throws UnknownServiceException {
        C0421n c0421n;
        int i = this.f2910b;
        int size = this.f2909a.size();
        while (true) {
            if (i >= size) {
                c0421n = null;
                break;
            }
            c0421n = this.f2909a.get(i);
            if (c0421n.a(sSLSocket)) {
                this.f2910b = i + 1;
                break;
            }
            i++;
        }
        if (c0421n != null) {
            this.f2911c = b(sSLSocket);
            e.a.a.f2892a.a(c0421n, sSLSocket, this.f2912d);
            return c0421n;
        }
        throw new UnknownServiceException("Unable to find acceptable protocols. isFallback=" + this.f2912d + ", modes=" + this.f2909a + ", supported protocols=" + Arrays.toString(sSLSocket.getEnabledProtocols()));
    }

    public boolean a(IOException iOException) {
        this.f2912d = true;
        if (!this.f2911c || (iOException instanceof ProtocolException) || (iOException instanceof InterruptedIOException)) {
            return false;
        }
        boolean z = iOException instanceof SSLHandshakeException;
        if ((z && (iOException.getCause() instanceof CertificateException)) || (iOException instanceof SSLPeerUnverifiedException)) {
            return false;
        }
        return z || (iOException instanceof SSLProtocolException);
    }
}
