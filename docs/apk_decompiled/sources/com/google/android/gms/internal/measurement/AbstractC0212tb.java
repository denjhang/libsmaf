package com.google.android.gms.internal.measurement;

import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.tb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class AbstractC0212tb extends AbstractC0106db {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Logger f1817a = Logger.getLogger(AbstractC0212tb.class.getName());

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final boolean f1818b = C0115ed.a();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    C0224vb f1819c;

    /* JADX INFO: renamed from: com.google.android.gms.internal.measurement.tb$a */
    public static class a extends IOException {
        /* JADX WARN: Illegal instructions before constructor call */
        a(String str, Throwable th) {
            String strValueOf = String.valueOf(str);
            super(strValueOf.length() != 0 ? "CodedOutputStream was writing to a flat byte array and ran out of space.: ".concat(strValueOf) : new String("CodedOutputStream was writing to a flat byte array and ran out of space.: "), th);
        }

        a(Throwable th) {
            super("CodedOutputStream was writing to a flat byte array and ran out of space.", th);
        }
    }

    /* JADX INFO: renamed from: com.google.android.gms.internal.measurement.tb$b */
    static class b extends AbstractC0212tb {

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private final byte[] f1820d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private final int f1821e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        private final int f1822f;
        private int g;

        b(byte[] bArr, int i, int i2) {
            super();
            if (bArr == null) {
                throw new NullPointerException("buffer");
            }
            int i3 = i2 + 0;
            if ((i2 | 0 | (bArr.length - i3)) < 0) {
                throw new IllegalArgumentException(String.format("Array range is invalid. Buffer.length=%d, offset=%d, length=%d", Integer.valueOf(bArr.length), 0, Integer.valueOf(i2)));
            }
            this.f1820d = bArr;
            this.f1821e = 0;
            this.g = 0;
            this.f1822f = i3;
        }

        private final void b(byte[] bArr, int i, int i2) throws a {
            try {
                System.arraycopy(bArr, i, this.f1820d, this.g, i2);
                this.g += i2;
            } catch (IndexOutOfBoundsException e2) {
                throw new a(String.format("Pos: %d, limit: %d, len: %d", Integer.valueOf(this.g), Integer.valueOf(this.f1822f), Integer.valueOf(i2)), e2);
            }
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0212tb
        public final int a() {
            return this.f1822f - this.g;
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0212tb
        public final void a(byte b2) throws a {
            try {
                byte[] bArr = this.f1820d;
                int i = this.g;
                this.g = i + 1;
                bArr[i] = b2;
            } catch (IndexOutOfBoundsException e2) {
                throw new a(String.format("Pos: %d, limit: %d, len: %d", Integer.valueOf(this.g), Integer.valueOf(this.f1822f), 1), e2);
            }
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0212tb
        public final void a(int i) throws a {
            if (i >= 0) {
                b(i);
            } else {
                a(i);
            }
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0212tb
        public final void a(int i, int i2) throws a {
            b((i << 3) | i2);
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0212tb
        public final void a(int i, long j) throws a {
            a(i, 0);
            a(j);
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0212tb
        public final void a(int i, AbstractC0099cb abstractC0099cb) throws a {
            a(i, 2);
            b(abstractC0099cb);
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0212tb
        public final void a(int i, InterfaceC0219uc interfaceC0219uc) throws a {
            a(1, 3);
            c(2, i);
            a(3, 2);
            a(interfaceC0219uc);
            a(1, 4);
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0212tb
        final void a(int i, InterfaceC0219uc interfaceC0219uc, Ic ic) throws a {
            a(i, 2);
            Va va = (Va) interfaceC0219uc;
            int iH = va.h();
            if (iH == -1) {
                iH = ic.d(va);
                va.a(iH);
            }
            b(iH);
            ic.a(interfaceC0219uc, this.f1819c);
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0212tb
        public final void a(int i, String str) throws a {
            a(i, 2);
            b(str);
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0212tb
        public final void a(int i, boolean z) throws a {
            a(i, 0);
            a(z ? (byte) 1 : (byte) 0);
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0212tb
        public final void a(long j) throws a {
            if (AbstractC0212tb.f1818b && a() >= 10) {
                while ((j & (-128)) != 0) {
                    byte[] bArr = this.f1820d;
                    int i = this.g;
                    this.g = i + 1;
                    C0115ed.a(bArr, i, (byte) ((((int) j) & 127) | 128));
                    j >>>= 7;
                }
                byte[] bArr2 = this.f1820d;
                int i2 = this.g;
                this.g = i2 + 1;
                C0115ed.a(bArr2, i2, (byte) j);
                return;
            }
            while ((j & (-128)) != 0) {
                try {
                    byte[] bArr3 = this.f1820d;
                    int i3 = this.g;
                    this.g = i3 + 1;
                    bArr3[i3] = (byte) ((((int) j) & 127) | 128);
                    j >>>= 7;
                } catch (IndexOutOfBoundsException e2) {
                    throw new a(String.format("Pos: %d, limit: %d, len: %d", Integer.valueOf(this.g), Integer.valueOf(this.f1822f), 1), e2);
                }
            }
            byte[] bArr4 = this.f1820d;
            int i4 = this.g;
            this.g = i4 + 1;
            bArr4[i4] = (byte) j;
        }

        public final void a(InterfaceC0219uc interfaceC0219uc) throws a {
            b(interfaceC0219uc.f());
            interfaceC0219uc.a(this);
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0106db
        public final void a(byte[] bArr, int i, int i2) throws a {
            b(bArr, i, i2);
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0212tb
        public final void b(int i) throws a {
            if (!AbstractC0212tb.f1818b || _a.a() || a() < 5) {
                while ((i & (-128)) != 0) {
                    try {
                        byte[] bArr = this.f1820d;
                        int i2 = this.g;
                        this.g = i2 + 1;
                        bArr[i2] = (byte) ((i & 127) | 128);
                        i >>>= 7;
                    } catch (IndexOutOfBoundsException e2) {
                        throw new a(String.format("Pos: %d, limit: %d, len: %d", Integer.valueOf(this.g), Integer.valueOf(this.f1822f), 1), e2);
                    }
                }
                byte[] bArr2 = this.f1820d;
                int i3 = this.g;
                this.g = i3 + 1;
                bArr2[i3] = (byte) i;
                return;
            }
            if ((i & (-128)) == 0) {
                byte[] bArr3 = this.f1820d;
                int i4 = this.g;
                this.g = i4 + 1;
                C0115ed.a(bArr3, i4, (byte) i);
                return;
            }
            byte[] bArr4 = this.f1820d;
            int i5 = this.g;
            this.g = i5 + 1;
            C0115ed.a(bArr4, i5, (byte) (i | 128));
            int i6 = i >>> 7;
            if ((i6 & (-128)) == 0) {
                byte[] bArr5 = this.f1820d;
                int i7 = this.g;
                this.g = i7 + 1;
                C0115ed.a(bArr5, i7, (byte) i6);
                return;
            }
            byte[] bArr6 = this.f1820d;
            int i8 = this.g;
            this.g = i8 + 1;
            C0115ed.a(bArr6, i8, (byte) (i6 | 128));
            int i9 = i6 >>> 7;
            if ((i9 & (-128)) == 0) {
                byte[] bArr7 = this.f1820d;
                int i10 = this.g;
                this.g = i10 + 1;
                C0115ed.a(bArr7, i10, (byte) i9);
                return;
            }
            byte[] bArr8 = this.f1820d;
            int i11 = this.g;
            this.g = i11 + 1;
            C0115ed.a(bArr8, i11, (byte) (i9 | 128));
            int i12 = i9 >>> 7;
            if ((i12 & (-128)) == 0) {
                byte[] bArr9 = this.f1820d;
                int i13 = this.g;
                this.g = i13 + 1;
                C0115ed.a(bArr9, i13, (byte) i12);
                return;
            }
            byte[] bArr10 = this.f1820d;
            int i14 = this.g;
            this.g = i14 + 1;
            C0115ed.a(bArr10, i14, (byte) (i12 | 128));
            byte[] bArr11 = this.f1820d;
            int i15 = this.g;
            this.g = i15 + 1;
            C0115ed.a(bArr11, i15, (byte) (i12 >>> 7));
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0212tb
        public final void b(int i, int i2) throws a {
            a(i, 0);
            a(i2);
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0212tb
        public final void b(int i, AbstractC0099cb abstractC0099cb) throws a {
            a(1, 3);
            c(2, i);
            a(3, abstractC0099cb);
            a(1, 4);
        }

        public final void b(AbstractC0099cb abstractC0099cb) throws a {
            b(abstractC0099cb.h());
            abstractC0099cb.a(this);
        }

        public final void b(String str) throws a {
            int i = this.g;
            try {
                int iG = AbstractC0212tb.g(str.length() * 3);
                int iG2 = AbstractC0212tb.g(str.length());
                if (iG2 != iG) {
                    b(C0136hd.a(str));
                    this.g = C0136hd.a(str, this.f1820d, this.g, a());
                    return;
                }
                this.g = i + iG2;
                int iA = C0136hd.a(str, this.f1820d, this.g, a());
                this.g = i;
                b((iA - i) - iG2);
                this.g = iA;
            } catch (C0156kd e2) {
                this.g = i;
                a(str, e2);
            } catch (IndexOutOfBoundsException e3) {
                throw new a(e3);
            }
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0212tb
        public final void c(int i, int i2) throws a {
            a(i, 0);
            b(i2);
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0212tb
        public final void c(int i, long j) throws a {
            a(i, 1);
            c(j);
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0212tb
        public final void c(long j) throws a {
            try {
                byte[] bArr = this.f1820d;
                int i = this.g;
                this.g = i + 1;
                bArr[i] = (byte) j;
                byte[] bArr2 = this.f1820d;
                int i2 = this.g;
                this.g = i2 + 1;
                bArr2[i2] = (byte) (j >> 8);
                byte[] bArr3 = this.f1820d;
                int i3 = this.g;
                this.g = i3 + 1;
                bArr3[i3] = (byte) (j >> 16);
                byte[] bArr4 = this.f1820d;
                int i4 = this.g;
                this.g = i4 + 1;
                bArr4[i4] = (byte) (j >> 24);
                byte[] bArr5 = this.f1820d;
                int i5 = this.g;
                this.g = i5 + 1;
                bArr5[i5] = (byte) (j >> 32);
                byte[] bArr6 = this.f1820d;
                int i6 = this.g;
                this.g = i6 + 1;
                bArr6[i6] = (byte) (j >> 40);
                byte[] bArr7 = this.f1820d;
                int i7 = this.g;
                this.g = i7 + 1;
                bArr7[i7] = (byte) (j >> 48);
                byte[] bArr8 = this.f1820d;
                int i8 = this.g;
                this.g = i8 + 1;
                bArr8[i8] = (byte) (j >> 56);
            } catch (IndexOutOfBoundsException e2) {
                throw new a(String.format("Pos: %d, limit: %d, len: %d", Integer.valueOf(this.g), Integer.valueOf(this.f1822f), 1), e2);
            }
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0212tb
        public final void d(int i) throws a {
            try {
                byte[] bArr = this.f1820d;
                int i2 = this.g;
                this.g = i2 + 1;
                bArr[i2] = (byte) i;
                byte[] bArr2 = this.f1820d;
                int i3 = this.g;
                this.g = i3 + 1;
                bArr2[i3] = (byte) (i >> 8);
                byte[] bArr3 = this.f1820d;
                int i4 = this.g;
                this.g = i4 + 1;
                bArr3[i4] = (byte) (i >> 16);
                byte[] bArr4 = this.f1820d;
                int i5 = this.g;
                this.g = i5 + 1;
                bArr4[i5] = (byte) (i >>> 24);
            } catch (IndexOutOfBoundsException e2) {
                throw new a(String.format("Pos: %d, limit: %d, len: %d", Integer.valueOf(this.g), Integer.valueOf(this.f1822f), 1), e2);
            }
        }

        @Override // com.google.android.gms.internal.measurement.AbstractC0212tb
        public final void e(int i, int i2) throws a {
            a(i, 5);
            d(i2);
        }
    }

    private AbstractC0212tb() {
    }

    public static int a(int i, Zb zb) {
        int iE = e(i);
        int iA = zb.a();
        return iE + g(iA) + iA;
    }

    public static int a(Zb zb) {
        int iA = zb.a();
        return g(iA) + iA;
    }

    public static int a(AbstractC0099cb abstractC0099cb) {
        int iH = abstractC0099cb.h();
        return g(iH) + iH;
    }

    static int a(InterfaceC0219uc interfaceC0219uc, Ic ic) {
        Va va = (Va) interfaceC0219uc;
        int iH = va.h();
        if (iH == -1) {
            iH = ic.d(va);
            va.a(iH);
        }
        return g(iH) + iH;
    }

    public static int a(String str) {
        int length;
        try {
            length = C0136hd.a(str);
        } catch (C0156kd unused) {
            length = str.getBytes(Lb.f1500a).length;
        }
        return g(length) + length;
    }

    public static AbstractC0212tb a(byte[] bArr) {
        return new b(bArr, 0, bArr.length);
    }

    public static int b(double d2) {
        return 8;
    }

    public static int b(float f2) {
        return 4;
    }

    public static int b(int i, double d2) {
        return e(i) + 8;
    }

    public static int b(int i, float f2) {
        return e(i) + 4;
    }

    static int b(int i, InterfaceC0219uc interfaceC0219uc, Ic ic) {
        return e(i) + a(interfaceC0219uc, ic);
    }

    public static int b(int i, String str) {
        return e(i) + a(str);
    }

    public static int b(int i, boolean z) {
        return e(i) + 1;
    }

    public static int b(boolean z) {
        return 1;
    }

    public static int c(int i, AbstractC0099cb abstractC0099cb) {
        int iE = e(i);
        int iH = abstractC0099cb.h();
        return iE + g(iH) + iH;
    }

    @Deprecated
    static int c(int i, InterfaceC0219uc interfaceC0219uc, Ic ic) {
        int iE = e(i) << 1;
        Va va = (Va) interfaceC0219uc;
        int iH = va.h();
        if (iH == -1) {
            iH = ic.d(va);
            va.a(iH);
        }
        return iE + iH;
    }

    public static int d(int i, long j) {
        return e(i) + e(j);
    }

    public static int d(int i, AbstractC0099cb abstractC0099cb) {
        return (e(1) << 1) + g(2, i) + c(3, abstractC0099cb);
    }

    public static int d(long j) {
        return e(j);
    }

    public static int e(int i) {
        return g(i << 3);
    }

    public static int e(int i, long j) {
        return e(i) + e(j);
    }

    public static int e(long j) {
        int i;
        if (((-128) & j) == 0) {
            return 1;
        }
        if (j < 0) {
            return 10;
        }
        if (((-34359738368L) & j) != 0) {
            i = 6;
            j >>>= 28;
        } else {
            i = 2;
        }
        if (((-2097152) & j) != 0) {
            i += 2;
            j >>>= 14;
        }
        return (j & (-16384)) != 0 ? i + 1 : i;
    }

    public static int f(int i) {
        if (i >= 0) {
            return g(i);
        }
        return 10;
    }

    public static int f(int i, int i2) {
        return e(i) + f(i2);
    }

    public static int f(int i, long j) {
        return e(i) + e(i(j));
    }

    public static int f(long j) {
        return e(i(j));
    }

    public static int g(int i) {
        if ((i & (-128)) == 0) {
            return 1;
        }
        if ((i & (-16384)) == 0) {
            return 2;
        }
        if (((-2097152) & i) == 0) {
            return 3;
        }
        return (i & (-268435456)) == 0 ? 4 : 5;
    }

    public static int g(int i, int i2) {
        return e(i) + g(i2);
    }

    public static int g(int i, long j) {
        return e(i) + 8;
    }

    public static int g(long j) {
        return 8;
    }

    public static int h(int i) {
        return g(l(i));
    }

    public static int h(int i, int i2) {
        return e(i) + g(l(i2));
    }

    public static int h(int i, long j) {
        return e(i) + 8;
    }

    public static int h(long j) {
        return 8;
    }

    public static int i(int i) {
        return 4;
    }

    public static int i(int i, int i2) {
        return e(i) + 4;
    }

    private static long i(long j) {
        return (j >> 63) ^ (j << 1);
    }

    public static int j(int i) {
        return 4;
    }

    public static int j(int i, int i2) {
        return e(i) + 4;
    }

    public static int k(int i) {
        return f(i);
    }

    public static int k(int i, int i2) {
        return e(i) + f(i2);
    }

    private static int l(int i) {
        return (i >> 31) ^ (i << 1);
    }

    public abstract int a();

    public abstract void a(byte b2);

    public final void a(double d2) {
        c(Double.doubleToRawLongBits(d2));
    }

    public final void a(float f2) {
        d(Float.floatToRawIntBits(f2));
    }

    public abstract void a(int i);

    public final void a(int i, double d2) {
        c(i, Double.doubleToRawLongBits(d2));
    }

    public final void a(int i, float f2) {
        e(i, Float.floatToRawIntBits(f2));
    }

    public abstract void a(int i, int i2);

    public abstract void a(int i, long j);

    public abstract void a(int i, AbstractC0099cb abstractC0099cb);

    public abstract void a(int i, InterfaceC0219uc interfaceC0219uc);

    abstract void a(int i, InterfaceC0219uc interfaceC0219uc, Ic ic);

    public abstract void a(int i, String str);

    public abstract void a(int i, boolean z);

    public abstract void a(long j);

    final void a(String str, C0156kd c0156kd) throws a {
        f1817a.logp(Level.WARNING, "com.google.protobuf.CodedOutputStream", "inefficientWriteStringNoTag", "Converting ill-formed UTF-16. Your Protocol Buffer will not round trip correctly!", (Throwable) c0156kd);
        byte[] bytes = str.getBytes(Lb.f1500a);
        try {
            b(bytes.length);
            a(bytes, 0, bytes.length);
        } catch (a e2) {
            throw e2;
        } catch (IndexOutOfBoundsException e3) {
            throw new a(e3);
        }
    }

    public final void a(boolean z) {
        a(z ? (byte) 1 : (byte) 0);
    }

    public final void b() {
        if (a() != 0) {
            throw new IllegalStateException("Did not write as much data as expected.");
        }
    }

    public abstract void b(int i);

    public abstract void b(int i, int i2);

    public final void b(int i, long j) {
        a(i, i(j));
    }

    public abstract void b(int i, AbstractC0099cb abstractC0099cb);

    public final void b(long j) {
        a(i(j));
    }

    public final void c(int i) {
        b(l(i));
    }

    public abstract void c(int i, int i2);

    public abstract void c(int i, long j);

    public abstract void c(long j);

    public abstract void d(int i);

    public final void d(int i, int i2) {
        c(i, l(i2));
    }

    public abstract void e(int i, int i2);
}
