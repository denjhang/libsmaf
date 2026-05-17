package e.a.a;

import e.C0412e;
import e.H;
import e.K;
import e.a.c.f;
import e.z;
import java.util.Date;
import java.util.concurrent.TimeUnit;
import org.apache.http.HttpHeaders;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final H f2899a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public final K f2900b;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final long f2901a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final H f2902b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        final K f2903c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private Date f2904d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private String f2905e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        private Date f2906f;
        private String g;
        private Date h;
        private long i;
        private long j;
        private String k;
        private int l;

        public a(long j, H h, K k) {
            this.l = -1;
            this.f2901a = j;
            this.f2902b = h;
            this.f2903c = k;
            if (k != null) {
                this.i = k.j();
                this.j = k.h();
                z zVarE = k.e();
                int iB = zVarE.b();
                for (int i = 0; i < iB; i++) {
                    String strA = zVarE.a(i);
                    String strB = zVarE.b(i);
                    if ("Date".equalsIgnoreCase(strA)) {
                        this.f2904d = e.a.c.e.a(strB);
                        this.f2905e = strB;
                    } else if (HttpHeaders.EXPIRES.equalsIgnoreCase(strA)) {
                        this.h = e.a.c.e.a(strB);
                    } else if (HttpHeaders.LAST_MODIFIED.equalsIgnoreCase(strA)) {
                        this.f2906f = e.a.c.e.a(strB);
                        this.g = strB;
                    } else if (HttpHeaders.ETAG.equalsIgnoreCase(strA)) {
                        this.k = strB;
                    } else if (HttpHeaders.AGE.equalsIgnoreCase(strA)) {
                        this.l = f.a(strB, -1);
                    }
                }
            }
        }

        private static boolean a(H h) {
            return (h.a(HttpHeaders.IF_MODIFIED_SINCE) == null && h.a(HttpHeaders.IF_NONE_MATCH) == null) ? false : true;
        }

        private long b() {
            Date date = this.f2904d;
            long jMax = date != null ? Math.max(0L, this.j - date.getTime()) : 0L;
            int i = this.l;
            if (i != -1) {
                jMax = Math.max(jMax, TimeUnit.SECONDS.toMillis(i));
            }
            long j = this.j;
            return jMax + (j - this.i) + (this.f2901a - j);
        }

        private long c() {
            if (this.f2903c.b().d() != -1) {
                return TimeUnit.SECONDS.toMillis(r0.d());
            }
            if (this.h != null) {
                Date date = this.f2904d;
                long time = this.h.getTime() - (date != null ? date.getTime() : this.j);
                if (time > 0) {
                    return time;
                }
                return 0L;
            }
            if (this.f2906f == null || this.f2903c.i().g().k() != null) {
                return 0L;
            }
            Date date2 = this.f2904d;
            long time2 = (date2 != null ? date2.getTime() : this.i) - this.f2906f.getTime();
            if (time2 > 0) {
                return time2 / 10;
            }
            return 0L;
        }

        private d d() {
            if (this.f2903c == null) {
                return new d(this.f2902b, null);
            }
            if ((!this.f2902b.d() || this.f2903c.d() != null) && d.a(this.f2903c, this.f2902b)) {
                C0412e c0412eB = this.f2902b.b();
                if (c0412eB.h() || a(this.f2902b)) {
                    return new d(this.f2902b, null);
                }
                C0412e c0412eB2 = this.f2903c.b();
                if (c0412eB2.a()) {
                    return new d(null, this.f2903c);
                }
                long jB = b();
                long jC = c();
                if (c0412eB.d() != -1) {
                    jC = Math.min(jC, TimeUnit.SECONDS.toMillis(c0412eB.d()));
                }
                long millis = 0;
                long millis2 = c0412eB.f() != -1 ? TimeUnit.SECONDS.toMillis(c0412eB.f()) : 0L;
                if (!c0412eB2.g() && c0412eB.e() != -1) {
                    millis = TimeUnit.SECONDS.toMillis(c0412eB.e());
                }
                if (!c0412eB2.h()) {
                    long j = millis2 + jB;
                    if (j < millis + jC) {
                        K.a aVarF = this.f2903c.f();
                        if (j >= jC) {
                            aVarF.a(HttpHeaders.WARNING, "110 HttpURLConnection \"Response is stale\"");
                        }
                        if (jB > 86400000 && e()) {
                            aVarF.a(HttpHeaders.WARNING, "113 HttpURLConnection \"Heuristic expiration\"");
                        }
                        return new d(null, aVarF.a());
                    }
                }
                String str = this.k;
                String str2 = HttpHeaders.IF_MODIFIED_SINCE;
                if (str != null) {
                    str2 = HttpHeaders.IF_NONE_MATCH;
                } else if (this.f2906f != null) {
                    str = this.g;
                } else {
                    if (this.f2904d == null) {
                        return new d(this.f2902b, null);
                    }
                    str = this.f2905e;
                }
                z.a aVarA = this.f2902b.c().a();
                e.a.a.f2892a.a(aVarA, str2, str);
                H.a aVarF2 = this.f2902b.f();
                aVarF2.a(aVarA.a());
                return new d(aVarF2.a(), this.f2903c);
            }
            return new d(this.f2902b, null);
        }

        private boolean e() {
            return this.f2903c.b().d() == -1 && this.h == null;
        }

        public d a() {
            d dVarD = d();
            return (dVarD.f2899a == null || !this.f2902b.b().j()) ? dVarD : new d(null, null);
        }
    }

    d(H h, K k) {
        this.f2899a = h;
        this.f2900b = k;
    }

    /* JADX WARN: Code restructure failed: missing block: B:31:0x0056, code lost:
    
        if (r3.b().b() == false) goto L33;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static boolean a(e.K r3, e.H r4) {
        /*
            int r0 = r3.c()
            r1 = 200(0xc8, float:2.8E-43)
            r2 = 0
            if (r0 == r1) goto L5a
            r1 = 410(0x19a, float:5.75E-43)
            if (r0 == r1) goto L5a
            r1 = 414(0x19e, float:5.8E-43)
            if (r0 == r1) goto L5a
            r1 = 501(0x1f5, float:7.02E-43)
            if (r0 == r1) goto L5a
            r1 = 203(0xcb, float:2.84E-43)
            if (r0 == r1) goto L5a
            r1 = 204(0xcc, float:2.86E-43)
            if (r0 == r1) goto L5a
            r1 = 307(0x133, float:4.3E-43)
            if (r0 == r1) goto L31
            r1 = 308(0x134, float:4.32E-43)
            if (r0 == r1) goto L5a
            r1 = 404(0x194, float:5.66E-43)
            if (r0 == r1) goto L5a
            r1 = 405(0x195, float:5.68E-43)
            if (r0 == r1) goto L5a
            switch(r0) {
                case 300: goto L5a;
                case 301: goto L5a;
                case 302: goto L31;
                default: goto L30;
            }
        L30:
            goto L59
        L31:
            java.lang.String r0 = "Expires"
            java.lang.String r0 = r3.a(r0)
            if (r0 != 0) goto L5a
            e.e r0 = r3.b()
            int r0 = r0.d()
            r1 = -1
            if (r0 != r1) goto L5a
            e.e r0 = r3.b()
            boolean r0 = r0.c()
            if (r0 != 0) goto L5a
            e.e r0 = r3.b()
            boolean r0 = r0.b()
            if (r0 == 0) goto L59
            goto L5a
        L59:
            return r2
        L5a:
            e.e r3 = r3.b()
            boolean r3 = r3.i()
            if (r3 != 0) goto L6f
            e.e r3 = r4.b()
            boolean r3 = r3.i()
            if (r3 != 0) goto L6f
            r2 = 1
        L6f:
            return r2
        */
        throw new UnsupportedOperationException("Method not decompiled: e.a.a.d.a(e.K, e.H):boolean");
    }
}
