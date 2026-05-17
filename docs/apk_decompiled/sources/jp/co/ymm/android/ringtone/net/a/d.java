package jp.co.ymm.android.ringtone.net.a;

import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import e.J;
import e.x;
import java.io.BufferedInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class d extends jp.co.ymm.android.ringtone.net.a.a {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private jp.co.ymm.android.ringtone.net.f f3642c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Handler f3643d = new c(this, Looper.getMainLooper());

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public a f3640a = new a();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public b f3641b = new b();

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f3644a = null;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public String f3645b = null;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        public String f3646c = null;
    }

    public static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f3647a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public byte[] f3648b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        public String f3649c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        public String f3650d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        public String f3651e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        public String f3652f;
    }

    @Override // jp.co.ymm.android.ringtone.net.a.a
    public J a() {
        return new x.a().a();
    }

    @Override // jp.co.ymm.android.ringtone.net.a.a
    public String a(String str) {
        jp.co.ymm.android.ringtone.util.g.a("OneTimeKey:getRequestURL() ");
        Uri.Builder builder = new Uri.Builder();
        builder.scheme("https");
        builder.authority("api.mysound.jp");
        builder.path("/spdl/n/");
        builder.appendQueryParameter("act", str);
        builder.appendQueryParameter("apikey", this.f3640a.f3645b);
        builder.appendQueryParameter("session_id", this.f3640a.f3646c);
        return builder.toString();
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r10v0 */
    /* JADX WARN: Type inference failed for: r12v2 */
    /* JADX WARN: Type inference failed for: r12v3, types: [java.io.ByteArrayOutputStream] */
    /* JADX WARN: Type inference failed for: r12v5 */
    /* JADX WARN: Type inference failed for: r12v7, types: [java.io.ByteArrayOutputStream] */
    /* JADX WARN: Type inference failed for: r13v1 */
    /* JADX WARN: Type inference failed for: r13v12 */
    /* JADX WARN: Type inference failed for: r13v14, types: [byte[]] */
    /* JADX WARN: Type inference failed for: r13v15 */
    /* JADX WARN: Type inference failed for: r13v16 */
    /* JADX WARN: Type inference failed for: r13v17 */
    /* JADX WARN: Type inference failed for: r13v2 */
    /* JADX WARN: Type inference failed for: r13v3 */
    /* JADX WARN: Type inference failed for: r13v6 */
    /* JADX WARN: Type inference failed for: r13v8, types: [java.io.ByteArrayOutputStream] */
    /* JADX WARN: Type inference failed for: r13v9 */
    @Override // jp.co.ymm.android.ringtone.net.a.a
    public boolean a(InputStream inputStream, jp.co.ymm.android.ringtone.net.f fVar, long j) throws Throwable {
        Throwable th;
        ?? byteArrayOutputStream;
        BufferedInputStream bufferedInputStream;
        int i;
        long j2;
        int i2;
        byte[] bArr = new byte[8192];
        this.f3642c = fVar;
        ?? byteArray = 0;
        byteArray = 0;
        byteArray = 0;
        byteArray = 0;
        boolean z = false;
        try {
            try {
                try {
                    bufferedInputStream = new BufferedInputStream(inputStream);
                    try {
                        byteArrayOutputStream = new ByteArrayOutputStream();
                    } catch (IOException unused) {
                    }
                } catch (Throwable th2) {
                    ?? r10 = byteArray;
                    th = th2;
                    byteArrayOutputStream = r10;
                }
            } catch (IOException unused2) {
                bufferedInputStream = null;
            } catch (Throwable th3) {
                bufferedInputStream = null;
                th = th3;
                byteArrayOutputStream = 0;
            }
        } catch (Exception unused3) {
            jp.co.ymm.android.ringtone.util.g.a("Exception");
        }
        try {
            i = ((int) j) / 10;
            j2 = 0;
            i2 = 0;
        } catch (IOException unused4) {
            byteArray = byteArrayOutputStream;
            jp.co.ymm.android.ringtone.util.g.a("IOException");
            if (byteArray != 0) {
                byteArray.close();
            }
            if (bufferedInputStream != null) {
            }
            return z;
        } catch (Throwable th4) {
            th = th4;
            if (byteArrayOutputStream != 0) {
                try {
                    byteArrayOutputStream.close();
                } catch (Exception unused5) {
                    jp.co.ymm.android.ringtone.util.g.a("Exception");
                    throw th;
                }
            }
            if (bufferedInputStream != null) {
                bufferedInputStream.close();
            }
            throw th;
        }
        while (true) {
            int i3 = bufferedInputStream.read(bArr, 0, bArr.length);
            if (i3 <= 0) {
                break;
            }
            j2 += (long) i3;
            jp.co.ymm.android.ringtone.util.g.a("sum : " + String.valueOf(j2));
            jp.co.ymm.android.ringtone.util.g.a("size : " + String.valueOf(i3));
            int i4 = (int) j2;
            int i5 = i4 / i;
            jp.co.ymm.android.ringtone.util.g.a("compar : " + String.valueOf(i5));
            if (i2 < i5) {
                Message.obtain(this.f3643d, 0, i5, i4).sendToTarget();
                i2 = i5;
            }
            byteArrayOutputStream.write(bArr, 0, i3);
            bufferedInputStream.close();
            return z;
        }
        byteArrayOutputStream.flush();
        byteArray = byteArrayOutputStream.toByteArray();
        this.f3641b.f3647a = "000";
        this.f3641b.f3648b = byteArray;
        z = true;
        byteArrayOutputStream.close();
        bufferedInputStream.close();
        return z;
    }

    @Override // jp.co.ymm.android.ringtone.net.a.a
    public boolean b(String str) {
        return false;
    }
}
