package com.google.android.gms.measurement.internal;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Build;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLConnection;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLSocketFactory;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Ab extends AbstractC0257ae {

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final SSLSocketFactory f1903d;

    public Ab(ee eeVar) {
        super(eeVar);
        this.f1903d = Build.VERSION.SDK_INT < 19 ? new oe() : null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static byte[] a(HttpURLConnection httpURLConnection) throws IOException {
        InputStream inputStream = null;
        try {
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            inputStream = httpURLConnection.getInputStream();
            byte[] bArr = new byte[jp.co.acrodea.runtime.drm.h.CLIENT_AUTOGEN_KEYBIT];
            while (true) {
                int i = inputStream.read(bArr);
                if (i <= 0) {
                    break;
                }
                byteArrayOutputStream.write(bArr, 0, i);
            }
            return byteArrayOutputStream.toByteArray();
        } finally {
            if (inputStream != null) {
                inputStream.close();
            }
        }
    }

    protected final HttpURLConnection a(URL url) throws IOException {
        URLConnection uRLConnectionOpenConnection = url.openConnection();
        if (!(uRLConnectionOpenConnection instanceof HttpURLConnection)) {
            throw new IOException("Failed to obtain HTTP connection");
        }
        SSLSocketFactory sSLSocketFactory = this.f1903d;
        if (sSLSocketFactory != null && (uRLConnectionOpenConnection instanceof HttpsURLConnection)) {
            ((HttpsURLConnection) uRLConnectionOpenConnection).setSSLSocketFactory(sSLSocketFactory);
        }
        HttpURLConnection httpURLConnection = (HttpURLConnection) uRLConnectionOpenConnection;
        httpURLConnection.setDefaultUseCaches(false);
        httpURLConnection.setConnectTimeout(60000);
        httpURLConnection.setReadTimeout(61000);
        httpURLConnection.setInstanceFollowRedirects(false);
        httpURLConnection.setDoInput(true);
        return httpURLConnection;
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ void b() {
        super.b();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Xb c() {
        return super.c();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ C0365wb d() {
        return super.d();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Context e() {
        return super.e();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ ye f() {
        return super.f();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ com.google.android.gms.common.util.e g() {
        return super.g();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ void h() {
        super.h();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ C0294i i() {
        return super.i();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ C0355ub j() {
        return super.j();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ le k() {
        return super.k();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ Kb l() {
        return super.l();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ ze m() {
        return super.m();
    }

    @Override // com.google.android.gms.measurement.internal.ce
    public final /* bridge */ /* synthetic */ ie o() {
        return super.o();
    }

    @Override // com.google.android.gms.measurement.internal.ce
    public final /* bridge */ /* synthetic */ C0269d p() {
        return super.p();
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0257ae
    protected final boolean u() {
        return false;
    }

    public final boolean v() {
        NetworkInfo activeNetworkInfo;
        s();
        try {
            activeNetworkInfo = ((ConnectivityManager) e().getSystemService("connectivity")).getActiveNetworkInfo();
        } catch (SecurityException unused) {
            activeNetworkInfo = null;
        }
        return activeNetworkInfo != null && activeNetworkInfo.isConnected();
    }
}
