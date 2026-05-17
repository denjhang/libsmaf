package com.google.android.gms.internal.measurement;

/* JADX WARN: Enum visitor error
jadx.core.utils.exceptions.JadxRuntimeException: Init of enum field 'i' uses external variables
	at jadx.core.dex.visitors.EnumVisitor.createEnumFieldByConstructor(EnumVisitor.java:451)
	at jadx.core.dex.visitors.EnumVisitor.processEnumFieldByField(EnumVisitor.java:372)
	at jadx.core.dex.visitors.EnumVisitor.processEnumFieldByWrappedInsn(EnumVisitor.java:337)
	at jadx.core.dex.visitors.EnumVisitor.extractEnumFieldsFromFilledArray(EnumVisitor.java:322)
	at jadx.core.dex.visitors.EnumVisitor.extractEnumFieldsFromInsn(EnumVisitor.java:262)
	at jadx.core.dex.visitors.EnumVisitor.convertToEnum(EnumVisitor.java:151)
	at jadx.core.dex.visitors.EnumVisitor.visit(EnumVisitor.java:100)
 */
/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.pd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class EnumC0191pd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final EnumC0191pd f1779a = new EnumC0191pd("DOUBLE", 0, EnumC0208sd.DOUBLE, 1);

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public static final EnumC0191pd f1780b = new EnumC0191pd("FLOAT", 1, EnumC0208sd.FLOAT, 5);

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    public static final EnumC0191pd f1781c = new EnumC0191pd("INT64", 2, EnumC0208sd.LONG, 0);

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    public static final EnumC0191pd f1782d = new EnumC0191pd("UINT64", 3, EnumC0208sd.LONG, 0);

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    public static final EnumC0191pd f1783e = new EnumC0191pd("INT32", 4, EnumC0208sd.INT, 0);

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    public static final EnumC0191pd f1784f = new EnumC0191pd("FIXED64", 5, EnumC0208sd.LONG, 1);
    public static final EnumC0191pd g = new EnumC0191pd("FIXED32", 6, EnumC0208sd.INT, 5);
    public static final EnumC0191pd h = new EnumC0191pd("BOOL", 7, EnumC0208sd.BOOLEAN, 0);
    public static final EnumC0191pd i;
    public static final EnumC0191pd j;
    public static final EnumC0191pd k;
    public static final EnumC0191pd l;
    public static final EnumC0191pd m;
    public static final EnumC0191pd n;
    public static final EnumC0191pd o;
    public static final EnumC0191pd p;
    public static final EnumC0191pd q;
    public static final EnumC0191pd r;
    private static final /* synthetic */ EnumC0191pd[] s;
    private final EnumC0208sd t;
    private final int u;

    static {
        final int i2 = 2;
        final int i3 = 3;
        final EnumC0208sd enumC0208sd = EnumC0208sd.STRING;
        final int i4 = 8;
        final String str = "STRING";
        i = new EnumC0191pd(str, i4, enumC0208sd, i2) { // from class: com.google.android.gms.internal.measurement.od
            {
                int i5 = 8;
                int i6 = 2;
                C0170md c0170md = null;
            }
        };
        final EnumC0208sd enumC0208sd2 = EnumC0208sd.MESSAGE;
        final int i5 = 9;
        final String str2 = "GROUP";
        j = new EnumC0191pd(str2, i5, enumC0208sd2, i3) { // from class: com.google.android.gms.internal.measurement.rd
            {
                int i6 = 9;
                int i7 = 3;
                C0170md c0170md = null;
            }
        };
        final EnumC0208sd enumC0208sd3 = EnumC0208sd.MESSAGE;
        final int i6 = 10;
        final String str3 = "MESSAGE";
        k = new EnumC0191pd(str3, i6, enumC0208sd3, i2) { // from class: com.google.android.gms.internal.measurement.qd
            {
                int i7 = 10;
                int i8 = 2;
                C0170md c0170md = null;
            }
        };
        final EnumC0208sd enumC0208sd4 = EnumC0208sd.BYTE_STRING;
        final int i7 = 11;
        final String str4 = "BYTES";
        l = new EnumC0191pd(str4, i7, enumC0208sd4, i2) { // from class: com.google.android.gms.internal.measurement.td
            {
                int i8 = 11;
                int i9 = 2;
                C0170md c0170md = null;
            }
        };
        m = new EnumC0191pd("UINT32", 12, EnumC0208sd.INT, 0);
        n = new EnumC0191pd("ENUM", 13, EnumC0208sd.ENUM, 0);
        o = new EnumC0191pd("SFIXED32", 14, EnumC0208sd.INT, 5);
        p = new EnumC0191pd("SFIXED64", 15, EnumC0208sd.LONG, 1);
        q = new EnumC0191pd("SINT32", 16, EnumC0208sd.INT, 0);
        r = new EnumC0191pd("SINT64", 17, EnumC0208sd.LONG, 0);
        s = new EnumC0191pd[]{f1779a, f1780b, f1781c, f1782d, f1783e, f1784f, g, h, i, j, k, l, m, n, o, p, q, r};
    }

    private EnumC0191pd(String str, int i2, EnumC0208sd enumC0208sd, int i3) {
        this.t = enumC0208sd;
        this.u = i3;
    }

    /* synthetic */ EnumC0191pd(String str, int i2, EnumC0208sd enumC0208sd, int i3, C0170md c0170md) {
        this(str, i2, enumC0208sd, i3);
    }

    public static EnumC0191pd[] values() {
        return (EnumC0191pd[]) s.clone();
    }
}
