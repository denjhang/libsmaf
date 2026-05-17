package jp.co.acrodea.runtime.drm;

import java.io.BufferedInputStream;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.security.GeneralSecurityException;
import java.security.MessageDigest;
import java.security.SecureRandom;
import java.util.Arrays;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class s extends b implements x {
    private static final int TMPBUF_SIZE = 256;
    private static final String TMP_POSTFIX = ".tmp";
    private static Object global_lock = new Object();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private byte[] f3436b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private String f3437c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private File f3438d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private byte[] f3439e;
    private AcDRMUtil u;

    static {
        System.loadLibrary("acdrm");
    }

    s(AcDRMUtil acDRMUtil, String str, File file) {
        if (acDRMUtil == null || str == null || file == null) {
            throw new NullPointerException();
        }
        if (str.length() == 0) {
            throw new IllegalArgumentException();
        }
        this.u = acDRMUtil;
        this.f3437c = str;
        this.f3438d = file;
        this.f3436b = new byte[TMPBUF_SIZE];
        this.f3439e = new byte[TMPBUF_SIZE];
    }

    private File a(File file) {
        return new File(String.valueOf(file.getPath()) + TMP_POSTFIX);
    }

    private byte[] a(byte[] bArr, int i, int i2) throws o {
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("SHA256");
            messageDigest.update(bArr, i, i2);
            return messageDigest.digest();
        } catch (GeneralSecurityException unused) {
            throw new o("Cannot calc digest", 11);
        }
    }

    private void b(String str) {
        if (str.length() == 0) {
            throw new IllegalArgumentException();
        }
        if (str.indexOf(47) >= 0 || str.indexOf(46) >= 0) {
            throw new IllegalArgumentException();
        }
    }

    private File c(String str) throws IOException {
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append(str);
        stringBuffer.append(".sdat");
        File file = new File(this.f3438d, stringBuffer.toString());
        String parent = file.getParent();
        if (parent != null) {
            File file2 = new File(parent);
            if (!file2.isDirectory() && !file2.mkdirs()) {
                throw new IOException("Cannot create directory: " + file2.toString());
            }
        }
        return file;
    }

    private native void c();

    private static byte[] g(int i) {
        byte[] bArr = new byte[i];
        new SecureRandom().nextBytes(bArr);
        return bArr;
    }

    private native void h(OutputStream outputStream, byte[] bArr, int i, int i2);

    private native void k(InputStream inputStream, OutputStream outputStream);

    private native void m(String str, byte[] bArr);

    private native void n();

    private native byte[] o(String str);

    public void a() {
        synchronized (global_lock) {
            c();
        }
    }

    @Override // jp.co.acrodea.runtime.drm.x
    public void a(String str, byte[] bArr) throws IOException, o {
        a(str, bArr, 0, bArr.length);
    }

    @Override // jp.co.acrodea.runtime.drm.x
    public void a(String str, byte[] bArr, int i, int i2) throws IOException, o {
        b(str);
        byte[] bArrA = a(bArr, i, i2);
        File fileC = c(str);
        File fileA = a(fileC);
        synchronized (global_lock) {
            try {
                try {
                    FileOutputStream fileOutputStream = new FileOutputStream(fileA);
                    try {
                        h(fileOutputStream, bArr, i, i2);
                        m(str, bArrA);
                        fileC.delete();
                        fileA.renameTo(fileC);
                        n();
                    } finally {
                        try {
                            fileOutputStream.close();
                        } catch (IOException unused) {
                        }
                    }
                } catch (GeneralSecurityException unused2) {
                    throw new o("Encryption failed", 11);
                }
            } catch (Throwable th) {
                if (fileA != null) {
                    fileA.delete();
                }
                throw th;
            }
        }
    }

    @Override // jp.co.acrodea.runtime.drm.x
    public byte[] a_(String str) throws IOException, o {
        b(str);
        try {
            byte[] bArrO = o(str);
            File fileC = c(str);
            if (!fileC.exists()) {
                if (bArrO != null && bArrO.length != 0) {
                    byte[] bArr = new byte[0];
                    if (Arrays.equals(bArrO, a(bArr, 0, 0))) {
                        return bArr;
                    }
                    throw new o("Invalid data", 11);
                }
                return null;
            }
            FileInputStream fileInputStream = new FileInputStream(fileC);
            try {
                ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                k(new BufferedInputStream(fileInputStream), byteArrayOutputStream);
                byteArrayOutputStream.flush();
                byte[] byteArray = byteArrayOutputStream.toByteArray();
                if (bArrO != null && bArrO.length != 0) {
                    if (Arrays.equals(bArrO, a(byteArray, 0, byteArray.length))) {
                        return byteArray;
                    }
                    throw new o("Invalid data", 11);
                }
                if (byteArray.length == 0) {
                    return byteArray;
                }
                throw new o("Invalid data", 11);
            } finally {
                try {
                    fileInputStream.close();
                } catch (IOException unused) {
                }
            }
        } catch (GeneralSecurityException unused2) {
            throw new o("Encryption failed", 11);
        }
    }
}
