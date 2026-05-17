package jp.co.acrodea.runtime.drm;

import android.R;
import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.math.BigInteger;
import java.nio.BufferOverflowException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.security.GeneralSecurityException;
import java.security.KeyFactory;
import java.security.KeyPairGenerator;
import java.security.MessageDigest;
import java.security.interfaces.RSAKey;
import java.security.interfaces.RSAPrivateCrtKey;
import java.security.interfaces.RSAPublicKey;
import java.security.spec.PKCS8EncodedKeySpec;
import java.security.spec.RSAKeyGenParameterSpec;
import java.security.spec.RSAPublicKeySpec;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class AcDRMUtil extends b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static AcDRMUtil f3307a = new AcDRMUtil();
    private String m;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private Map<Long, byte[]> f3311e = new HashMap();

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private Map<Long, byte[]> f3312f = new HashMap();
    private Map<Long, byte[]> g = new HashMap();
    private e h = new e();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private k f3308b = null;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private k f3309c = null;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private k f3310d = null;

    private AcDRMUtil() {
    }

    private static int a(int i) {
        if (((-16777216) & i) != 0) {
            return 4;
        }
        if ((16711680 & i) != 0) {
            return 3;
        }
        if ((65280 & i) != 0) {
            return 2;
        }
        return (i & 255) != 0 ? 1 : 0;
    }

    public static AcDRMUtil a() {
        return f3307a;
    }

    private byte[] a(long j) throws o {
        try {
            byte[] bArrB = b(j, 1);
            if (bArrB == null) {
                throw new o("Key not found", 2);
            }
            KeyFactory keyFactory = KeyFactory.getInstance("RSA");
            return ((RSAPublicKey) keyFactory.generatePublic(new RSAPublicKeySpec(((RSAKey) keyFactory.generatePrivate(new PKCS8EncodedKeySpec(bArrB))).getModulus(), BigInteger.valueOf(65537L)))).getEncoded();
        } catch (GeneralSecurityException unused) {
            throw new o("Key operation failed", 11);
        }
    }

    private byte[] a(long j, long j2, long j3) throws o {
        byte[] bArrA;
        int length;
        if (j3 < 0) {
            length = 92;
            bArrA = null;
        } else {
            bArrA = a(j3);
            length = bArrA.length + 5 + 28;
        }
        byte[] bArr = new byte[length];
        ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr);
        byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
        if (this.h.a() != null) {
            byteBufferWrap.put(this.h.a());
        } else {
            for (int i = 0; i < 20; i++) {
                byteBufferWrap.put((byte) 0);
            }
        }
        byteBufferWrap.putInt((int) j);
        byteBufferWrap.putInt((int) j2);
        if (bArrA == null) {
            for (int i2 = 0; i2 < 8; i2++) {
                byteBufferWrap.putLong(0L);
            }
        } else {
            byteBufferWrap.put((byte) 1);
            byteBufferWrap.putInt(bArrA.length);
            byteBufferWrap.put(bArrA);
        }
        return bArr;
    }

    private byte[] a(f fVar, byte[] bArr, long j) throws o {
        byte[] bArrB = b(j, 1);
        if (bArrB == null) {
            throw new o("Key not found", 2);
        }
        fVar.a(3, bArrB);
        int iA = fVar.a(bArr.length);
        byte[] bArr2 = new byte[iA];
        ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr2);
        byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
        if (iA == fVar.a(bArr, byteBufferWrap)) {
            return bArr2;
        }
        throw new o("Encryption error", 11);
    }

    private byte[] a(f fVar, byte[] bArr, byte[] bArr2, int i, long j, long j2) throws o {
        byte[] bArrB = b(j2, 0);
        if (bArrB == null) {
            throw new o("Key not found", 2);
        }
        int length = bArr2.length + 8 + bArr.length;
        fVar.a(1, bArrB);
        int iA = fVar.a(length);
        byte[] bArr3 = new byte[iA + 24];
        ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr3);
        byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
        byteBufferWrap.putInt(826557249);
        byteBufferWrap.putInt(65536);
        byteBufferWrap.putInt(R.id.zoom_in);
        byteBufferWrap.putInt((int) j);
        byteBufferWrap.putInt((int) j2);
        byteBufferWrap.mark();
        byteBufferWrap.putInt(0);
        ByteBuffer byteBufferWrap2 = ByteBuffer.wrap(new byte[8]);
        byteBufferWrap2.order(ByteOrder.LITTLE_ENDIAN);
        byteBufferWrap2.putInt(i);
        byteBufferWrap2.putInt(bArr2.length);
        byteBufferWrap2.flip();
        int iA2 = fVar.a(byteBufferWrap2, byteBufferWrap) + fVar.a(ByteBuffer.wrap(bArr2), byteBufferWrap) + fVar.b(ByteBuffer.wrap(bArr), byteBufferWrap);
        byteBufferWrap.reset();
        byteBufferWrap.putInt(iA2);
        if (iA2 == iA) {
            return bArr3;
        }
        throw new o("Encryption error", 11);
    }

    static byte[] a(byte[] bArr) {
        int length;
        int iA;
        int iA2;
        if (bArr == null || bArr.length <= 10 || bArr[9] == 6 || (length = bArr.length) >= 2147483617) {
            return bArr;
        }
        int i = length + 20;
        if (length >= 128) {
            iA = a(length);
            i += iA;
        } else {
            iA = 0;
        }
        if (i >= 128) {
            iA2 = a(i);
            i += iA2;
        } else {
            iA2 = 0;
        }
        int i2 = i + 2;
        try {
            byte[] bArr2 = new byte[i2];
            ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr2);
            byteBufferWrap.order(ByteOrder.BIG_ENDIAN);
            int i3 = i2 - (iA2 + 2);
            byteBufferWrap.put((byte) 48);
            if (iA2 == 0) {
                byteBufferWrap.put((byte) i3);
            } else {
                byteBufferWrap.put((byte) (iA2 + 128));
                for (int i4 = iA2 - 1; i4 >= 0; i4--) {
                    byteBufferWrap.put((byte) ((i3 >>> (i4 * 8)) & 255));
                }
            }
            byteBufferWrap.putShort((short) 513);
            byteBufferWrap.put((byte) 0);
            byteBufferWrap.putShort((short) 12301);
            byteBufferWrap.putInt(101264006);
            byteBufferWrap.putInt(1216804621);
            byteBufferWrap.putShort((short) 257);
            byteBufferWrap.put((byte) 1);
            byteBufferWrap.putShort((short) 1280);
            byteBufferWrap.put((byte) 4);
            if (iA == 0) {
                byteBufferWrap.put((byte) length);
            } else {
                byteBufferWrap.put((byte) (iA + 128));
                for (int i5 = iA - 1; i5 >= 0; i5--) {
                    byteBufferWrap.put((byte) ((length >>> (i5 * 8)) & 255));
                }
            }
            byteBufferWrap.put(bArr);
            bArr = bArr2;
            return bArr;
        } catch (BufferOverflowException unused) {
            return bArr;
        }
    }

    private byte[] b(long j, int i) {
        Map<Long, byte[]> map;
        if (i == 0) {
            map = this.f3311e;
        } else if (i == 1) {
            map = this.f3312f;
        } else {
            if (i != 2) {
                return null;
            }
            map = this.g;
        }
        byte[] bArr = map.get(new Long(j));
        return i == 1 ? a(bArr) : bArr;
    }

    private byte[] b(byte[] bArr) throws o {
        byte[] bArr2 = new byte[32];
        ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr2);
        byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
        byteBufferWrap.putInt(65536);
        byteBufferWrap.putInt(1);
        byteBufferWrap.putInt(bArr.length);
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("SHA1");
            messageDigest.update(bArr);
            if (messageDigest.digest(bArr2, 12, 20) == 20) {
                return bArr2;
            }
            throw new o("SHA1 error", 11);
        } catch (GeneralSecurityException unused) {
            throw new o("Message digest error", 11);
        }
    }

    public a a(RandomAccessFile randomAccessFile) {
        a aVar = new a(this.f3311e, this.f3312f, this.g, this.h);
        aVar.a(randomAccessFile);
        return aVar;
    }

    public a a(RandomAccessFile randomAccessFile, RandomAccessFile randomAccessFile2) {
        a aVar = new a(this.f3311e, this.f3312f, this.g, this.h);
        aVar.a(randomAccessFile, randomAccessFile2);
        return aVar;
    }

    public x a(String str, File file) throws o {
        if (this.m != null) {
            return new s(this, str, file);
        }
        throw new o("Invalid state", 12);
    }

    public void a(long j, int i) throws o {
        try {
            if (i < 128) {
                throw new o("Invalid bitlength", 11);
            }
            KeyPairGenerator keyPairGenerator = KeyPairGenerator.getInstance("RSA");
            keyPairGenerator.initialize(new RSAKeyGenParameterSpec(i, RSAKeyGenParameterSpec.F4));
            RSAPrivateCrtKey rSAPrivateCrtKey = (RSAPrivateCrtKey) keyPairGenerator.generateKeyPair().getPrivate();
            synchronized (this.f3312f) {
                if (this.f3312f.get(new Long(j)) != null) {
                    throw new o("KeyID already exist", 11);
                }
                this.f3312f.put(new Long(j), rSAPrivateCrtKey.getEncoded());
                this.f3312f.put(null, null);
            }
            b();
        } catch (IOException unused) {
            throw new o("IO Error", 7);
        } catch (GeneralSecurityException unused2) {
            throw new o("Key generation failed", 11);
        }
    }

    public void a(File file) {
        this.f3308b = new k(file, 2, null);
        this.f3308b.b(this.f3311e);
    }

    public byte[] a(long j, long j2, long j3, long j4, boolean z) throws Throwable {
        byte[] bArrA;
        byte[] bArrB;
        f fVar = new f();
        byte[] bArr = null;
        try {
            bArrA = a(j3, j4, z ? j : -1L);
            try {
                bArrB = b(bArrA);
                try {
                    byte[] bArrA2 = a(fVar, bArrB, j);
                    try {
                        byte[] bArrA3 = a(fVar, bArrA, bArrA2, bArrB.length, j, j2);
                        if (bArrA != null) {
                            Arrays.fill(bArrA, (byte) 0);
                        }
                        if (bArrB != null) {
                            Arrays.fill(bArrB, (byte) 0);
                        }
                        if (bArrA2 != null) {
                            Arrays.fill(bArrA2, (byte) 0);
                        }
                        return bArrA3;
                    } catch (Throwable th) {
                        th = th;
                        bArr = bArrA2;
                        if (bArrA != null) {
                            Arrays.fill(bArrA, (byte) 0);
                        }
                        if (bArrB != null) {
                            Arrays.fill(bArrB, (byte) 0);
                        }
                        if (bArr != null) {
                            Arrays.fill(bArr, (byte) 0);
                        }
                        throw th;
                    }
                } catch (Throwable th2) {
                    th = th2;
                }
            } catch (Throwable th3) {
                th = th3;
                bArrB = null;
            }
        } catch (Throwable th4) {
            th = th4;
            bArrA = null;
            bArrB = null;
        }
    }

    void b() throws o {
        k kVar = this.f3308b;
        if (kVar != null) {
            kVar.d(this.f3311e);
        }
        k kVar2 = this.f3309c;
        if (kVar2 != null) {
            kVar2.d(this.f3312f);
        }
        k kVar3 = this.f3310d;
        if (kVar3 != null) {
            kVar3.d(this.g);
        }
    }

    public void b(File file) throws o {
        if (this.h.a() == null) {
            throw new o("Invalid state", 12);
        }
        this.f3309c = new k(file, 0, this.h.a());
        this.f3309c.b(this.f3312f);
        if (this.f3312f.containsKey(new Long(h.CLIENT_AUTOGEN_KEYID))) {
            return;
        }
        a(h.CLIENT_AUTOGEN_KEYID, h.CLIENT_AUTOGEN_KEYBIT);
    }

    public boolean b(String str) {
        return this.h.a(str);
    }

    public void c() throws o {
        String str = this.m;
        if (str == null) {
            throw new o("Invalid state", 12);
        }
        new s(this, str, new File(str)).a();
    }

    public void c(File file) {
        e eVar = this.h;
        this.f3310d = new k(file, 1, eVar != null ? eVar.a() : null);
        this.f3310d.b(this.g);
    }

    public void d(File file) {
        if (!file.isDirectory()) {
            throw new IOException();
        }
        this.m = file.toString();
    }

    protected void finalize() {
        b.a(this.f3311e);
        this.f3311e.clear();
        this.f3311e = null;
        b.a(this.f3312f);
        this.f3312f.clear();
        this.f3312f = null;
        b.a(this.g);
        this.g.clear();
        this.g = null;
    }
}
