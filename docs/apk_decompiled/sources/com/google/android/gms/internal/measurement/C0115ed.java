package com.google.android.gms.internal.measurement;

import java.lang.reflect.Field;
import java.nio.Buffer;
import java.nio.ByteOrder;
import java.security.AccessController;
import java.util.logging.Level;
import java.util.logging.Logger;
import sun.misc.Unsafe;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ed, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0115ed {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Logger f1682a = Logger.getLogger(C0115ed.class.getName());

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Unsafe f1683b = c();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final Class<?> f1684c = _a.b();

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static final boolean f1685d = d(Long.TYPE);

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static final boolean f1686e = d(Integer.TYPE);

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private static final d f1687f;
    private static final boolean g;
    private static final boolean h;
    private static final long i;
    private static final long j;
    private static final long k;
    private static final long l;
    private static final long m;
    private static final long n;
    private static final long o;
    private static final long p;
    private static final long q;
    private static final long r;
    private static final long s;
    private static final long t;
    private static final long u;
    private static final long v;
    private static final int w;
    static final boolean x;

    /* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ed$a */
    static final class a extends d {
        a(Unsafe unsafe) {
            super(unsafe);
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final byte a(Object obj, long j) {
            return C0115ed.x ? C0115ed.k(obj, j) : C0115ed.l(obj, j);
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final void a(Object obj, long j, byte b2) {
            if (C0115ed.x) {
                C0115ed.c(obj, j, b2);
            } else {
                C0115ed.d(obj, j, b2);
            }
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final void a(Object obj, long j, double d2) {
            a(obj, j, Double.doubleToLongBits(d2));
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final void a(Object obj, long j, float f2) {
            a(obj, j, Float.floatToIntBits(f2));
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final void a(Object obj, long j, boolean z) {
            if (C0115ed.x) {
                C0115ed.d(obj, j, z);
            } else {
                C0115ed.e(obj, j, z);
            }
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final boolean b(Object obj, long j) {
            return C0115ed.x ? C0115ed.m(obj, j) : C0115ed.n(obj, j);
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final float c(Object obj, long j) {
            return Float.intBitsToFloat(e(obj, j));
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final double d(Object obj, long j) {
            return Double.longBitsToDouble(f(obj, j));
        }
    }

    /* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ed$b */
    static final class b extends d {
        b(Unsafe unsafe) {
            super(unsafe);
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final byte a(Object obj, long j) {
            return this.f1688a.getByte(obj, j);
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final void a(Object obj, long j, byte b2) {
            this.f1688a.putByte(obj, j, b2);
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final void a(Object obj, long j, double d2) {
            this.f1688a.putDouble(obj, j, d2);
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final void a(Object obj, long j, float f2) {
            this.f1688a.putFloat(obj, j, f2);
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final void a(Object obj, long j, boolean z) {
            this.f1688a.putBoolean(obj, j, z);
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final boolean b(Object obj, long j) {
            return this.f1688a.getBoolean(obj, j);
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final float c(Object obj, long j) {
            return this.f1688a.getFloat(obj, j);
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final double d(Object obj, long j) {
            return this.f1688a.getDouble(obj, j);
        }
    }

    /* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ed$c */
    static final class c extends d {
        c(Unsafe unsafe) {
            super(unsafe);
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final byte a(Object obj, long j) {
            return C0115ed.x ? C0115ed.k(obj, j) : C0115ed.l(obj, j);
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final void a(Object obj, long j, byte b2) {
            if (C0115ed.x) {
                C0115ed.c(obj, j, b2);
            } else {
                C0115ed.d(obj, j, b2);
            }
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final void a(Object obj, long j, double d2) {
            a(obj, j, Double.doubleToLongBits(d2));
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final void a(Object obj, long j, float f2) {
            a(obj, j, Float.floatToIntBits(f2));
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final void a(Object obj, long j, boolean z) {
            if (C0115ed.x) {
                C0115ed.d(obj, j, z);
            } else {
                C0115ed.e(obj, j, z);
            }
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final boolean b(Object obj, long j) {
            return C0115ed.x ? C0115ed.m(obj, j) : C0115ed.n(obj, j);
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final float c(Object obj, long j) {
            return Float.intBitsToFloat(e(obj, j));
        }

        @Override // com.google.android.gms.internal.measurement.C0115ed.d
        public final double d(Object obj, long j) {
            return Double.longBitsToDouble(f(obj, j));
        }
    }

    /* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ed$d */
    static abstract class d {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        Unsafe f1688a;

        d(Unsafe unsafe) {
            this.f1688a = unsafe;
        }

        public abstract byte a(Object obj, long j);

        public abstract void a(Object obj, long j, byte b2);

        public abstract void a(Object obj, long j, double d2);

        public abstract void a(Object obj, long j, float f2);

        public final void a(Object obj, long j, int i) {
            this.f1688a.putInt(obj, j, i);
        }

        public final void a(Object obj, long j, long j2) {
            this.f1688a.putLong(obj, j, j2);
        }

        public abstract void a(Object obj, long j, boolean z);

        public abstract boolean b(Object obj, long j);

        public abstract float c(Object obj, long j);

        public abstract double d(Object obj, long j);

        public final int e(Object obj, long j) {
            return this.f1688a.getInt(obj, j);
        }

        public final long f(Object obj, long j) {
            return this.f1688a.getLong(obj, j);
        }
    }

    static {
        d dVar;
        d bVar = null;
        if (f1683b != null) {
            if (!_a.a()) {
                bVar = new b(f1683b);
            } else if (f1685d) {
                bVar = new c(f1683b);
            } else if (f1686e) {
                bVar = new a(f1683b);
            }
        }
        f1687f = bVar;
        g = e();
        h = d();
        i = b(byte[].class);
        j = b(boolean[].class);
        k = c(boolean[].class);
        l = b(int[].class);
        m = c(int[].class);
        n = b(long[].class);
        o = c(long[].class);
        p = b(float[].class);
        q = c(float[].class);
        r = b(double[].class);
        s = c(double[].class);
        t = b(Object[].class);
        u = c(Object[].class);
        Field fieldF = f();
        v = (fieldF == null || (dVar = f1687f) == null) ? -1L : dVar.f1688a.objectFieldOffset(fieldF);
        w = (int) (i & 7);
        x = ByteOrder.nativeOrder() == ByteOrder.BIG_ENDIAN;
    }

    private C0115ed() {
    }

    static byte a(byte[] bArr, long j2) {
        return f1687f.a(bArr, i + j2);
    }

    static int a(Object obj, long j2) {
        return f1687f.e(obj, j2);
    }

    static <T> T a(Class<T> cls) {
        try {
            return (T) f1683b.allocateInstance(cls);
        } catch (InstantiationException e2) {
            throw new IllegalStateException(e2);
        }
    }

    private static Field a(Class<?> cls, String str) {
        try {
            return cls.getDeclaredField(str);
        } catch (Throwable unused) {
            return null;
        }
    }

    static void a(Object obj, long j2, double d2) {
        f1687f.a(obj, j2, d2);
    }

    static void a(Object obj, long j2, float f2) {
        f1687f.a(obj, j2, f2);
    }

    static void a(Object obj, long j2, int i2) {
        f1687f.a(obj, j2, i2);
    }

    static void a(Object obj, long j2, long j3) {
        f1687f.a(obj, j2, j3);
    }

    static void a(Object obj, long j2, Object obj2) {
        f1687f.f1688a.putObject(obj, j2, obj2);
    }

    static void a(Object obj, long j2, boolean z) {
        f1687f.a(obj, j2, z);
    }

    static void a(byte[] bArr, long j2, byte b2) {
        f1687f.a((Object) bArr, i + j2, b2);
    }

    static boolean a() {
        return h;
    }

    private static int b(Class<?> cls) {
        if (h) {
            return f1687f.f1688a.arrayBaseOffset(cls);
        }
        return -1;
    }

    static long b(Object obj, long j2) {
        return f1687f.f(obj, j2);
    }

    static boolean b() {
        return g;
    }

    private static int c(Class<?> cls) {
        if (h) {
            return f1687f.f1688a.arrayIndexScale(cls);
        }
        return -1;
    }

    static Unsafe c() {
        try {
            return (Unsafe) AccessController.doPrivileged(new C0129gd());
        } catch (Throwable unused) {
            return null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void c(Object obj, long j2, byte b2) {
        long j3 = (-4) & j2;
        int i2 = ((((int) j2) ^ (-1)) & 3) << 3;
        a(obj, j3, ((255 & b2) << i2) | (a(obj, j3) & ((255 << i2) ^ (-1))));
    }

    static boolean c(Object obj, long j2) {
        return f1687f.b(obj, j2);
    }

    static float d(Object obj, long j2) {
        return f1687f.c(obj, j2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void d(Object obj, long j2, byte b2) {
        long j3 = (-4) & j2;
        int i2 = (((int) j2) & 3) << 3;
        a(obj, j3, ((255 & b2) << i2) | (a(obj, j3) & ((255 << i2) ^ (-1))));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void d(Object obj, long j2, boolean z) {
        c(obj, j2, z ? (byte) 1 : (byte) 0);
    }

    private static boolean d() {
        Unsafe unsafe = f1683b;
        if (unsafe == null) {
            return false;
        }
        try {
            Class<?> cls = unsafe.getClass();
            cls.getMethod("objectFieldOffset", Field.class);
            cls.getMethod("arrayBaseOffset", Class.class);
            cls.getMethod("arrayIndexScale", Class.class);
            cls.getMethod("getInt", Object.class, Long.TYPE);
            cls.getMethod("putInt", Object.class, Long.TYPE, Integer.TYPE);
            cls.getMethod("getLong", Object.class, Long.TYPE);
            cls.getMethod("putLong", Object.class, Long.TYPE, Long.TYPE);
            cls.getMethod("getObject", Object.class, Long.TYPE);
            cls.getMethod("putObject", Object.class, Long.TYPE, Object.class);
            if (_a.a()) {
                return true;
            }
            cls.getMethod("getByte", Object.class, Long.TYPE);
            cls.getMethod("putByte", Object.class, Long.TYPE, Byte.TYPE);
            cls.getMethod("getBoolean", Object.class, Long.TYPE);
            cls.getMethod("putBoolean", Object.class, Long.TYPE, Boolean.TYPE);
            cls.getMethod("getFloat", Object.class, Long.TYPE);
            cls.getMethod("putFloat", Object.class, Long.TYPE, Float.TYPE);
            cls.getMethod("getDouble", Object.class, Long.TYPE);
            cls.getMethod("putDouble", Object.class, Long.TYPE, Double.TYPE);
            return true;
        } catch (Throwable th) {
            Logger logger = f1682a;
            Level level = Level.WARNING;
            String strValueOf = String.valueOf(th);
            StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 71);
            sb.append("platform method missing - proto runtime falling back to safer methods: ");
            sb.append(strValueOf);
            logger.logp(level, "com.google.protobuf.UnsafeUtil", "supportsUnsafeArrayOperations", sb.toString());
            return false;
        }
    }

    private static boolean d(Class<?> cls) {
        if (!_a.a()) {
            return false;
        }
        try {
            Class<?> cls2 = f1684c;
            cls2.getMethod("peekLong", cls, Boolean.TYPE);
            cls2.getMethod("pokeLong", cls, Long.TYPE, Boolean.TYPE);
            cls2.getMethod("pokeInt", cls, Integer.TYPE, Boolean.TYPE);
            cls2.getMethod("peekInt", cls, Boolean.TYPE);
            cls2.getMethod("pokeByte", cls, Byte.TYPE);
            cls2.getMethod("peekByte", cls);
            cls2.getMethod("pokeByteArray", cls, byte[].class, Integer.TYPE, Integer.TYPE);
            cls2.getMethod("peekByteArray", cls, byte[].class, Integer.TYPE, Integer.TYPE);
            return true;
        } catch (Throwable unused) {
            return false;
        }
    }

    static double e(Object obj, long j2) {
        return f1687f.d(obj, j2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void e(Object obj, long j2, boolean z) {
        d(obj, j2, z ? (byte) 1 : (byte) 0);
    }

    private static boolean e() {
        Unsafe unsafe = f1683b;
        if (unsafe == null) {
            return false;
        }
        try {
            Class<?> cls = unsafe.getClass();
            cls.getMethod("objectFieldOffset", Field.class);
            cls.getMethod("getLong", Object.class, Long.TYPE);
            if (f() == null) {
                return false;
            }
            if (_a.a()) {
                return true;
            }
            cls.getMethod("getByte", Long.TYPE);
            cls.getMethod("putByte", Long.TYPE, Byte.TYPE);
            cls.getMethod("getInt", Long.TYPE);
            cls.getMethod("putInt", Long.TYPE, Integer.TYPE);
            cls.getMethod("getLong", Long.TYPE);
            cls.getMethod("putLong", Long.TYPE, Long.TYPE);
            cls.getMethod("copyMemory", Long.TYPE, Long.TYPE, Long.TYPE);
            cls.getMethod("copyMemory", Object.class, Long.TYPE, Object.class, Long.TYPE, Long.TYPE);
            return true;
        } catch (Throwable th) {
            Logger logger = f1682a;
            Level level = Level.WARNING;
            String strValueOf = String.valueOf(th);
            StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 71);
            sb.append("platform method missing - proto runtime falling back to safer methods: ");
            sb.append(strValueOf);
            logger.logp(level, "com.google.protobuf.UnsafeUtil", "supportsUnsafeByteBufferOperations", sb.toString());
            return false;
        }
    }

    static Object f(Object obj, long j2) {
        return f1687f.f1688a.getObject(obj, j2);
    }

    private static Field f() {
        Field fieldA;
        if (_a.a() && (fieldA = a((Class<?>) Buffer.class, "effectiveDirectAddress")) != null) {
            return fieldA;
        }
        Field fieldA2 = a((Class<?>) Buffer.class, "address");
        if (fieldA2 == null || fieldA2.getType() != Long.TYPE) {
            return null;
        }
        return fieldA2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static byte k(Object obj, long j2) {
        return (byte) (a(obj, (-4) & j2) >>> ((int) (((j2 ^ (-1)) & 3) << 3)));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static byte l(Object obj, long j2) {
        return (byte) (a(obj, (-4) & j2) >>> ((int) ((j2 & 3) << 3)));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static boolean m(Object obj, long j2) {
        return k(obj, j2) != 0;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static boolean n(Object obj, long j2) {
        return l(obj, j2) != 0;
    }
}
