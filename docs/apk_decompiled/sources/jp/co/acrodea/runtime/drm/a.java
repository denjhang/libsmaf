package jp.co.acrodea.runtime.drm;

import java.io.ByteArrayInputStream;
import java.io.Closeable;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.BufferUnderflowException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.security.GeneralSecurityException;
import java.security.MessageDigest;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a extends b implements Closeable {
    private byte[] A;
    private c B;
    private r C;
    private ByteArrayInputStream D;
    private w E;
    private byte[] F;
    private boolean G;
    private v H;
    private i I;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f3313a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f3314b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int f3315c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private u f3316d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private d f3317e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private byte[] f3318f;
    private int g;
    private int h;
    private long i;
    private long j;
    private long k;
    private long l;
    private long m;
    private long n;
    private long o;
    private long p;
    private String q;
    private int r;
    private j s;
    private m t;
    private n u;
    private Map<Long, byte[]> v;
    private Map<Long, byte[]> w;
    private Map<Long, byte[]> x;
    private e y;
    private byte[] z;

    private a() {
        this.s = null;
        this.t = null;
        this.u = null;
        this.f3314b = 0;
        this.H = null;
        this.I = null;
    }

    a(Map<Long, byte[]> map, Map<Long, byte[]> map2, Map<Long, byte[]> map3, e eVar) {
        this();
        this.v = map;
        this.w = map2;
        this.x = map3;
        this.y = eVar;
        this.f3313a = true;
        this.f3314b = 1;
    }

    private void a(ByteBuffer byteBuffer) throws o {
        f fVar = new f();
        long j = ((long) byteBuffer.getInt()) & h.CLIENT_AUTOGEN_KEYID;
        long j2 = ((long) byteBuffer.getInt()) & h.CLIENT_AUTOGEN_KEYID;
        byte[] bArrA = a(j, 1);
        byte[] bArrA2 = a(j2, 0);
        if (bArrA == null || bArrA2 == null) {
            throw new o("Key not found", 2);
        }
        long j3 = ((long) byteBuffer.getInt()) & h.CLIENT_AUTOGEN_KEYID;
        int iPosition = byteBuffer.position();
        int iLimit = byteBuffer.limit();
        byteBuffer.limit((int) (((long) iPosition) + j3));
        fVar.a(4, bArrA);
        byte[] bArr = new byte[fVar.a((int) j3)];
        ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr);
        byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
        fVar.b(byteBuffer, byteBufferWrap);
        byteBufferWrap.flip();
        long j4 = ((long) byteBufferWrap.getInt()) & h.CLIENT_AUTOGEN_KEYID;
        long j5 = ((long) byteBufferWrap.getInt()) & h.CLIENT_AUTOGEN_KEYID;
        int iLimit2 = byteBufferWrap.limit();
        byteBufferWrap.limit((int) (((long) byteBufferWrap.position()) + j5));
        fVar.a(2, bArrA2);
        ByteBuffer byteBufferWrap2 = ByteBuffer.wrap(new byte[fVar.a((int) j5)]);
        byteBufferWrap2.order(ByteOrder.LITTLE_ENDIAN);
        int iB = fVar.b(byteBufferWrap, byteBufferWrap2);
        byteBufferWrap2.flip();
        if (j4 != iB) {
            throw new o("Invalid signature", 3);
        }
        this.u = n.a(byteBufferWrap2);
        byteBufferWrap.limit(iLimit2);
        int i = byteBufferWrap.getInt();
        if (i < 0) {
            throw new o("Bad Data", 1);
        }
        int iPosition2 = byteBufferWrap.position() + i;
        byteBufferWrap.limit(iPosition2);
        if (this.r == 1) {
            a(byteBufferWrap, true, false);
        } else {
            l();
            a(byteBufferWrap, true, true);
        }
        byteBufferWrap.position(iPosition2);
        long j6 = iPosition2;
        byteBufferWrap.limit((int) (this.u.e() + j6));
        if ((((long) byteBufferWrap.getInt()) & h.CLIENT_AUTOGEN_KEYID) != 33686019) {
            throw new o("Bad data", 1);
        }
        int i2 = byteBufferWrap.getInt();
        if (i2 < 0) {
            throw new o("Bad data", 1);
        }
        long j7 = ((long) byteBufferWrap.getInt()) & h.CLIENT_AUTOGEN_KEYID;
        int iPosition3 = byteBufferWrap.position();
        int i3 = (int) j7;
        int i4 = iPosition3 + i3;
        if (i3 < 0 || i4 + 16 > bArr.length) {
            throw new o("Bad data", 1);
        }
        byteBuffer.position(byteBuffer.limit());
        byteBuffer.limit(iLimit);
        byteBuffer.getInt();
        ByteBuffer byteBufferWrap3 = ByteBuffer.wrap(a(byteBuffer, bArr, iPosition3, i3, i2, bArr, i4, 16), 0, i2);
        byteBufferWrap3.order(ByteOrder.LITTLE_ENDIAN);
        e(byteBufferWrap3);
        if (i != this.u.c()) {
            throw new o("Invalid signature", 3);
        }
        byteBufferWrap.position(iPosition2);
        byteBufferWrap.limit((int) (j6 + this.u.e()));
        if (!b.a(byteBufferWrap, this.u.f())) {
            throw new o("Invalid signature", 3);
        }
        byteBufferWrap3.clear();
        byteBufferWrap3.limit(i2);
        if (byteBufferWrap3.remaining() != this.u.g()) {
            throw new o("Invalid signature", 3);
        }
        if (!b.a(byteBufferWrap3, this.u.h())) {
            throw new o("Invalid signature", 3);
        }
    }

    private void a(ByteBuffer byteBuffer, boolean z, boolean z2) throws o {
        if (z) {
            byte[] bArrA = z2 ? this.A : this.y.a();
            if (bArrA == null) {
                throw new o("Invalid status", 8);
            }
            int iRemaining = byteBuffer.remaining();
            byte[] bArr = new byte[iRemaining];
            byteBuffer.get(bArr);
            for (int i = 0; i < iRemaining; i++) {
                bArr[i] = (byte) (bArr[i] ^ bArrA[i % bArrA.length]);
            }
            byteBuffer = ByteBuffer.wrap(bArr);
            byteBuffer.order(ByteOrder.LITTLE_ENDIAN);
            n nVar = this.u;
            if (nVar != null) {
                if (!b.a(byteBuffer, nVar.d())) {
                    throw new o("Device ID does not match", 15);
                }
                byteBuffer.clear();
            }
        }
        this.t = m.a(byteBuffer);
        if (!this.t.b()) {
            throw new o("Broken data", 1);
        }
    }

    private byte[] a(long j, int i) {
        Map<Long, byte[]> map;
        if (i == 0) {
            map = this.v;
        } else if (i == 1) {
            map = this.w;
        } else {
            if (i != 2) {
                return null;
            }
            map = this.x;
        }
        byte[] bArr = map.get(new Long(j));
        return i == 1 ? AcDRMUtil.a(bArr) : bArr;
    }

    private byte[] a(ByteBuffer byteBuffer, byte[] bArr, int i) {
        return a(byteBuffer, bArr, 0, bArr.length, i);
    }

    private byte[] a(ByteBuffer byteBuffer, byte[] bArr, int i, int i2, int i3) {
        byte[] bArr2;
        int i4;
        int i5;
        if (byteBuffer.hasArray()) {
            byte[] bArrArray = byteBuffer.array();
            int iArrayOffset = byteBuffer.arrayOffset() + byteBuffer.position();
            int iRemaining = byteBuffer.remaining();
            byteBuffer.position(byteBuffer.limit());
            bArr2 = bArrArray;
            i5 = iArrayOffset;
            i4 = iRemaining;
        } else {
            int iRemaining2 = byteBuffer.remaining();
            byte[] bArr3 = new byte[iRemaining2];
            byteBuffer.get(bArr3);
            bArr2 = bArr3;
            i4 = iRemaining2;
            i5 = 0;
        }
        return a(bArr2, i5, i4, bArr, i, i2, i3);
    }

    private byte[] a(ByteBuffer byteBuffer, byte[] bArr, int i, int i2, int i3, byte[] bArr2, int i4, int i5) {
        byte[] bArr3;
        int i6;
        int i7;
        if (byteBuffer.hasArray()) {
            byte[] bArrArray = byteBuffer.array();
            int iArrayOffset = byteBuffer.arrayOffset() + byteBuffer.position();
            int iRemaining = byteBuffer.remaining();
            byteBuffer.position(byteBuffer.limit());
            bArr3 = bArrArray;
            i7 = iArrayOffset;
            i6 = iRemaining;
        } else {
            int iRemaining2 = byteBuffer.remaining();
            byte[] bArr4 = new byte[iRemaining2];
            byteBuffer.get(bArr4);
            bArr3 = bArr4;
            i6 = iRemaining2;
            i7 = 0;
        }
        return a(bArr3, i7, i6, bArr, i, i2, i3, bArr2, i4, i5);
    }

    private byte[] a(byte[] bArr, int i, int i2, byte[] bArr2, int i3, int i4, int i5) throws o {
        if (i2 > 16) {
            return a(bArr, i + 16, i2 - 16, bArr2, i3, i4, i5, bArr, i, 16);
        }
        throw new o("Bad crypt block", 4);
    }

    private byte[] a(byte[] bArr, int i, int i2, byte[] bArr2, int i3, int i4, int i5, byte[] bArr3, int i6, int i7) throws o {
        if (i2 % 16 != 0) {
            throw new o("Bad crypt block", 4);
        }
        try {
            Cipher cipher = Cipher.getInstance("AES/CBC/NoPadding");
            cipher.init(2, new SecretKeySpec(bArr2, i3, i4, "AES"), new IvParameterSpec(bArr3, i6, i7));
            byte[] bArrDoFinal = cipher.doFinal(bArr, i, i2);
            if (bArrDoFinal == null || bArrDoFinal.length < i5) {
                throw new o("Bad crypt block", 4);
            }
            return bArrDoFinal;
        } catch (GeneralSecurityException unused) {
            throw new o("Bad crypt block", 4);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:33:0x008d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void b(java.nio.ByteBuffer r14) throws java.lang.Throwable {
        /*
            r13 = this;
            r0 = 0
            r1 = 2
            r2 = 0
            int r3 = r14.getInt()     // Catch: java.lang.Throwable -> L79 java.lang.IllegalArgumentException -> L7c
            long r3 = (long) r3     // Catch: java.lang.Throwable -> L79 java.lang.IllegalArgumentException -> L7c
            r5 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r3 = r3 & r5
            r14.getInt()     // Catch: java.lang.Throwable -> L79 java.lang.IllegalArgumentException -> L7c
            int r7 = r14.getInt()     // Catch: java.lang.Throwable -> L79 java.lang.IllegalArgumentException -> L7c
            long r7 = (long) r7     // Catch: java.lang.Throwable -> L79 java.lang.IllegalArgumentException -> L7c
            long r7 = r7 & r5
            int r9 = r14.getInt()     // Catch: java.lang.Throwable -> L79 java.lang.IllegalArgumentException -> L7c
            long r9 = (long) r9     // Catch: java.lang.Throwable -> L79 java.lang.IllegalArgumentException -> L7c
            long r5 = r5 & r9
            int r9 = r14.limit()     // Catch: java.lang.Throwable -> L79 java.lang.IllegalArgumentException -> L7c
            int r10 = r14.position()     // Catch: java.lang.Throwable -> L79 java.lang.IllegalArgumentException -> L7c
            long r10 = (long) r10     // Catch: java.lang.Throwable -> L79 java.lang.IllegalArgumentException -> L7c
            long r10 = r10 + r5
            int r5 = (int) r10     // Catch: java.lang.Throwable -> L79 java.lang.IllegalArgumentException -> L7c
            r14.limit(r5)     // Catch: java.lang.Throwable -> L79 java.lang.IllegalArgumentException -> L7c
            int r5 = r13.r     // Catch: java.lang.Throwable -> L79 java.lang.IllegalArgumentException -> L7c
            r6 = 6
            if (r5 != r6) goto L39
            r13.l()     // Catch: java.lang.Throwable -> L79 java.lang.IllegalArgumentException -> L7c
            r5 = 4
            byte[] r3 = r13.b(r3, r5)     // Catch: java.lang.Throwable -> L79 java.lang.IllegalArgumentException -> L7c
            goto L47
        L39:
            int r5 = r13.r     // Catch: java.lang.Throwable -> L79 java.lang.IllegalArgumentException -> L7c
            r6 = 3
            if (r5 != r6) goto L43
            byte[] r3 = r13.b(r3, r6)     // Catch: java.lang.Throwable -> L79 java.lang.IllegalArgumentException -> L7c
            goto L47
        L43:
            byte[] r3 = r13.a(r3, r1)     // Catch: java.lang.Throwable -> L79 java.lang.IllegalArgumentException -> L7c
        L47:
            if (r3 == 0) goto L71
            int r4 = (int) r7
            byte[] r0 = r13.a(r14, r3, r4)     // Catch: java.lang.Throwable -> L6c java.lang.IllegalArgumentException -> L6e
            r14.limit(r9)     // Catch: java.lang.Throwable -> L6c java.lang.IllegalArgumentException -> L6e
            java.nio.ByteBuffer r14 = java.nio.ByteBuffer.wrap(r0, r2, r4)     // Catch: java.lang.Throwable -> L6c java.lang.IllegalArgumentException -> L6e
            java.nio.ByteOrder r4 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.lang.Throwable -> L6c java.lang.IllegalArgumentException -> L6e
            r14.order(r4)     // Catch: java.lang.Throwable -> L6c java.lang.IllegalArgumentException -> L6e
            r13.d(r14)     // Catch: java.lang.Throwable -> L6c java.lang.IllegalArgumentException -> L6e
            if (r0 == 0) goto L62
            java.util.Arrays.fill(r0, r2)
        L62:
            int r14 = r13.r
            if (r14 == r1) goto L6b
            if (r3 == 0) goto L6b
            java.util.Arrays.fill(r3, r2)
        L6b:
            return
        L6c:
            r14 = move-exception
            goto L8b
        L6e:
            r14 = r0
            r0 = r3
            goto L7d
        L71:
            jp.co.acrodea.runtime.drm.o r14 = new jp.co.acrodea.runtime.drm.o     // Catch: java.lang.Throwable -> L6c java.lang.IllegalArgumentException -> L6e
            java.lang.String r4 = "Key not found"
            r14.<init>(r4, r1)     // Catch: java.lang.Throwable -> L6c java.lang.IllegalArgumentException -> L6e
            throw r14     // Catch: java.lang.Throwable -> L6c java.lang.IllegalArgumentException -> L6e
        L79:
            r14 = move-exception
            r3 = r0
            goto L8b
        L7c:
            r14 = r0
        L7d:
            jp.co.acrodea.runtime.drm.o r3 = new jp.co.acrodea.runtime.drm.o     // Catch: java.lang.Throwable -> L86
            java.lang.String r4 = "Broken data"
            r5 = 1
            r3.<init>(r4, r5)     // Catch: java.lang.Throwable -> L86
            throw r3     // Catch: java.lang.Throwable -> L86
        L86:
            r3 = move-exception
            r12 = r0
            r0 = r14
            r14 = r3
            r3 = r12
        L8b:
            if (r0 == 0) goto L90
            java.util.Arrays.fill(r0, r2)
        L90:
            int r0 = r13.r
            if (r0 == r1) goto L99
            if (r3 == 0) goto L99
            java.util.Arrays.fill(r3, r2)
        L99:
            throw r14
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.acrodea.runtime.drm.a.b(java.nio.ByteBuffer):void");
    }

    private byte[] b(long j, int i) {
        Map<Long, byte[]> map;
        byte[] bArrA;
        if (i == 0) {
            map = this.v;
        } else if (i == 1) {
            map = this.w;
        } else {
            if (i != 2 && i != 3 && i != 4) {
                return null;
            }
            map = this.x;
        }
        byte[] bArr = map.get(new Long(j));
        if (bArr == null) {
            return null;
        }
        if (i != 3 && i != 4) {
            return (i != 1 || (bArrA = AcDRMUtil.a(bArr)) == bArr) ? (byte[]) bArr.clone() : bArrA;
        }
        byte[] bArrA2 = i == 3 ? this.y.a() : this.A;
        if (bArrA2 == null || bArrA2.length < bArr.length) {
            return null;
        }
        byte[] bArr2 = (byte[]) bArr.clone();
        for (int i2 = 0; i2 < bArr2.length; i2++) {
            if (i2 % 2 != 0) {
                bArr2[i2] = (byte) (bArr2[i2] ^ bArrA2[i2]);
            }
        }
        return bArr2;
    }

    private void c(ByteBuffer byteBuffer) throws o {
        d(byteBuffer);
    }

    private void d(ByteBuffer byteBuffer) throws o {
        a(byteBuffer, false, false);
        e(byteBuffer);
        if (this.q.compareTo(this.s.b()) != 0) {
            throw new o("MIME Type differ", 1);
        }
    }

    private void e(ByteBuffer byteBuffer) {
        this.s = j.a(byteBuffer);
        String strC = this.s.c();
        if (strC != null) {
            this.H = new v(strC);
        }
    }

    private void f() {
        if (this.f3314b != 0) {
            return;
        }
        synchronized (this) {
            if (this.f3314b != 0) {
                return;
            }
            this.v = new HashMap();
            this.w = new HashMap();
            this.x = new HashMap();
            this.y = new e();
            this.f3313a = false;
            this.f3314b = 2;
        }
    }

    private void g() throws IOException, o {
        int i;
        f();
        int i2 = this.f3314b;
        if (i2 == -1) {
            throw new o("Already closed", 9);
        }
        if (i2 == -2) {
            throw new o("DRM Error", this.f3315c);
        }
        if (i2 == 1) {
            throw new o("Not Initialized", 10);
        }
        if (i2 == 2) {
            try {
                if (this.f3318f != null && (this.g < 0 || this.h <= 0 || this.g + this.h > this.f3318f.length)) {
                    throw new o("Invalid data", 1);
                }
                h();
            } catch (IOException e2) {
                this.f3314b = -2;
                this.f3315c = 7;
                throw e2;
            } catch (BufferUnderflowException unused) {
                this.f3314b = -2;
                this.f3315c = 1;
                throw new o("Broken data", 1);
            } catch (o e3) {
                this.f3314b = -2;
                this.f3315c = e3.a();
                throw e3;
            }
        }
        if (this.f3314b == 3) {
            try {
                i();
                v vVar = this.H;
                if (vVar != null && vVar.c() != 0) {
                    i iVar = this.I;
                    if (iVar == null) {
                        throw new o("No rights", 13);
                    }
                    if (!iVar.a(this.H)) {
                        throw new o("Rights expired", 14);
                    }
                }
            } catch (IOException e4) {
                m mVar = this.t;
                if (mVar != null) {
                    mVar.a();
                    this.t = null;
                }
                this.f3314b = -2;
                this.f3315c = 7;
                throw e4;
            } catch (BufferUnderflowException unused2) {
                m mVar2 = this.t;
                if (mVar2 != null) {
                    mVar2.a();
                    this.t = null;
                }
                this.f3314b = -2;
                this.f3315c = 1;
                throw new o("Broken data", 1);
            } catch (o e5) {
                m mVar3 = this.t;
                if (mVar3 != null) {
                    mVar3.a();
                    this.t = null;
                }
                this.f3314b = -2;
                this.f3315c = e5.a();
                throw e5;
            }
        }
        if (!this.G && this.f3314b == 4) {
            try {
                if (this.f3316d != null) {
                    this.f3316d.a(this.o);
                } else if (this.f3317e != null && (i = (int) (this.o - (this.k + this.l))) != 0 && ((int) this.f3317e.a(i)) != i) {
                    if (this.t != null) {
                        this.t.a();
                        this.t = null;
                    }
                    this.f3314b = -2;
                    this.f3315c = 1;
                    throw new o("Seek error", 1);
                }
                synchronized (this) {
                    this.f3314b = 5;
                }
            } catch (IOException e6) {
                m mVar4 = this.t;
                if (mVar4 != null) {
                    mVar4.a();
                    this.t = null;
                }
                this.f3314b = -2;
                this.f3315c = 7;
                throw e6;
            }
        }
    }

    private synchronized void h() {
        byte[] bArr;
        int i;
        ByteBuffer byteBufferWrap;
        byte[] bArr2;
        int i2;
        if (this.f3314b != 2) {
            return;
        }
        int i3 = 0;
        if (this.f3316d != null) {
            this.f3316d.a(0L);
            if (this.f3316d.a() < 8) {
                throw new o("Header broken", 1);
            }
            bArr = new byte[8];
            this.f3316d.a(bArr);
        } else {
            if (this.f3317e == null) {
                if (this.h < 8) {
                    throw new o("Header broken", 1);
                }
                bArr = this.f3318f;
                i = this.g;
                byteBufferWrap = ByteBuffer.wrap(bArr, i, 8);
                byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
                if (byteBufferWrap.get() == 65 || byteBufferWrap.get() != 67 || byteBufferWrap.get() != 68 || byteBufferWrap.get() != 67) {
                    throw new o("Bad magic", 1);
                }
                long j = ((long) byteBufferWrap.getInt()) & h.CLIENT_AUTOGEN_KEYID;
                if (j < 43) {
                    throw new o("Header broken", 1);
                }
                if (this.f3316d != null) {
                    if (this.f3316d.a() < j) {
                        throw new o("Header broken", 1);
                    }
                    i2 = ((int) j) - 8;
                    bArr2 = new byte[i2];
                    this.f3316d.a(bArr2);
                } else if (this.f3317e != null) {
                    i2 = ((int) j) - 8;
                    bArr2 = new byte[i2];
                    this.f3317e.a(bArr2);
                } else {
                    if (this.h < j) {
                        throw new o("Header broken", 1);
                    }
                    byte[] bArr3 = this.f3318f;
                    i3 = this.g + 8;
                    bArr2 = bArr3;
                    i2 = ((int) j) - 8;
                }
                ByteBuffer byteBufferWrap2 = ByteBuffer.wrap(bArr2, i3, i2);
                byteBufferWrap2.order(ByteOrder.LITTLE_ENDIAN);
                this.i = ((long) byteBufferWrap2.getInt()) & h.CLIENT_AUTOGEN_KEYID;
                if (this.i > 131071) {
                    throw new o("Invalid version", 1);
                }
                this.j = ((long) byteBufferWrap2.getInt()) & h.CLIENT_AUTOGEN_KEYID;
                this.k = ((long) byteBufferWrap2.getInt()) & h.CLIENT_AUTOGEN_KEYID;
                this.l = ((long) byteBufferWrap2.getInt()) & h.CLIENT_AUTOGEN_KEYID;
                this.m = ((long) byteBufferWrap2.getInt()) & h.CLIENT_AUTOGEN_KEYID;
                this.n = ((long) byteBufferWrap2.getInt()) & h.CLIENT_AUTOGEN_KEYID;
                this.o = ((long) byteBufferWrap2.getInt()) & h.CLIENT_AUTOGEN_KEYID;
                this.p = h.CLIENT_AUTOGEN_KEYID & ((long) byteBufferWrap2.getInt());
                this.q = new String(bArr2, i3 + 34, byteBufferWrap2.getShort() & 65535);
                if (this.f3316d != null) {
                    long jA = this.f3316d.a();
                    if (this.k < 0 || this.l <= 0 || this.k + this.l > jA || this.m < 0 || this.n < 0 || this.m + this.n > jA || (!this.G && (this.o < 0 || this.p <= 0 || this.o + this.p > jA))) {
                        throw new o("Broken data", 1);
                    }
                } else if (this.f3317e != null) {
                    int i4 = (int) (this.k - j);
                    if (i4 != 0 && ((int) this.f3317e.a(i4)) != i4) {
                        throw new o("Seek error", 1);
                    }
                } else {
                    long j2 = this.h;
                    if (this.k < 0 || this.l <= 0 || this.k + this.l > j2 || this.m < 0 || this.n < 0 || this.m + this.n > j2 || (!this.G && (this.o < 0 || this.p <= 0 || this.o + this.p > j2))) {
                        throw new o("Broken data", 1);
                    }
                }
                this.f3314b = 3;
                return;
            }
            bArr = new byte[8];
            this.f3317e.a(bArr);
        }
        i = 0;
        byteBufferWrap = ByteBuffer.wrap(bArr, i, 8);
        byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
        if (byteBufferWrap.get() == 65) {
        }
        throw new o("Bad magic", 1);
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x0059 A[Catch: all -> 0x00a7, TryCatch #0 {, blocks: (B:3:0x0001, B:8:0x0008, B:10:0x000d, B:14:0x002d, B:15:0x002f, B:17:0x003d, B:19:0x0059, B:20:0x005c, B:37:0x0099, B:23:0x0067, B:26:0x0072, B:27:0x0075, B:30:0x0080, B:33:0x008a, B:36:0x0094, B:40:0x009d, B:41:0x00a6, B:11:0x001f, B:13:0x0023, B:16:0x0031), top: B:47:0x0001 }] */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0060  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private synchronized void i() {
        /*
            r8 = this;
            monitor-enter(r8)
            int r0 = r8.f3314b     // Catch: java.lang.Throwable -> La7
            r1 = 3
            if (r0 == r1) goto L8
            monitor-exit(r8)
            return
        L8:
            jp.co.acrodea.runtime.drm.u r0 = r8.f3316d     // Catch: java.lang.Throwable -> La7
            r2 = 0
            if (r0 == 0) goto L1f
            jp.co.acrodea.runtime.drm.u r0 = r8.f3316d     // Catch: java.lang.Throwable -> La7
            long r3 = r8.k     // Catch: java.lang.Throwable -> La7
            r0.a(r3)     // Catch: java.lang.Throwable -> La7
            long r3 = r8.l     // Catch: java.lang.Throwable -> La7
            int r0 = (int) r3     // Catch: java.lang.Throwable -> La7
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> La7
            jp.co.acrodea.runtime.drm.u r3 = r8.f3316d     // Catch: java.lang.Throwable -> La7
            r3.a(r0)     // Catch: java.lang.Throwable -> La7
            goto L2d
        L1f:
            jp.co.acrodea.runtime.drm.d r0 = r8.f3317e     // Catch: java.lang.Throwable -> La7
            if (r0 == 0) goto L31
            long r3 = r8.l     // Catch: java.lang.Throwable -> La7
            int r0 = (int) r3     // Catch: java.lang.Throwable -> La7
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> La7
            jp.co.acrodea.runtime.drm.d r3 = r8.f3317e     // Catch: java.lang.Throwable -> La7
            r3.a(r0)     // Catch: java.lang.Throwable -> La7
        L2d:
            long r3 = r8.l     // Catch: java.lang.Throwable -> La7
        L2f:
            int r4 = (int) r3     // Catch: java.lang.Throwable -> La7
            goto L3d
        L31:
            byte[] r0 = r8.f3318f     // Catch: java.lang.Throwable -> La7
            int r2 = r8.g     // Catch: java.lang.Throwable -> La7
            long r2 = (long) r2     // Catch: java.lang.Throwable -> La7
            long r4 = r8.k     // Catch: java.lang.Throwable -> La7
            long r2 = r2 + r4
            int r2 = (int) r2     // Catch: java.lang.Throwable -> La7
            long r3 = r8.l     // Catch: java.lang.Throwable -> La7
            goto L2f
        L3d:
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.wrap(r0, r2, r4)     // Catch: java.lang.Throwable -> La7
            java.nio.ByteOrder r2 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.lang.Throwable -> La7
            r0.order(r2)     // Catch: java.lang.Throwable -> La7
            int r2 = r0.getInt()     // Catch: java.lang.Throwable -> La7
            long r2 = (long) r2     // Catch: java.lang.Throwable -> La7
            r4 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r2 = r2 & r4
            r4 = 16909841(0x1020611, double:8.3545715E-317)
            r6 = 4
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 != 0) goto L60
            r1 = 1
            r8.r = r1     // Catch: java.lang.Throwable -> La7
        L5c:
            r8.a(r0)     // Catch: java.lang.Throwable -> La7
            goto L99
        L60:
            r4 = 67241489(0x4020611, double:3.32217097E-316)
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 != 0) goto L6b
            r1 = 5
            r8.r = r1     // Catch: java.lang.Throwable -> La7
            goto L5c
        L6b:
            r4 = 33686019(0x2020203, double:1.66431047E-316)
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 != 0) goto L79
            r1 = 2
            r8.r = r1     // Catch: java.lang.Throwable -> La7
        L75:
            r8.b(r0)     // Catch: java.lang.Throwable -> La7
            goto L99
        L79:
            r4 = 84017667(0x5020203, double:4.1510243E-316)
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 != 0) goto L83
            r8.r = r1     // Catch: java.lang.Throwable -> La7
            goto L75
        L83:
            r4 = 100794883(0x6020203, double:4.9799289E-316)
            int r1 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r1 != 0) goto L8e
            r1 = 6
            r8.r = r1     // Catch: java.lang.Throwable -> La7
            goto L75
        L8e:
            r4 = 0
            int r1 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r1 != 0) goto L9d
            r8.r = r6     // Catch: java.lang.Throwable -> La7
            r8.c(r0)     // Catch: java.lang.Throwable -> La7
        L99:
            r8.f3314b = r6     // Catch: java.lang.Throwable -> La7
            monitor-exit(r8)
            return
        L9d:
            jp.co.acrodea.runtime.drm.o r0 = new jp.co.acrodea.runtime.drm.o     // Catch: java.lang.Throwable -> La7
            java.lang.String r1 = "Unknown DRM type"
            r2 = 8
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> La7
            throw r0     // Catch: java.lang.Throwable -> La7
        La7:
            r0 = move-exception
            monitor-exit(r8)
            goto Lab
        Laa:
            throw r0
        Lab:
            goto Laa
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.acrodea.runtime.drm.a.i():void");
    }

    private void j() throws o {
        this.B.a(this.f3318f, this.g + ((int) this.o), 0L, (int) this.t.d());
    }

    private void k() {
        int iD = (int) this.t.d();
        this.F = new byte[iD];
        try {
            this.f3317e.a(this.F);
            this.B.a(this.F, 0, 0L, iD);
        } catch (Throwable th) {
            this.F = null;
            throw th;
        }
    }

    private boolean l() {
        this.A = null;
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("SHA1");
            if (this.y.a() != null) {
                messageDigest.update(this.y.a());
            }
            if (this.z != null) {
                messageDigest.update(this.z);
            }
            this.A = messageDigest.digest();
            return true;
        } catch (GeneralSecurityException unused) {
            return false;
        }
    }

    public v a() throws IOException, o {
        g();
        return this.H;
    }

    synchronized void a(RandomAccessFile randomAccessFile) {
        if (this.f3314b != 1) {
            throw new IllegalStateException("Bad initialization");
        }
        this.f3316d = new u(new RandomAccessFile[]{randomAccessFile});
        this.f3314b = 2;
    }

    synchronized void a(RandomAccessFile randomAccessFile, RandomAccessFile randomAccessFile2) {
        if (this.f3314b != 1) {
            throw new IllegalStateException("Bad initialization");
        }
        this.f3316d = new u(new RandomAccessFile[]{randomAccessFile, randomAccessFile2});
        this.f3314b = 2;
    }

    public void a(i iVar) {
        f();
        this.I = iVar;
    }

    public void a(boolean z) {
        f();
        this.G = z;
    }

    public String b() throws IOException, o {
        g();
        return this.q;
    }

    public boolean b(boolean z) throws IOException, o {
        int i;
        g();
        synchronized (this) {
            int i2 = 5;
            if (this.f3314b != 5) {
                throw new o("Bad State", 6);
            }
            boolean zA = false;
            if (this.r != 1 && this.r != 5) {
                return false;
            }
            byte[] bArrB = this.u.b();
            if (bArrB == null) {
                return false;
            }
            this.f3314b = 8;
            this.B = new c(this.t);
            u uVar = this.f3316d;
            if (uVar != null) {
                byte[] bArr = new byte[h.CLIENT_AUTOGEN_KEYBIT];
                r rVar = new r(uVar, this.B);
                long jC = this.t.c();
                try {
                    MessageDigest messageDigest = MessageDigest.getInstance("SHA1");
                    while (jC > 0 && (i = rVar.read(bArr)) >= 0) {
                        messageDigest.update(bArr, 0, i);
                        jC -= (long) i;
                    }
                    if (jC == 0) {
                        if (Arrays.equals(messageDigest.digest(), bArrB)) {
                            zA = true;
                        }
                    }
                } catch (GeneralSecurityException unused) {
                }
                rVar.close();
            } else if (this.f3317e != null) {
                k();
                ByteBuffer byteBufferWrap = ByteBuffer.wrap(this.F, 0, (int) this.t.c());
                byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
                zA = b.a(byteBufferWrap, bArrB);
                if (z) {
                    this.F = null;
                }
            } else {
                j();
                ByteBuffer byteBufferWrap2 = ByteBuffer.wrap(this.f3318f, this.g + ((int) this.o), (int) this.t.c());
                byteBufferWrap2.order(ByteOrder.LITTLE_ENDIAN);
                zA = b.a(byteBufferWrap2, bArrB);
            }
            if (!zA) {
                throw new o("Invalid signature", 3);
            }
            synchronized (this) {
                if (this.f3316d != null) {
                    this.f3316d.a(this.o);
                } else {
                    i2 = 9;
                    if (this.f3318f == null && z) {
                        this.f3314b = 10;
                    }
                }
                this.f3314b = i2;
            }
            return true;
        }
    }

    public long c() throws IOException, o {
        g();
        return this.t.c();
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
        w wVar = this.E;
        if (wVar != null) {
            wVar.close();
        }
        ByteArrayInputStream byteArrayInputStream = this.D;
        if (byteArrayInputStream != null) {
            byteArrayInputStream.close();
        }
        r rVar = this.C;
        if (rVar != null) {
            rVar.close();
        }
        c cVar = this.B;
        if (cVar != null) {
            cVar.a();
        }
        if (this.F != null) {
            this.F = null;
        }
        this.f3316d = null;
        this.f3317e = null;
        this.f3318f = null;
        if (!this.f3313a) {
            b.a(this.v);
            this.v.clear();
            this.v = null;
            b.a(this.w);
            this.w.clear();
            this.w = null;
            b.a(this.x);
            this.x.clear();
            this.x = null;
        }
        this.y = null;
        j jVar = this.s;
        if (jVar != null) {
            jVar.a();
            this.s = null;
        }
        m mVar = this.t;
        if (mVar != null) {
            mVar.a();
            this.t = null;
        }
        n nVar = this.u;
        if (nVar != null) {
            nVar.a();
            this.u = null;
        }
        v vVar = this.H;
        if (vVar != null) {
            vVar.a();
            this.H = null;
        }
        synchronized (this) {
            this.f3314b = -1;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:31:0x00a1 A[Catch: all -> 0x00a8, TryCatch #0 {, blocks: (B:3:0x0001, B:5:0x000c, B:8:0x0011, B:9:0x0018, B:10:0x0019, B:12:0x0022, B:14:0x0026, B:15:0x0035, B:29:0x009a, B:31:0x00a1, B:32:0x00a4, B:16:0x0038, B:18:0x003c, B:19:0x0051, B:20:0x0058, B:21:0x0059, B:23:0x0068, B:24:0x0071, B:25:0x0074, B:27:0x0078, B:28:0x0082), top: B:40:0x0001 }] */
    /* JADX WARN: Removed duplicated region for block: B:32:0x00a4 A[Catch: all -> 0x00a8, TRY_LEAVE, TryCatch #0 {, blocks: (B:3:0x0001, B:5:0x000c, B:8:0x0011, B:9:0x0018, B:10:0x0019, B:12:0x0022, B:14:0x0026, B:15:0x0035, B:29:0x009a, B:31:0x00a1, B:32:0x00a4, B:16:0x0038, B:18:0x003c, B:19:0x0051, B:20:0x0058, B:21:0x0059, B:23:0x0068, B:24:0x0071, B:25:0x0074, B:27:0x0078, B:28:0x0082), top: B:40:0x0001 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public synchronized java.io.InputStream d() {
        /*
            r5 = this;
            monitor-enter(r5)
            r5.g()     // Catch: java.lang.Throwable -> La8
            int r0 = r5.f3314b     // Catch: java.lang.Throwable -> La8
            r1 = 5
            r2 = 9
            r3 = 6
            if (r0 == r1) goto L19
            int r0 = r5.f3314b     // Catch: java.lang.Throwable -> La8
            if (r0 != r2) goto L11
            goto L19
        L11:
            jp.co.acrodea.runtime.drm.o r0 = new jp.co.acrodea.runtime.drm.o     // Catch: java.lang.Throwable -> La8
            java.lang.String r1 = "Bad State"
            r0.<init>(r1, r3)     // Catch: java.lang.Throwable -> La8
            throw r0     // Catch: java.lang.Throwable -> La8
        L19:
            r0 = 0
            r5.C = r0     // Catch: java.lang.Throwable -> La8
            r5.D = r0     // Catch: java.lang.Throwable -> La8
            int r0 = r5.f3314b     // Catch: java.lang.Throwable -> La8
            if (r0 != r2) goto L59
            byte[] r0 = r5.F     // Catch: java.lang.Throwable -> La8
            if (r0 == 0) goto L38
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> La8
            byte[] r1 = r5.F     // Catch: java.lang.Throwable -> La8
            r2 = 0
            jp.co.acrodea.runtime.drm.m r3 = r5.t     // Catch: java.lang.Throwable -> La8
            long r3 = r3.c()     // Catch: java.lang.Throwable -> La8
            int r4 = (int) r3     // Catch: java.lang.Throwable -> La8
            r0.<init>(r1, r2, r4)     // Catch: java.lang.Throwable -> La8
        L35:
            r5.D = r0     // Catch: java.lang.Throwable -> La8
            goto L9a
        L38:
            byte[] r0 = r5.f3318f     // Catch: java.lang.Throwable -> La8
            if (r0 == 0) goto L51
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> La8
            byte[] r1 = r5.f3318f     // Catch: java.lang.Throwable -> La8
            int r2 = r5.g     // Catch: java.lang.Throwable -> La8
            long r3 = r5.o     // Catch: java.lang.Throwable -> La8
            int r4 = (int) r3     // Catch: java.lang.Throwable -> La8
            int r2 = r2 + r4
            jp.co.acrodea.runtime.drm.m r3 = r5.t     // Catch: java.lang.Throwable -> La8
            long r3 = r3.c()     // Catch: java.lang.Throwable -> La8
            int r4 = (int) r3     // Catch: java.lang.Throwable -> La8
            r0.<init>(r1, r2, r4)     // Catch: java.lang.Throwable -> La8
            goto L35
        L51:
            jp.co.acrodea.runtime.drm.o r0 = new jp.co.acrodea.runtime.drm.o     // Catch: java.lang.Throwable -> La8
            java.lang.String r1 = "Bad State"
            r0.<init>(r1, r3)     // Catch: java.lang.Throwable -> La8
            throw r0     // Catch: java.lang.Throwable -> La8
        L59:
            r5.f3314b = r3     // Catch: java.lang.Throwable -> La8
            jp.co.acrodea.runtime.drm.c r0 = new jp.co.acrodea.runtime.drm.c     // Catch: java.lang.Throwable -> La8
            jp.co.acrodea.runtime.drm.m r1 = r5.t     // Catch: java.lang.Throwable -> La8
            r0.<init>(r1)     // Catch: java.lang.Throwable -> La8
            r5.B = r0     // Catch: java.lang.Throwable -> La8
            jp.co.acrodea.runtime.drm.u r0 = r5.f3316d     // Catch: java.lang.Throwable -> La8
            if (r0 == 0) goto L74
            jp.co.acrodea.runtime.drm.r r0 = new jp.co.acrodea.runtime.drm.r     // Catch: java.lang.Throwable -> La8
            jp.co.acrodea.runtime.drm.u r1 = r5.f3316d     // Catch: java.lang.Throwable -> La8
            jp.co.acrodea.runtime.drm.c r2 = r5.B     // Catch: java.lang.Throwable -> La8
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> La8
        L71:
            r5.C = r0     // Catch: java.lang.Throwable -> La8
            goto L9a
        L74:
            jp.co.acrodea.runtime.drm.d r0 = r5.f3317e     // Catch: java.lang.Throwable -> La8
            if (r0 == 0) goto L82
            jp.co.acrodea.runtime.drm.r r0 = new jp.co.acrodea.runtime.drm.r     // Catch: java.lang.Throwable -> La8
            jp.co.acrodea.runtime.drm.d r1 = r5.f3317e     // Catch: java.lang.Throwable -> La8
            jp.co.acrodea.runtime.drm.c r2 = r5.B     // Catch: java.lang.Throwable -> La8
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> La8
            goto L71
        L82:
            r5.j()     // Catch: java.lang.Throwable -> La8
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> La8
            byte[] r1 = r5.f3318f     // Catch: java.lang.Throwable -> La8
            int r2 = r5.g     // Catch: java.lang.Throwable -> La8
            long r3 = r5.o     // Catch: java.lang.Throwable -> La8
            int r4 = (int) r3     // Catch: java.lang.Throwable -> La8
            int r2 = r2 + r4
            jp.co.acrodea.runtime.drm.m r3 = r5.t     // Catch: java.lang.Throwable -> La8
            long r3 = r3.c()     // Catch: java.lang.Throwable -> La8
            int r4 = (int) r3     // Catch: java.lang.Throwable -> La8
            r0.<init>(r1, r2, r4)     // Catch: java.lang.Throwable -> La8
            goto L35
        L9a:
            r0 = 7
            r5.f3314b = r0     // Catch: java.lang.Throwable -> La8
            jp.co.acrodea.runtime.drm.r r0 = r5.C     // Catch: java.lang.Throwable -> La8
            if (r0 == 0) goto La4
            jp.co.acrodea.runtime.drm.r r0 = r5.C     // Catch: java.lang.Throwable -> La8
            goto La6
        La4:
            java.io.ByteArrayInputStream r0 = r5.D     // Catch: java.lang.Throwable -> La8
        La6:
            monitor-exit(r5)
            return r0
        La8:
            r0 = move-exception
            monitor-exit(r5)
            goto Lac
        Lab:
            throw r0
        Lac:
            goto Lab
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.acrodea.runtime.drm.a.d():java.io.InputStream");
    }

    public synchronized w e() {
        w gVar;
        g();
        if (this.f3314b != 5 && this.f3314b != 9) {
            throw new o("Bad State", 6);
        }
        this.E = null;
        if (this.f3314b != 9) {
            this.f3314b = 6;
            this.B = new c(this.t);
            if (this.f3316d != null) {
                gVar = new t(this.f3316d, this.B, this.o);
            } else if (this.f3317e != null) {
                k();
                gVar = new g(this.F, 0, (int) this.t.c());
            } else {
                j();
                gVar = new g(this.f3318f, this.g + ((int) this.o), (int) this.t.c());
            }
        } else if (this.F != null) {
            gVar = new g(this.F, 0, (int) this.t.c());
        } else {
            if (this.f3318f == null) {
                throw new o("Bad State", 6);
            }
            gVar = new g(this.f3318f, this.g + ((int) this.o), (int) this.t.c());
        }
        this.E = gVar;
        this.f3314b = 7;
        return this.E;
    }
}
