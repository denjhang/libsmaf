package e;

import java.util.concurrent.TimeUnit;

/* JADX INFO: renamed from: e.e, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0412e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final C0412e f3155a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public static final C0412e f3156b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final boolean f3157c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final boolean f3158d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final int f3159e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final int f3160f;
    private final boolean g;
    private final boolean h;
    private final boolean i;
    private final int j;
    private final int k;
    private final boolean l;
    private final boolean m;
    private final boolean n;
    String o;

    /* JADX INFO: renamed from: e.e$a */
    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        boolean f3161a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        boolean f3162b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        int f3163c = -1;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        int f3164d = -1;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        int f3165e = -1;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        boolean f3166f;
        boolean g;
        boolean h;

        public a a(int i, TimeUnit timeUnit) {
            if (i >= 0) {
                long seconds = timeUnit.toSeconds(i);
                this.f3164d = seconds > 2147483647L ? Integer.MAX_VALUE : (int) seconds;
                return this;
            }
            throw new IllegalArgumentException("maxStale < 0: " + i);
        }

        public C0412e a() {
            return new C0412e(this);
        }

        public a b() {
            this.f3161a = true;
            return this;
        }

        public a c() {
            this.f3166f = true;
            return this;
        }
    }

    static {
        a aVar = new a();
        aVar.b();
        f3155a = aVar.a();
        a aVar2 = new a();
        aVar2.c();
        aVar2.a(Integer.MAX_VALUE, TimeUnit.SECONDS);
        f3156b = aVar2.a();
    }

    C0412e(a aVar) {
        this.f3157c = aVar.f3161a;
        this.f3158d = aVar.f3162b;
        this.f3159e = aVar.f3163c;
        this.f3160f = -1;
        this.g = false;
        this.h = false;
        this.i = false;
        this.j = aVar.f3164d;
        this.k = aVar.f3165e;
        this.l = aVar.f3166f;
        this.m = aVar.g;
        this.n = aVar.h;
    }

    private C0412e(boolean z, boolean z2, int i, int i2, boolean z3, boolean z4, boolean z5, int i3, int i4, boolean z6, boolean z7, boolean z8, String str) {
        this.f3157c = z;
        this.f3158d = z2;
        this.f3159e = i;
        this.f3160f = i2;
        this.g = z3;
        this.h = z4;
        this.i = z5;
        this.j = i3;
        this.k = i4;
        this.l = z6;
        this.m = z7;
        this.n = z8;
        this.o = str;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0041  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static e.C0412e a(e.z r22) {
        /*
            Method dump skipped, instruction units count: 340
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: e.C0412e.a(e.z):e.e");
    }

    private String k() {
        StringBuilder sb = new StringBuilder();
        if (this.f3157c) {
            sb.append("no-cache, ");
        }
        if (this.f3158d) {
            sb.append("no-store, ");
        }
        if (this.f3159e != -1) {
            sb.append("max-age=");
            sb.append(this.f3159e);
            sb.append(", ");
        }
        if (this.f3160f != -1) {
            sb.append("s-maxage=");
            sb.append(this.f3160f);
            sb.append(", ");
        }
        if (this.g) {
            sb.append("private, ");
        }
        if (this.h) {
            sb.append("public, ");
        }
        if (this.i) {
            sb.append("must-revalidate, ");
        }
        if (this.j != -1) {
            sb.append("max-stale=");
            sb.append(this.j);
            sb.append(", ");
        }
        if (this.k != -1) {
            sb.append("min-fresh=");
            sb.append(this.k);
            sb.append(", ");
        }
        if (this.l) {
            sb.append("only-if-cached, ");
        }
        if (this.m) {
            sb.append("no-transform, ");
        }
        if (this.n) {
            sb.append("immutable, ");
        }
        if (sb.length() == 0) {
            return "";
        }
        sb.delete(sb.length() - 2, sb.length());
        return sb.toString();
    }

    public boolean a() {
        return this.n;
    }

    public boolean b() {
        return this.g;
    }

    public boolean c() {
        return this.h;
    }

    public int d() {
        return this.f3159e;
    }

    public int e() {
        return this.j;
    }

    public int f() {
        return this.k;
    }

    public boolean g() {
        return this.i;
    }

    public boolean h() {
        return this.f3157c;
    }

    public boolean i() {
        return this.f3158d;
    }

    public boolean j() {
        return this.l;
    }

    public String toString() {
        String str = this.o;
        if (str != null) {
            return str;
        }
        String strK = k();
        this.o = strK;
        return strK;
    }
}
