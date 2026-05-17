package jp.co.acrodea.runtime.drm;

import java.io.UnsupportedEncodingException;
import java.nio.ByteBuffer;
import java.security.GeneralSecurityException;
import java.security.MessageDigest;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Map;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b extends h {
    protected b() {
    }

    protected static void a(Map<Long, byte[]> map) {
        synchronized (map) {
            Iterator<Long> it = map.keySet().iterator();
            while (it.hasNext()) {
                byte[] bArr = map.get(it.next());
                if (bArr != null) {
                    Arrays.fill(bArr, (byte) 0);
                }
            }
        }
    }

    protected static boolean a(ByteBuffer byteBuffer, byte[] bArr) {
        MessageDigest messageDigest;
        try {
            messageDigest = MessageDigest.getInstance("SHA1");
            messageDigest.update(byteBuffer);
        } catch (GeneralSecurityException unused) {
        }
        return Arrays.equals(messageDigest.digest(), bArr);
    }

    protected static byte[] a(String str) {
        byte[] bytes;
        try {
            bytes = str.getBytes(HTTP.UTF_8);
        } catch (UnsupportedEncodingException unused) {
            bytes = new byte[0];
        }
        try {
            return MessageDigest.getInstance("SHA1").digest(bytes);
        } catch (GeneralSecurityException unused2) {
            return null;
        }
    }
}
