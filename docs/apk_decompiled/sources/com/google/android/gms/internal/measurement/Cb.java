package com.google.android.gms.internal.measurement;

import java.lang.reflect.Type;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public enum Cb {
    DOUBLE(0, Eb.SCALAR, Wb.DOUBLE),
    FLOAT(1, Eb.SCALAR, Wb.FLOAT),
    INT64(2, Eb.SCALAR, Wb.LONG),
    UINT64(3, Eb.SCALAR, Wb.LONG),
    INT32(4, Eb.SCALAR, Wb.INT),
    FIXED64(5, Eb.SCALAR, Wb.LONG),
    FIXED32(6, Eb.SCALAR, Wb.INT),
    BOOL(7, Eb.SCALAR, Wb.BOOLEAN),
    STRING(8, Eb.SCALAR, Wb.STRING),
    MESSAGE(9, Eb.SCALAR, Wb.MESSAGE),
    BYTES(10, Eb.SCALAR, Wb.BYTE_STRING),
    UINT32(11, Eb.SCALAR, Wb.INT),
    ENUM(12, Eb.SCALAR, Wb.ENUM),
    SFIXED32(13, Eb.SCALAR, Wb.INT),
    SFIXED64(14, Eb.SCALAR, Wb.LONG),
    SINT32(15, Eb.SCALAR, Wb.INT),
    SINT64(16, Eb.SCALAR, Wb.LONG),
    GROUP(17, Eb.SCALAR, Wb.MESSAGE),
    DOUBLE_LIST(18, Eb.VECTOR, Wb.DOUBLE),
    FLOAT_LIST(19, Eb.VECTOR, Wb.FLOAT),
    INT64_LIST(20, Eb.VECTOR, Wb.LONG),
    UINT64_LIST(21, Eb.VECTOR, Wb.LONG),
    INT32_LIST(22, Eb.VECTOR, Wb.INT),
    FIXED64_LIST(23, Eb.VECTOR, Wb.LONG),
    FIXED32_LIST(24, Eb.VECTOR, Wb.INT),
    BOOL_LIST(25, Eb.VECTOR, Wb.BOOLEAN),
    STRING_LIST(26, Eb.VECTOR, Wb.STRING),
    MESSAGE_LIST(27, Eb.VECTOR, Wb.MESSAGE),
    BYTES_LIST(28, Eb.VECTOR, Wb.BYTE_STRING),
    UINT32_LIST(29, Eb.VECTOR, Wb.INT),
    ENUM_LIST(30, Eb.VECTOR, Wb.ENUM),
    SFIXED32_LIST(31, Eb.VECTOR, Wb.INT),
    SFIXED64_LIST(32, Eb.VECTOR, Wb.LONG),
    SINT32_LIST(33, Eb.VECTOR, Wb.INT),
    SINT64_LIST(34, Eb.VECTOR, Wb.LONG),
    DOUBLE_LIST_PACKED(35, Eb.PACKED_VECTOR, Wb.DOUBLE),
    FLOAT_LIST_PACKED(36, Eb.PACKED_VECTOR, Wb.FLOAT),
    INT64_LIST_PACKED(37, Eb.PACKED_VECTOR, Wb.LONG),
    UINT64_LIST_PACKED(38, Eb.PACKED_VECTOR, Wb.LONG),
    INT32_LIST_PACKED(39, Eb.PACKED_VECTOR, Wb.INT),
    FIXED64_LIST_PACKED(40, Eb.PACKED_VECTOR, Wb.LONG),
    FIXED32_LIST_PACKED(41, Eb.PACKED_VECTOR, Wb.INT),
    BOOL_LIST_PACKED(42, Eb.PACKED_VECTOR, Wb.BOOLEAN),
    UINT32_LIST_PACKED(43, Eb.PACKED_VECTOR, Wb.INT),
    ENUM_LIST_PACKED(44, Eb.PACKED_VECTOR, Wb.ENUM),
    SFIXED32_LIST_PACKED(45, Eb.PACKED_VECTOR, Wb.INT),
    SFIXED64_LIST_PACKED(46, Eb.PACKED_VECTOR, Wb.LONG),
    SINT32_LIST_PACKED(47, Eb.PACKED_VECTOR, Wb.INT),
    SINT64_LIST_PACKED(48, Eb.PACKED_VECTOR, Wb.LONG),
    GROUP_LIST(49, Eb.VECTOR, Wb.MESSAGE),
    MAP(50, Eb.MAP, Wb.VOID);

    private static final Cb[] Z;
    private static final Type[] aa = new Type[0];
    private final Wb ca;
    private final int da;
    private final Eb ea;
    private final Class<?> fa;
    private final boolean ga;

    static {
        Cb[] cbArrValues = values();
        Z = new Cb[cbArrValues.length];
        for (Cb cb : cbArrValues) {
            Z[cb.da] = cb;
        }
    }

    Cb(int i, Eb eb, Wb wb) {
        int i2;
        this.da = i;
        this.ea = eb;
        this.ca = wb;
        int i3 = Gb.f1455a[eb.ordinal()];
        this.fa = (i3 == 1 || i3 == 2) ? wb.a() : null;
        boolean z = false;
        if (eb == Eb.SCALAR && (i2 = Gb.f1456b[wb.ordinal()]) != 1 && i2 != 2 && i2 != 3) {
            z = true;
        }
        this.ga = z;
    }

    public final int a() {
        return this.da;
    }
}
