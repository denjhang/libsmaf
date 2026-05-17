package f;

import java.io.Serializable;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.Arrays;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class i implements Serializable, Comparable<i> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final char[] f3243a = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public static final i f3244b = a(new byte[0]);

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final byte[] f3245c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    transient int f3246d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    transient String f3247e;

    i(byte[] bArr) {
        this.f3245c = bArr;
    }

    private static int a(char c2) {
        if (c2 >= '0' && c2 <= '9') {
            return c2 - '0';
        }
        char c3 = 'a';
        if (c2 < 'a' || c2 > 'f') {
            c3 = 'A';
            if (c2 < 'A' || c2 > 'F') {
                throw new IllegalArgumentException("Unexpected hex digit: " + c2);
            }
        }
        return (c2 - c3) + 10;
    }

    static int a(String str, int i) {
        int length = str.length();
        int iCharCount = 0;
        int i2 = 0;
        while (iCharCount < length) {
            if (i2 == i) {
                return iCharCount;
            }
            int iCodePointAt = str.codePointAt(iCharCount);
            if ((Character.isISOControl(iCodePointAt) && iCodePointAt != 10 && iCodePointAt != 13) || iCodePointAt == 65533) {
                return -1;
            }
            i2++;
            iCharCount += Character.charCount(iCodePointAt);
        }
        return str.length();
    }

    public static i a(String str) {
        if (str == null) {
            throw new IllegalArgumentException("hex == null");
        }
        if (str.length() % 2 != 0) {
            throw new IllegalArgumentException("Unexpected hex string: " + str);
        }
        byte[] bArr = new byte[str.length() / 2];
        for (int i = 0; i < bArr.length; i++) {
            int i2 = i * 2;
            bArr[i] = (byte) ((a(str.charAt(i2)) << 4) + a(str.charAt(i2 + 1)));
        }
        return a(bArr);
    }

    public static i a(byte... bArr) {
        if (bArr != null) {
            return new i((byte[]) bArr.clone());
        }
        throw new IllegalArgumentException("data == null");
    }

    public static i b(String str) {
        if (str == null) {
            throw new IllegalArgumentException("s == null");
        }
        i iVar = new i(str.getBytes(C.f3230a));
        iVar.f3247e = str;
        return iVar;
    }

    private i c(String str) {
        try {
            return a(MessageDigest.getInstance(str).digest(this.f3245c));
        } catch (NoSuchAlgorithmException e2) {
            throw new AssertionError(e2);
        }
    }

    public byte a(int i) {
        return this.f3245c[i];
    }

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(i iVar) {
        int iE = e();
        int iE2 = iVar.e();
        int iMin = Math.min(iE, iE2);
        for (int i = 0; i < iMin; i++) {
            int iA = a(i) & 255;
            int iA2 = iVar.a(i) & 255;
            if (iA != iA2) {
                return iA < iA2 ? -1 : 1;
            }
        }
        if (iE == iE2) {
            return 0;
        }
        return iE < iE2 ? -1 : 1;
    }

    public i a(int i, int i2) {
        if (i < 0) {
            throw new IllegalArgumentException("beginIndex < 0");
        }
        byte[] bArr = this.f3245c;
        if (i2 > bArr.length) {
            throw new IllegalArgumentException("endIndex > length(" + this.f3245c.length + ")");
        }
        int i3 = i2 - i;
        if (i3 < 0) {
            throw new IllegalArgumentException("endIndex < beginIndex");
        }
        if (i == 0 && i2 == bArr.length) {
            return this;
        }
        byte[] bArr2 = new byte[i3];
        System.arraycopy(this.f3245c, i, bArr2, 0, i3);
        return new i(bArr2);
    }

    public String a() {
        return d.a(this.f3245c);
    }

    void a(f fVar) {
        byte[] bArr = this.f3245c;
        fVar.write(bArr, 0, bArr.length);
    }

    public boolean a(int i, i iVar, int i2, int i3) {
        return iVar.a(i2, this.f3245c, i, i3);
    }

    public boolean a(int i, byte[] bArr, int i2, int i3) {
        if (i >= 0) {
            byte[] bArr2 = this.f3245c;
            if (i <= bArr2.length - i3 && i2 >= 0 && i2 <= bArr.length - i3 && C.a(bArr2, i, bArr, i2, i3)) {
                return true;
            }
        }
        return false;
    }

    public String b() {
        byte[] bArr = this.f3245c;
        char[] cArr = new char[bArr.length * 2];
        int i = 0;
        for (byte b2 : bArr) {
            int i2 = i + 1;
            char[] cArr2 = f3243a;
            cArr[i] = cArr2[(b2 >> 4) & 15];
            i = i2 + 1;
            cArr[i2] = cArr2[b2 & 15];
        }
        return new String(cArr);
    }

    public final boolean b(i iVar) {
        return a(0, iVar, 0, iVar.e());
    }

    public i c() {
        return c("SHA-1");
    }

    public i d() {
        return c("SHA-256");
    }

    public int e() {
        return this.f3245c.length;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof i) {
            i iVar = (i) obj;
            int iE = iVar.e();
            byte[] bArr = this.f3245c;
            if (iE == bArr.length && iVar.a(0, bArr, 0, bArr.length)) {
                return true;
            }
        }
        return false;
    }

    public i f() {
        int i = 0;
        while (true) {
            byte[] bArr = this.f3245c;
            if (i >= bArr.length) {
                return this;
            }
            byte b2 = bArr[i];
            if (b2 >= 65 && b2 <= 90) {
                byte[] bArr2 = (byte[]) bArr.clone();
                bArr2[i] = (byte) (b2 + 32);
                for (int i2 = i + 1; i2 < bArr2.length; i2++) {
                    byte b3 = bArr2[i2];
                    if (b3 >= 65 && b3 <= 90) {
                        bArr2[i2] = (byte) (b3 + 32);
                    }
                }
                return new i(bArr2);
            }
            i++;
        }
    }

    public byte[] g() {
        return (byte[]) this.f3245c.clone();
    }

    public String h() {
        String str = this.f3247e;
        if (str != null) {
            return str;
        }
        String str2 = new String(this.f3245c, C.f3230a);
        this.f3247e = str2;
        return str2;
    }

    public int hashCode() {
        int i = this.f3246d;
        if (i != 0) {
            return i;
        }
        int iHashCode = Arrays.hashCode(this.f3245c);
        this.f3246d = iHashCode;
        return iHashCode;
    }

    public String toString() {
        StringBuilder sb;
        StringBuilder sb2;
        if (this.f3245c.length == 0) {
            return "[size=0]";
        }
        String strH = h();
        int iA = a(strH, 64);
        if (iA == -1) {
            if (this.f3245c.length <= 64) {
                sb2 = new StringBuilder();
                sb2.append("[hex=");
                sb2.append(b());
                sb2.append("]");
            } else {
                sb2 = new StringBuilder();
                sb2.append("[size=");
                sb2.append(this.f3245c.length);
                sb2.append(" hex=");
                sb2.append(a(0, 64).b());
                sb2.append("…]");
            }
            return sb2.toString();
        }
        String strReplace = strH.substring(0, iA).replace("\\", "\\\\").replace("\n", "\\n").replace("\r", "\\r");
        if (iA < strH.length()) {
            sb = new StringBuilder();
            sb.append("[size=");
            sb.append(this.f3245c.length);
            sb.append(" text=");
            sb.append(strReplace);
            sb.append("…]");
        } else {
            sb = new StringBuilder();
            sb.append("[text=");
            sb.append(strReplace);
            sb.append("]");
        }
        return sb.toString();
    }
}
