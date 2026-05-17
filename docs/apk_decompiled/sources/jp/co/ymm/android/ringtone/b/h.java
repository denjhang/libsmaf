package jp.co.ymm.android.ringtone.b;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.charset.Charset;
import java.util.Arrays;
import jp.co.ymm.android.ringtone.b.c;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final byte[] f3525a = {-2, -1};

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private c.a f3526b = null;

    public h(byte[] bArr) {
        try {
            a(bArr);
        } catch (Exception e2) {
            jp.co.ymm.android.ringtone.util.g.a("caught ...", e2);
        }
    }

    private static String a(ByteBuffer byteBuffer, int i) {
        return a(byteBuffer, i, Charset.forName(HTTP.UTF_8));
    }

    private static String a(ByteBuffer byteBuffer, int i, Charset charset) {
        byte[] bArr = new byte[i];
        byteBuffer.get(bArr);
        return new String(bArr, charset.name());
    }

    private void a(byte[] bArr) throws Exception {
        this.f3526b = new c.a();
        ByteBuffer byteBufferB = b("udta", b("moov", ByteBuffer.wrap(bArr).asReadOnlyBuffer().order(ByteOrder.BIG_ENDIAN)));
        if (byteBufferB == null) {
            return;
        }
        byteBufferB.clear();
        this.f3526b.f3513a = b(b("titl", byteBufferB));
        byteBufferB.clear();
        this.f3526b.f3514b = b(b("auth", byteBufferB));
        this.f3526b.f3515c = new g(this, byteBufferB);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static String b(ByteBuffer byteBuffer) {
        if (byteBuffer == null) {
            return null;
        }
        byteBuffer.position(6);
        Charset charsetForName = Charset.forName(HTTP.UTF_8);
        if (byteBuffer.remaining() > f3525a.length) {
            byteBuffer.mark();
            byte[] bArr = new byte[f3525a.length];
            byteBuffer.get(bArr);
            byteBuffer.reset();
            if (Arrays.equals(bArr, f3525a)) {
                charsetForName = Charset.forName("UTF-16BE");
            }
        }
        return a(byteBuffer, byteBuffer.remaining(), charsetForName).replaceAll("\u0000+$", "");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static ByteBuffer b(String str, ByteBuffer byteBuffer) throws Exception {
        jp.co.ymm.android.ringtone.util.g.a(str != null);
        if (byteBuffer == null) {
            return null;
        }
        while (true) {
            byteBuffer = byteBuffer.slice();
            if (byteBuffer.remaining() < 8) {
                jp.co.ymm.android.ringtone.util.g.g("'" + str + "' not found ...");
                return null;
            }
            int i = byteBuffer.getInt();
            if (i < 8) {
                throw new Exception("invalid contents: size=" + i);
            }
            if (a(byteBuffer, 4).equals(str)) {
                byteBuffer.limit(i);
                return byteBuffer.slice();
            }
            byteBuffer.position(i);
        }
    }

    public c.a a() {
        return this.f3526b;
    }
}
