package jp.co.acrodea.runtime.drm;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.security.GeneralSecurityException;
import java.security.Key;
import java.security.KeyFactory;
import java.security.interfaces.RSAPrivateKey;
import java.security.interfaces.RSAPublicKey;
import java.security.spec.PKCS8EncodedKeySpec;
import java.security.spec.X509EncodedKeySpec;
import javax.crypto.Cipher;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Cipher f3397a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private KeyFactory f3398b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int f3399c = 0;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f3400d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private ByteBuffer f3401e;

    public f() throws o {
        try {
            this.f3397a = Cipher.getInstance("RSA/NONE/PKCS1Padding");
            this.f3398b = KeyFactory.getInstance("RSA");
        } catch (GeneralSecurityException unused) {
            throw new o("Encryption error", 11);
        }
    }

    public int a(int i) throws o {
        int i2;
        int i3;
        int i4 = this.f3399c;
        if (i4 == 0) {
            throw new o("Encryption state error", 11);
        }
        if (i4 == 1 || i4 == 3) {
            int i5 = this.f3400d;
            i2 = i / i5;
            if (i % i5 != 0) {
                i2++;
            }
            i3 = this.f3400d + 11;
        } else {
            int i6 = this.f3400d;
            i2 = i / i6;
            if (i % i6 != 0) {
                i2++;
            }
            i3 = this.f3400d - 11;
        }
        return i2 * i3;
    }

    /* JADX WARN: Code restructure failed: missing block: B:16:0x0049, code lost:
    
        r6.limit(r0 + r1);
        r5.f3401e.put(r6);
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public int a(java.nio.ByteBuffer r6, java.nio.ByteBuffer r7) throws jp.co.acrodea.runtime.drm.o {
        /*
            r5 = this;
            int r0 = r6.position()     // Catch: java.security.GeneralSecurityException -> L67
            int r1 = r6.limit()     // Catch: java.security.GeneralSecurityException -> L67
            int r1 = r1 - r0
            java.nio.ByteBuffer r2 = r5.f3401e     // Catch: java.security.GeneralSecurityException -> L67
            int r2 = r2.position()     // Catch: java.security.GeneralSecurityException -> L67
            if (r2 == 0) goto L26
            java.nio.ByteBuffer r2 = r5.f3401e     // Catch: java.security.GeneralSecurityException -> L67
            int r2 = r2.remaining()     // Catch: java.security.GeneralSecurityException -> L67
            if (r2 <= r1) goto L1a
            r2 = r1
        L1a:
            if (r2 <= 0) goto L26
            int r0 = r0 + r2
            r6.limit(r0)     // Catch: java.security.GeneralSecurityException -> L67
            java.nio.ByteBuffer r3 = r5.f3401e     // Catch: java.security.GeneralSecurityException -> L67
            r3.put(r6)     // Catch: java.security.GeneralSecurityException -> L67
            int r1 = r1 - r2
        L26:
            java.nio.ByteBuffer r2 = r5.f3401e     // Catch: java.security.GeneralSecurityException -> L67
            int r2 = r2.remaining()     // Catch: java.security.GeneralSecurityException -> L67
            r3 = 0
            if (r2 != 0) goto L42
            java.nio.ByteBuffer r2 = r5.f3401e     // Catch: java.security.GeneralSecurityException -> L67
            r2.position(r3)     // Catch: java.security.GeneralSecurityException -> L67
            javax.crypto.Cipher r2 = r5.f3397a     // Catch: java.security.GeneralSecurityException -> L67
            java.nio.ByteBuffer r4 = r5.f3401e     // Catch: java.security.GeneralSecurityException -> L67
            int r2 = r2.doFinal(r4, r7)     // Catch: java.security.GeneralSecurityException -> L67
            int r3 = r3 + r2
            java.nio.ByteBuffer r2 = r5.f3401e     // Catch: java.security.GeneralSecurityException -> L67
            r2.clear()     // Catch: java.security.GeneralSecurityException -> L67
        L42:
            if (r1 > 0) goto L45
            goto L52
        L45:
            int r2 = r5.f3400d     // Catch: java.security.GeneralSecurityException -> L67
            if (r1 >= r2) goto L53
            int r0 = r0 + r1
            r6.limit(r0)     // Catch: java.security.GeneralSecurityException -> L67
            java.nio.ByteBuffer r7 = r5.f3401e     // Catch: java.security.GeneralSecurityException -> L67
            r7.put(r6)     // Catch: java.security.GeneralSecurityException -> L67
        L52:
            return r3
        L53:
            int r2 = r5.f3400d     // Catch: java.security.GeneralSecurityException -> L67
            int r2 = r2 + r0
            r6.limit(r2)     // Catch: java.security.GeneralSecurityException -> L67
            javax.crypto.Cipher r2 = r5.f3397a     // Catch: java.security.GeneralSecurityException -> L67
            int r2 = r2.doFinal(r6, r7)     // Catch: java.security.GeneralSecurityException -> L67
            int r3 = r3 + r2
            int r2 = r5.f3400d     // Catch: java.security.GeneralSecurityException -> L67
            int r0 = r0 + r2
            int r2 = r5.f3400d     // Catch: java.security.GeneralSecurityException -> L67
            int r1 = r1 - r2
            goto L42
        L67:
            jp.co.acrodea.runtime.drm.o r6 = new jp.co.acrodea.runtime.drm.o
            r7 = 11
            java.lang.String r0 = "Encryption error"
            r6.<init>(r0, r7)
            goto L72
        L71:
            throw r6
        L72:
            goto L71
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.acrodea.runtime.drm.f.a(java.nio.ByteBuffer, java.nio.ByteBuffer):int");
    }

    public int a(byte[] bArr, ByteBuffer byteBuffer) {
        ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr);
        byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
        return b(byteBufferWrap, byteBuffer);
    }

    public void a(int i, byte[] bArr) throws o {
        Key key;
        Cipher cipher;
        Key key2;
        Cipher cipher2;
        try {
            if (i != 1) {
                if (i == 2) {
                    key = (RSAPublicKey) this.f3398b.generatePublic(new X509EncodedKeySpec(bArr));
                    cipher = this.f3397a;
                } else if (i == 3) {
                    key2 = (RSAPrivateKey) this.f3398b.generatePrivate(new PKCS8EncodedKeySpec(bArr));
                    cipher2 = this.f3397a;
                } else {
                    if (i != 4) {
                        this.f3399c = 0;
                        this.f3401e = null;
                        throw new o("Encryption error", 11);
                    }
                    key = (RSAPrivateKey) this.f3398b.generatePrivate(new PKCS8EncodedKeySpec(bArr));
                    cipher = this.f3397a;
                }
                cipher.init(2, key);
                this.f3399c = i;
                this.f3400d = this.f3397a.getBlockSize();
                this.f3401e = ByteBuffer.wrap(new byte[this.f3400d]);
                this.f3401e.order(ByteOrder.LITTLE_ENDIAN);
            }
            key2 = (RSAPublicKey) this.f3398b.generatePublic(new X509EncodedKeySpec(bArr));
            cipher2 = this.f3397a;
            cipher2.init(1, key2);
            this.f3399c = i;
            this.f3400d = this.f3397a.getBlockSize();
            this.f3401e = ByteBuffer.wrap(new byte[this.f3400d]);
            this.f3401e.order(ByteOrder.LITTLE_ENDIAN);
        } catch (GeneralSecurityException unused) {
            this.f3399c = 0;
            this.f3401e = null;
            throw new o("Encryption error", 11);
        }
    }

    public int b(ByteBuffer byteBuffer, ByteBuffer byteBuffer2) throws o {
        int iDoFinal = 0;
        try {
            int iPosition = byteBuffer.position();
            int iLimit = byteBuffer.limit() - iPosition;
            if (this.f3401e.position() != 0) {
                int iRemaining = this.f3401e.remaining();
                if (iRemaining > iLimit) {
                    iRemaining = iLimit;
                }
                if (iRemaining > 0) {
                    iPosition += iRemaining;
                    byteBuffer.limit(iPosition);
                    this.f3401e.put(byteBuffer);
                    iLimit -= iRemaining;
                }
            }
            if (this.f3401e.remaining() == 0) {
                this.f3401e.flip();
                iDoFinal = 0 + this.f3397a.doFinal(this.f3401e, byteBuffer2);
                this.f3401e.clear();
            }
            while (true) {
                if (iLimit <= 0) {
                    break;
                }
                if (iLimit < this.f3400d) {
                    byteBuffer.limit(iPosition + iLimit);
                    this.f3401e.put(byteBuffer);
                    break;
                }
                byteBuffer.limit(this.f3400d + iPosition);
                iDoFinal += this.f3397a.doFinal(byteBuffer, byteBuffer2);
                iPosition += this.f3400d;
                iLimit -= this.f3400d;
            }
            if (this.f3401e.position() != 0) {
                this.f3401e.flip();
                iDoFinal += this.f3397a.doFinal(this.f3401e, byteBuffer2);
            }
            this.f3401e.clear();
            return iDoFinal;
        } catch (GeneralSecurityException unused) {
            throw new o("Encryption error", 11);
        }
    }
}
