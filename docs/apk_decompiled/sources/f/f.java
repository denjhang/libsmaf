package f;

import java.io.EOFException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import java.nio.channels.ByteChannel;
import java.nio.charset.Charset;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class f implements h, g, Cloneable, ByteChannel {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final byte[] f3240a = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102};

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    v f3241b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    long f3242c;

    public byte a(long j) {
        int i;
        C.a(this.f3242c, j, 1L);
        long j2 = this.f3242c;
        if (j2 - j <= j) {
            long j3 = j - j2;
            v vVar = this.f3241b;
            do {
                vVar = vVar.g;
                int i2 = vVar.f3274c;
                i = vVar.f3273b;
                j3 += (long) (i2 - i);
            } while (j3 < 0);
            return vVar.f3272a[i + ((int) j3)];
        }
        v vVar2 = this.f3241b;
        while (true) {
            int i3 = vVar2.f3274c;
            int i4 = vVar2.f3273b;
            long j4 = i3 - i4;
            if (j < j4) {
                return vVar2.f3272a[i4 + ((int) j)];
            }
            j -= j4;
            vVar2 = vVar2.f3277f;
        }
    }

    public int a(byte[] bArr, int i, int i2) {
        C.a(bArr.length, i, i2);
        v vVar = this.f3241b;
        if (vVar == null) {
            return -1;
        }
        int iMin = Math.min(i2, vVar.f3274c - vVar.f3273b);
        System.arraycopy(vVar.f3272a, vVar.f3273b, bArr, i, iMin);
        vVar.f3273b += iMin;
        this.f3242c -= (long) iMin;
        if (vVar.f3273b == vVar.f3274c) {
            this.f3241b = vVar.b();
            w.a(vVar);
        }
        return iMin;
    }

    @Override // f.h
    public long a(byte b2) {
        return a(b2, 0L, Long.MAX_VALUE);
    }

    public long a(byte b2, long j, long j2) {
        v vVar;
        long j3 = 0;
        if (j < 0 || j2 < j) {
            throw new IllegalArgumentException(String.format("size=%s fromIndex=%s toIndex=%s", Long.valueOf(this.f3242c), Long.valueOf(j), Long.valueOf(j2)));
        }
        long j4 = this.f3242c;
        if (j2 <= j4) {
            j4 = j2;
        }
        if (j == j4 || (vVar = this.f3241b) == null) {
            return -1L;
        }
        long j5 = this.f3242c;
        if (j5 - j >= j) {
            while (true) {
                j5 = j3;
                j3 = ((long) (vVar.f3274c - vVar.f3273b)) + j5;
                if (j3 >= j) {
                    break;
                }
                vVar = vVar.f3277f;
            }
        } else {
            while (j5 > j) {
                vVar = vVar.g;
                j5 -= (long) (vVar.f3274c - vVar.f3273b);
            }
        }
        long j6 = j;
        while (j5 < j4) {
            byte[] bArr = vVar.f3272a;
            int iMin = (int) Math.min(vVar.f3274c, (((long) vVar.f3273b) + j4) - j5);
            for (int i = (int) ((((long) vVar.f3273b) + j6) - j5); i < iMin; i++) {
                if (bArr[i] == b2) {
                    return ((long) (i - vVar.f3273b)) + j5;
                }
            }
            j6 = ((long) (vVar.f3274c - vVar.f3273b)) + j5;
            vVar = vVar.f3277f;
            j5 = j6;
        }
        return -1L;
    }

    @Override // f.z
    public long a(f fVar, long j) {
        if (fVar == null) {
            throw new IllegalArgumentException("sink == null");
        }
        if (j < 0) {
            throw new IllegalArgumentException("byteCount < 0: " + j);
        }
        long j2 = this.f3242c;
        if (j2 == 0) {
            return -1L;
        }
        if (j > j2) {
            j = j2;
        }
        fVar.b(this, j);
        return j;
    }

    public long a(z zVar) {
        if (zVar == null) {
            throw new IllegalArgumentException("source == null");
        }
        long j = 0;
        while (true) {
            long jA = zVar.a(this, 8192L);
            if (jA == -1) {
                return j;
            }
            j += jA;
        }
    }

    public f a(f fVar, long j, long j2) {
        if (fVar == null) {
            throw new IllegalArgumentException("out == null");
        }
        C.a(this.f3242c, j, j2);
        if (j2 == 0) {
            return this;
        }
        fVar.f3242c += j2;
        v vVar = this.f3241b;
        while (true) {
            int i = vVar.f3274c;
            int i2 = vVar.f3273b;
            if (j < i - i2) {
                break;
            }
            j -= (long) (i - i2);
            vVar = vVar.f3277f;
        }
        while (j2 > 0) {
            v vVarC = vVar.c();
            vVarC.f3273b = (int) (((long) vVarC.f3273b) + j);
            vVarC.f3274c = Math.min(vVarC.f3273b + ((int) j2), vVarC.f3274c);
            v vVar2 = fVar.f3241b;
            if (vVar2 == null) {
                vVarC.g = vVarC;
                vVarC.f3277f = vVarC;
                fVar.f3241b = vVarC;
            } else {
                vVar2.g.a(vVarC);
            }
            j2 -= (long) (vVarC.f3274c - vVarC.f3273b);
            vVar = vVar.f3277f;
            j = 0;
        }
        return this;
    }

    public f a(i iVar) {
        if (iVar == null) {
            throw new IllegalArgumentException("byteString == null");
        }
        iVar.a(this);
        return this;
    }

    public f a(String str, int i, int i2) {
        int i3;
        if (str == null) {
            throw new IllegalArgumentException("string == null");
        }
        if (i < 0) {
            throw new IllegalArgumentException("beginIndex < 0: " + i);
        }
        if (i2 < i) {
            throw new IllegalArgumentException("endIndex < beginIndex: " + i2 + " < " + i);
        }
        if (i2 > str.length()) {
            throw new IllegalArgumentException("endIndex > string.length: " + i2 + " > " + str.length());
        }
        while (i < i2) {
            char cCharAt = str.charAt(i);
            if (cCharAt < 128) {
                v vVarB = b(1);
                byte[] bArr = vVarB.f3272a;
                int i4 = vVarB.f3274c - i;
                int iMin = Math.min(i2, 8192 - i4);
                int i5 = i + 1;
                bArr[i + i4] = (byte) cCharAt;
                while (i5 < iMin) {
                    char cCharAt2 = str.charAt(i5);
                    if (cCharAt2 >= 128) {
                        break;
                    }
                    bArr[i5 + i4] = (byte) cCharAt2;
                    i5++;
                }
                int i6 = vVarB.f3274c;
                int i7 = (i4 + i5) - i6;
                vVarB.f3274c = i6 + i7;
                this.f3242c += (long) i7;
                i = i5;
            } else {
                if (cCharAt < 2048) {
                    i3 = (cCharAt >> 6) | 192;
                } else if (cCharAt < 55296 || cCharAt > 57343) {
                    writeByte((cCharAt >> '\f') | 224);
                    i3 = ((cCharAt >> 6) & 63) | 128;
                } else {
                    int i8 = i + 1;
                    char cCharAt3 = i8 < i2 ? str.charAt(i8) : (char) 0;
                    if (cCharAt > 56319 || cCharAt3 < 56320 || cCharAt3 > 57343) {
                        writeByte(63);
                        i = i8;
                    } else {
                        int i9 = (((cCharAt & 10239) << 10) | (9215 & cCharAt3)) + 65536;
                        writeByte((i9 >> 18) | 240);
                        writeByte(((i9 >> 12) & 63) | 128);
                        writeByte(((i9 >> 6) & 63) | 128);
                        writeByte((i9 & 63) | 128);
                        i += 2;
                    }
                }
                writeByte(i3);
                writeByte((cCharAt & '?') | 128);
                i++;
            }
        }
        return this;
    }

    public f a(String str, int i, int i2, Charset charset) {
        if (str == null) {
            throw new IllegalArgumentException("string == null");
        }
        if (i < 0) {
            throw new IllegalAccessError("beginIndex < 0: " + i);
        }
        if (i2 < i) {
            throw new IllegalArgumentException("endIndex < beginIndex: " + i2 + " < " + i);
        }
        if (i2 > str.length()) {
            throw new IllegalArgumentException("endIndex > string.length: " + i2 + " > " + str.length());
        }
        if (charset == null) {
            throw new IllegalArgumentException("charset == null");
        }
        if (charset.equals(C.f3230a)) {
            a(str, i, i2);
            return this;
        }
        byte[] bytes = str.substring(i, i2).getBytes(charset);
        write(bytes, 0, bytes.length);
        return this;
    }

    public i a(int i) {
        return i == 0 ? i.f3244b : new x(this, i);
    }

    public String a(long j, Charset charset) {
        C.a(this.f3242c, 0L, j);
        if (charset == null) {
            throw new IllegalArgumentException("charset == null");
        }
        if (j > 2147483647L) {
            throw new IllegalArgumentException("byteCount > Integer.MAX_VALUE: " + j);
        }
        if (j == 0) {
            return "";
        }
        v vVar = this.f3241b;
        int i = vVar.f3273b;
        if (((long) i) + j > vVar.f3274c) {
            return new String(d(j), charset);
        }
        String str = new String(vVar.f3272a, i, (int) j, charset);
        vVar.f3273b = (int) (((long) vVar.f3273b) + j);
        this.f3242c -= j;
        if (vVar.f3273b == vVar.f3274c) {
            this.f3241b = vVar.b();
            w.a(vVar);
        }
        return str;
    }

    @Override // f.h
    public String a(Charset charset) {
        try {
            return a(this.f3242c, charset);
        } catch (EOFException e2) {
            throw new AssertionError(e2);
        }
    }

    @Override // f.h
    public boolean a(long j, i iVar) {
        return a(j, iVar, 0, iVar.e());
    }

    public boolean a(long j, i iVar, int i, int i2) {
        if (j < 0 || i < 0 || i2 < 0 || this.f3242c - j < i2 || iVar.e() - i < i2) {
            return false;
        }
        for (int i3 = 0; i3 < i2; i3++) {
            if (a(((long) i3) + j) != iVar.a(i + i3)) {
                return false;
            }
        }
        return true;
    }

    @Override // f.h
    public i b(long j) {
        return new i(d(j));
    }

    v b(int i) {
        if (i < 1 || i > 8192) {
            throw new IllegalArgumentException();
        }
        v vVar = this.f3241b;
        if (vVar == null) {
            this.f3241b = w.a();
            v vVar2 = this.f3241b;
            vVar2.g = vVar2;
            vVar2.f3277f = vVar2;
            return vVar2;
        }
        v vVar3 = vVar.g;
        if (vVar3.f3274c + i <= 8192 && vVar3.f3276e) {
            return vVar3;
        }
        v vVarA = w.a();
        vVar3.a(vVarA);
        return vVarA;
    }

    public void b() {
        try {
            skip(this.f3242c);
        } catch (EOFException e2) {
            throw new AssertionError(e2);
        }
    }

    @Override // f.y
    public void b(f fVar, long j) {
        if (fVar == null) {
            throw new IllegalArgumentException("source == null");
        }
        if (fVar == this) {
            throw new IllegalArgumentException("source == this");
        }
        C.a(fVar.f3242c, 0L, j);
        while (j > 0) {
            v vVar = fVar.f3241b;
            if (j < vVar.f3274c - vVar.f3273b) {
                v vVar2 = this.f3241b;
                v vVar3 = vVar2 != null ? vVar2.g : null;
                if (vVar3 != null && vVar3.f3276e) {
                    if ((((long) vVar3.f3274c) + j) - ((long) (vVar3.f3275d ? 0 : vVar3.f3273b)) <= 8192) {
                        fVar.f3241b.a(vVar3, (int) j);
                        fVar.f3242c -= j;
                        this.f3242c += j;
                        return;
                    }
                }
                fVar.f3241b = fVar.f3241b.a((int) j);
            }
            v vVar4 = fVar.f3241b;
            long j2 = vVar4.f3274c - vVar4.f3273b;
            fVar.f3241b = vVar4.b();
            v vVar5 = this.f3241b;
            if (vVar5 == null) {
                this.f3241b = vVar4;
                v vVar6 = this.f3241b;
                vVar6.g = vVar6;
                vVar6.f3277f = vVar6;
            } else {
                vVar5.g.a(vVar4);
                vVar4.a();
            }
            fVar.f3242c -= j2;
            this.f3242c += j2;
            j -= j2;
        }
    }

    public long c() {
        long j = this.f3242c;
        if (j == 0) {
            return 0L;
        }
        v vVar = this.f3241b.g;
        int i = vVar.f3274c;
        return (i >= 8192 || !vVar.f3276e) ? j : j - ((long) (i - vVar.f3273b));
    }

    public f c(int i) {
        int i2;
        int i3;
        if (i >= 128) {
            if (i < 2048) {
                i3 = (i >> 6) | 192;
            } else {
                if (i < 65536) {
                    if (i < 55296 || i > 57343) {
                        i2 = (i >> 12) | 224;
                    } else {
                        writeByte(63);
                    }
                } else {
                    if (i > 1114111) {
                        throw new IllegalArgumentException("Unexpected code point: " + Integer.toHexString(i));
                    }
                    writeByte((i >> 18) | 240);
                    i2 = ((i >> 12) & 63) | 128;
                }
                writeByte(i2);
                i3 = ((i >> 6) & 63) | 128;
            }
            writeByte(i3);
            i = (i & 63) | 128;
            writeByte(i);
        } else {
            writeByte(i);
        }
        return this;
    }

    @Override // f.h
    public String c(long j) throws EOFException {
        if (j < 0) {
            throw new IllegalArgumentException("limit < 0: " + j);
        }
        long j2 = j != Long.MAX_VALUE ? j + 1 : Long.MAX_VALUE;
        long jA = a((byte) 10, 0L, j2);
        if (jA != -1) {
            return h(jA);
        }
        if (j2 < size() && a(j2 - 1) == 13 && a(j2) == 10) {
            return h(j2);
        }
        f fVar = new f();
        a(fVar, 0L, Math.min(32L, size()));
        throw new EOFException("\\n not found: limit=" + Math.min(size(), j) + " content=" + fVar.e().b() + (char) 8230);
    }

    /* JADX INFO: renamed from: clone, reason: merged with bridge method [inline-methods] */
    public f m2clone() {
        f fVar = new f();
        if (this.f3242c == 0) {
            return fVar;
        }
        fVar.f3241b = this.f3241b.c();
        v vVar = fVar.f3241b;
        vVar.g = vVar;
        vVar.f3277f = vVar;
        v vVar2 = this.f3241b;
        while (true) {
            vVar2 = vVar2.f3277f;
            if (vVar2 == this.f3241b) {
                fVar.f3242c = this.f3242c;
                return fVar;
            }
            fVar.f3241b.g.a(vVar2.c());
        }
    }

    @Override // f.z, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
    }

    @Override // f.g
    public f d(String str) {
        a(str, 0, str.length());
        return this;
    }

    @Override // f.g
    public /* bridge */ /* synthetic */ g d(String str) {
        d(str);
        return this;
    }

    public byte[] d() {
        try {
            return d(this.f3242c);
        } catch (EOFException e2) {
            throw new AssertionError(e2);
        }
    }

    @Override // f.h
    public byte[] d(long j) throws EOFException {
        C.a(this.f3242c, 0L, j);
        if (j <= 2147483647L) {
            byte[] bArr = new byte[(int) j];
            readFully(bArr);
            return bArr;
        }
        throw new IllegalArgumentException("byteCount > Integer.MAX_VALUE: " + j);
    }

    public i e() {
        return new i(d());
    }

    @Override // f.h
    public void e(long j) throws EOFException {
        if (this.f3242c < j) {
            throw new EOFException();
        }
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof f)) {
            return false;
        }
        f fVar = (f) obj;
        long j = this.f3242c;
        if (j != fVar.f3242c) {
            return false;
        }
        long j2 = 0;
        if (j == 0) {
            return true;
        }
        v vVar = this.f3241b;
        v vVar2 = fVar.f3241b;
        int i = vVar.f3273b;
        int i2 = vVar2.f3273b;
        while (j2 < this.f3242c) {
            long jMin = Math.min(vVar.f3274c - i, vVar2.f3274c - i2);
            int i3 = i2;
            int i4 = i;
            int i5 = 0;
            while (i5 < jMin) {
                int i6 = i4 + 1;
                int i7 = i3 + 1;
                if (vVar.f3272a[i4] != vVar2.f3272a[i3]) {
                    return false;
                }
                i5++;
                i4 = i6;
                i3 = i7;
            }
            if (i4 == vVar.f3274c) {
                vVar = vVar.f3277f;
                i = vVar.f3273b;
            } else {
                i = i4;
            }
            if (i3 == vVar2.f3274c) {
                vVar2 = vVar2.f3277f;
                i2 = vVar2.f3273b;
            } else {
                i2 = i3;
            }
            j2 += jMin;
        }
        return true;
    }

    @Override // f.g
    public f f(long j) {
        if (j == 0) {
            writeByte(48);
            return this;
        }
        int iNumberOfTrailingZeros = (Long.numberOfTrailingZeros(Long.highestOneBit(j)) / 4) + 1;
        v vVarB = b(iNumberOfTrailingZeros);
        byte[] bArr = vVarB.f3272a;
        int i = vVarB.f3274c;
        for (int i2 = (i + iNumberOfTrailingZeros) - 1; i2 >= i; i2--) {
            bArr[i2] = f3240a[(int) (15 & j)];
            j >>>= 4;
        }
        vVarB.f3274c += iNumberOfTrailingZeros;
        this.f3242c += (long) iNumberOfTrailingZeros;
        return this;
    }

    @Override // f.g
    public /* bridge */ /* synthetic */ g f(long j) {
        f(j);
        return this;
    }

    public String f() {
        try {
            return a(this.f3242c, C.f3230a);
        } catch (EOFException e2) {
            throw new AssertionError(e2);
        }
    }

    @Override // f.g, f.y, java.io.Flushable
    public void flush() {
    }

    public i g() {
        long j = this.f3242c;
        if (j <= 2147483647L) {
            return a((int) j);
        }
        throw new IllegalArgumentException("size > Integer.MAX_VALUE: " + this.f3242c);
    }

    public String g(long j) {
        return a(j, C.f3230a);
    }

    /* JADX WARN: Removed duplicated region for block: B:9:0x001c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    java.lang.String h(long r7) throws java.io.EOFException {
        /*
            r6 = this;
            r0 = 1
            r2 = 0
            int r4 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r4 <= 0) goto L1c
            long r2 = r7 - r0
            byte r4 = r6.a(r2)
            r5 = 13
            if (r4 != r5) goto L1c
            java.lang.String r7 = r6.g(r2)
            r0 = 2
        L18:
            r6.skip(r0)
            return r7
        L1c:
            java.lang.String r7 = r6.g(r7)
            goto L18
        */
        throw new UnsupportedOperationException("Method not decompiled: f.f.h(long):java.lang.String");
    }

    public int hashCode() {
        v vVar = this.f3241b;
        if (vVar == null) {
            return 0;
        }
        int i = 1;
        do {
            int i2 = vVar.f3274c;
            for (int i3 = vVar.f3273b; i3 < i2; i3++) {
                i = (i * 31) + vVar.f3272a[i3];
            }
            vVar = vVar.f3277f;
        } while (vVar != this.f3241b);
        return i;
    }

    @Override // java.nio.channels.Channel
    public boolean isOpen() {
        return true;
    }

    @Override // f.h, f.g
    public f o() {
        return this;
    }

    @Override // f.z
    public B p() {
        return B.f3226a;
    }

    @Override // f.h
    public boolean q() {
        return this.f3242c == 0;
    }

    @Override // f.h
    public String r() {
        return c(Long.MAX_VALUE);
    }

    @Override // java.nio.channels.ReadableByteChannel
    public int read(ByteBuffer byteBuffer) {
        v vVar = this.f3241b;
        if (vVar == null) {
            return -1;
        }
        int iMin = Math.min(byteBuffer.remaining(), vVar.f3274c - vVar.f3273b);
        byteBuffer.put(vVar.f3272a, vVar.f3273b, iMin);
        vVar.f3273b += iMin;
        this.f3242c -= (long) iMin;
        if (vVar.f3273b == vVar.f3274c) {
            this.f3241b = vVar.b();
            w.a(vVar);
        }
        return iMin;
    }

    @Override // f.h
    public byte readByte() {
        long j = this.f3242c;
        if (j == 0) {
            throw new IllegalStateException("size == 0");
        }
        v vVar = this.f3241b;
        int i = vVar.f3273b;
        int i2 = vVar.f3274c;
        int i3 = i + 1;
        byte b2 = vVar.f3272a[i];
        this.f3242c = j - 1;
        if (i3 == i2) {
            this.f3241b = vVar.b();
            w.a(vVar);
        } else {
            vVar.f3273b = i3;
        }
        return b2;
    }

    @Override // f.h
    public void readFully(byte[] bArr) throws EOFException {
        int i = 0;
        while (i < bArr.length) {
            int iA = a(bArr, i, bArr.length - i);
            if (iA == -1) {
                throw new EOFException();
            }
            i += iA;
        }
    }

    @Override // f.h
    public int readInt() {
        long j = this.f3242c;
        if (j < 4) {
            throw new IllegalStateException("size < 4: " + this.f3242c);
        }
        v vVar = this.f3241b;
        int i = vVar.f3273b;
        int i2 = vVar.f3274c;
        if (i2 - i < 4) {
            return ((readByte() & 255) << 24) | ((readByte() & 255) << 16) | ((readByte() & 255) << 8) | (readByte() & 255);
        }
        byte[] bArr = vVar.f3272a;
        int i3 = i + 1;
        int i4 = i3 + 1;
        int i5 = ((bArr[i] & 255) << 24) | ((bArr[i3] & 255) << 16);
        int i6 = i4 + 1;
        int i7 = i5 | ((bArr[i4] & 255) << 8);
        int i8 = i6 + 1;
        int i9 = i7 | (bArr[i6] & 255);
        this.f3242c = j - 4;
        if (i8 == i2) {
            this.f3241b = vVar.b();
            w.a(vVar);
        } else {
            vVar.f3273b = i8;
        }
        return i9;
    }

    @Override // f.h
    public short readShort() {
        long j = this.f3242c;
        if (j < 2) {
            throw new IllegalStateException("size < 2: " + this.f3242c);
        }
        v vVar = this.f3241b;
        int i = vVar.f3273b;
        int i2 = vVar.f3274c;
        if (i2 - i < 2) {
            return (short) (((readByte() & 255) << 8) | (readByte() & 255));
        }
        byte[] bArr = vVar.f3272a;
        int i3 = i + 1;
        int i4 = i3 + 1;
        int i5 = ((bArr[i] & 255) << 8) | (bArr[i3] & 255);
        this.f3242c = j - 2;
        if (i4 == i2) {
            this.f3241b = vVar.b();
            w.a(vVar);
        } else {
            vVar.f3273b = i4;
        }
        return (short) i5;
    }

    @Override // f.h
    public int s() {
        return C.a(readInt());
    }

    public long size() {
        return this.f3242c;
    }

    @Override // f.h
    public void skip(long j) throws EOFException {
        while (j > 0) {
            if (this.f3241b == null) {
                throw new EOFException();
            }
            int iMin = (int) Math.min(j, r0.f3274c - r0.f3273b);
            long j2 = iMin;
            this.f3242c -= j2;
            j -= j2;
            v vVar = this.f3241b;
            vVar.f3273b += iMin;
            if (vVar.f3273b == vVar.f3274c) {
                this.f3241b = vVar.b();
                w.a(vVar);
            }
        }
    }

    @Override // f.h
    public short t() {
        return C.a(readShort());
    }

    public String toString() {
        return g().toString();
    }

    /* JADX WARN: Removed duplicated region for block: B:33:0x0091  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x009b  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x009f  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x00a3 A[EDGE_INSN: B:45:0x00a3->B:38:0x00a3 BREAK  A[LOOP:0: B:5:0x000b->B:47:?], SYNTHETIC] */
    @Override // f.h
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public long u() {
        /*
            r15 = this;
            long r0 = r15.f3242c
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto Laa
            r0 = 0
            r4 = r2
            r1 = 0
        Lb:
            f.v r6 = r15.f3241b
            byte[] r7 = r6.f3272a
            int r8 = r6.f3273b
            int r9 = r6.f3274c
        L13:
            if (r8 >= r9) goto L8f
            r10 = r7[r8]
            r11 = 48
            if (r10 < r11) goto L22
            r11 = 57
            if (r10 > r11) goto L22
            int r11 = r10 + (-48)
            goto L3a
        L22:
            r11 = 97
            if (r10 < r11) goto L2f
            r11 = 102(0x66, float:1.43E-43)
            if (r10 > r11) goto L2f
            int r11 = r10 + (-97)
        L2c:
            int r11 = r11 + 10
            goto L3a
        L2f:
            r11 = 65
            if (r10 < r11) goto L70
            r11 = 70
            if (r10 > r11) goto L70
            int r11 = r10 + (-65)
            goto L2c
        L3a:
            r12 = -1152921504606846976(0xf000000000000000, double:-3.105036184601418E231)
            long r12 = r12 & r4
            int r14 = (r12 > r2 ? 1 : (r12 == r2 ? 0 : -1))
            if (r14 != 0) goto L4a
            r10 = 4
            long r4 = r4 << r10
            long r10 = (long) r11
            long r4 = r4 | r10
            int r8 = r8 + 1
            int r1 = r1 + 1
            goto L13
        L4a:
            f.f r0 = new f.f
            r0.<init>()
            r0.f(r4)
            r0.writeByte(r10)
            java.lang.NumberFormatException r1 = new java.lang.NumberFormatException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Number too large: "
            r2.append(r3)
            java.lang.String r0 = r0.f()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        L70:
            if (r1 == 0) goto L74
            r0 = 1
            goto L8f
        L74:
            java.lang.NumberFormatException r0 = new java.lang.NumberFormatException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Expected leading [0-9a-fA-F] character but was 0x"
            r1.append(r2)
            java.lang.String r2 = java.lang.Integer.toHexString(r10)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L8f:
            if (r8 != r9) goto L9b
            f.v r7 = r6.b()
            r15.f3241b = r7
            f.w.a(r6)
            goto L9d
        L9b:
            r6.f3273b = r8
        L9d:
            if (r0 != 0) goto La3
            f.v r6 = r15.f3241b
            if (r6 != 0) goto Lb
        La3:
            long r2 = r15.f3242c
            long r0 = (long) r1
            long r2 = r2 - r0
            r15.f3242c = r2
            return r4
        Laa:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "size == 0"
            r0.<init>(r1)
            goto Lb3
        Lb2:
            throw r0
        Lb3:
            goto Lb2
        */
        throw new UnsupportedOperationException("Method not decompiled: f.f.u():long");
    }

    @Override // f.h
    public InputStream v() {
        return new e(this);
    }

    @Override // f.g
    public f w() {
        return this;
    }

    @Override // f.g
    public /* bridge */ /* synthetic */ g w() {
        w();
        return this;
    }

    @Override // java.nio.channels.WritableByteChannel
    public int write(ByteBuffer byteBuffer) {
        if (byteBuffer == null) {
            throw new IllegalArgumentException("source == null");
        }
        int iRemaining = byteBuffer.remaining();
        int i = iRemaining;
        while (i > 0) {
            v vVarB = b(1);
            int iMin = Math.min(i, 8192 - vVarB.f3274c);
            byteBuffer.get(vVarB.f3272a, vVarB.f3274c, iMin);
            i -= iMin;
            vVarB.f3274c += iMin;
        }
        this.f3242c += (long) iRemaining;
        return iRemaining;
    }

    @Override // f.g
    public f write(byte[] bArr) {
        if (bArr == null) {
            throw new IllegalArgumentException("source == null");
        }
        write(bArr, 0, bArr.length);
        return this;
    }

    @Override // f.g
    public f write(byte[] bArr, int i, int i2) {
        if (bArr == null) {
            throw new IllegalArgumentException("source == null");
        }
        long j = i2;
        C.a(bArr.length, i, j);
        int i3 = i2 + i;
        while (i < i3) {
            v vVarB = b(1);
            int iMin = Math.min(i3 - i, 8192 - vVarB.f3274c);
            System.arraycopy(bArr, i, vVarB.f3272a, vVarB.f3274c, iMin);
            i += iMin;
            vVarB.f3274c += iMin;
        }
        this.f3242c += j;
        return this;
    }

    @Override // f.g
    public /* bridge */ /* synthetic */ g write(byte[] bArr) {
        write(bArr);
        return this;
    }

    @Override // f.g
    public /* bridge */ /* synthetic */ g write(byte[] bArr, int i, int i2) {
        write(bArr, i, i2);
        return this;
    }

    @Override // f.g
    public f writeByte(int i) {
        v vVarB = b(1);
        byte[] bArr = vVarB.f3272a;
        int i2 = vVarB.f3274c;
        vVarB.f3274c = i2 + 1;
        bArr[i2] = (byte) i;
        this.f3242c++;
        return this;
    }

    @Override // f.g
    public /* bridge */ /* synthetic */ g writeByte(int i) {
        writeByte(i);
        return this;
    }

    @Override // f.g
    public f writeInt(int i) {
        v vVarB = b(4);
        byte[] bArr = vVarB.f3272a;
        int i2 = vVarB.f3274c;
        int i3 = i2 + 1;
        bArr[i2] = (byte) ((i >>> 24) & 255);
        int i4 = i3 + 1;
        bArr[i3] = (byte) ((i >>> 16) & 255);
        int i5 = i4 + 1;
        bArr[i4] = (byte) ((i >>> 8) & 255);
        bArr[i5] = (byte) (i & 255);
        vVarB.f3274c = i5 + 1;
        this.f3242c += 4;
        return this;
    }

    @Override // f.g
    public /* bridge */ /* synthetic */ g writeInt(int i) {
        writeInt(i);
        return this;
    }

    @Override // f.g
    public f writeShort(int i) {
        v vVarB = b(2);
        byte[] bArr = vVarB.f3272a;
        int i2 = vVarB.f3274c;
        int i3 = i2 + 1;
        bArr[i2] = (byte) ((i >>> 8) & 255);
        bArr[i3] = (byte) (i & 255);
        vVarB.f3274c = i3 + 1;
        this.f3242c += 2;
        return this;
    }

    @Override // f.g
    public /* bridge */ /* synthetic */ g writeShort(int i) {
        writeShort(i);
        return this;
    }
}
