package e.a.h;

import e.a.f.f;
import java.security.cert.Certificate;
import java.util.List;
import javax.net.ssl.X509TrustManager;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class c {
    public static c a(X509TrustManager x509TrustManager) {
        return f.a().a(x509TrustManager);
    }

    public abstract List<Certificate> a(List<Certificate> list, String str);
}
