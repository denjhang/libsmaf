package jp.co.acrodea.drm;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class Base64Encoder {
    private static final char[] g = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/'};

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int[] f3285a = new int[4];

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private byte[] f3286b = new byte[3];

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int f3287c = 0;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f3288d = 0;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private StringBuffer f3289e = null;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private int f3290f = 64;

    /* JADX WARN: Removed duplicated region for block: B:16:0x010d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void a(java.lang.StringBuffer r7, byte[] r8, int r9) {
        /*
            Method dump skipped, instruction units count: 314
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.acrodea.drm.Base64Encoder.a(java.lang.StringBuffer, byte[], int):void");
    }

    private void a(byte[] bArr, int i) {
        int[] iArr = this.f3285a;
        iArr[0] = (bArr[i] >>> 2) & 63;
        int i2 = i + 1;
        iArr[1] = ((bArr[i] & 3) << 4) | ((bArr[i2] & 240) >>> 4);
        int i3 = i + 2;
        iArr[2] = ((bArr[i2] & 15) << 2) | ((bArr[i3] & 192) >>> 6);
        iArr[3] = bArr[i3] & 63;
    }

    public String doFinal() {
        return doFinal(null, 0, 0);
    }

    public String doFinal(byte[] bArr) {
        return doFinal(bArr, 0, bArr.length);
    }

    public String doFinal(byte[] bArr, int i, int i2) {
        if (bArr != null) {
            update(bArr, i, i2);
        }
        if (this.f3289e == null) {
            this.f3289e = new StringBuffer();
        }
        int i3 = this.f3287c;
        if (i3 != 0) {
            while (i3 < 3) {
                this.f3286b[i3] = 0;
                i3++;
            }
            a(this.f3286b, 0);
            if (this.f3287c == 1) {
                this.f3289e.append(g[this.f3285a[0]]);
                this.f3289e.append(g[this.f3285a[1]]);
                this.f3289e.append("==");
            } else {
                this.f3289e.append(g[this.f3285a[0]]);
                this.f3289e.append(g[this.f3285a[1]]);
                this.f3289e.append(g[this.f3285a[2]]);
                this.f3289e.append('=');
            }
        }
        String string = this.f3289e.toString();
        this.f3287c = 0;
        this.f3288d = 0;
        this.f3289e = null;
        return string;
    }

    public int setLineFeed(int i) {
        int i2 = this.f3290f;
        this.f3290f = i;
        return i2;
    }

    public void update(byte[] bArr) {
        update(bArr, 0, bArr.length);
    }

    public void update(byte[] bArr, int i, int i2) {
        if (i2 <= 0) {
            return;
        }
        if (this.f3289e == null) {
            this.f3289e = new StringBuffer();
        }
        int i3 = this.f3287c;
        if (i3 == 1) {
            byte[] bArr2 = this.f3286b;
            this.f3287c = i3 + 1;
            int i4 = i + 1;
            bArr2[i3] = bArr[i];
            if (i2 == 1) {
                return;
            }
            bArr2[this.f3287c] = bArr[i4];
            a(this.f3289e, bArr2, 0);
            this.f3287c = 0;
            i2 -= 2;
            i = i4 + 1;
        } else if (i3 == 2) {
            byte[] bArr3 = this.f3286b;
            bArr3[i3] = bArr[i];
            a(this.f3289e, bArr3, 0);
            this.f3287c = 0;
            i2--;
            i++;
        }
        while (i2 >= 3) {
            a(this.f3289e, bArr, i);
            i += 3;
            i2 -= 3;
        }
        if (i2 != 2) {
            if (i2 == 1) {
                this.f3286b[0] = bArr[i];
                this.f3287c = 1;
                return;
            }
            return;
        }
        byte[] bArr4 = this.f3286b;
        bArr4[0] = bArr[i];
        bArr4[1] = bArr[i + 1];
        this.f3287c = 2;
    }
}
