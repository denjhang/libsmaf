package e.a.e;

import java.io.IOException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final f.i f3017a = f.i.b("PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n");

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final String[] f3018b = {"DATA", "HEADERS", "PRIORITY", "RST_STREAM", "SETTINGS", "PUSH_PROMISE", "PING", "GOAWAY", "WINDOW_UPDATE", "CONTINUATION"};

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    static final String[] f3019c = new String[64];

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    static final String[] f3020d = new String[256];

    static {
        int i = 0;
        int i2 = 0;
        while (true) {
            String[] strArr = f3020d;
            if (i2 >= strArr.length) {
                break;
            }
            strArr[i2] = e.a.e.a("%8s", Integer.toBinaryString(i2)).replace(' ', '0');
            i2++;
        }
        String[] strArr2 = f3019c;
        strArr2[0] = "";
        strArr2[1] = "END_STREAM";
        int[] iArr = {1};
        strArr2[8] = "PADDED";
        for (int i3 : iArr) {
            f3019c[i3 | 8] = f3019c[i3] + "|PADDED";
        }
        String[] strArr3 = f3019c;
        strArr3[4] = "END_HEADERS";
        strArr3[32] = "PRIORITY";
        strArr3[36] = "END_HEADERS|PRIORITY";
        for (int i4 : new int[]{4, 32, 36}) {
            for (int i5 : iArr) {
                int i6 = i5 | i4;
                f3019c[i6] = f3019c[i5] + '|' + f3019c[i4];
                f3019c[i6 | 8] = f3019c[i5] + '|' + f3019c[i4] + "|PADDED";
            }
        }
        while (true) {
            String[] strArr4 = f3019c;
            if (i >= strArr4.length) {
                return;
            }
            if (strArr4[i] == null) {
                strArr4[i] = f3020d[i];
            }
            i++;
        }
    }

    private e() {
    }

    static IllegalArgumentException a(String str, Object... objArr) {
        throw new IllegalArgumentException(e.a.e.a(str, objArr));
    }

    static String a(byte b2, byte b3) {
        if (b3 == 0) {
            return "";
        }
        if (b2 != 2 && b2 != 3) {
            if (b2 == 4 || b2 == 6) {
                return b3 == 1 ? "ACK" : f3020d[b3];
            }
            if (b2 != 7 && b2 != 8) {
                String[] strArr = f3019c;
                String str = b3 < strArr.length ? strArr[b3] : f3020d[b3];
                return (b2 != 5 || (b3 & 4) == 0) ? (b2 != 0 || (b3 & 32) == 0) ? str : str.replace("PRIORITY", "COMPRESSED") : str.replace("HEADERS", "PUSH_PROMISE");
            }
        }
        return f3020d[b3];
    }

    static String a(boolean z, int i, int i2, byte b2, byte b3) {
        String[] strArr = f3018b;
        String strA = b2 < strArr.length ? strArr[b2] : e.a.e.a("0x%02x", Byte.valueOf(b2));
        String strA2 = a(b2, b3);
        Object[] objArr = new Object[5];
        objArr[0] = z ? "<<" : ">>";
        objArr[1] = Integer.valueOf(i);
        objArr[2] = Integer.valueOf(i2);
        objArr[3] = strA;
        objArr[4] = strA2;
        return e.a.e.a("%s 0x%08x %5d %-13s %s", objArr);
    }

    static IOException b(String str, Object... objArr) throws IOException {
        throw new IOException(e.a.e.a(str, objArr));
    }
}
