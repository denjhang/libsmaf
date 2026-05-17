package jp.co.ymm.android.ringtone.net.a;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.util.Xml;
import e.J;
import e.x;
import java.io.BufferedInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.StringReader;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class g extends jp.co.ymm.android.ringtone.net.a.a {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public b f3659b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    public jp.co.ymm.android.ringtone.net.f f3660c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Handler f3661d = new f(this, Looper.getMainLooper());

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public a f3658a = new a();

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f3662a = null;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public String f3663b = null;
    }

    public static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f3664a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public byte[] f3665b;
    }

    @Override // jp.co.ymm.android.ringtone.net.a.a
    public J a() {
        x.a aVar = new x.a();
        aVar.a("servicecode", "ymmringtone");
        aVar.a("contentcode", this.f3658a.f3663b);
        aVar.a("aid", this.f3658a.f3662a);
        return aVar.a();
    }

    @Override // jp.co.ymm.android.ringtone.net.a.a
    public String a(String str) {
        return null;
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
    /* JADX WARN: Type inference failed for: r13v6 */
    /* JADX WARN: Type inference failed for: r13v7, types: [java.io.ByteArrayOutputStream] */
    /* JADX WARN: Type inference failed for: r13v8 */
    /* JADX WARN: Type inference failed for: r13v9 */
    @Override // jp.co.ymm.android.ringtone.net.a.a
    public boolean a(InputStream inputStream, jp.co.ymm.android.ringtone.net.f fVar, long j) throws Throwable {
        Throwable th;
        ?? byteArrayOutputStream;
        BufferedInputStream bufferedInputStream;
        int i;
        long j2;
        int i2;
        this.f3659b = new b();
        byte[] bArr = new byte[8192];
        this.f3660c = fVar;
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
                } catch (Exception unused2) {
                    jp.co.ymm.android.ringtone.util.g.a("Exception");
                }
                try {
                    i = ((int) j) / 10;
                    j2 = 0;
                    i2 = 0;
                } catch (IOException unused3) {
                    byteArray = byteArrayOutputStream;
                    jp.co.ymm.android.ringtone.util.g.a("IOException");
                    if (byteArray != 0) {
                        byteArray.close();
                    }
                    if (bufferedInputStream != null) {
                    }
                    return z;
                } catch (Throwable th2) {
                    th = th2;
                    if (byteArrayOutputStream != 0) {
                        try {
                            byteArrayOutputStream.close();
                        } catch (Exception unused4) {
                            jp.co.ymm.android.ringtone.util.g.a("Exception");
                            throw th;
                        }
                    }
                    if (bufferedInputStream != null) {
                        bufferedInputStream.close();
                    }
                    throw th;
                }
            } catch (IOException unused5) {
                bufferedInputStream = null;
            } catch (Throwable th3) {
                bufferedInputStream = null;
                th = th3;
                byteArrayOutputStream = 0;
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
                    Message.obtain(this.f3661d, 0, i5, i4).sendToTarget();
                    i2 = i5;
                }
                byteArrayOutputStream.write(bArr, 0, i3);
                bufferedInputStream.close();
                return z;
            }
            byteArrayOutputStream.flush();
            byteArray = byteArrayOutputStream.toByteArray();
            this.f3659b.f3664a = "000";
            this.f3659b.f3665b = byteArray;
            z = true;
            byteArrayOutputStream.close();
            bufferedInputStream.close();
            return z;
        } catch (Throwable th4) {
            ?? r10 = byteArray;
            th = th4;
            byteArrayOutputStream = r10;
        }
    }

    @Override // jp.co.ymm.android.ringtone.net.a.a
    public boolean b(String str) {
        this.f3659b = new b();
        XmlPullParser xmlPullParserNewPullParser = Xml.newPullParser();
        boolean z = false;
        try {
            xmlPullParserNewPullParser.setInput(new StringReader(str));
            for (int eventType = xmlPullParserNewPullParser.getEventType(); eventType != 1; eventType = xmlPullParserNewPullParser.next()) {
                if (eventType != 2) {
                    if (eventType != 3) {
                        continue;
                    } else if (xmlPullParserNewPullParser.getName().equalsIgnoreCase("acDrm")) {
                        z = true;
                    }
                } else if (xmlPullParserNewPullParser.getName().equalsIgnoreCase("acDrm")) {
                    this.f3659b.f3664a = xmlPullParserNewPullParser.getAttributeValue(null, "status");
                }
            }
        } catch (IOException | XmlPullParserException e2) {
            jp.co.ymm.android.ringtone.util.g.b("parseXmlResponse ", e2);
        }
        return z;
    }
}
