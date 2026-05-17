package com.google.android.gms.internal.measurement;

import java.nio.ByteBuffer;
import java.nio.charset.Charset;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Lb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final Charset f1500a = Charset.forName(HTTP.UTF_8);

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Charset f1501b = Charset.forName("ISO-8859-1");

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    public static final byte[] f1502c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static final ByteBuffer f1503d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static final AbstractC0182ob f1504e;

    static {
        byte[] bArr = new byte[0];
        f1502c = bArr;
        f1503d = ByteBuffer.wrap(bArr);
        byte[] bArr2 = f1502c;
        f1504e = AbstractC0182ob.a(bArr2, 0, bArr2.length, false);
    }

    static int a(int i, byte[] bArr, int i2, int i3) {
        int i4 = i;
        for (int i5 = i2; i5 < i2 + i3; i5++) {
            i4 = (i4 * 31) + bArr[i5];
        }
        return i4;
    }

    public static int a(long j) {
        return (int) (j ^ (j >>> 32));
    }

    public static int a(boolean z) {
        return z ? 1231 : 1237;
    }

    static <T> T a(T t) {
        if (t != null) {
            return t;
        }
        throw new NullPointerException();
    }

    static Object a(Object obj, Object obj2) {
        InterfaceC0213tc interfaceC0213tcC = ((InterfaceC0219uc) obj).c();
        interfaceC0213tcC.a((InterfaceC0219uc) obj2);
        return interfaceC0213tcC.a();
    }

    static <T> T a(T t, String str) {
        if (t != null) {
            return t;
        }
        throw new NullPointerException(str);
    }

    public static boolean a(byte[] bArr) {
        return C0136hd.a(bArr);
    }

    public static String b(byte[] bArr) {
        return new String(bArr, f1500a);
    }

    public static int c(byte[] bArr) {
        int length = bArr.length;
        int iA = a(length, bArr, 0, length);
        if (iA == 0) {
            return 1;
        }
        return iA;
    }
}
