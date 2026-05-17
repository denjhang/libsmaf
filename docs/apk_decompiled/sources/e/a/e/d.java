package e.a.e;

import f.z;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import org.apache.http.HttpHost;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.client.methods.HttpPost;
import org.apache.http.cookie.ClientCookie;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final c[] f3003a = {new c(c.f3002f, ""), new c(c.f2999c, HttpGet.METHOD_NAME), new c(c.f2999c, HttpPost.METHOD_NAME), new c(c.f3000d, "/"), new c(c.f3000d, "/index.html"), new c(c.f3001e, HttpHost.DEFAULT_SCHEME_NAME), new c(c.f3001e, "https"), new c(c.f2998b, "200"), new c(c.f2998b, "204"), new c(c.f2998b, "206"), new c(c.f2998b, "304"), new c(c.f2998b, "400"), new c(c.f2998b, "404"), new c(c.f2998b, "500"), new c("accept-charset", ""), new c("accept-encoding", "gzip, deflate"), new c("accept-language", ""), new c("accept-ranges", ""), new c("accept", ""), new c("access-control-allow-origin", ""), new c("age", ""), new c("allow", ""), new c("authorization", ""), new c("cache-control", ""), new c("content-disposition", ""), new c("content-encoding", ""), new c("content-language", ""), new c("content-length", ""), new c("content-location", ""), new c("content-range", ""), new c("content-type", ""), new c("cookie", ""), new c("date", ""), new c("etag", ""), new c("expect", ""), new c(ClientCookie.EXPIRES_ATTR, ""), new c("from", ""), new c("host", ""), new c("if-match", ""), new c("if-modified-since", ""), new c("if-none-match", ""), new c("if-range", ""), new c("if-unmodified-since", ""), new c("last-modified", ""), new c("link", ""), new c("location", ""), new c("max-forwards", ""), new c("proxy-authenticate", ""), new c("proxy-authorization", ""), new c("range", ""), new c("referer", ""), new c("refresh", ""), new c("retry-after", ""), new c("server", ""), new c("set-cookie", ""), new c("strict-transport-security", ""), new c("transfer-encoding", ""), new c("user-agent", ""), new c("vary", ""), new c("via", ""), new c("www-authenticate", "")};

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    static final Map<f.i, Integer> f3004b = a();

    static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final List<c> f3005a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final f.h f3006b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final int f3007c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private int f3008d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        c[] f3009e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        int f3010f;
        int g;
        int h;

        a(int i, int i2, z zVar) {
            this.f3005a = new ArrayList();
            this.f3009e = new c[8];
            this.f3010f = this.f3009e.length - 1;
            this.g = 0;
            this.h = 0;
            this.f3007c = i;
            this.f3008d = i2;
            this.f3006b = f.r.a(zVar);
        }

        a(int i, z zVar) {
            this(i, i, zVar);
        }

        private int a(int i) {
            return this.f3010f + 1 + i;
        }

        private void a(int i, c cVar) {
            this.f3005a.add(cVar);
            int i2 = cVar.i;
            if (i != -1) {
                i2 -= this.f3009e[a(i)].i;
            }
            int i3 = this.f3008d;
            if (i2 > i3) {
                e();
                return;
            }
            int iB = b((this.h + i2) - i3);
            if (i == -1) {
                int i4 = this.g + 1;
                c[] cVarArr = this.f3009e;
                if (i4 > cVarArr.length) {
                    c[] cVarArr2 = new c[cVarArr.length * 2];
                    System.arraycopy(cVarArr, 0, cVarArr2, cVarArr.length, cVarArr.length);
                    this.f3010f = this.f3009e.length - 1;
                    this.f3009e = cVarArr2;
                }
                int i5 = this.f3010f;
                this.f3010f = i5 - 1;
                this.f3009e[i5] = cVar;
                this.g++;
            } else {
                this.f3009e[i + a(i) + iB] = cVar;
            }
            this.h += i2;
        }

        private int b(int i) {
            int i2 = 0;
            if (i > 0) {
                int length = this.f3009e.length;
                while (true) {
                    length--;
                    if (length < this.f3010f || i <= 0) {
                        break;
                    }
                    c[] cVarArr = this.f3009e;
                    i -= cVarArr[length].i;
                    this.h -= cVarArr[length].i;
                    this.g--;
                    i2++;
                }
                c[] cVarArr2 = this.f3009e;
                int i3 = this.f3010f;
                System.arraycopy(cVarArr2, i3 + 1, cVarArr2, i3 + 1 + i2, this.g);
                this.f3010f += i2;
            }
            return i2;
        }

        private f.i c(int i) throws IOException {
            c cVar;
            if (!d(i)) {
                int iA = a(i - d.f3003a.length);
                if (iA >= 0) {
                    c[] cVarArr = this.f3009e;
                    if (iA < cVarArr.length) {
                        cVar = cVarArr[iA];
                    }
                }
                throw new IOException("Header index too large " + (i + 1));
            }
            cVar = d.f3003a[i];
            return cVar.g;
        }

        private void d() {
            int i = this.f3008d;
            int i2 = this.h;
            if (i < i2) {
                if (i == 0) {
                    e();
                } else {
                    b(i2 - i);
                }
            }
        }

        private boolean d(int i) {
            return i >= 0 && i <= d.f3003a.length - 1;
        }

        private void e() {
            Arrays.fill(this.f3009e, (Object) null);
            this.f3010f = this.f3009e.length - 1;
            this.g = 0;
            this.h = 0;
        }

        private void e(int i) throws IOException {
            if (d(i)) {
                this.f3005a.add(d.f3003a[i]);
                return;
            }
            int iA = a(i - d.f3003a.length);
            if (iA >= 0) {
                c[] cVarArr = this.f3009e;
                if (iA < cVarArr.length) {
                    this.f3005a.add(cVarArr[iA]);
                    return;
                }
            }
            throw new IOException("Header index too large " + (i + 1));
        }

        private int f() {
            return this.f3006b.readByte() & 255;
        }

        private void f(int i) {
            a(-1, new c(c(i), b()));
        }

        private void g() throws IOException {
            f.i iVarB = b();
            d.a(iVarB);
            a(-1, new c(iVarB, b()));
        }

        private void g(int i) throws IOException {
            this.f3005a.add(new c(c(i), b()));
        }

        private void h() throws IOException {
            f.i iVarB = b();
            d.a(iVarB);
            this.f3005a.add(new c(iVarB, b()));
        }

        int a(int i, int i2) {
            int i3 = i & i2;
            if (i3 < i2) {
                return i3;
            }
            int i4 = 0;
            while (true) {
                int iF = f();
                if ((iF & 128) == 0) {
                    return i2 + (iF << i4);
                }
                i2 += (iF & 127) << i4;
                i4 += 7;
            }
        }

        public List<c> a() {
            ArrayList arrayList = new ArrayList(this.f3005a);
            this.f3005a.clear();
            return arrayList;
        }

        f.i b() {
            int iF = f();
            boolean z = (iF & 128) == 128;
            int iA = a(iF, 127);
            return z ? f.i.a(u.a().a(this.f3006b.d(iA))) : this.f3006b.b(iA);
        }

        void c() {
            while (!this.f3006b.q()) {
                int i = this.f3006b.readByte() & 255;
                if (i == 128) {
                    throw new IOException("index == 0");
                }
                if ((i & 128) == 128) {
                    e(a(i, 127) - 1);
                } else if (i == 64) {
                    g();
                } else if ((i & 64) == 64) {
                    f(a(i, 63) - 1);
                } else if ((i & 32) == 32) {
                    this.f3008d = a(i, 31);
                    int i2 = this.f3008d;
                    if (i2 < 0 || i2 > this.f3007c) {
                        throw new IOException("Invalid dynamic table size update " + this.f3008d);
                    }
                    d();
                } else if (i == 16 || i == 0) {
                    h();
                } else {
                    g(a(i, 15) - 1);
                }
            }
        }
    }

    static final class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final f.f f3011a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final boolean f3012b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private int f3013c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private boolean f3014d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        int f3015e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        int f3016f;
        c[] g;
        int h;
        int i;
        int j;

        b(int i, boolean z, f.f fVar) {
            this.f3013c = Integer.MAX_VALUE;
            this.g = new c[8];
            this.h = this.g.length - 1;
            this.i = 0;
            this.j = 0;
            this.f3015e = i;
            this.f3016f = i;
            this.f3012b = z;
            this.f3011a = fVar;
        }

        b(f.f fVar) {
            this(4096, true, fVar);
        }

        private void a() {
            int i = this.f3016f;
            int i2 = this.j;
            if (i < i2) {
                if (i == 0) {
                    b();
                } else {
                    b(i2 - i);
                }
            }
        }

        private void a(c cVar) {
            int i = cVar.i;
            int i2 = this.f3016f;
            if (i > i2) {
                b();
                return;
            }
            b((this.j + i) - i2);
            int i3 = this.i + 1;
            c[] cVarArr = this.g;
            if (i3 > cVarArr.length) {
                c[] cVarArr2 = new c[cVarArr.length * 2];
                System.arraycopy(cVarArr, 0, cVarArr2, cVarArr.length, cVarArr.length);
                this.h = this.g.length - 1;
                this.g = cVarArr2;
            }
            int i4 = this.h;
            this.h = i4 - 1;
            this.g[i4] = cVar;
            this.i++;
            this.j += i;
        }

        private int b(int i) {
            int i2 = 0;
            if (i > 0) {
                int length = this.g.length;
                while (true) {
                    length--;
                    if (length < this.h || i <= 0) {
                        break;
                    }
                    c[] cVarArr = this.g;
                    i -= cVarArr[length].i;
                    this.j -= cVarArr[length].i;
                    this.i--;
                    i2++;
                }
                c[] cVarArr2 = this.g;
                int i3 = this.h;
                System.arraycopy(cVarArr2, i3 + 1, cVarArr2, i3 + 1 + i2, this.i);
                c[] cVarArr3 = this.g;
                int i4 = this.h;
                Arrays.fill(cVarArr3, i4 + 1, i4 + 1 + i2, (Object) null);
                this.h += i2;
            }
            return i2;
        }

        private void b() {
            Arrays.fill(this.g, (Object) null);
            this.h = this.g.length - 1;
            this.i = 0;
            this.j = 0;
        }

        void a(int i) {
            this.f3015e = i;
            int iMin = Math.min(i, 16384);
            int i2 = this.f3016f;
            if (i2 == iMin) {
                return;
            }
            if (iMin < i2) {
                this.f3013c = Math.min(this.f3013c, iMin);
            }
            this.f3014d = true;
            this.f3016f = iMin;
            a();
        }

        void a(int i, int i2, int i3) {
            int i4;
            f.f fVar;
            if (i < i2) {
                fVar = this.f3011a;
                i4 = i | i3;
            } else {
                this.f3011a.writeByte(i3 | i2);
                i4 = i - i2;
                while (i4 >= 128) {
                    this.f3011a.writeByte(128 | (i4 & 127));
                    i4 >>>= 7;
                }
                fVar = this.f3011a;
            }
            fVar.writeByte(i4);
        }

        void a(f.i iVar) {
            int iE;
            int i;
            if (!this.f3012b || u.a().a(iVar) >= iVar.e()) {
                iE = iVar.e();
                i = 0;
            } else {
                f.f fVar = new f.f();
                u.a().a(iVar, fVar);
                iVar = fVar.e();
                iE = iVar.e();
                i = 128;
            }
            a(iE, 127, i);
            this.f3011a.a(iVar);
        }

        /* JADX WARN: Removed duplicated region for block: B:22:0x006c  */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        void a(java.util.List<e.a.e.c> r14) {
            /*
                Method dump skipped, instruction units count: 233
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: e.a.e.d.b.a(java.util.List):void");
        }
    }

    static f.i a(f.i iVar) throws IOException {
        int iE = iVar.e();
        for (int i = 0; i < iE; i++) {
            byte bA = iVar.a(i);
            if (bA >= 65 && bA <= 90) {
                throw new IOException("PROTOCOL_ERROR response malformed: mixed case name: " + iVar.h());
            }
        }
        return iVar;
    }

    private static Map<f.i, Integer> a() {
        LinkedHashMap linkedHashMap = new LinkedHashMap(f3003a.length);
        int i = 0;
        while (true) {
            c[] cVarArr = f3003a;
            if (i >= cVarArr.length) {
                return Collections.unmodifiableMap(linkedHashMap);
            }
            if (!linkedHashMap.containsKey(cVarArr[i].g)) {
                linkedHashMap.put(f3003a[i].g, Integer.valueOf(i));
            }
            i++;
        }
    }
}
