package jp.co.acrodea.runtime.drm.agent;

import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.security.GeneralSecurityException;
import java.security.MessageDigest;
import java.security.SecureRandom;
import java.util.Calendar;
import java.util.Date;
import java.util.Scanner;
import java.util.regex.MatchResult;
import javax.crypto.Cipher;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class r {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static SecureRandom f3387a = new SecureRandom();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final char[] f3388c = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private f f3389b;

    public r(f fVar) {
        this.f3389b = fVar;
    }

    public static String a(int i) {
        byte[] bArr = new byte[i];
        f3387a.nextBytes(bArr);
        return a(bArr);
    }

    private static String a(byte[] bArr) {
        StringBuffer stringBuffer = new StringBuffer(bArr.length);
        for (byte b2 : bArr) {
            char[] cArr = f3388c;
            stringBuffer.append(cArr[(b2 & 255) % cArr.length]);
        }
        return stringBuffer.toString();
    }

    public static Date a(Date date, String str) throws IOException {
        try {
            int[] iArr = new int[6];
            Scanner scanner = new Scanner(str);
            scanner.findInLine("P([0-9]+)Y([0-9]+)M([0-9]+)DT([0-9]+)H([0-9]+)M([0-9]+)S");
            MatchResult matchResultMatch = scanner.match();
            int i = 0;
            while (i < matchResultMatch.groupCount()) {
                int i2 = i + 1;
                iArr[i] = Integer.parseInt(matchResultMatch.group(i2));
                i = i2;
            }
            scanner.close();
            Calendar calendar = Calendar.getInstance();
            calendar.setTime(date);
            if (iArr[0] != 0) {
                calendar.add(1, iArr[0]);
            }
            if (iArr[1] != 1) {
                calendar.add(2, iArr[1]);
            }
            if (iArr[2] != 0) {
                calendar.add(5, iArr[2]);
            }
            if (iArr[3] != 0) {
                calendar.add(10, iArr[3]);
            }
            if (iArr[4] != 0) {
                calendar.add(12, iArr[4]);
            }
            if (iArr[5] != 0) {
                calendar.add(13, iArr[5]);
            }
            return calendar.getTime();
        } catch (IllegalStateException unused) {
            throw new IOException("Field value is invalid");
        }
    }

    public static void a(File file, byte[] bArr) throws IOException {
        a(file, bArr, 0, bArr.length);
    }

    public static void a(File file, byte[] bArr, int i, int i2) throws IOException {
        FileOutputStream fileOutputStream = new FileOutputStream(file);
        try {
            fileOutputStream.write(bArr, i, i2);
        } finally {
            fileOutputStream.close();
        }
    }

    public static byte[] a(File file) throws IOException {
        long length = file.length();
        if (length > 2147483647L) {
            throw new IOException("File too big");
        }
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream((int) length);
        FileInputStream fileInputStream = new FileInputStream(file);
        try {
            byte[] bArr = new byte[256];
            while (true) {
                int i = fileInputStream.read(bArr);
                if (i < 0) {
                    fileInputStream.close();
                    return byteArrayOutputStream.toByteArray();
                }
                byteArrayOutputStream.write(bArr, 0, i);
            }
        } catch (Throwable th) {
            fileInputStream.close();
            throw th;
        }
    }

    public static void b(File file, byte[] bArr) throws IOException {
        b(file, bArr, 0, bArr.length);
    }

    public static void b(File file, byte[] bArr, int i, int i2) throws IOException {
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("SHA1");
            messageDigest.update(bArr, i, i2);
            byte[] bArrDigest = messageDigest.digest();
            byte[] bArr2 = new byte[4];
            ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr2);
            byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
            byteBufferWrap.putInt(i2);
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream(i2 + 56);
            byte[] bArr3 = new byte[32];
            for (int i3 = 0; i3 < 32; i3++) {
                bArr3[i3] = (byte) ((e.f3338a[i3] ^ e.f3339b[i3]) ^ e.f3340c[i3]);
            }
            messageDigest.update(bArr3);
            byte[] bArrDigest2 = messageDigest.digest();
            byte[] bArr4 = new byte[16];
            f3387a.nextBytes(bArr4);
            byteArrayOutputStream.write(bArr4);
            Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
            cipher.init(1, new SecretKeySpec(bArrDigest2, 4, 16, "AES"), new IvParameterSpec(bArr4));
            byte[] bArrUpdate = cipher.update(bArrDigest);
            if (bArrUpdate != null && bArrUpdate.length > 0) {
                byteArrayOutputStream.write(bArrUpdate);
            }
            byte[] bArrUpdate2 = cipher.update(bArr2);
            if (bArrUpdate2 != null && bArrUpdate2.length > 0) {
                byteArrayOutputStream.write(bArrUpdate2);
            }
            byte[] bArrUpdate3 = cipher.update(bArr, i, i2);
            if (bArrUpdate3 != null && bArrUpdate3.length > 0) {
                byteArrayOutputStream.write(bArrUpdate3);
            }
            byte[] bArrDoFinal = cipher.doFinal();
            if (bArrDoFinal != null && bArrDoFinal.length > 0) {
                byteArrayOutputStream.write(bArrDoFinal);
            }
            FileOutputStream fileOutputStream = new FileOutputStream(file);
            try {
                byteArrayOutputStream.writeTo(fileOutputStream);
            } finally {
                fileOutputStream.close();
            }
        } catch (GeneralSecurityException unused) {
            throw new IOException("Security failure");
        }
    }

    public static byte[] b(File file) throws IOException {
        byte[] bArrA = a(file);
        if (bArrA.length < 32) {
            throw new IOException("Invalid data");
        }
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("SHA1");
            byte[] bArr = new byte[32];
            for (int i = 0; i < 32; i++) {
                bArr[i] = (byte) ((e.f3338a[i] ^ e.f3339b[i]) ^ e.f3340c[i]);
            }
            messageDigest.update(bArr);
            byte[] bArrDigest = messageDigest.digest();
            Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
            cipher.init(2, new SecretKeySpec(bArrDigest, 4, 16, "AES"), new IvParameterSpec(bArrA, 0, 16));
            byte[] bArrDoFinal = cipher.doFinal(bArrA, 16, bArrA.length - 16);
            if (bArrDoFinal.length < 24) {
                throw new IOException("Broken data");
            }
            ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArrDoFinal);
            byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
            byteBufferWrap.position(20);
            if (bArrDoFinal.length - 24 != byteBufferWrap.getInt()) {
                throw new IOException("Broken data");
            }
            messageDigest.update(bArrDoFinal, 24, bArrDoFinal.length - 24);
            byte[] bArrDigest2 = messageDigest.digest();
            for (int i2 = 0; i2 < 20; i2++) {
                if (bArrDigest2[i2] != bArrDoFinal[i2]) {
                    throw new IOException("Broken data");
                }
            }
            byte[] bArr2 = new byte[bArrDoFinal.length - 24];
            System.arraycopy(bArrDoFinal, 24, bArr2, 0, bArrDoFinal.length - 24);
            return bArr2;
        } catch (GeneralSecurityException unused) {
            throw new IOException("Security failure");
        }
    }

    public void a(String str, File file) throws Throwable {
        InputStream inputStreamB;
        FileOutputStream fileOutputStream = null;
        try {
            inputStreamB = this.f3389b.b(str);
            try {
                FileOutputStream fileOutputStream2 = new FileOutputStream(file);
                try {
                    byte[] bArr = new byte[256];
                    while (true) {
                        int i = inputStreamB.read(bArr);
                        if (i < 0) {
                            break;
                        } else {
                            fileOutputStream2.write(bArr, 0, i);
                        }
                    }
                    fileOutputStream2.close();
                    if (inputStreamB != null) {
                        inputStreamB.close();
                    }
                } catch (Throwable th) {
                    th = th;
                    fileOutputStream = fileOutputStream2;
                    if (fileOutputStream != null) {
                        fileOutputStream.close();
                    }
                    if (inputStreamB != null) {
                        inputStreamB.close();
                    }
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Throwable th3) {
            th = th3;
            inputStreamB = null;
        }
    }
}
