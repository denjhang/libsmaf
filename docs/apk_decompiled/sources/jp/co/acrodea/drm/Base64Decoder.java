package jp.co.acrodea.drm;

import java.io.ByteArrayOutputStream;
import java.io.IOException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class Base64Decoder {

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private byte[] f3284d = new byte[3];

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int[] f3282b = new int[4];

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int f3283c = 0;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ByteArrayOutputStream f3281a = null;

    private void a(CharSequence charSequence) {
        int i;
        int length = charSequence.length();
        int i2 = 0;
        for (int i3 = 0; i3 < length; i3++) {
            char cCharAt = charSequence.charAt(i3);
            if (cCharAt >= 'A' && cCharAt <= 'Z') {
                i = cCharAt - 'A';
            } else if (cCharAt >= 'a' && cCharAt <= 'z') {
                i = (cCharAt - 'a') + 26;
            } else if (cCharAt >= '0' && cCharAt <= '9') {
                i = (cCharAt - '0') + 52;
            } else if (cCharAt == '+' || cCharAt == '-') {
                i = 62;
            } else if (cCharAt == '/' || cCharAt == '_') {
                i = 63;
            } else if (cCharAt == '=') {
                i2++;
                i = 0;
            }
            int[] iArr = this.f3282b;
            int i4 = this.f3283c;
            this.f3283c = i4 + 1;
            iArr[i4] = i;
            if (this.f3283c == 4) {
                byte[] bArr = this.f3284d;
                bArr[0] = (byte) ((iArr[0] << 2) | (iArr[1] >>> 4));
                bArr[1] = (byte) (((iArr[1] & 15) << 4) | (iArr[2] >>> 2));
                bArr[2] = (byte) (iArr[3] | ((iArr[2] & 3) << 6));
                if (i2 != 3) {
                    this.f3281a.write(bArr, 0, 3 - i2);
                }
                this.f3283c = 0;
                i2 = 0;
            }
        }
    }

    public byte[] doFinal() {
        return doFinal(null);
    }

    public byte[] doFinal(String str) {
        byte[] byteArray;
        if (str != null) {
            update(str);
        }
        ByteArrayOutputStream byteArrayOutputStream = this.f3281a;
        if (byteArrayOutputStream != null) {
            byteArray = byteArrayOutputStream.toByteArray();
            try {
                this.f3281a.close();
            } catch (IOException unused) {
            }
        } else {
            byteArray = new byte[0];
        }
        this.f3281a = null;
        this.f3283c = 0;
        return byteArray;
    }

    public void update(String str) {
        if (this.f3281a == null) {
            this.f3281a = new ByteArrayOutputStream();
        }
        a(str);
    }
}
