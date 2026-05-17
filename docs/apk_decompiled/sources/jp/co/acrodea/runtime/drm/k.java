package jp.co.acrodea.runtime.drm;

import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.DataInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.security.GeneralSecurityException;
import java.security.SecureRandom;
import java.util.Map;
import java.util.Set;
import javax.crypto.Cipher;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class k extends b {

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private File f3407f;
    private byte[] s;
    private int t;

    static {
        System.loadLibrary("acdrm");
    }

    public k(File file, int i, byte[] bArr) {
        this.f3407f = file;
        this.t = i;
        if (bArr != null) {
            this.s = (byte[]) bArr.clone();
        } else {
            this.s = null;
        }
    }

    private void a(Map<Long, byte[]> map, InputStream inputStream) throws IOException {
        DataInputStream dataInputStream = new DataInputStream(inputStream);
        byte[] bArr = new byte[4];
        ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr);
        byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
        dataInputStream.readFully(bArr);
        int i = byteBufferWrap.getInt();
        if (i < 0) {
            throw new IOException("Invalid data");
        }
        for (int i2 = 0; i2 < i; i2++) {
            byteBufferWrap.clear();
            dataInputStream.readFully(bArr);
            long j = ((long) byteBufferWrap.getInt()) & h.CLIENT_AUTOGEN_KEYID;
            byteBufferWrap.clear();
            dataInputStream.readFully(bArr);
            int i3 = byteBufferWrap.getInt();
            if (i3 < 0 || i3 > 65536) {
                throw new IOException("Invalid data");
            }
            byte[] bArr2 = new byte[i3];
            dataInputStream.readFully(bArr2);
            map.put(new Long(j), bArr2);
        }
    }

    private void a(Map<Long, byte[]> map, OutputStream outputStream) throws IOException {
        byte[] bArr = new byte[4];
        ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr);
        byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
        Set<Map.Entry<Long, byte[]>> setEntrySet = map.entrySet();
        byteBufferWrap.putInt(setEntrySet.size());
        outputStream.write(bArr, 0, 4);
        for (Map.Entry<Long, byte[]> entry : setEntrySet) {
            Long key = entry.getKey();
            byte[] value = entry.getValue();
            byteBufferWrap.clear();
            if (key != null) {
                byteBufferWrap.putInt(key.intValue());
            } else {
                byteBufferWrap.putInt(0);
            }
            outputStream.write(bArr, 0, 4);
            byteBufferWrap.clear();
            if (value != null) {
                byteBufferWrap.putInt(value.length);
            } else {
                byteBufferWrap.putInt(0);
            }
            outputStream.write(bArr, 0, 4);
            if (value != null) {
                outputStream.write(value);
            }
        }
    }

    private native byte[] a(byte[] bArr, byte[] bArr2);

    private native byte[] b(byte[] bArr);

    private byte[] decode(byte[] bArr) throws o {
        byte[] bArr2 = {27, 42, 108, 3, 39, 126, 87, 58, 21, 115, 98, 22, 60, 59, 38, 20};
        if (bArr.length < 16) {
            throw new o("Invalid data", 11);
        }
        try {
            Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
            cipher.init(2, new SecretKeySpec(bArr2, "AES"), new IvParameterSpec(bArr, 0, 16));
            return cipher.doFinal(bArr, 16, bArr.length - 16);
        } catch (GeneralSecurityException unused) {
            throw new o("Invalid encryption", 11);
        }
    }

    private byte[] encode(byte[] bArr, byte[] bArr2) throws o {
        byte[] bArr3 = {27, 42, 108, 3, 39, 126, 87, 58, 21, 115, 98, 22, 60, 59, 38, 20};
        try {
            Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
            cipher.init(1, new SecretKeySpec(bArr3, "AES"), new IvParameterSpec(bArr2));
            byte[] bArrDoFinal = cipher.doFinal(bArr);
            byte[] bArr4 = new byte[bArrDoFinal.length + bArr2.length];
            System.arraycopy(bArr2, 0, bArr4, 0, bArr2.length);
            System.arraycopy(bArrDoFinal, 0, bArr4, bArr2.length, bArrDoFinal.length);
            return bArr4;
        } catch (GeneralSecurityException unused) {
            throw new o("Invalid encryption", 11);
        }
    }

    public void b(Map<Long, byte[]> map) {
        synchronized (map) {
            b.a(map);
            map.clear();
            c(map);
        }
    }

    public void c(Map<Long, byte[]> map) throws o {
        try {
            synchronized (map) {
                if (this.f3407f != null && this.f3407f.exists()) {
                    FileInputStream fileInputStream = new FileInputStream(this.f3407f);
                    ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream(4096);
                    byte[] bArr = new byte[256];
                    while (true) {
                        int i = fileInputStream.read(bArr);
                        if (i < 0) {
                            break;
                        } else {
                            byteArrayOutputStream.write(bArr, 0, i);
                        }
                    }
                    byteArrayOutputStream.close();
                    fileInputStream.close();
                    ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(b(byteArrayOutputStream.toByteArray()));
                    a(map, byteArrayInputStream);
                    byteArrayInputStream.close();
                }
            }
        } catch (GeneralSecurityException unused) {
            throw new o("Invalid encryption", 11);
        }
    }

    public void d(Map<Long, byte[]> map) throws o {
        try {
            synchronized (map) {
                if (map.containsKey(null)) {
                    map.remove(null);
                    ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream(4096);
                    a(map, byteArrayOutputStream);
                    byteArrayOutputStream.close();
                    byte[] byteArray = byteArrayOutputStream.toByteArray();
                    byte[] bArr = new byte[16];
                    new SecureRandom().nextBytes(bArr);
                    byte[] bArrA = a(byteArray, bArr);
                    FileOutputStream fileOutputStream = new FileOutputStream(this.f3407f);
                    fileOutputStream.write(bArrA);
                    fileOutputStream.close();
                }
            }
        } catch (GeneralSecurityException unused) {
            throw new o("Invalid encryption", 11);
        }
    }
}
