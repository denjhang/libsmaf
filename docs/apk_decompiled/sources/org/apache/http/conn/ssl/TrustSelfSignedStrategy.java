package org.apache.http.conn.ssl;

import java.security.cert.X509Certificate;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class TrustSelfSignedStrategy implements TrustStrategy {
    @Override // org.apache.http.conn.ssl.TrustStrategy
    public boolean isTrusted(X509Certificate[] x509CertificateArr, String str) {
        return x509CertificateArr.length == 1;
    }
}
