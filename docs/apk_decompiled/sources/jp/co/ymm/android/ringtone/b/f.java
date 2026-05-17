package jp.co.ymm.android.ringtone.b;

import java.io.UnsupportedEncodingException;
import java.nio.charset.Charset;
import jp.co.ymm.android.ringtone.b.c;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private c.a f3522a = null;

    public f(byte[] bArr) {
        try {
            a(bArr);
        } catch (Exception e2) {
            jp.co.ymm.android.ringtone.util.g.a("caught ...", e2);
        }
    }

    private int a(byte[] bArr, int i) {
        return (((((bArr[i + 2] * 256) + bArr[i + 3]) * 256) + bArr[i]) * 256) + bArr[i + 1];
    }

    private String a(byte[] bArr, int i, int i2) {
        jp.co.ymm.android.ringtone.util.g.a("offset[" + i + "]len[" + i2 + "]");
        byte[] bArr2 = new byte[i2];
        for (int i3 = 0; bArr2.length > i3; i3++) {
            bArr2[i3] = bArr[i + i3];
        }
        String str = new String(bArr2);
        try {
            return new String(bArr2, a(str).name());
        } catch (UnsupportedEncodingException unused) {
            return str;
        }
    }

    private Charset a(String str) {
        if (a(str, "JISAutoDetect")) {
            jp.co.ymm.android.ringtone.util.g.a("JISAutoDetect");
            return Charset.forName("JISAutoDetect");
        }
        if (a(str, "SJIS")) {
            jp.co.ymm.android.ringtone.util.g.a("SJIS");
            return Charset.forName("SJIS");
        }
        jp.co.ymm.android.ringtone.util.g.a(HTTP.UTF_8);
        return Charset.forName(HTTP.UTF_8);
    }

    private void a(byte[] bArr) {
        this.f3522a = new c.a();
        int i = 10;
        while (i < bArr.length && bArr[i] != 0) {
            String strB = b(bArr, i);
            jp.co.ymm.android.ringtone.util.g.a("TAG[" + strB + "]");
            int i2 = i + 6;
            int iA = a(bArr, i2) + (-1);
            jp.co.ymm.android.ringtone.util.g.a("SIZE[" + iA + "]");
            int i3 = i2 + 5;
            String strA = a(bArr, i3, iA);
            jp.co.ymm.android.ringtone.util.g.a("VALUE[" + strA + "]");
            i = i3 + iA;
            if ("TPE1".equals(strB)) {
                this.f3522a.f3514b = strA;
            } else if ("TIT2".equals(strB)) {
                this.f3522a.f3513a = strA;
            }
        }
    }

    private boolean a(String str, String str2) {
        if (str == null) {
            return true;
        }
        try {
            return str.equals(new String(str.getBytes(str2), str2));
        } catch (UnsupportedEncodingException unused) {
            return false;
        }
    }

    private String b(byte[] bArr, int i) {
        return a(bArr, i, 4);
    }

    public c.a a() {
        return this.f3522a;
    }
}
