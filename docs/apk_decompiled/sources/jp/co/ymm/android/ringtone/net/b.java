package jp.co.ymm.android.ringtone.net;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import e.E;
import e.H;
import e.J;
import e.K;
import java.io.BufferedInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import jp.co.ymm.android.ringtone.net.a.e;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class b implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected String f3692a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    protected jp.co.ymm.android.ringtone.net.a.a f3693b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    protected f f3694c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    protected final Handler f3695d = new a(this, Looper.getMainLooper());

    public b(String str, jp.co.ymm.android.ringtone.net.a.a aVar, f fVar) {
        this.f3694c = fVar;
        this.f3693b = aVar;
        this.f3692a = str;
    }

    protected String a(InputStream inputStream) throws Throwable {
        ByteArrayOutputStream byteArrayOutputStream;
        Throwable th;
        byte[] bArr = new byte[8192];
        BufferedInputStream bufferedInputStream = new BufferedInputStream(inputStream);
        try {
            byteArrayOutputStream = new ByteArrayOutputStream();
        } catch (IOException e2) {
            e = e2;
            byteArrayOutputStream = null;
        } catch (Throwable th2) {
            byteArrayOutputStream = null;
            th = th2;
        }
        while (true) {
            try {
                try {
                    int i = bufferedInputStream.read(bArr);
                    if (i <= 0) {
                        break;
                    }
                    byteArrayOutputStream.write(bArr, 0, i);
                } catch (IOException e3) {
                    e = e3;
                    jp.co.ymm.android.ringtone.util.g.g("IOException: " + e);
                    try {
                        bufferedInputStream.close();
                        if (byteArrayOutputStream == null) {
                            return null;
                        }
                        byteArrayOutputStream.close();
                        return null;
                    } catch (Exception e4) {
                        jp.co.ymm.android.ringtone.util.g.g("Exception: " + e4);
                        return null;
                    }
                }
            } catch (Throwable th3) {
                th = th3;
            }
            th = th3;
            try {
                bufferedInputStream.close();
                if (byteArrayOutputStream != null) {
                    byteArrayOutputStream.close();
                }
            } catch (Exception e5) {
                jp.co.ymm.android.ringtone.util.g.g("Exception: " + e5);
            }
            throw th;
        }
        byteArrayOutputStream.flush();
        String str = new String(byteArrayOutputStream.toByteArray());
        try {
            bufferedInputStream.close();
            byteArrayOutputStream.close();
        } catch (Exception e6) {
            jp.co.ymm.android.ringtone.util.g.g("Exception: " + e6);
        }
        return str;
    }

    protected jp.co.ymm.android.ringtone.net.a.a a() {
        jp.co.ymm.android.ringtone.net.a.e eVar = new jp.co.ymm.android.ringtone.net.a.e();
        e.a aVar = eVar.f3653a;
        aVar.f3656c = "";
        aVar.f3654a = "";
        aVar.f3655b = "";
        return eVar;
    }

    protected boolean a(K k) throws Throwable {
        if (k != null && this.f3693b != null) {
            String string = k.a().c().toString();
            if (!TextUtils.isEmpty(string)) {
                InputStream inputStreamA = k.a().a();
                if (string.contentEquals("text/xml")) {
                    String strA = a(inputStreamA);
                    if (!TextUtils.isEmpty(strA) && this.f3693b.b(strA)) {
                        return true;
                    }
                } else if (string.contentEquals("application/vnd.acrodea-arg-drm")) {
                    if (this.f3693b.a(inputStreamA, this.f3694c, k.a().b())) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    protected H.a b() {
        H.a aVar = new H.a();
        aVar.a("User-Agent", "Apache-HttpClient/UNAVAILABLE (java " + System.getProperty("java.specification.version") + ")");
        aVar.a("Content-Type", "application/json; charset=utf-8");
        return aVar;
    }

    protected void c() {
        Message.obtain(this.f3695d, 2, a()).sendToTarget();
    }

    protected void d() {
        Message.obtain(this.f3695d, 1, this.f3693b).sendToTarget();
    }

    @Override // java.lang.Runnable
    public void run() {
        J jA = this.f3693b.a();
        H.a aVarB = b();
        aVarB.b(this.f3692a);
        aVarB.a(jA);
        try {
            K kExecute = new E.a().a().a(aVarB.a()).execute();
            if (kExecute.c() == 200 && a(kExecute)) {
                d();
            } else {
                c();
            }
        } catch (IOException unused) {
            c();
        }
    }
}
