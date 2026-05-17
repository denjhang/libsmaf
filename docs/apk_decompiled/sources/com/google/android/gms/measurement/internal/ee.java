package com.google.android.gms.measurement.internal;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteException;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Pair;
import com.google.android.gms.internal.measurement.C0164le;
import com.google.android.gms.internal.measurement.C0198qe;
import com.google.android.gms.internal.measurement.Ce;
import com.google.android.gms.internal.measurement.Q;
import com.google.android.gms.internal.measurement.T;
import com.google.android.gms.internal.measurement.U;
import com.google.android.gms.internal.measurement.V;
import com.google.android.gms.internal.measurement.Z;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.net.MalformedURLException;
import java.net.URL;
import java.nio.ByteBuffer;
import java.nio.channels.FileChannel;
import java.nio.channels.FileLock;
import java.nio.channels.OverlappingFileLockException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;
import org.apache.http.HttpHeaders;
import org.apache.http.HttpStatus;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class ee implements InterfaceC0371xc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile ee f2234a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Vb f2235b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private Ab f2236c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private C0269d f2237d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private Ib f2238e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private _d f2239f;
    private qe g;
    private final ie h;
    private C0288gd i;
    private final _b j;
    private boolean k;
    private boolean l;
    private boolean m;
    private long n;
    private List<Runnable> o;
    private int p;
    private int q;
    private boolean r;
    private boolean s;
    private boolean t;
    private FileLock u;
    private FileChannel v;
    private List<Long> w;
    private List<Long> x;
    private long y;

    class a implements InterfaceC0279f {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        com.google.android.gms.internal.measurement.V f2240a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        List<Long> f2241b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        List<com.google.android.gms.internal.measurement.Q> f2242c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private long f2243d;

        private a() {
        }

        /* synthetic */ a(ee eeVar, de deVar) {
            this();
        }

        private static long a(com.google.android.gms.internal.measurement.Q q) {
            return ((q.s() / 1000) / 60) / 60;
        }

        @Override // com.google.android.gms.measurement.internal.InterfaceC0279f
        public final void a(com.google.android.gms.internal.measurement.V v) {
            com.google.android.gms.common.internal.r.a(v);
            this.f2240a = v;
        }

        @Override // com.google.android.gms.measurement.internal.InterfaceC0279f
        public final boolean a(long j, com.google.android.gms.internal.measurement.Q q) {
            com.google.android.gms.common.internal.r.a(q);
            if (this.f2242c == null) {
                this.f2242c = new ArrayList();
            }
            if (this.f2241b == null) {
                this.f2241b = new ArrayList();
            }
            if (this.f2242c.size() > 0 && a(this.f2242c.get(0)) != a(q)) {
                return false;
            }
            long jF = this.f2243d + ((long) q.f());
            if (jF >= Math.max(0, C0324o.p.a(null).intValue())) {
                return false;
            }
            this.f2243d = jF;
            this.f2242c.add(q);
            this.f2241b.add(Long.valueOf(j));
            return this.f2242c.size() < Math.max(1, C0324o.q.a(null).intValue());
        }
    }

    private ee(je jeVar) {
        this(jeVar, null);
    }

    private ee(je jeVar, _b _bVar) {
        this.k = false;
        com.google.android.gms.common.internal.r.a(jeVar);
        this.j = _b.a(jeVar.f2297a, (com.google.android.gms.internal.measurement.zzv) null);
        this.y = -1L;
        ie ieVar = new ie(this);
        ieVar.t();
        this.h = ieVar;
        Ab ab = new Ab(this);
        ab.t();
        this.f2236c = ab;
        Vb vb = new Vb(this);
        vb.t();
        this.f2235b = vb;
        this.j.c().a(new de(this, jeVar));
    }

    private final long A() {
        long jA = this.j.g().a();
        Kb kbP = this.j.p();
        kbP.o();
        kbP.h();
        long jA2 = kbP.j.a();
        if (jA2 == 0) {
            jA2 = 1 + ((long) kbP.k().u().nextInt(86400000));
            kbP.j.a(jA2);
        }
        return ((((jA + jA2) / 1000) / 60) / 60) / 24;
    }

    private final boolean B() {
        z();
        p();
        return j().N() || !TextUtils.isEmpty(j().x());
    }

    private final void C() {
        C0331pb<Long> c0331pb;
        long jMax;
        z();
        p();
        if (w() || this.j.o().a(C0324o.na)) {
            if (this.n > 0) {
                long jAbs = 3600000 - Math.abs(this.j.g().b() - this.n);
                if (jAbs > 0) {
                    this.j.d().B().a("Upload has been suspended. Will update scheduling later in approximately ms", Long.valueOf(jAbs));
                    x().b();
                    y().v();
                    return;
                }
                this.n = 0L;
            }
            if (!this.j.m() || !B()) {
                this.j.d().B().a("Nothing to upload or uploading impossible");
                x().b();
                y().v();
                return;
            }
            long jA = this.j.g().a();
            long jMax2 = Math.max(0L, C0324o.H.a(null).longValue());
            boolean z = j().O() || j().J();
            if (z) {
                String strV = this.j.o().v();
                c0331pb = (TextUtils.isEmpty(strV) || ".none.".equals(strV)) ? C0324o.B : C0324o.C;
            } else {
                c0331pb = C0324o.A;
            }
            long jMax3 = Math.max(0L, c0331pb.a(null).longValue());
            long jA2 = this.j.p().f2014f.a();
            long jA3 = this.j.p().g.a();
            long jMax4 = Math.max(j().L(), j().M());
            if (jMax4 == 0) {
                jMax = 0;
            } else {
                long jAbs2 = jA - Math.abs(jMax4 - jA);
                long jAbs3 = jA - Math.abs(jA2 - jA);
                long jAbs4 = jA - Math.abs(jA3 - jA);
                long jMax5 = Math.max(jAbs3, jAbs4);
                long jMin = jAbs2 + jMax2;
                if (z && jMax5 > 0) {
                    jMin = Math.min(jAbs2, jMax5) + jMax3;
                }
                jMax = !m().a(jMax5, jMax3) ? jMax5 + jMax3 : jMin;
                if (jAbs4 != 0 && jAbs4 >= jAbs2) {
                    for (int i = 0; i < Math.min(20, Math.max(0, C0324o.J.a(null).intValue())); i++) {
                        jMax += Math.max(0L, C0324o.I.a(null).longValue()) * (1 << i);
                        if (jMax > jAbs4) {
                            break;
                        }
                    }
                    jMax = 0;
                }
            }
            if (jMax == 0) {
                this.j.d().B().a("Next upload time is 0");
                x().b();
                y().v();
                return;
            }
            if (!i().v()) {
                this.j.d().B().a("No network");
                x().a();
                y().v();
                return;
            }
            long jA4 = this.j.p().h.a();
            long jMax6 = Math.max(0L, C0324o.y.a(null).longValue());
            if (!m().a(jA4, jMax6)) {
                jMax = Math.max(jMax, jA4 + jMax6);
            }
            x().b();
            long jA5 = jMax - this.j.g().a();
            if (jA5 <= 0) {
                jA5 = Math.max(0L, C0324o.D.a(null).longValue());
                this.j.p().f2014f.a(this.j.g().a());
            }
            this.j.d().B().a("Upload scheduled in approximately ms", Long.valueOf(jA5));
            y().a(jA5);
        }
    }

    private final int a(FileChannel fileChannel) {
        z();
        if (fileChannel == null || !fileChannel.isOpen()) {
            this.j.d().t().a("Bad channel to read from");
            return 0;
        }
        ByteBuffer byteBufferAllocate = ByteBuffer.allocate(4);
        try {
            fileChannel.position(0L);
            int i = fileChannel.read(byteBufferAllocate);
            if (i == 4) {
                byteBufferAllocate.flip();
                return byteBufferAllocate.getInt();
            }
            if (i != -1) {
                this.j.d().w().a("Unexpected data length. Bytes read", Integer.valueOf(i));
            }
            return 0;
        } catch (IOException e2) {
            this.j.d().t().a("Failed to read from channel", e2);
            return 0;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0046  */
    /* JADX WARN: Removed duplicated region for block: B:15:0x0058  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x00dc  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x0100  */
    /* JADX WARN: Removed duplicated region for block: B:51:0x010e  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x0138  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x0146  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x0154  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x018e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private final com.google.android.gms.measurement.internal.C0267cc a(com.google.android.gms.measurement.internal.zzm r9, com.google.android.gms.measurement.internal.C0267cc r10, java.lang.String r11) {
        /*
            Method dump skipped, instruction units count: 406
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.ee.a(com.google.android.gms.measurement.internal.zzm, com.google.android.gms.measurement.internal.cc, java.lang.String):com.google.android.gms.measurement.internal.cc");
    }

    public static ee a(Context context) {
        com.google.android.gms.common.internal.r.a(context);
        com.google.android.gms.common.internal.r.a(context.getApplicationContext());
        if (f2234a == null) {
            synchronized (ee.class) {
                if (f2234a == null) {
                    f2234a = new ee(new je(context));
                }
            }
        }
        return f2234a;
    }

    private final zzm a(Context context, String str, String str2, boolean z, boolean z2, boolean z3, long j, String str3, String str4) {
        String installerPackageName;
        String str5;
        int i;
        PackageManager packageManager = context.getPackageManager();
        if (packageManager == null) {
            this.j.d().t().a("PackageManager is null, can not log app install information");
            return null;
        }
        try {
            installerPackageName = packageManager.getInstallerPackageName(str);
        } catch (IllegalArgumentException unused) {
            this.j.d().t().a("Error retrieving installer package name. appId", C0365wb.a(str));
            installerPackageName = "Unknown";
        }
        if (installerPackageName == null) {
            installerPackageName = "manual_install";
        } else if ("com.android.vending".equals(installerPackageName)) {
            installerPackageName = "";
        }
        String str6 = installerPackageName;
        try {
            PackageInfo packageInfoB = com.google.android.gms.common.a.c.a(context).b(str, 0);
            if (packageInfoB != null) {
                CharSequence charSequenceB = com.google.android.gms.common.a.c.a(context).b(str);
                if (!TextUtils.isEmpty(charSequenceB)) {
                    charSequenceB.toString();
                }
                str5 = packageInfoB.versionName;
                i = packageInfoB.versionCode;
            } else {
                str5 = "Unknown";
                i = Integer.MIN_VALUE;
            }
            this.j.f();
            return new zzm(str, str2, str5, i, str6, this.j.o().o(), this.j.v().a(context, str), (String) null, z, false, "", 0L, this.j.o().i(str) ? j : 0L, 0, z2, z3, false, str3, (Boolean) null, 0L, (List<String>) null, (Ce.a() && this.j.o().e(str, C0324o.Na)) ? str4 : null);
        } catch (PackageManager.NameNotFoundException unused2) {
            this.j.d().t().a("Error retrieving newly installed package info. appId, appName", C0365wb.a(str), "Unknown");
            return null;
        }
    }

    private final zzm a(String str) {
        C0267cc c0267ccB = j().b(str);
        if (c0267ccB == null || TextUtils.isEmpty(c0267ccB.u())) {
            this.j.d().A().a("No app data available; dropping", str);
            return null;
        }
        Boolean boolB = b(c0267ccB);
        if (boolB == null || boolB.booleanValue()) {
            return new zzm(str, c0267ccB.n(), c0267ccB.u(), c0267ccB.v(), c0267ccB.w(), c0267ccB.x(), c0267ccB.y(), (String) null, c0267ccB.A(), false, c0267ccB.r(), c0267ccB.f(), 0L, 0, c0267ccB.g(), c0267ccB.h(), false, c0267ccB.o(), c0267ccB.i(), c0267ccB.z(), c0267ccB.j(), (Ce.a() && this.j.o().e(str, C0324o.Na)) ? c0267ccB.p() : null);
        }
        this.j.d().t().a("App version does not match; dropping. appId", C0365wb.a(str));
        return null;
    }

    private static void a(Q.a aVar, int i, String str) {
        List<com.google.android.gms.internal.measurement.T> listK = aVar.k();
        for (int i2 = 0; i2 < listK.size(); i2++) {
            if ("_err".equals(listK.get(i2).o())) {
                return;
            }
        }
        T.a aVarV = com.google.android.gms.internal.measurement.T.v();
        aVarV.a("_err");
        aVarV.a(Long.valueOf(i).longValue());
        com.google.android.gms.internal.measurement.T t = (com.google.android.gms.internal.measurement.T) aVarV.j();
        T.a aVarV2 = com.google.android.gms.internal.measurement.T.v();
        aVarV2.a("_ev");
        aVarV2.b(str);
        com.google.android.gms.internal.measurement.T t2 = (com.google.android.gms.internal.measurement.T) aVarV2.j();
        aVar.a(t);
        aVar.a(t2);
    }

    private static void a(Q.a aVar, String str) {
        List<com.google.android.gms.internal.measurement.T> listK = aVar.k();
        for (int i = 0; i < listK.size(); i++) {
            if (str.equals(listK.get(i).o())) {
                aVar.b(i);
                return;
            }
        }
    }

    private static void a(V.a aVar) {
        aVar.b(Long.MAX_VALUE);
        aVar.c(Long.MIN_VALUE);
        for (int i = 0; i < aVar.l(); i++) {
            com.google.android.gms.internal.measurement.Q qB = aVar.b(i);
            if (qB.s() < aVar.p()) {
                aVar.b(qB.s());
            }
            if (qB.s() > aVar.q()) {
                aVar.c(qB.s());
            }
        }
    }

    private final void a(V.a aVar, long j, boolean z) {
        String str = z ? "_se" : "_lte";
        me meVarC = j().c(aVar.t(), str);
        me meVar = (meVarC == null || meVarC.f2343e == null) ? new me(aVar.t(), "auto", str, this.j.g().a(), Long.valueOf(j)) : new me(aVar.t(), "auto", str, this.j.g().a(), Long.valueOf(((Long) meVarC.f2343e).longValue() + j));
        Z.a aVarX = com.google.android.gms.internal.measurement.Z.x();
        aVarX.a(str);
        aVarX.a(this.j.g().a());
        aVarX.b(((Long) meVar.f2343e).longValue());
        com.google.android.gms.internal.measurement.Z z2 = (com.google.android.gms.internal.measurement.Z) aVarX.j();
        boolean z3 = false;
        int iA = ie.a(aVar, str);
        if (iA >= 0) {
            aVar.a(iA, z2);
            z3 = true;
        }
        if (!z3) {
            aVar.a(z2);
        }
        if (j > 0) {
            j().a(meVar);
            this.j.d().A().a("Updated engagement user property. scope, value", z ? "session-scoped" : "lifetime", meVar.f2343e);
        }
    }

    private final void a(C0267cc c0267cc) {
        z();
        if (TextUtils.isEmpty(c0267cc.n()) && TextUtils.isEmpty(c0267cc.o())) {
            a(c0267cc.l(), HttpStatus.SC_NO_CONTENT, null, null, null);
            return;
        }
        ze zeVarO = this.j.o();
        Uri.Builder builder = new Uri.Builder();
        String strN = c0267cc.n();
        if (TextUtils.isEmpty(strN)) {
            strN = c0267cc.o();
        }
        b.b.b bVar = null;
        Uri.Builder builderEncodedAuthority = builder.scheme(C0324o.l.a(null)).encodedAuthority(C0324o.m.a(null));
        String strValueOf = String.valueOf(strN);
        builderEncodedAuthority.path(strValueOf.length() != 0 ? "config/app/".concat(strValueOf) : new String("config/app/")).appendQueryParameter("app_instance_id", c0267cc.m()).appendQueryParameter("platform", "android").appendQueryParameter("gmp_version", String.valueOf(zeVarO.o()));
        String string = builder.build().toString();
        try {
            URL url = new URL(string);
            this.j.d().B().a("Fetching remote configuration", c0267cc.l());
            com.google.android.gms.internal.measurement.K kA = h().a(c0267cc.l());
            String strB = h().b(c0267cc.l());
            if (kA != null && !TextUtils.isEmpty(strB)) {
                bVar = new b.b.b();
                bVar.put(HttpHeaders.IF_MODIFIED_SINCE, strB);
            }
            this.r = true;
            Ab abI = i();
            String strL = c0267cc.l();
            fe feVar = new fe(this);
            abI.h();
            abI.s();
            com.google.android.gms.common.internal.r.a(url);
            com.google.android.gms.common.internal.r.a(feVar);
            abI.c().b(new Fb(abI, strL, url, null, bVar, feVar));
        } catch (MalformedURLException unused) {
            this.j.d().t().a("Failed to parse config URL. Not fetching. appId", C0365wb.a(c0267cc.l()), string);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(je jeVar) {
        this.j.c().h();
        C0269d c0269d = new C0269d(this);
        c0269d.t();
        this.f2237d = c0269d;
        this.j.o().a(this.f2235b);
        qe qeVar = new qe(this);
        qeVar.t();
        this.g = qeVar;
        C0288gd c0288gd = new C0288gd(this);
        c0288gd.t();
        this.i = c0288gd;
        _d _dVar = new _d(this);
        _dVar.t();
        this.f2239f = _dVar;
        this.f2238e = new Ib(this);
        if (this.p != this.q) {
            this.j.d().t().a("Not all upload components initialized", Integer.valueOf(this.p), Integer.valueOf(this.q));
        }
        this.k = true;
    }

    private final boolean a(int i, FileChannel fileChannel) {
        z();
        if (fileChannel == null || !fileChannel.isOpen()) {
            this.j.d().t().a("Bad channel to read from");
            return false;
        }
        ByteBuffer byteBufferAllocate = ByteBuffer.allocate(4);
        byteBufferAllocate.putInt(i);
        byteBufferAllocate.flip();
        try {
            fileChannel.truncate(0L);
            fileChannel.write(byteBufferAllocate);
            fileChannel.force(true);
            if (fileChannel.size() != 4) {
                this.j.d().t().a("Error writing to channel. Bytes written", Long.valueOf(fileChannel.size()));
            }
            return true;
        } catch (IOException e2) {
            this.j.d().t().a("Failed to write to channel", e2);
            return false;
        }
    }

    private final boolean a(Q.a aVar, Q.a aVar2) {
        com.google.android.gms.common.internal.r.a("_e".equals(aVar.m()));
        m();
        com.google.android.gms.internal.measurement.T tA = ie.a((com.google.android.gms.internal.measurement.Q) aVar.j(), "_sc");
        String strQ = tA == null ? null : tA.q();
        m();
        com.google.android.gms.internal.measurement.T tA2 = ie.a((com.google.android.gms.internal.measurement.Q) aVar2.j(), "_pc");
        String strQ2 = tA2 != null ? tA2.q() : null;
        if (strQ2 == null || !strQ2.equals(strQ)) {
            return false;
        }
        b(aVar, aVar2);
        return true;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:109:0x026e A[Catch: all -> 0x0f4c, TryCatch #8 {all -> 0x0f4c, blocks: (B:3:0x0009, B:26:0x0084, B:107:0x026a, B:109:0x026e, B:115:0x027c, B:116:0x02a3, B:119:0x02b1, B:122:0x02d7, B:124:0x0310, B:130:0x0326, B:132:0x0330, B:295:0x07f5, B:134:0x0358, B:137:0x0370, B:166:0x03d1, B:169:0x03db, B:171:0x03e9, B:175:0x0432, B:172:0x0407, B:174:0x0417, B:179:0x043f, B:181:0x046d, B:182:0x0499, B:184:0x04cd, B:186:0x04d3, B:189:0x04df, B:191:0x0514, B:192:0x0531, B:194:0x0537, B:196:0x0545, B:200:0x0558, B:197:0x054d, B:203:0x055f, B:205:0x0565, B:206:0x0581, B:208:0x059c, B:209:0x05a8, B:211:0x05ae, B:217:0x05d5, B:214:0x05c2, B:220:0x05db, B:222:0x05e7, B:224:0x05f3, B:240:0x0644, B:243:0x0663, B:245:0x0677, B:247:0x0681, B:250:0x0696, B:252:0x06a9, B:254:0x06b7, B:283:0x077e, B:285:0x0788, B:287:0x078e, B:288:0x07a4, B:289:0x07a8, B:291:0x07bb, B:292:0x07d2, B:294:0x07db, B:259:0x06cc, B:261:0x06d8, B:264:0x06ed, B:266:0x0700, B:268:0x070e, B:271:0x071e, B:273:0x0736, B:275:0x0742, B:278:0x0755, B:280:0x0768, B:228:0x0616, B:232:0x062a, B:234:0x0630, B:237:0x063b, B:144:0x0392, B:147:0x039c, B:150:0x03a6, B:300:0x0811, B:302:0x081f, B:304:0x082a, B:315:0x085c, B:305:0x0832, B:307:0x083b, B:309:0x0841, B:312:0x084d, B:314:0x0857, B:317:0x0861, B:320:0x0879, B:321:0x0881, B:323:0x0887, B:328:0x089e, B:329:0x08a9, B:331:0x08af, B:333:0x08c1, B:338:0x08ce, B:340:0x08d4, B:345:0x0913, B:347:0x0925, B:349:0x0944, B:351:0x0952, B:353:0x0958, B:355:0x0962, B:356:0x0991, B:358:0x0997, B:360:0x09a7, B:364:0x09b2, B:361:0x09ac, B:365:0x09b5, B:367:0x09c7, B:368:0x09ca, B:375:0x0a32, B:377:0x0a4d, B:378:0x0a5e, B:380:0x0a62, B:382:0x0a6e, B:383:0x0a78, B:385:0x0a7c, B:387:0x0a84, B:388:0x0a92, B:389:0x0a9d, B:395:0x0adb, B:396:0x0ae3, B:398:0x0ae9, B:400:0x0afb, B:402:0x0aff, B:416:0x0b35, B:419:0x0b4b, B:423:0x0b7b, B:425:0x0b91, B:427:0x0bbe, B:428:0x0be4, B:438:0x0c2a, B:440:0x0c3b, B:442:0x0c3f, B:444:0x0c43, B:446:0x0c47, B:450:0x0c5b, B:452:0x0c7c, B:453:0x0c85, B:460:0x0cb1, B:404:0x0b0d, B:406:0x0b11, B:408:0x0b1b, B:410:0x0b1f, B:492:0x0d91, B:494:0x0da3, B:495:0x0da6, B:497:0x0db8, B:517:0x0e2d, B:519:0x0e33, B:521:0x0e48, B:524:0x0e4f, B:529:0x0e82, B:525:0x0e57, B:527:0x0e63, B:528:0x0e69, B:530:0x0e93, B:531:0x0eaa, B:534:0x0eb2, B:535:0x0eb7, B:536:0x0ec7, B:538:0x0ee1, B:539:0x0efa, B:540:0x0f02, B:545:0x0f24, B:544:0x0f13, B:498:0x0dd2, B:500:0x0dd8, B:502:0x0de2, B:504:0x0de9, B:510:0x0df9, B:512:0x0e00, B:514:0x0e1f, B:516:0x0e26, B:515:0x0e23, B:511:0x0dfd, B:503:0x0de6, B:341:0x08f1, B:342:0x08f6, B:344:0x0908, B:548:0x0f34, B:53:0x012a, B:69:0x01c4, B:554:0x0f48, B:555:0x0f4b), top: B:569:0x0009, inners: #15 }] */
    /* JADX WARN: Removed duplicated region for block: B:113:0x0279  */
    /* JADX WARN: Removed duplicated region for block: B:115:0x027c A[Catch: all -> 0x0f4c, TryCatch #8 {all -> 0x0f4c, blocks: (B:3:0x0009, B:26:0x0084, B:107:0x026a, B:109:0x026e, B:115:0x027c, B:116:0x02a3, B:119:0x02b1, B:122:0x02d7, B:124:0x0310, B:130:0x0326, B:132:0x0330, B:295:0x07f5, B:134:0x0358, B:137:0x0370, B:166:0x03d1, B:169:0x03db, B:171:0x03e9, B:175:0x0432, B:172:0x0407, B:174:0x0417, B:179:0x043f, B:181:0x046d, B:182:0x0499, B:184:0x04cd, B:186:0x04d3, B:189:0x04df, B:191:0x0514, B:192:0x0531, B:194:0x0537, B:196:0x0545, B:200:0x0558, B:197:0x054d, B:203:0x055f, B:205:0x0565, B:206:0x0581, B:208:0x059c, B:209:0x05a8, B:211:0x05ae, B:217:0x05d5, B:214:0x05c2, B:220:0x05db, B:222:0x05e7, B:224:0x05f3, B:240:0x0644, B:243:0x0663, B:245:0x0677, B:247:0x0681, B:250:0x0696, B:252:0x06a9, B:254:0x06b7, B:283:0x077e, B:285:0x0788, B:287:0x078e, B:288:0x07a4, B:289:0x07a8, B:291:0x07bb, B:292:0x07d2, B:294:0x07db, B:259:0x06cc, B:261:0x06d8, B:264:0x06ed, B:266:0x0700, B:268:0x070e, B:271:0x071e, B:273:0x0736, B:275:0x0742, B:278:0x0755, B:280:0x0768, B:228:0x0616, B:232:0x062a, B:234:0x0630, B:237:0x063b, B:144:0x0392, B:147:0x039c, B:150:0x03a6, B:300:0x0811, B:302:0x081f, B:304:0x082a, B:315:0x085c, B:305:0x0832, B:307:0x083b, B:309:0x0841, B:312:0x084d, B:314:0x0857, B:317:0x0861, B:320:0x0879, B:321:0x0881, B:323:0x0887, B:328:0x089e, B:329:0x08a9, B:331:0x08af, B:333:0x08c1, B:338:0x08ce, B:340:0x08d4, B:345:0x0913, B:347:0x0925, B:349:0x0944, B:351:0x0952, B:353:0x0958, B:355:0x0962, B:356:0x0991, B:358:0x0997, B:360:0x09a7, B:364:0x09b2, B:361:0x09ac, B:365:0x09b5, B:367:0x09c7, B:368:0x09ca, B:375:0x0a32, B:377:0x0a4d, B:378:0x0a5e, B:380:0x0a62, B:382:0x0a6e, B:383:0x0a78, B:385:0x0a7c, B:387:0x0a84, B:388:0x0a92, B:389:0x0a9d, B:395:0x0adb, B:396:0x0ae3, B:398:0x0ae9, B:400:0x0afb, B:402:0x0aff, B:416:0x0b35, B:419:0x0b4b, B:423:0x0b7b, B:425:0x0b91, B:427:0x0bbe, B:428:0x0be4, B:438:0x0c2a, B:440:0x0c3b, B:442:0x0c3f, B:444:0x0c43, B:446:0x0c47, B:450:0x0c5b, B:452:0x0c7c, B:453:0x0c85, B:460:0x0cb1, B:404:0x0b0d, B:406:0x0b11, B:408:0x0b1b, B:410:0x0b1f, B:492:0x0d91, B:494:0x0da3, B:495:0x0da6, B:497:0x0db8, B:517:0x0e2d, B:519:0x0e33, B:521:0x0e48, B:524:0x0e4f, B:529:0x0e82, B:525:0x0e57, B:527:0x0e63, B:528:0x0e69, B:530:0x0e93, B:531:0x0eaa, B:534:0x0eb2, B:535:0x0eb7, B:536:0x0ec7, B:538:0x0ee1, B:539:0x0efa, B:540:0x0f02, B:545:0x0f24, B:544:0x0f13, B:498:0x0dd2, B:500:0x0dd8, B:502:0x0de2, B:504:0x0de9, B:510:0x0df9, B:512:0x0e00, B:514:0x0e1f, B:516:0x0e26, B:515:0x0e23, B:511:0x0dfd, B:503:0x0de6, B:341:0x08f1, B:342:0x08f6, B:344:0x0908, B:548:0x0f34, B:53:0x012a, B:69:0x01c4, B:554:0x0f48, B:555:0x0f4b), top: B:569:0x0009, inners: #15 }] */
    /* JADX WARN: Removed duplicated region for block: B:153:0x03b0  */
    /* JADX WARN: Removed duplicated region for block: B:155:0x03b3  */
    /* JADX WARN: Removed duplicated region for block: B:160:0x03bb  */
    /* JADX WARN: Removed duplicated region for block: B:162:0x03be  */
    /* JADX WARN: Removed duplicated region for block: B:163:0x03bf  */
    /* JADX WARN: Removed duplicated region for block: B:208:0x059c A[Catch: all -> 0x0f4c, TryCatch #8 {all -> 0x0f4c, blocks: (B:3:0x0009, B:26:0x0084, B:107:0x026a, B:109:0x026e, B:115:0x027c, B:116:0x02a3, B:119:0x02b1, B:122:0x02d7, B:124:0x0310, B:130:0x0326, B:132:0x0330, B:295:0x07f5, B:134:0x0358, B:137:0x0370, B:166:0x03d1, B:169:0x03db, B:171:0x03e9, B:175:0x0432, B:172:0x0407, B:174:0x0417, B:179:0x043f, B:181:0x046d, B:182:0x0499, B:184:0x04cd, B:186:0x04d3, B:189:0x04df, B:191:0x0514, B:192:0x0531, B:194:0x0537, B:196:0x0545, B:200:0x0558, B:197:0x054d, B:203:0x055f, B:205:0x0565, B:206:0x0581, B:208:0x059c, B:209:0x05a8, B:211:0x05ae, B:217:0x05d5, B:214:0x05c2, B:220:0x05db, B:222:0x05e7, B:224:0x05f3, B:240:0x0644, B:243:0x0663, B:245:0x0677, B:247:0x0681, B:250:0x0696, B:252:0x06a9, B:254:0x06b7, B:283:0x077e, B:285:0x0788, B:287:0x078e, B:288:0x07a4, B:289:0x07a8, B:291:0x07bb, B:292:0x07d2, B:294:0x07db, B:259:0x06cc, B:261:0x06d8, B:264:0x06ed, B:266:0x0700, B:268:0x070e, B:271:0x071e, B:273:0x0736, B:275:0x0742, B:278:0x0755, B:280:0x0768, B:228:0x0616, B:232:0x062a, B:234:0x0630, B:237:0x063b, B:144:0x0392, B:147:0x039c, B:150:0x03a6, B:300:0x0811, B:302:0x081f, B:304:0x082a, B:315:0x085c, B:305:0x0832, B:307:0x083b, B:309:0x0841, B:312:0x084d, B:314:0x0857, B:317:0x0861, B:320:0x0879, B:321:0x0881, B:323:0x0887, B:328:0x089e, B:329:0x08a9, B:331:0x08af, B:333:0x08c1, B:338:0x08ce, B:340:0x08d4, B:345:0x0913, B:347:0x0925, B:349:0x0944, B:351:0x0952, B:353:0x0958, B:355:0x0962, B:356:0x0991, B:358:0x0997, B:360:0x09a7, B:364:0x09b2, B:361:0x09ac, B:365:0x09b5, B:367:0x09c7, B:368:0x09ca, B:375:0x0a32, B:377:0x0a4d, B:378:0x0a5e, B:380:0x0a62, B:382:0x0a6e, B:383:0x0a78, B:385:0x0a7c, B:387:0x0a84, B:388:0x0a92, B:389:0x0a9d, B:395:0x0adb, B:396:0x0ae3, B:398:0x0ae9, B:400:0x0afb, B:402:0x0aff, B:416:0x0b35, B:419:0x0b4b, B:423:0x0b7b, B:425:0x0b91, B:427:0x0bbe, B:428:0x0be4, B:438:0x0c2a, B:440:0x0c3b, B:442:0x0c3f, B:444:0x0c43, B:446:0x0c47, B:450:0x0c5b, B:452:0x0c7c, B:453:0x0c85, B:460:0x0cb1, B:404:0x0b0d, B:406:0x0b11, B:408:0x0b1b, B:410:0x0b1f, B:492:0x0d91, B:494:0x0da3, B:495:0x0da6, B:497:0x0db8, B:517:0x0e2d, B:519:0x0e33, B:521:0x0e48, B:524:0x0e4f, B:529:0x0e82, B:525:0x0e57, B:527:0x0e63, B:528:0x0e69, B:530:0x0e93, B:531:0x0eaa, B:534:0x0eb2, B:535:0x0eb7, B:536:0x0ec7, B:538:0x0ee1, B:539:0x0efa, B:540:0x0f02, B:545:0x0f24, B:544:0x0f13, B:498:0x0dd2, B:500:0x0dd8, B:502:0x0de2, B:504:0x0de9, B:510:0x0df9, B:512:0x0e00, B:514:0x0e1f, B:516:0x0e26, B:515:0x0e23, B:511:0x0dfd, B:503:0x0de6, B:341:0x08f1, B:342:0x08f6, B:344:0x0908, B:548:0x0f34, B:53:0x012a, B:69:0x01c4, B:554:0x0f48, B:555:0x0f4b), top: B:569:0x0009, inners: #15 }] */
    /* JADX WARN: Removed duplicated region for block: B:241:0x0661  */
    /* JADX WARN: Removed duplicated region for block: B:245:0x0677 A[Catch: all -> 0x0f4c, TryCatch #8 {all -> 0x0f4c, blocks: (B:3:0x0009, B:26:0x0084, B:107:0x026a, B:109:0x026e, B:115:0x027c, B:116:0x02a3, B:119:0x02b1, B:122:0x02d7, B:124:0x0310, B:130:0x0326, B:132:0x0330, B:295:0x07f5, B:134:0x0358, B:137:0x0370, B:166:0x03d1, B:169:0x03db, B:171:0x03e9, B:175:0x0432, B:172:0x0407, B:174:0x0417, B:179:0x043f, B:181:0x046d, B:182:0x0499, B:184:0x04cd, B:186:0x04d3, B:189:0x04df, B:191:0x0514, B:192:0x0531, B:194:0x0537, B:196:0x0545, B:200:0x0558, B:197:0x054d, B:203:0x055f, B:205:0x0565, B:206:0x0581, B:208:0x059c, B:209:0x05a8, B:211:0x05ae, B:217:0x05d5, B:214:0x05c2, B:220:0x05db, B:222:0x05e7, B:224:0x05f3, B:240:0x0644, B:243:0x0663, B:245:0x0677, B:247:0x0681, B:250:0x0696, B:252:0x06a9, B:254:0x06b7, B:283:0x077e, B:285:0x0788, B:287:0x078e, B:288:0x07a4, B:289:0x07a8, B:291:0x07bb, B:292:0x07d2, B:294:0x07db, B:259:0x06cc, B:261:0x06d8, B:264:0x06ed, B:266:0x0700, B:268:0x070e, B:271:0x071e, B:273:0x0736, B:275:0x0742, B:278:0x0755, B:280:0x0768, B:228:0x0616, B:232:0x062a, B:234:0x0630, B:237:0x063b, B:144:0x0392, B:147:0x039c, B:150:0x03a6, B:300:0x0811, B:302:0x081f, B:304:0x082a, B:315:0x085c, B:305:0x0832, B:307:0x083b, B:309:0x0841, B:312:0x084d, B:314:0x0857, B:317:0x0861, B:320:0x0879, B:321:0x0881, B:323:0x0887, B:328:0x089e, B:329:0x08a9, B:331:0x08af, B:333:0x08c1, B:338:0x08ce, B:340:0x08d4, B:345:0x0913, B:347:0x0925, B:349:0x0944, B:351:0x0952, B:353:0x0958, B:355:0x0962, B:356:0x0991, B:358:0x0997, B:360:0x09a7, B:364:0x09b2, B:361:0x09ac, B:365:0x09b5, B:367:0x09c7, B:368:0x09ca, B:375:0x0a32, B:377:0x0a4d, B:378:0x0a5e, B:380:0x0a62, B:382:0x0a6e, B:383:0x0a78, B:385:0x0a7c, B:387:0x0a84, B:388:0x0a92, B:389:0x0a9d, B:395:0x0adb, B:396:0x0ae3, B:398:0x0ae9, B:400:0x0afb, B:402:0x0aff, B:416:0x0b35, B:419:0x0b4b, B:423:0x0b7b, B:425:0x0b91, B:427:0x0bbe, B:428:0x0be4, B:438:0x0c2a, B:440:0x0c3b, B:442:0x0c3f, B:444:0x0c43, B:446:0x0c47, B:450:0x0c5b, B:452:0x0c7c, B:453:0x0c85, B:460:0x0cb1, B:404:0x0b0d, B:406:0x0b11, B:408:0x0b1b, B:410:0x0b1f, B:492:0x0d91, B:494:0x0da3, B:495:0x0da6, B:497:0x0db8, B:517:0x0e2d, B:519:0x0e33, B:521:0x0e48, B:524:0x0e4f, B:529:0x0e82, B:525:0x0e57, B:527:0x0e63, B:528:0x0e69, B:530:0x0e93, B:531:0x0eaa, B:534:0x0eb2, B:535:0x0eb7, B:536:0x0ec7, B:538:0x0ee1, B:539:0x0efa, B:540:0x0f02, B:545:0x0f24, B:544:0x0f13, B:498:0x0dd2, B:500:0x0dd8, B:502:0x0de2, B:504:0x0de9, B:510:0x0df9, B:512:0x0e00, B:514:0x0e1f, B:516:0x0e26, B:515:0x0e23, B:511:0x0dfd, B:503:0x0de6, B:341:0x08f1, B:342:0x08f6, B:344:0x0908, B:548:0x0f34, B:53:0x012a, B:69:0x01c4, B:554:0x0f48, B:555:0x0f4b), top: B:569:0x0009, inners: #15 }] */
    /* JADX WARN: Removed duplicated region for block: B:281:0x0778  */
    /* JADX WARN: Removed duplicated region for block: B:283:0x077e A[Catch: all -> 0x0f4c, TryCatch #8 {all -> 0x0f4c, blocks: (B:3:0x0009, B:26:0x0084, B:107:0x026a, B:109:0x026e, B:115:0x027c, B:116:0x02a3, B:119:0x02b1, B:122:0x02d7, B:124:0x0310, B:130:0x0326, B:132:0x0330, B:295:0x07f5, B:134:0x0358, B:137:0x0370, B:166:0x03d1, B:169:0x03db, B:171:0x03e9, B:175:0x0432, B:172:0x0407, B:174:0x0417, B:179:0x043f, B:181:0x046d, B:182:0x0499, B:184:0x04cd, B:186:0x04d3, B:189:0x04df, B:191:0x0514, B:192:0x0531, B:194:0x0537, B:196:0x0545, B:200:0x0558, B:197:0x054d, B:203:0x055f, B:205:0x0565, B:206:0x0581, B:208:0x059c, B:209:0x05a8, B:211:0x05ae, B:217:0x05d5, B:214:0x05c2, B:220:0x05db, B:222:0x05e7, B:224:0x05f3, B:240:0x0644, B:243:0x0663, B:245:0x0677, B:247:0x0681, B:250:0x0696, B:252:0x06a9, B:254:0x06b7, B:283:0x077e, B:285:0x0788, B:287:0x078e, B:288:0x07a4, B:289:0x07a8, B:291:0x07bb, B:292:0x07d2, B:294:0x07db, B:259:0x06cc, B:261:0x06d8, B:264:0x06ed, B:266:0x0700, B:268:0x070e, B:271:0x071e, B:273:0x0736, B:275:0x0742, B:278:0x0755, B:280:0x0768, B:228:0x0616, B:232:0x062a, B:234:0x0630, B:237:0x063b, B:144:0x0392, B:147:0x039c, B:150:0x03a6, B:300:0x0811, B:302:0x081f, B:304:0x082a, B:315:0x085c, B:305:0x0832, B:307:0x083b, B:309:0x0841, B:312:0x084d, B:314:0x0857, B:317:0x0861, B:320:0x0879, B:321:0x0881, B:323:0x0887, B:328:0x089e, B:329:0x08a9, B:331:0x08af, B:333:0x08c1, B:338:0x08ce, B:340:0x08d4, B:345:0x0913, B:347:0x0925, B:349:0x0944, B:351:0x0952, B:353:0x0958, B:355:0x0962, B:356:0x0991, B:358:0x0997, B:360:0x09a7, B:364:0x09b2, B:361:0x09ac, B:365:0x09b5, B:367:0x09c7, B:368:0x09ca, B:375:0x0a32, B:377:0x0a4d, B:378:0x0a5e, B:380:0x0a62, B:382:0x0a6e, B:383:0x0a78, B:385:0x0a7c, B:387:0x0a84, B:388:0x0a92, B:389:0x0a9d, B:395:0x0adb, B:396:0x0ae3, B:398:0x0ae9, B:400:0x0afb, B:402:0x0aff, B:416:0x0b35, B:419:0x0b4b, B:423:0x0b7b, B:425:0x0b91, B:427:0x0bbe, B:428:0x0be4, B:438:0x0c2a, B:440:0x0c3b, B:442:0x0c3f, B:444:0x0c43, B:446:0x0c47, B:450:0x0c5b, B:452:0x0c7c, B:453:0x0c85, B:460:0x0cb1, B:404:0x0b0d, B:406:0x0b11, B:408:0x0b1b, B:410:0x0b1f, B:492:0x0d91, B:494:0x0da3, B:495:0x0da6, B:497:0x0db8, B:517:0x0e2d, B:519:0x0e33, B:521:0x0e48, B:524:0x0e4f, B:529:0x0e82, B:525:0x0e57, B:527:0x0e63, B:528:0x0e69, B:530:0x0e93, B:531:0x0eaa, B:534:0x0eb2, B:535:0x0eb7, B:536:0x0ec7, B:538:0x0ee1, B:539:0x0efa, B:540:0x0f02, B:545:0x0f24, B:544:0x0f13, B:498:0x0dd2, B:500:0x0dd8, B:502:0x0de2, B:504:0x0de9, B:510:0x0df9, B:512:0x0e00, B:514:0x0e1f, B:516:0x0e26, B:515:0x0e23, B:511:0x0dfd, B:503:0x0de6, B:341:0x08f1, B:342:0x08f6, B:344:0x0908, B:548:0x0f34, B:53:0x012a, B:69:0x01c4, B:554:0x0f48, B:555:0x0f4b), top: B:569:0x0009, inners: #15 }] */
    /* JADX WARN: Removed duplicated region for block: B:293:0x07d9  */
    /* JADX WARN: Removed duplicated region for block: B:305:0x0832 A[Catch: all -> 0x0f4c, TryCatch #8 {all -> 0x0f4c, blocks: (B:3:0x0009, B:26:0x0084, B:107:0x026a, B:109:0x026e, B:115:0x027c, B:116:0x02a3, B:119:0x02b1, B:122:0x02d7, B:124:0x0310, B:130:0x0326, B:132:0x0330, B:295:0x07f5, B:134:0x0358, B:137:0x0370, B:166:0x03d1, B:169:0x03db, B:171:0x03e9, B:175:0x0432, B:172:0x0407, B:174:0x0417, B:179:0x043f, B:181:0x046d, B:182:0x0499, B:184:0x04cd, B:186:0x04d3, B:189:0x04df, B:191:0x0514, B:192:0x0531, B:194:0x0537, B:196:0x0545, B:200:0x0558, B:197:0x054d, B:203:0x055f, B:205:0x0565, B:206:0x0581, B:208:0x059c, B:209:0x05a8, B:211:0x05ae, B:217:0x05d5, B:214:0x05c2, B:220:0x05db, B:222:0x05e7, B:224:0x05f3, B:240:0x0644, B:243:0x0663, B:245:0x0677, B:247:0x0681, B:250:0x0696, B:252:0x06a9, B:254:0x06b7, B:283:0x077e, B:285:0x0788, B:287:0x078e, B:288:0x07a4, B:289:0x07a8, B:291:0x07bb, B:292:0x07d2, B:294:0x07db, B:259:0x06cc, B:261:0x06d8, B:264:0x06ed, B:266:0x0700, B:268:0x070e, B:271:0x071e, B:273:0x0736, B:275:0x0742, B:278:0x0755, B:280:0x0768, B:228:0x0616, B:232:0x062a, B:234:0x0630, B:237:0x063b, B:144:0x0392, B:147:0x039c, B:150:0x03a6, B:300:0x0811, B:302:0x081f, B:304:0x082a, B:315:0x085c, B:305:0x0832, B:307:0x083b, B:309:0x0841, B:312:0x084d, B:314:0x0857, B:317:0x0861, B:320:0x0879, B:321:0x0881, B:323:0x0887, B:328:0x089e, B:329:0x08a9, B:331:0x08af, B:333:0x08c1, B:338:0x08ce, B:340:0x08d4, B:345:0x0913, B:347:0x0925, B:349:0x0944, B:351:0x0952, B:353:0x0958, B:355:0x0962, B:356:0x0991, B:358:0x0997, B:360:0x09a7, B:364:0x09b2, B:361:0x09ac, B:365:0x09b5, B:367:0x09c7, B:368:0x09ca, B:375:0x0a32, B:377:0x0a4d, B:378:0x0a5e, B:380:0x0a62, B:382:0x0a6e, B:383:0x0a78, B:385:0x0a7c, B:387:0x0a84, B:388:0x0a92, B:389:0x0a9d, B:395:0x0adb, B:396:0x0ae3, B:398:0x0ae9, B:400:0x0afb, B:402:0x0aff, B:416:0x0b35, B:419:0x0b4b, B:423:0x0b7b, B:425:0x0b91, B:427:0x0bbe, B:428:0x0be4, B:438:0x0c2a, B:440:0x0c3b, B:442:0x0c3f, B:444:0x0c43, B:446:0x0c47, B:450:0x0c5b, B:452:0x0c7c, B:453:0x0c85, B:460:0x0cb1, B:404:0x0b0d, B:406:0x0b11, B:408:0x0b1b, B:410:0x0b1f, B:492:0x0d91, B:494:0x0da3, B:495:0x0da6, B:497:0x0db8, B:517:0x0e2d, B:519:0x0e33, B:521:0x0e48, B:524:0x0e4f, B:529:0x0e82, B:525:0x0e57, B:527:0x0e63, B:528:0x0e69, B:530:0x0e93, B:531:0x0eaa, B:534:0x0eb2, B:535:0x0eb7, B:536:0x0ec7, B:538:0x0ee1, B:539:0x0efa, B:540:0x0f02, B:545:0x0f24, B:544:0x0f13, B:498:0x0dd2, B:500:0x0dd8, B:502:0x0de2, B:504:0x0de9, B:510:0x0df9, B:512:0x0e00, B:514:0x0e1f, B:516:0x0e26, B:515:0x0e23, B:511:0x0dfd, B:503:0x0de6, B:341:0x08f1, B:342:0x08f6, B:344:0x0908, B:548:0x0f34, B:53:0x012a, B:69:0x01c4, B:554:0x0f48, B:555:0x0f4b), top: B:569:0x0009, inners: #15 }] */
    /* JADX WARN: Removed duplicated region for block: B:341:0x08f1 A[Catch: all -> 0x0f4c, TryCatch #8 {all -> 0x0f4c, blocks: (B:3:0x0009, B:26:0x0084, B:107:0x026a, B:109:0x026e, B:115:0x027c, B:116:0x02a3, B:119:0x02b1, B:122:0x02d7, B:124:0x0310, B:130:0x0326, B:132:0x0330, B:295:0x07f5, B:134:0x0358, B:137:0x0370, B:166:0x03d1, B:169:0x03db, B:171:0x03e9, B:175:0x0432, B:172:0x0407, B:174:0x0417, B:179:0x043f, B:181:0x046d, B:182:0x0499, B:184:0x04cd, B:186:0x04d3, B:189:0x04df, B:191:0x0514, B:192:0x0531, B:194:0x0537, B:196:0x0545, B:200:0x0558, B:197:0x054d, B:203:0x055f, B:205:0x0565, B:206:0x0581, B:208:0x059c, B:209:0x05a8, B:211:0x05ae, B:217:0x05d5, B:214:0x05c2, B:220:0x05db, B:222:0x05e7, B:224:0x05f3, B:240:0x0644, B:243:0x0663, B:245:0x0677, B:247:0x0681, B:250:0x0696, B:252:0x06a9, B:254:0x06b7, B:283:0x077e, B:285:0x0788, B:287:0x078e, B:288:0x07a4, B:289:0x07a8, B:291:0x07bb, B:292:0x07d2, B:294:0x07db, B:259:0x06cc, B:261:0x06d8, B:264:0x06ed, B:266:0x0700, B:268:0x070e, B:271:0x071e, B:273:0x0736, B:275:0x0742, B:278:0x0755, B:280:0x0768, B:228:0x0616, B:232:0x062a, B:234:0x0630, B:237:0x063b, B:144:0x0392, B:147:0x039c, B:150:0x03a6, B:300:0x0811, B:302:0x081f, B:304:0x082a, B:315:0x085c, B:305:0x0832, B:307:0x083b, B:309:0x0841, B:312:0x084d, B:314:0x0857, B:317:0x0861, B:320:0x0879, B:321:0x0881, B:323:0x0887, B:328:0x089e, B:329:0x08a9, B:331:0x08af, B:333:0x08c1, B:338:0x08ce, B:340:0x08d4, B:345:0x0913, B:347:0x0925, B:349:0x0944, B:351:0x0952, B:353:0x0958, B:355:0x0962, B:356:0x0991, B:358:0x0997, B:360:0x09a7, B:364:0x09b2, B:361:0x09ac, B:365:0x09b5, B:367:0x09c7, B:368:0x09ca, B:375:0x0a32, B:377:0x0a4d, B:378:0x0a5e, B:380:0x0a62, B:382:0x0a6e, B:383:0x0a78, B:385:0x0a7c, B:387:0x0a84, B:388:0x0a92, B:389:0x0a9d, B:395:0x0adb, B:396:0x0ae3, B:398:0x0ae9, B:400:0x0afb, B:402:0x0aff, B:416:0x0b35, B:419:0x0b4b, B:423:0x0b7b, B:425:0x0b91, B:427:0x0bbe, B:428:0x0be4, B:438:0x0c2a, B:440:0x0c3b, B:442:0x0c3f, B:444:0x0c43, B:446:0x0c47, B:450:0x0c5b, B:452:0x0c7c, B:453:0x0c85, B:460:0x0cb1, B:404:0x0b0d, B:406:0x0b11, B:408:0x0b1b, B:410:0x0b1f, B:492:0x0d91, B:494:0x0da3, B:495:0x0da6, B:497:0x0db8, B:517:0x0e2d, B:519:0x0e33, B:521:0x0e48, B:524:0x0e4f, B:529:0x0e82, B:525:0x0e57, B:527:0x0e63, B:528:0x0e69, B:530:0x0e93, B:531:0x0eaa, B:534:0x0eb2, B:535:0x0eb7, B:536:0x0ec7, B:538:0x0ee1, B:539:0x0efa, B:540:0x0f02, B:545:0x0f24, B:544:0x0f13, B:498:0x0dd2, B:500:0x0dd8, B:502:0x0de2, B:504:0x0de9, B:510:0x0df9, B:512:0x0e00, B:514:0x0e1f, B:516:0x0e26, B:515:0x0e23, B:511:0x0dfd, B:503:0x0de6, B:341:0x08f1, B:342:0x08f6, B:344:0x0908, B:548:0x0f34, B:53:0x012a, B:69:0x01c4, B:554:0x0f48, B:555:0x0f4b), top: B:569:0x0009, inners: #15 }] */
    /* JADX WARN: Removed duplicated region for block: B:416:0x0b35 A[Catch: all -> 0x0f4c, TryCatch #8 {all -> 0x0f4c, blocks: (B:3:0x0009, B:26:0x0084, B:107:0x026a, B:109:0x026e, B:115:0x027c, B:116:0x02a3, B:119:0x02b1, B:122:0x02d7, B:124:0x0310, B:130:0x0326, B:132:0x0330, B:295:0x07f5, B:134:0x0358, B:137:0x0370, B:166:0x03d1, B:169:0x03db, B:171:0x03e9, B:175:0x0432, B:172:0x0407, B:174:0x0417, B:179:0x043f, B:181:0x046d, B:182:0x0499, B:184:0x04cd, B:186:0x04d3, B:189:0x04df, B:191:0x0514, B:192:0x0531, B:194:0x0537, B:196:0x0545, B:200:0x0558, B:197:0x054d, B:203:0x055f, B:205:0x0565, B:206:0x0581, B:208:0x059c, B:209:0x05a8, B:211:0x05ae, B:217:0x05d5, B:214:0x05c2, B:220:0x05db, B:222:0x05e7, B:224:0x05f3, B:240:0x0644, B:243:0x0663, B:245:0x0677, B:247:0x0681, B:250:0x0696, B:252:0x06a9, B:254:0x06b7, B:283:0x077e, B:285:0x0788, B:287:0x078e, B:288:0x07a4, B:289:0x07a8, B:291:0x07bb, B:292:0x07d2, B:294:0x07db, B:259:0x06cc, B:261:0x06d8, B:264:0x06ed, B:266:0x0700, B:268:0x070e, B:271:0x071e, B:273:0x0736, B:275:0x0742, B:278:0x0755, B:280:0x0768, B:228:0x0616, B:232:0x062a, B:234:0x0630, B:237:0x063b, B:144:0x0392, B:147:0x039c, B:150:0x03a6, B:300:0x0811, B:302:0x081f, B:304:0x082a, B:315:0x085c, B:305:0x0832, B:307:0x083b, B:309:0x0841, B:312:0x084d, B:314:0x0857, B:317:0x0861, B:320:0x0879, B:321:0x0881, B:323:0x0887, B:328:0x089e, B:329:0x08a9, B:331:0x08af, B:333:0x08c1, B:338:0x08ce, B:340:0x08d4, B:345:0x0913, B:347:0x0925, B:349:0x0944, B:351:0x0952, B:353:0x0958, B:355:0x0962, B:356:0x0991, B:358:0x0997, B:360:0x09a7, B:364:0x09b2, B:361:0x09ac, B:365:0x09b5, B:367:0x09c7, B:368:0x09ca, B:375:0x0a32, B:377:0x0a4d, B:378:0x0a5e, B:380:0x0a62, B:382:0x0a6e, B:383:0x0a78, B:385:0x0a7c, B:387:0x0a84, B:388:0x0a92, B:389:0x0a9d, B:395:0x0adb, B:396:0x0ae3, B:398:0x0ae9, B:400:0x0afb, B:402:0x0aff, B:416:0x0b35, B:419:0x0b4b, B:423:0x0b7b, B:425:0x0b91, B:427:0x0bbe, B:428:0x0be4, B:438:0x0c2a, B:440:0x0c3b, B:442:0x0c3f, B:444:0x0c43, B:446:0x0c47, B:450:0x0c5b, B:452:0x0c7c, B:453:0x0c85, B:460:0x0cb1, B:404:0x0b0d, B:406:0x0b11, B:408:0x0b1b, B:410:0x0b1f, B:492:0x0d91, B:494:0x0da3, B:495:0x0da6, B:497:0x0db8, B:517:0x0e2d, B:519:0x0e33, B:521:0x0e48, B:524:0x0e4f, B:529:0x0e82, B:525:0x0e57, B:527:0x0e63, B:528:0x0e69, B:530:0x0e93, B:531:0x0eaa, B:534:0x0eb2, B:535:0x0eb7, B:536:0x0ec7, B:538:0x0ee1, B:539:0x0efa, B:540:0x0f02, B:545:0x0f24, B:544:0x0f13, B:498:0x0dd2, B:500:0x0dd8, B:502:0x0de2, B:504:0x0de9, B:510:0x0df9, B:512:0x0e00, B:514:0x0e1f, B:516:0x0e26, B:515:0x0e23, B:511:0x0dfd, B:503:0x0de6, B:341:0x08f1, B:342:0x08f6, B:344:0x0908, B:548:0x0f34, B:53:0x012a, B:69:0x01c4, B:554:0x0f48, B:555:0x0f4b), top: B:569:0x0009, inners: #15 }] */
    /* JADX WARN: Removed duplicated region for block: B:417:0x0b48  */
    /* JADX WARN: Removed duplicated region for block: B:419:0x0b4b A[Catch: all -> 0x0f4c, TRY_LEAVE, TryCatch #8 {all -> 0x0f4c, blocks: (B:3:0x0009, B:26:0x0084, B:107:0x026a, B:109:0x026e, B:115:0x027c, B:116:0x02a3, B:119:0x02b1, B:122:0x02d7, B:124:0x0310, B:130:0x0326, B:132:0x0330, B:295:0x07f5, B:134:0x0358, B:137:0x0370, B:166:0x03d1, B:169:0x03db, B:171:0x03e9, B:175:0x0432, B:172:0x0407, B:174:0x0417, B:179:0x043f, B:181:0x046d, B:182:0x0499, B:184:0x04cd, B:186:0x04d3, B:189:0x04df, B:191:0x0514, B:192:0x0531, B:194:0x0537, B:196:0x0545, B:200:0x0558, B:197:0x054d, B:203:0x055f, B:205:0x0565, B:206:0x0581, B:208:0x059c, B:209:0x05a8, B:211:0x05ae, B:217:0x05d5, B:214:0x05c2, B:220:0x05db, B:222:0x05e7, B:224:0x05f3, B:240:0x0644, B:243:0x0663, B:245:0x0677, B:247:0x0681, B:250:0x0696, B:252:0x06a9, B:254:0x06b7, B:283:0x077e, B:285:0x0788, B:287:0x078e, B:288:0x07a4, B:289:0x07a8, B:291:0x07bb, B:292:0x07d2, B:294:0x07db, B:259:0x06cc, B:261:0x06d8, B:264:0x06ed, B:266:0x0700, B:268:0x070e, B:271:0x071e, B:273:0x0736, B:275:0x0742, B:278:0x0755, B:280:0x0768, B:228:0x0616, B:232:0x062a, B:234:0x0630, B:237:0x063b, B:144:0x0392, B:147:0x039c, B:150:0x03a6, B:300:0x0811, B:302:0x081f, B:304:0x082a, B:315:0x085c, B:305:0x0832, B:307:0x083b, B:309:0x0841, B:312:0x084d, B:314:0x0857, B:317:0x0861, B:320:0x0879, B:321:0x0881, B:323:0x0887, B:328:0x089e, B:329:0x08a9, B:331:0x08af, B:333:0x08c1, B:338:0x08ce, B:340:0x08d4, B:345:0x0913, B:347:0x0925, B:349:0x0944, B:351:0x0952, B:353:0x0958, B:355:0x0962, B:356:0x0991, B:358:0x0997, B:360:0x09a7, B:364:0x09b2, B:361:0x09ac, B:365:0x09b5, B:367:0x09c7, B:368:0x09ca, B:375:0x0a32, B:377:0x0a4d, B:378:0x0a5e, B:380:0x0a62, B:382:0x0a6e, B:383:0x0a78, B:385:0x0a7c, B:387:0x0a84, B:388:0x0a92, B:389:0x0a9d, B:395:0x0adb, B:396:0x0ae3, B:398:0x0ae9, B:400:0x0afb, B:402:0x0aff, B:416:0x0b35, B:419:0x0b4b, B:423:0x0b7b, B:425:0x0b91, B:427:0x0bbe, B:428:0x0be4, B:438:0x0c2a, B:440:0x0c3b, B:442:0x0c3f, B:444:0x0c43, B:446:0x0c47, B:450:0x0c5b, B:452:0x0c7c, B:453:0x0c85, B:460:0x0cb1, B:404:0x0b0d, B:406:0x0b11, B:408:0x0b1b, B:410:0x0b1f, B:492:0x0d91, B:494:0x0da3, B:495:0x0da6, B:497:0x0db8, B:517:0x0e2d, B:519:0x0e33, B:521:0x0e48, B:524:0x0e4f, B:529:0x0e82, B:525:0x0e57, B:527:0x0e63, B:528:0x0e69, B:530:0x0e93, B:531:0x0eaa, B:534:0x0eb2, B:535:0x0eb7, B:536:0x0ec7, B:538:0x0ee1, B:539:0x0efa, B:540:0x0f02, B:545:0x0f24, B:544:0x0f13, B:498:0x0dd2, B:500:0x0dd8, B:502:0x0de2, B:504:0x0de9, B:510:0x0df9, B:512:0x0e00, B:514:0x0e1f, B:516:0x0e26, B:515:0x0e23, B:511:0x0dfd, B:503:0x0de6, B:341:0x08f1, B:342:0x08f6, B:344:0x0908, B:548:0x0f34, B:53:0x012a, B:69:0x01c4, B:554:0x0f48, B:555:0x0f4b), top: B:569:0x0009, inners: #15 }] */
    /* JADX WARN: Removed duplicated region for block: B:421:0x0b6f A[Catch: all -> 0x0d88, TRY_ENTER, TRY_LEAVE, TryCatch #5 {all -> 0x0d88, blocks: (B:370:0x0a01, B:371:0x0a16, B:373:0x0a1c, B:479:0x0d4a, B:391:0x0aa7, B:421:0x0b6f, B:431:0x0c0b, B:435:0x0c23, B:448:0x0c55, B:478:0x0d46, B:456:0x0c9b, B:458:0x0cad, B:471:0x0cea, B:473:0x0d16, B:474:0x0d24, B:475:0x0d34, B:477:0x0d3a, B:462:0x0cba, B:467:0x0cd3, B:480:0x0d54, B:482:0x0d60, B:483:0x0d66, B:484:0x0d6e, B:486:0x0d74), top: B:567:0x0a01 }] */
    /* JADX WARN: Removed duplicated region for block: B:51:0x0117 A[Catch: SQLiteException -> 0x0237, all -> 0x0f44, TRY_LEAVE, TryCatch #2 {SQLiteException -> 0x0237, blocks: (B:49:0x0111, B:51:0x0117, B:55:0x012f, B:56:0x0133, B:57:0x0144, B:59:0x014a, B:60:0x015b, B:62:0x0167, B:64:0x0187, B:63:0x017b, B:89:0x0222), top: B:563:0x0111 }] */
    /* JADX WARN: Removed duplicated region for block: B:53:0x012a A[Catch: all -> 0x0f4c, PHI: r8
  0x012a: PHI (r8v5 android.database.Cursor) = (r8v4 android.database.Cursor), (r8v33 android.database.Cursor), (r8v33 android.database.Cursor) binds: [B:105:0x0266, B:90:0x0233, B:52:0x0128] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TRY_LEAVE, TryCatch #8 {all -> 0x0f4c, blocks: (B:3:0x0009, B:26:0x0084, B:107:0x026a, B:109:0x026e, B:115:0x027c, B:116:0x02a3, B:119:0x02b1, B:122:0x02d7, B:124:0x0310, B:130:0x0326, B:132:0x0330, B:295:0x07f5, B:134:0x0358, B:137:0x0370, B:166:0x03d1, B:169:0x03db, B:171:0x03e9, B:175:0x0432, B:172:0x0407, B:174:0x0417, B:179:0x043f, B:181:0x046d, B:182:0x0499, B:184:0x04cd, B:186:0x04d3, B:189:0x04df, B:191:0x0514, B:192:0x0531, B:194:0x0537, B:196:0x0545, B:200:0x0558, B:197:0x054d, B:203:0x055f, B:205:0x0565, B:206:0x0581, B:208:0x059c, B:209:0x05a8, B:211:0x05ae, B:217:0x05d5, B:214:0x05c2, B:220:0x05db, B:222:0x05e7, B:224:0x05f3, B:240:0x0644, B:243:0x0663, B:245:0x0677, B:247:0x0681, B:250:0x0696, B:252:0x06a9, B:254:0x06b7, B:283:0x077e, B:285:0x0788, B:287:0x078e, B:288:0x07a4, B:289:0x07a8, B:291:0x07bb, B:292:0x07d2, B:294:0x07db, B:259:0x06cc, B:261:0x06d8, B:264:0x06ed, B:266:0x0700, B:268:0x070e, B:271:0x071e, B:273:0x0736, B:275:0x0742, B:278:0x0755, B:280:0x0768, B:228:0x0616, B:232:0x062a, B:234:0x0630, B:237:0x063b, B:144:0x0392, B:147:0x039c, B:150:0x03a6, B:300:0x0811, B:302:0x081f, B:304:0x082a, B:315:0x085c, B:305:0x0832, B:307:0x083b, B:309:0x0841, B:312:0x084d, B:314:0x0857, B:317:0x0861, B:320:0x0879, B:321:0x0881, B:323:0x0887, B:328:0x089e, B:329:0x08a9, B:331:0x08af, B:333:0x08c1, B:338:0x08ce, B:340:0x08d4, B:345:0x0913, B:347:0x0925, B:349:0x0944, B:351:0x0952, B:353:0x0958, B:355:0x0962, B:356:0x0991, B:358:0x0997, B:360:0x09a7, B:364:0x09b2, B:361:0x09ac, B:365:0x09b5, B:367:0x09c7, B:368:0x09ca, B:375:0x0a32, B:377:0x0a4d, B:378:0x0a5e, B:380:0x0a62, B:382:0x0a6e, B:383:0x0a78, B:385:0x0a7c, B:387:0x0a84, B:388:0x0a92, B:389:0x0a9d, B:395:0x0adb, B:396:0x0ae3, B:398:0x0ae9, B:400:0x0afb, B:402:0x0aff, B:416:0x0b35, B:419:0x0b4b, B:423:0x0b7b, B:425:0x0b91, B:427:0x0bbe, B:428:0x0be4, B:438:0x0c2a, B:440:0x0c3b, B:442:0x0c3f, B:444:0x0c43, B:446:0x0c47, B:450:0x0c5b, B:452:0x0c7c, B:453:0x0c85, B:460:0x0cb1, B:404:0x0b0d, B:406:0x0b11, B:408:0x0b1b, B:410:0x0b1f, B:492:0x0d91, B:494:0x0da3, B:495:0x0da6, B:497:0x0db8, B:517:0x0e2d, B:519:0x0e33, B:521:0x0e48, B:524:0x0e4f, B:529:0x0e82, B:525:0x0e57, B:527:0x0e63, B:528:0x0e69, B:530:0x0e93, B:531:0x0eaa, B:534:0x0eb2, B:535:0x0eb7, B:536:0x0ec7, B:538:0x0ee1, B:539:0x0efa, B:540:0x0f02, B:545:0x0f24, B:544:0x0f13, B:498:0x0dd2, B:500:0x0dd8, B:502:0x0de2, B:504:0x0de9, B:510:0x0df9, B:512:0x0e00, B:514:0x0e1f, B:516:0x0e26, B:515:0x0e23, B:511:0x0dfd, B:503:0x0de6, B:341:0x08f1, B:342:0x08f6, B:344:0x0908, B:548:0x0f34, B:53:0x012a, B:69:0x01c4, B:554:0x0f48, B:555:0x0f4b), top: B:569:0x0009, inners: #15 }] */
    /* JADX WARN: Removed duplicated region for block: B:548:0x0f34 A[Catch: all -> 0x0f4c, TRY_ENTER, TRY_LEAVE, TryCatch #8 {all -> 0x0f4c, blocks: (B:3:0x0009, B:26:0x0084, B:107:0x026a, B:109:0x026e, B:115:0x027c, B:116:0x02a3, B:119:0x02b1, B:122:0x02d7, B:124:0x0310, B:130:0x0326, B:132:0x0330, B:295:0x07f5, B:134:0x0358, B:137:0x0370, B:166:0x03d1, B:169:0x03db, B:171:0x03e9, B:175:0x0432, B:172:0x0407, B:174:0x0417, B:179:0x043f, B:181:0x046d, B:182:0x0499, B:184:0x04cd, B:186:0x04d3, B:189:0x04df, B:191:0x0514, B:192:0x0531, B:194:0x0537, B:196:0x0545, B:200:0x0558, B:197:0x054d, B:203:0x055f, B:205:0x0565, B:206:0x0581, B:208:0x059c, B:209:0x05a8, B:211:0x05ae, B:217:0x05d5, B:214:0x05c2, B:220:0x05db, B:222:0x05e7, B:224:0x05f3, B:240:0x0644, B:243:0x0663, B:245:0x0677, B:247:0x0681, B:250:0x0696, B:252:0x06a9, B:254:0x06b7, B:283:0x077e, B:285:0x0788, B:287:0x078e, B:288:0x07a4, B:289:0x07a8, B:291:0x07bb, B:292:0x07d2, B:294:0x07db, B:259:0x06cc, B:261:0x06d8, B:264:0x06ed, B:266:0x0700, B:268:0x070e, B:271:0x071e, B:273:0x0736, B:275:0x0742, B:278:0x0755, B:280:0x0768, B:228:0x0616, B:232:0x062a, B:234:0x0630, B:237:0x063b, B:144:0x0392, B:147:0x039c, B:150:0x03a6, B:300:0x0811, B:302:0x081f, B:304:0x082a, B:315:0x085c, B:305:0x0832, B:307:0x083b, B:309:0x0841, B:312:0x084d, B:314:0x0857, B:317:0x0861, B:320:0x0879, B:321:0x0881, B:323:0x0887, B:328:0x089e, B:329:0x08a9, B:331:0x08af, B:333:0x08c1, B:338:0x08ce, B:340:0x08d4, B:345:0x0913, B:347:0x0925, B:349:0x0944, B:351:0x0952, B:353:0x0958, B:355:0x0962, B:356:0x0991, B:358:0x0997, B:360:0x09a7, B:364:0x09b2, B:361:0x09ac, B:365:0x09b5, B:367:0x09c7, B:368:0x09ca, B:375:0x0a32, B:377:0x0a4d, B:378:0x0a5e, B:380:0x0a62, B:382:0x0a6e, B:383:0x0a78, B:385:0x0a7c, B:387:0x0a84, B:388:0x0a92, B:389:0x0a9d, B:395:0x0adb, B:396:0x0ae3, B:398:0x0ae9, B:400:0x0afb, B:402:0x0aff, B:416:0x0b35, B:419:0x0b4b, B:423:0x0b7b, B:425:0x0b91, B:427:0x0bbe, B:428:0x0be4, B:438:0x0c2a, B:440:0x0c3b, B:442:0x0c3f, B:444:0x0c43, B:446:0x0c47, B:450:0x0c5b, B:452:0x0c7c, B:453:0x0c85, B:460:0x0cb1, B:404:0x0b0d, B:406:0x0b11, B:408:0x0b1b, B:410:0x0b1f, B:492:0x0d91, B:494:0x0da3, B:495:0x0da6, B:497:0x0db8, B:517:0x0e2d, B:519:0x0e33, B:521:0x0e48, B:524:0x0e4f, B:529:0x0e82, B:525:0x0e57, B:527:0x0e63, B:528:0x0e69, B:530:0x0e93, B:531:0x0eaa, B:534:0x0eb2, B:535:0x0eb7, B:536:0x0ec7, B:538:0x0ee1, B:539:0x0efa, B:540:0x0f02, B:545:0x0f24, B:544:0x0f13, B:498:0x0dd2, B:500:0x0dd8, B:502:0x0de2, B:504:0x0de9, B:510:0x0df9, B:512:0x0e00, B:514:0x0e1f, B:516:0x0e26, B:515:0x0e23, B:511:0x0dfd, B:503:0x0de6, B:341:0x08f1, B:342:0x08f6, B:344:0x0908, B:548:0x0f34, B:53:0x012a, B:69:0x01c4, B:554:0x0f48, B:555:0x0f4b), top: B:569:0x0009, inners: #15 }] */
    /* JADX WARN: Removed duplicated region for block: B:55:0x012f A[Catch: SQLiteException -> 0x0237, all -> 0x0f44, TRY_ENTER, TRY_LEAVE, TryCatch #2 {SQLiteException -> 0x0237, blocks: (B:49:0x0111, B:51:0x0117, B:55:0x012f, B:56:0x0133, B:57:0x0144, B:59:0x014a, B:60:0x015b, B:62:0x0167, B:64:0x0187, B:63:0x017b, B:89:0x0222), top: B:563:0x0111 }] */
    /* JADX WARN: Type inference failed for: r3v176 */
    /* JADX WARN: Type inference failed for: r3v177 */
    /* JADX WARN: Type inference failed for: r8v0 */
    /* JADX WARN: Type inference failed for: r8v1 */
    /* JADX WARN: Type inference failed for: r8v28 */
    /* JADX WARN: Type inference failed for: r8v3, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r8v30 */
    /* JADX WARN: Type inference failed for: r8v34 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private final boolean a(java.lang.String r60, long r61) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 3928
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.ee.a(java.lang.String, long):boolean");
    }

    private final Boolean b(C0267cc c0267cc) {
        try {
            if (c0267cc.v() != -2147483648L) {
                if (c0267cc.v() == com.google.android.gms.common.a.c.a(this.j.e()).b(c0267cc.l(), 0).versionCode) {
                    return true;
                }
            } else {
                String str = com.google.android.gms.common.a.c.a(this.j.e()).b(c0267cc.l(), 0).versionName;
                if (c0267cc.u() != null && c0267cc.u().equals(str)) {
                    return true;
                }
            }
            return false;
        } catch (PackageManager.NameNotFoundException unused) {
            return null;
        }
    }

    private final void b(Q.a aVar, Q.a aVar2) {
        com.google.android.gms.common.internal.r.a("_e".equals(aVar.m()));
        m();
        com.google.android.gms.internal.measurement.T tA = ie.a((com.google.android.gms.internal.measurement.Q) aVar.j(), "_et");
        if (!tA.r() || tA.s() <= 0) {
            return;
        }
        long jS = tA.s();
        m();
        com.google.android.gms.internal.measurement.T tA2 = ie.a((com.google.android.gms.internal.measurement.Q) aVar2.j(), "_et");
        if (tA2 != null && tA2.s() > 0) {
            jS += tA2.s();
        }
        m();
        ie.a(aVar2, "_et", Long.valueOf(jS));
        m();
        ie.a(aVar, "_fr", (Object) 1L);
    }

    private static void b(AbstractC0257ae abstractC0257ae) {
        if (abstractC0257ae == null) {
            throw new IllegalStateException("Upload Component not created");
        }
        if (abstractC0257ae.r()) {
            return;
        }
        String strValueOf = String.valueOf(abstractC0257ae.getClass());
        StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 27);
        sb.append("Component not initialized: ");
        sb.append(strValueOf);
        throw new IllegalStateException(sb.toString());
    }

    /* JADX WARN: Removed duplicated region for block: B:239:0x0849 A[Catch: all -> 0x08be, TryCatch #1 {all -> 0x08be, blocks: (B:33:0x0108, B:36:0x0117, B:84:0x02b8, B:86:0x02f7, B:88:0x02fc, B:89:0x0315, B:93:0x0326, B:95:0x033b, B:97:0x0342, B:98:0x035b, B:102:0x037e, B:106:0x03a6, B:107:0x03bf, B:111:0x03cf, B:114:0x03f2, B:115:0x0410, B:118:0x041a, B:120:0x0428, B:122:0x0434, B:124:0x043a, B:125:0x0445, B:127:0x044d, B:129:0x045d, B:131:0x046b, B:133:0x0476, B:135:0x0482, B:136:0x0499, B:138:0x04c6, B:141:0x04d6, B:144:0x0512, B:146:0x053a, B:148:0x0572, B:149:0x0577, B:151:0x057f, B:152:0x0584, B:154:0x058c, B:155:0x0591, B:157:0x059a, B:158:0x05a0, B:160:0x05ad, B:161:0x05b2, B:163:0x05c0, B:165:0x05ca, B:167:0x05d2, B:168:0x05d4, B:172:0x05e3, B:174:0x05eb, B:175:0x05f0, B:177:0x0605, B:179:0x060f, B:180:0x0612, B:182:0x0620, B:184:0x062a, B:186:0x062e, B:188:0x0639, B:200:0x06a7, B:202:0x06eb, B:204:0x06f1, B:206:0x06fa, B:207:0x06ff, B:209:0x070b, B:210:0x0772, B:212:0x077c, B:213:0x0783, B:215:0x078d, B:216:0x0794, B:217:0x079f, B:219:0x07a5, B:221:0x07d4, B:222:0x07e4, B:224:0x07ec, B:225:0x07f2, B:227:0x07f8, B:237:0x0843, B:239:0x0849, B:242:0x0865, B:244:0x0879, B:231:0x080a, B:233:0x082e, B:241:0x084d, B:189:0x0645, B:191:0x0657, B:193:0x065b, B:195:0x066d, B:199:0x06a4, B:196:0x0687, B:198:0x068d, B:169:0x05d8, B:171:0x05e0, B:145:0x052c, B:40:0x0125, B:43:0x0137, B:45:0x014e, B:51:0x016a, B:54:0x0196, B:56:0x019c, B:58:0x01aa, B:60:0x01b6, B:62:0x01c0, B:64:0x01cb, B:67:0x01d2, B:75:0x0268, B:77:0x0272, B:81:0x02a9, B:68:0x0201, B:69:0x021f, B:74:0x024d, B:73:0x023c, B:61:0x01bb, B:52:0x016f, B:53:0x018c), top: B:253:0x0108, inners: #0, #2 }] */
    /* JADX WARN: Removed duplicated region for block: B:78:0x02a3  */
    /* JADX WARN: Removed duplicated region for block: B:81:0x02a9 A[Catch: all -> 0x08be, TRY_LEAVE, TryCatch #1 {all -> 0x08be, blocks: (B:33:0x0108, B:36:0x0117, B:84:0x02b8, B:86:0x02f7, B:88:0x02fc, B:89:0x0315, B:93:0x0326, B:95:0x033b, B:97:0x0342, B:98:0x035b, B:102:0x037e, B:106:0x03a6, B:107:0x03bf, B:111:0x03cf, B:114:0x03f2, B:115:0x0410, B:118:0x041a, B:120:0x0428, B:122:0x0434, B:124:0x043a, B:125:0x0445, B:127:0x044d, B:129:0x045d, B:131:0x046b, B:133:0x0476, B:135:0x0482, B:136:0x0499, B:138:0x04c6, B:141:0x04d6, B:144:0x0512, B:146:0x053a, B:148:0x0572, B:149:0x0577, B:151:0x057f, B:152:0x0584, B:154:0x058c, B:155:0x0591, B:157:0x059a, B:158:0x05a0, B:160:0x05ad, B:161:0x05b2, B:163:0x05c0, B:165:0x05ca, B:167:0x05d2, B:168:0x05d4, B:172:0x05e3, B:174:0x05eb, B:175:0x05f0, B:177:0x0605, B:179:0x060f, B:180:0x0612, B:182:0x0620, B:184:0x062a, B:186:0x062e, B:188:0x0639, B:200:0x06a7, B:202:0x06eb, B:204:0x06f1, B:206:0x06fa, B:207:0x06ff, B:209:0x070b, B:210:0x0772, B:212:0x077c, B:213:0x0783, B:215:0x078d, B:216:0x0794, B:217:0x079f, B:219:0x07a5, B:221:0x07d4, B:222:0x07e4, B:224:0x07ec, B:225:0x07f2, B:227:0x07f8, B:237:0x0843, B:239:0x0849, B:242:0x0865, B:244:0x0879, B:231:0x080a, B:233:0x082e, B:241:0x084d, B:189:0x0645, B:191:0x0657, B:193:0x065b, B:195:0x066d, B:199:0x06a4, B:196:0x0687, B:198:0x068d, B:169:0x05d8, B:171:0x05e0, B:145:0x052c, B:40:0x0125, B:43:0x0137, B:45:0x014e, B:51:0x016a, B:54:0x0196, B:56:0x019c, B:58:0x01aa, B:60:0x01b6, B:62:0x01c0, B:64:0x01cb, B:67:0x01d2, B:75:0x0268, B:77:0x0272, B:81:0x02a9, B:68:0x0201, B:69:0x021f, B:74:0x024d, B:73:0x023c, B:61:0x01bb, B:52:0x016f, B:53:0x018c), top: B:253:0x0108, inners: #0, #2 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private final void b(com.google.android.gms.measurement.internal.zzan r28, com.google.android.gms.measurement.internal.zzm r29) {
        /*
            Method dump skipped, instruction units count: 2250
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.ee.b(com.google.android.gms.measurement.internal.zzan, com.google.android.gms.measurement.internal.zzm):void");
    }

    private final void u() {
        z();
        if (this.r || this.s || this.t) {
            this.j.d().B().a("Not stopping services. fetch, network, upload", Boolean.valueOf(this.r), Boolean.valueOf(this.s), Boolean.valueOf(this.t));
            return;
        }
        this.j.d().B().a("Stopping uploading service(s)");
        List<Runnable> list = this.o;
        if (list == null) {
            return;
        }
        Iterator<Runnable> it = list.iterator();
        while (it.hasNext()) {
            it.next().run();
        }
        this.o.clear();
    }

    private final boolean v() {
        C0375yb c0375ybW;
        String str;
        FileLock fileLock;
        z();
        if (this.j.o().a(C0324o.La) && (fileLock = this.u) != null && fileLock.isValid()) {
            this.j.d().B().a("Storage concurrent access okay");
            return true;
        }
        try {
            this.v = new RandomAccessFile(new File(this.j.e().getFilesDir(), "google_app_measurement.db"), "rw").getChannel();
            this.u = this.v.tryLock();
            if (this.u != null) {
                this.j.d().B().a("Storage concurrent access okay");
                return true;
            }
            this.j.d().t().a("Storage concurrent data access panic");
            return false;
        } catch (FileNotFoundException e2) {
            e = e2;
            c0375ybW = this.j.d().t();
            str = "Failed to acquire storage lock";
            c0375ybW.a(str, e);
            return false;
        } catch (IOException e3) {
            e = e3;
            c0375ybW = this.j.d().t();
            str = "Failed to access storage lock file";
            c0375ybW.a(str, e);
            return false;
        } catch (OverlappingFileLockException e4) {
            e = e4;
            c0375ybW = this.j.d().w();
            str = "Storage lock already acquired";
            c0375ybW.a(str, e);
            return false;
        }
    }

    private final boolean w() {
        z();
        p();
        return this.l;
    }

    private final Ib x() {
        Ib ib = this.f2238e;
        if (ib != null) {
            return ib;
        }
        throw new IllegalStateException("Network broadcast receiver not created");
    }

    private final _d y() {
        b(this.f2239f);
        return this.f2239f;
    }

    private final void z() {
        this.j.c().h();
    }

    protected final void a() {
        this.j.c().h();
        j().K();
        if (this.j.p().f2014f.a() == 0) {
            this.j.p().f2014f.a(this.j.g().a());
        }
        C();
    }

    final void a(int i, Throwable th, byte[] bArr, String str) {
        z();
        p();
        if (bArr == null) {
            try {
                bArr = new byte[0];
            } finally {
                this.s = false;
                u();
            }
        }
        List<Long> list = this.w;
        this.w = null;
        boolean z = true;
        if ((i == 200 || i == 204) && th == null) {
            try {
                this.j.p().f2014f.a(this.j.g().a());
                this.j.p().g.a(0L);
                C();
                this.j.d().B().a("Successful upload. Got network response. code, size", Integer.valueOf(i), Integer.valueOf(bArr.length));
                j().H();
                try {
                    for (Long l : list) {
                        try {
                            C0269d c0269dJ = j();
                            long jLongValue = l.longValue();
                            c0269dJ.h();
                            c0269dJ.s();
                            try {
                                if (c0269dJ.w().delete("queue", "rowid=?", new String[]{String.valueOf(jLongValue)}) != 1) {
                                    throw new SQLiteException("Deleted fewer rows from queue than expected");
                                }
                            } catch (SQLiteException e2) {
                                c0269dJ.d().t().a("Failed to delete a bundle in a queue table", e2);
                                throw e2;
                            }
                        } catch (SQLiteException e3) {
                            if (this.x == null || !this.x.contains(l)) {
                                throw e3;
                            }
                        }
                    }
                    j().v();
                    j().I();
                    this.x = null;
                    if (i().v() && B()) {
                        q();
                    } else {
                        this.y = -1L;
                        C();
                    }
                    this.n = 0L;
                } catch (Throwable th2) {
                    j().I();
                    throw th2;
                }
            } catch (SQLiteException e4) {
                this.j.d().t().a("Database error while trying to delete uploaded bundles", e4);
                this.n = this.j.g().b();
                this.j.d().B().a("Disable upload, time", Long.valueOf(this.n));
            }
        } else {
            this.j.d().B().a("Network upload failed. Will retry later. code, error", Integer.valueOf(i), th);
            this.j.p().g.a(this.j.g().a());
            if (i != 503 && i != 429) {
                z = false;
            }
            if (z) {
                this.j.p().h.a(this.j.g().a());
            }
            j().a(list);
            C();
        }
    }

    final void a(AbstractC0257ae abstractC0257ae) {
        this.p++;
    }

    final void a(zzan zzanVar, zzm zzmVar) {
        List<zzv> listA;
        List<zzv> listA2;
        List<zzv> listA3;
        C0375yb c0375ybT;
        String str;
        Object objA;
        String strC;
        Object obj;
        List<String> list;
        zzan zzanVar2 = zzanVar;
        com.google.android.gms.common.internal.r.a(zzmVar);
        com.google.android.gms.common.internal.r.b(zzmVar.f2516a);
        z();
        p();
        String str2 = zzmVar.f2516a;
        long j = zzanVar2.f2509d;
        if (m().a(zzanVar2, zzmVar)) {
            if (!zzmVar.h) {
                c(zzmVar);
                return;
            }
            if (this.j.o().e(str2, C0324o.va) && (list = zzmVar.u) != null) {
                if (!list.contains(zzanVar2.f2506a)) {
                    this.j.d().A().a("Dropping non-safelisted event. appId, event name, origin", str2, zzanVar2.f2506a, zzanVar2.f2508c);
                    return;
                } else {
                    Bundle bundleM = zzanVar2.f2507b.m();
                    bundleM.putLong("ga_safelisted", 1L);
                    zzanVar2 = new zzan(zzanVar2.f2506a, new zzam(bundleM), zzanVar2.f2508c, zzanVar2.f2509d);
                }
            }
            j().H();
            try {
                C0269d c0269dJ = j();
                com.google.android.gms.common.internal.r.b(str2);
                c0269dJ.h();
                c0269dJ.s();
                if (j < 0) {
                    c0269dJ.d().w().a("Invalid time querying timed out conditional properties", C0365wb.a(str2), Long.valueOf(j));
                    listA = Collections.emptyList();
                } else {
                    listA = c0269dJ.a("active=0 and app_id=? and abs(? - creation_timestamp) > trigger_timeout", new String[]{str2, String.valueOf(j)});
                }
                for (zzv zzvVar : listA) {
                    if (zzvVar != null) {
                        this.j.d().A().a("User property timed out", zzvVar.f2522a, this.j.w().c(zzvVar.f2524c.f2511b), zzvVar.f2524c.h());
                        if (zzvVar.g != null) {
                            b(new zzan(zzvVar.g, j), zzmVar);
                        }
                        j().e(str2, zzvVar.f2524c.f2511b);
                    }
                }
                C0269d c0269dJ2 = j();
                com.google.android.gms.common.internal.r.b(str2);
                c0269dJ2.h();
                c0269dJ2.s();
                if (j < 0) {
                    c0269dJ2.d().w().a("Invalid time querying expired conditional properties", C0365wb.a(str2), Long.valueOf(j));
                    listA2 = Collections.emptyList();
                } else {
                    listA2 = c0269dJ2.a("active<>0 and app_id=? and abs(? - triggered_timestamp) > time_to_live", new String[]{str2, String.valueOf(j)});
                }
                ArrayList arrayList = new ArrayList(listA2.size());
                for (zzv zzvVar2 : listA2) {
                    if (zzvVar2 != null) {
                        this.j.d().A().a("User property expired", zzvVar2.f2522a, this.j.w().c(zzvVar2.f2524c.f2511b), zzvVar2.f2524c.h());
                        j().b(str2, zzvVar2.f2524c.f2511b);
                        if (zzvVar2.k != null) {
                            arrayList.add(zzvVar2.k);
                        }
                        j().e(str2, zzvVar2.f2524c.f2511b);
                    }
                }
                int size = arrayList.size();
                int i = 0;
                while (i < size) {
                    Object obj2 = arrayList.get(i);
                    i++;
                    b(new zzan((zzan) obj2, j), zzmVar);
                }
                C0269d c0269dJ3 = j();
                String str3 = zzanVar2.f2506a;
                com.google.android.gms.common.internal.r.b(str2);
                com.google.android.gms.common.internal.r.b(str3);
                c0269dJ3.h();
                c0269dJ3.s();
                if (j < 0) {
                    c0269dJ3.d().w().a("Invalid time querying triggered conditional properties", C0365wb.a(str2), c0269dJ3.j().a(str3), Long.valueOf(j));
                    listA3 = Collections.emptyList();
                } else {
                    listA3 = c0269dJ3.a("active=0 and app_id=? and trigger_event_name=? and abs(? - creation_timestamp) <= trigger_timeout", new String[]{str2, str3, String.valueOf(j)});
                }
                ArrayList arrayList2 = new ArrayList(listA3.size());
                for (zzv zzvVar3 : listA3) {
                    if (zzvVar3 != null) {
                        zzkj zzkjVar = zzvVar3.f2524c;
                        me meVar = new me(zzvVar3.f2522a, zzvVar3.f2523b, zzkjVar.f2511b, j, zzkjVar.h());
                        if (j().a(meVar)) {
                            c0375ybT = this.j.d().A();
                            str = "User property triggered";
                            objA = zzvVar3.f2522a;
                            strC = this.j.w().c(meVar.f2341c);
                            obj = meVar.f2343e;
                        } else {
                            c0375ybT = this.j.d().t();
                            str = "Too many active user properties, ignoring";
                            objA = C0365wb.a(zzvVar3.f2522a);
                            strC = this.j.w().c(meVar.f2341c);
                            obj = meVar.f2343e;
                        }
                        c0375ybT.a(str, objA, strC, obj);
                        if (zzvVar3.i != null) {
                            arrayList2.add(zzvVar3.i);
                        }
                        zzvVar3.f2524c = new zzkj(meVar);
                        zzvVar3.f2526e = true;
                        j().a(zzvVar3);
                    }
                }
                b(zzanVar2, zzmVar);
                int size2 = arrayList2.size();
                int i2 = 0;
                while (i2 < size2) {
                    Object obj3 = arrayList2.get(i2);
                    i2++;
                    b(new zzan((zzan) obj3, j), zzmVar);
                }
                j().v();
            } finally {
                j().I();
            }
        }
    }

    final void a(zzan zzanVar, String str) {
        C0267cc c0267ccB = j().b(str);
        if (c0267ccB == null || TextUtils.isEmpty(c0267ccB.u())) {
            this.j.d().A().a("No app data available; dropping event", str);
            return;
        }
        Boolean boolB = b(c0267ccB);
        if (boolB == null) {
            if (!"_ui".equals(zzanVar.f2506a)) {
                this.j.d().w().a("Could not find package. appId", C0365wb.a(str));
            }
        } else if (!boolB.booleanValue()) {
            this.j.d().t().a("App version does not match; dropping event. appId", C0365wb.a(str));
            return;
        }
        a(zzanVar, new zzm(str, c0267ccB.n(), c0267ccB.u(), c0267ccB.v(), c0267ccB.w(), c0267ccB.x(), c0267ccB.y(), (String) null, c0267ccB.A(), false, c0267ccB.r(), c0267ccB.f(), 0L, 0, c0267ccB.g(), c0267ccB.h(), false, c0267ccB.o(), c0267ccB.i(), c0267ccB.z(), c0267ccB.j(), (Ce.a() && this.j.o().e(c0267ccB.l(), C0324o.Na)) ? c0267ccB.p() : null));
    }

    /* JADX WARN: Removed duplicated region for block: B:43:0x00e5  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    final void a(com.google.android.gms.measurement.internal.zzkj r13, com.google.android.gms.measurement.internal.zzm r14) {
        /*
            Method dump skipped, instruction units count: 478
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.ee.a(com.google.android.gms.measurement.internal.zzkj, com.google.android.gms.measurement.internal.zzm):void");
    }

    final void a(zzm zzmVar) {
        if (this.w != null) {
            this.x = new ArrayList();
            this.x.addAll(this.w);
        }
        C0269d c0269dJ = j();
        String str = zzmVar.f2516a;
        com.google.android.gms.common.internal.r.b(str);
        c0269dJ.h();
        c0269dJ.s();
        try {
            SQLiteDatabase sQLiteDatabaseW = c0269dJ.w();
            String[] strArr = {str};
            int iDelete = sQLiteDatabaseW.delete("apps", "app_id=?", strArr) + 0 + sQLiteDatabaseW.delete("events", "app_id=?", strArr) + sQLiteDatabaseW.delete("user_attributes", "app_id=?", strArr) + sQLiteDatabaseW.delete("conditional_properties", "app_id=?", strArr) + sQLiteDatabaseW.delete("raw_events", "app_id=?", strArr) + sQLiteDatabaseW.delete("raw_events_metadata", "app_id=?", strArr) + sQLiteDatabaseW.delete("queue", "app_id=?", strArr) + sQLiteDatabaseW.delete("audience_filter_values", "app_id=?", strArr) + sQLiteDatabaseW.delete("main_event_params", "app_id=?", strArr);
            if (iDelete > 0) {
                c0269dJ.d().B().a("Reset analytics data. app, records", str, Integer.valueOf(iDelete));
            }
        } catch (SQLiteException e2) {
            c0269dJ.d().t().a("Error resetting analytics data. appId, error", C0365wb.a(str), e2);
        }
        if (C0164le.a() && this.j.o().a(C0324o.Sa)) {
            if (zzmVar.h) {
                b(zzmVar);
            }
        } else {
            zzm zzmVarA = a(this.j.e(), zzmVar.f2516a, zzmVar.f2517b, zzmVar.h, zzmVar.o, zzmVar.p, zzmVar.m, zzmVar.r, zzmVar.v);
            if (zzmVar.h) {
                b(zzmVarA);
            }
        }
    }

    final void a(zzv zzvVar) {
        zzm zzmVarA = a(zzvVar.f2522a);
        if (zzmVarA != null) {
            a(zzvVar, zzmVarA);
        }
    }

    final void a(zzv zzvVar, zzm zzmVar) {
        C0375yb c0375ybT;
        String str;
        Object objA;
        String strC;
        Object objH;
        C0375yb c0375ybT2;
        String str2;
        Object objA2;
        String strC2;
        Object obj;
        com.google.android.gms.common.internal.r.a(zzvVar);
        com.google.android.gms.common.internal.r.b(zzvVar.f2522a);
        com.google.android.gms.common.internal.r.a(zzvVar.f2523b);
        com.google.android.gms.common.internal.r.a(zzvVar.f2524c);
        com.google.android.gms.common.internal.r.b(zzvVar.f2524c.f2511b);
        z();
        p();
        if (TextUtils.isEmpty(zzmVar.f2517b) && TextUtils.isEmpty(zzmVar.r)) {
            return;
        }
        if (!zzmVar.h) {
            c(zzmVar);
            return;
        }
        zzv zzvVar2 = new zzv(zzvVar);
        boolean z = false;
        zzvVar2.f2526e = false;
        j().H();
        try {
            zzv zzvVarD = j().d(zzvVar2.f2522a, zzvVar2.f2524c.f2511b);
            if (zzvVarD != null && !zzvVarD.f2523b.equals(zzvVar2.f2523b)) {
                this.j.d().w().a("Updating a conditional user property with different origin. name, origin, origin (from DB)", this.j.w().c(zzvVar2.f2524c.f2511b), zzvVar2.f2523b, zzvVarD.f2523b);
            }
            if (zzvVarD != null && zzvVarD.f2526e) {
                zzvVar2.f2523b = zzvVarD.f2523b;
                zzvVar2.f2525d = zzvVarD.f2525d;
                zzvVar2.h = zzvVarD.h;
                zzvVar2.f2527f = zzvVarD.f2527f;
                zzvVar2.i = zzvVarD.i;
                zzvVar2.f2526e = zzvVarD.f2526e;
                zzvVar2.f2524c = new zzkj(zzvVar2.f2524c.f2511b, zzvVarD.f2524c.f2512c, zzvVar2.f2524c.h(), zzvVarD.f2524c.g);
            } else if (TextUtils.isEmpty(zzvVar2.f2527f)) {
                zzvVar2.f2524c = new zzkj(zzvVar2.f2524c.f2511b, zzvVar2.f2525d, zzvVar2.f2524c.h(), zzvVar2.f2524c.g);
                zzvVar2.f2526e = true;
                z = true;
            }
            if (zzvVar2.f2526e) {
                zzkj zzkjVar = zzvVar2.f2524c;
                me meVar = new me(zzvVar2.f2522a, zzvVar2.f2523b, zzkjVar.f2511b, zzkjVar.f2512c, zzkjVar.h());
                if (j().a(meVar)) {
                    c0375ybT2 = this.j.d().A();
                    str2 = "User property updated immediately";
                    objA2 = zzvVar2.f2522a;
                    strC2 = this.j.w().c(meVar.f2341c);
                    obj = meVar.f2343e;
                } else {
                    c0375ybT2 = this.j.d().t();
                    str2 = "(2)Too many active user properties, ignoring";
                    objA2 = C0365wb.a(zzvVar2.f2522a);
                    strC2 = this.j.w().c(meVar.f2341c);
                    obj = meVar.f2343e;
                }
                c0375ybT2.a(str2, objA2, strC2, obj);
                if (z && zzvVar2.i != null) {
                    b(new zzan(zzvVar2.i, zzvVar2.f2525d), zzmVar);
                }
            }
            if (j().a(zzvVar2)) {
                c0375ybT = this.j.d().A();
                str = "Conditional property added";
                objA = zzvVar2.f2522a;
                strC = this.j.w().c(zzvVar2.f2524c.f2511b);
                objH = zzvVar2.f2524c.h();
            } else {
                c0375ybT = this.j.d().t();
                str = "Too many conditional properties, ignoring";
                objA = C0365wb.a(zzvVar2.f2522a);
                strC = this.j.w().c(zzvVar2.f2524c.f2511b);
                objH = zzvVar2.f2524c.h();
            }
            c0375ybT.a(str, objA, strC, objH);
            j().v();
        } finally {
            j().I();
        }
    }

    final void a(Runnable runnable) {
        z();
        if (this.o == null) {
            this.o = new ArrayList();
        }
        this.o.add(runnable);
    }

    /* JADX WARN: Removed duplicated region for block: B:55:0x0132 A[Catch: all -> 0x0179, TryCatch #1 {all -> 0x0179, blocks: (B:6:0x0029, B:15:0x0045, B:62:0x016d, B:20:0x0061, B:27:0x00b0, B:28:0x00c5, B:31:0x00cd, B:34:0x00d9, B:36:0x00df, B:41:0x00ec, B:53:0x011c, B:55:0x0132, B:57:0x015a, B:59:0x0164, B:61:0x016a, B:56:0x0142, B:47:0x0103, B:49:0x010d), top: B:72:0x0029, outer: #0 }] */
    /* JADX WARN: Removed duplicated region for block: B:56:0x0142 A[Catch: all -> 0x0179, TryCatch #1 {all -> 0x0179, blocks: (B:6:0x0029, B:15:0x0045, B:62:0x016d, B:20:0x0061, B:27:0x00b0, B:28:0x00c5, B:31:0x00cd, B:34:0x00d9, B:36:0x00df, B:41:0x00ec, B:53:0x011c, B:55:0x0132, B:57:0x015a, B:59:0x0164, B:61:0x016a, B:56:0x0142, B:47:0x0103, B:49:0x010d), top: B:72:0x0029, outer: #0 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    final void a(java.lang.String r7, int r8, java.lang.Throwable r9, byte[] r10, java.util.Map<java.lang.String, java.util.List<java.lang.String>> r11) {
        /*
            Method dump skipped, instruction units count: 395
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.ee.a(java.lang.String, int, java.lang.Throwable, byte[], java.util.Map):void");
    }

    final void a(boolean z) {
        C();
    }

    public final ze b() {
        return this.j.o();
    }

    final void b(zzkj zzkjVar, zzm zzmVar) {
        z();
        p();
        if (TextUtils.isEmpty(zzmVar.f2517b) && TextUtils.isEmpty(zzmVar.r)) {
            return;
        }
        if (!zzmVar.h) {
            c(zzmVar);
            return;
        }
        if (!this.j.o().e(zzmVar.f2516a, C0324o.ka)) {
            this.j.d().A().a("Removing user property", this.j.w().c(zzkjVar.f2511b));
            j().H();
            try {
                c(zzmVar);
                j().b(zzmVar.f2516a, zzkjVar.f2511b);
                j().v();
                this.j.d().A().a("User property removed", this.j.w().c(zzkjVar.f2511b));
                return;
            } finally {
            }
        }
        if ("_npa".equals(zzkjVar.f2511b) && zzmVar.s != null) {
            this.j.d().A().a("Falling back to manifest metadata value for ad personalization");
            a(new zzkj("_npa", this.j.g().a(), Long.valueOf(zzmVar.s.booleanValue() ? 1L : 0L), "auto"), zzmVar);
            return;
        }
        this.j.d().A().a("Removing user property", this.j.w().c(zzkjVar.f2511b));
        j().H();
        try {
            c(zzmVar);
            j().b(zzmVar.f2516a, zzkjVar.f2511b);
            j().v();
            this.j.d().A().a("User property removed", this.j.w().c(zzkjVar.f2511b));
        } finally {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:169:0x047f A[Catch: all -> 0x04db, TryCatch #1 {all -> 0x04db, blocks: (B:29:0x00b8, B:31:0x00c8, B:33:0x00d6, B:35:0x00e0, B:37:0x00e4, B:41:0x00f5, B:43:0x010d, B:50:0x0134, B:52:0x0140, B:54:0x0157, B:55:0x017f, B:57:0x0186, B:59:0x01c9, B:69:0x01f5, B:71:0x0200, B:76:0x020f, B:78:0x0217, B:80:0x021d, B:84:0x022c, B:86:0x022f, B:89:0x0254, B:91:0x0259, B:92:0x0261, B:98:0x0275, B:101:0x0289, B:103:0x02ae, B:104:0x02bc, B:106:0x02ef, B:108:0x02f7, B:110:0x02fb, B:111:0x02fe, B:113:0x031f, B:154:0x03ff, B:155:0x0404, B:156:0x0414, B:167:0x046f, B:169:0x047f, B:171:0x0497, B:172:0x049e, B:173:0x04ae, B:177:0x04cc, B:116:0x033b, B:121:0x0366, B:123:0x036e, B:125:0x0378, B:130:0x038e, B:134:0x0398, B:138:0x03a3, B:141:0x03b6, B:146:0x03e1, B:148:0x03e7, B:149:0x03ec, B:151:0x03f2, B:144:0x03c9, B:119:0x034e, B:159:0x041c, B:161:0x044f, B:163:0x0457, B:165:0x045b, B:166:0x045e, B:174:0x04b2, B:176:0x04b6, B:95:0x0269, B:65:0x01df, B:45:0x0117, B:48:0x0121), top: B:186:0x00b8, inners: #0, #2 }] */
    /* JADX WARN: Removed duplicated region for block: B:174:0x04b2 A[Catch: all -> 0x04db, TryCatch #1 {all -> 0x04db, blocks: (B:29:0x00b8, B:31:0x00c8, B:33:0x00d6, B:35:0x00e0, B:37:0x00e4, B:41:0x00f5, B:43:0x010d, B:50:0x0134, B:52:0x0140, B:54:0x0157, B:55:0x017f, B:57:0x0186, B:59:0x01c9, B:69:0x01f5, B:71:0x0200, B:76:0x020f, B:78:0x0217, B:80:0x021d, B:84:0x022c, B:86:0x022f, B:89:0x0254, B:91:0x0259, B:92:0x0261, B:98:0x0275, B:101:0x0289, B:103:0x02ae, B:104:0x02bc, B:106:0x02ef, B:108:0x02f7, B:110:0x02fb, B:111:0x02fe, B:113:0x031f, B:154:0x03ff, B:155:0x0404, B:156:0x0414, B:167:0x046f, B:169:0x047f, B:171:0x0497, B:172:0x049e, B:173:0x04ae, B:177:0x04cc, B:116:0x033b, B:121:0x0366, B:123:0x036e, B:125:0x0378, B:130:0x038e, B:134:0x0398, B:138:0x03a3, B:141:0x03b6, B:146:0x03e1, B:148:0x03e7, B:149:0x03ec, B:151:0x03f2, B:144:0x03c9, B:119:0x034e, B:159:0x041c, B:161:0x044f, B:163:0x0457, B:165:0x045b, B:166:0x045e, B:174:0x04b2, B:176:0x04b6, B:95:0x0269, B:65:0x01df, B:45:0x0117, B:48:0x0121), top: B:186:0x00b8, inners: #0, #2 }] */
    /* JADX WARN: Removed duplicated region for block: B:67:0x01f2  */
    /* JADX WARN: Removed duplicated region for block: B:83:0x022b  */
    /* JADX WARN: Removed duplicated region for block: B:86:0x022f A[Catch: all -> 0x04db, TryCatch #1 {all -> 0x04db, blocks: (B:29:0x00b8, B:31:0x00c8, B:33:0x00d6, B:35:0x00e0, B:37:0x00e4, B:41:0x00f5, B:43:0x010d, B:50:0x0134, B:52:0x0140, B:54:0x0157, B:55:0x017f, B:57:0x0186, B:59:0x01c9, B:69:0x01f5, B:71:0x0200, B:76:0x020f, B:78:0x0217, B:80:0x021d, B:84:0x022c, B:86:0x022f, B:89:0x0254, B:91:0x0259, B:92:0x0261, B:98:0x0275, B:101:0x0289, B:103:0x02ae, B:104:0x02bc, B:106:0x02ef, B:108:0x02f7, B:110:0x02fb, B:111:0x02fe, B:113:0x031f, B:154:0x03ff, B:155:0x0404, B:156:0x0414, B:167:0x046f, B:169:0x047f, B:171:0x0497, B:172:0x049e, B:173:0x04ae, B:177:0x04cc, B:116:0x033b, B:121:0x0366, B:123:0x036e, B:125:0x0378, B:130:0x038e, B:134:0x0398, B:138:0x03a3, B:141:0x03b6, B:146:0x03e1, B:148:0x03e7, B:149:0x03ec, B:151:0x03f2, B:144:0x03c9, B:119:0x034e, B:159:0x041c, B:161:0x044f, B:163:0x0457, B:165:0x045b, B:166:0x045e, B:174:0x04b2, B:176:0x04b6, B:95:0x0269, B:65:0x01df, B:45:0x0117, B:48:0x0121), top: B:186:0x00b8, inners: #0, #2 }] */
    /* JADX WARN: Removed duplicated region for block: B:91:0x0259 A[Catch: all -> 0x04db, TryCatch #1 {all -> 0x04db, blocks: (B:29:0x00b8, B:31:0x00c8, B:33:0x00d6, B:35:0x00e0, B:37:0x00e4, B:41:0x00f5, B:43:0x010d, B:50:0x0134, B:52:0x0140, B:54:0x0157, B:55:0x017f, B:57:0x0186, B:59:0x01c9, B:69:0x01f5, B:71:0x0200, B:76:0x020f, B:78:0x0217, B:80:0x021d, B:84:0x022c, B:86:0x022f, B:89:0x0254, B:91:0x0259, B:92:0x0261, B:98:0x0275, B:101:0x0289, B:103:0x02ae, B:104:0x02bc, B:106:0x02ef, B:108:0x02f7, B:110:0x02fb, B:111:0x02fe, B:113:0x031f, B:154:0x03ff, B:155:0x0404, B:156:0x0414, B:167:0x046f, B:169:0x047f, B:171:0x0497, B:172:0x049e, B:173:0x04ae, B:177:0x04cc, B:116:0x033b, B:121:0x0366, B:123:0x036e, B:125:0x0378, B:130:0x038e, B:134:0x0398, B:138:0x03a3, B:141:0x03b6, B:146:0x03e1, B:148:0x03e7, B:149:0x03ec, B:151:0x03f2, B:144:0x03c9, B:119:0x034e, B:159:0x041c, B:161:0x044f, B:163:0x0457, B:165:0x045b, B:166:0x045e, B:174:0x04b2, B:176:0x04b6, B:95:0x0269, B:65:0x01df, B:45:0x0117, B:48:0x0121), top: B:186:0x00b8, inners: #0, #2 }] */
    /* JADX WARN: Removed duplicated region for block: B:93:0x0266  */
    /* JADX WARN: Removed duplicated region for block: B:98:0x0275 A[Catch: all -> 0x04db, TRY_LEAVE, TryCatch #1 {all -> 0x04db, blocks: (B:29:0x00b8, B:31:0x00c8, B:33:0x00d6, B:35:0x00e0, B:37:0x00e4, B:41:0x00f5, B:43:0x010d, B:50:0x0134, B:52:0x0140, B:54:0x0157, B:55:0x017f, B:57:0x0186, B:59:0x01c9, B:69:0x01f5, B:71:0x0200, B:76:0x020f, B:78:0x0217, B:80:0x021d, B:84:0x022c, B:86:0x022f, B:89:0x0254, B:91:0x0259, B:92:0x0261, B:98:0x0275, B:101:0x0289, B:103:0x02ae, B:104:0x02bc, B:106:0x02ef, B:108:0x02f7, B:110:0x02fb, B:111:0x02fe, B:113:0x031f, B:154:0x03ff, B:155:0x0404, B:156:0x0414, B:167:0x046f, B:169:0x047f, B:171:0x0497, B:172:0x049e, B:173:0x04ae, B:177:0x04cc, B:116:0x033b, B:121:0x0366, B:123:0x036e, B:125:0x0378, B:130:0x038e, B:134:0x0398, B:138:0x03a3, B:141:0x03b6, B:146:0x03e1, B:148:0x03e7, B:149:0x03ec, B:151:0x03f2, B:144:0x03c9, B:119:0x034e, B:159:0x041c, B:161:0x044f, B:163:0x0457, B:165:0x045b, B:166:0x045e, B:174:0x04b2, B:176:0x04b6, B:95:0x0269, B:65:0x01df, B:45:0x0117, B:48:0x0121), top: B:186:0x00b8, inners: #0, #2 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    final void b(com.google.android.gms.measurement.internal.zzm r22) {
        /*
            Method dump skipped, instruction units count: 1254
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.ee.b(com.google.android.gms.measurement.internal.zzm):void");
    }

    final void b(zzv zzvVar) {
        zzm zzmVarA = a(zzvVar.f2522a);
        if (zzmVarA != null) {
            b(zzvVar, zzmVarA);
        }
    }

    final void b(zzv zzvVar, zzm zzmVar) {
        com.google.android.gms.common.internal.r.a(zzvVar);
        com.google.android.gms.common.internal.r.b(zzvVar.f2522a);
        com.google.android.gms.common.internal.r.a(zzvVar.f2524c);
        com.google.android.gms.common.internal.r.b(zzvVar.f2524c.f2511b);
        z();
        p();
        if (TextUtils.isEmpty(zzmVar.f2517b) && TextUtils.isEmpty(zzmVar.r)) {
            return;
        }
        if (!zzmVar.h) {
            c(zzmVar);
            return;
        }
        j().H();
        try {
            c(zzmVar);
            zzv zzvVarD = j().d(zzvVar.f2522a, zzvVar.f2524c.f2511b);
            if (zzvVarD != null) {
                this.j.d().A().a("Removing conditional user property", zzvVar.f2522a, this.j.w().c(zzvVar.f2524c.f2511b));
                j().e(zzvVar.f2522a, zzvVar.f2524c.f2511b);
                if (zzvVarD.f2526e) {
                    j().b(zzvVar.f2522a, zzvVar.f2524c.f2511b);
                }
                if (zzvVar.k != null) {
                    b(this.j.v().a(zzvVar.f2522a, zzvVar.k.f2506a, zzvVar.k.f2507b != null ? zzvVar.k.f2507b.m() : null, zzvVarD.f2523b, zzvVar.k.f2509d, true, false), zzmVar);
                }
            } else {
                this.j.d().w().a("Conditional user property doesn't exist", C0365wb.a(zzvVar.f2522a), this.j.w().c(zzvVar.f2524c.f2511b));
            }
            j().v();
        } finally {
            j().I();
        }
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final Xb c() {
        return this.j.c();
    }

    final C0267cc c(zzm zzmVar) {
        z();
        p();
        com.google.android.gms.common.internal.r.a(zzmVar);
        com.google.android.gms.common.internal.r.b(zzmVar.f2516a);
        C0267cc c0267ccB = j().b(zzmVar.f2516a);
        String strB = this.j.p().b(zzmVar.f2516a);
        if (!C0198qe.a() || !C0324o.Va.a(null).booleanValue()) {
            return a(zzmVar, c0267ccB, strB);
        }
        if (c0267ccB == null) {
            c0267ccB = new C0267cc(this.j, zzmVar.f2516a);
            c0267ccB.a(this.j.v().x());
            c0267ccB.e(strB);
        } else if (!strB.equals(c0267ccB.q())) {
            c0267ccB.e(strB);
            c0267ccB.a(this.j.v().x());
        }
        c0267ccB.b(zzmVar.f2517b);
        c0267ccB.c(zzmVar.r);
        if (Ce.a() && this.j.o().e(c0267ccB.l(), C0324o.Na)) {
            c0267ccB.d(zzmVar.v);
        }
        if (!TextUtils.isEmpty(zzmVar.k)) {
            c0267ccB.f(zzmVar.k);
        }
        long j = zzmVar.f2520e;
        if (j != 0) {
            c0267ccB.d(j);
        }
        if (!TextUtils.isEmpty(zzmVar.f2518c)) {
            c0267ccB.g(zzmVar.f2518c);
        }
        c0267ccB.c(zzmVar.j);
        String str = zzmVar.f2519d;
        if (str != null) {
            c0267ccB.h(str);
        }
        c0267ccB.e(zzmVar.f2521f);
        c0267ccB.a(zzmVar.h);
        if (!TextUtils.isEmpty(zzmVar.g)) {
            c0267ccB.i(zzmVar.g);
        }
        c0267ccB.p(zzmVar.l);
        c0267ccB.b(zzmVar.o);
        c0267ccB.c(zzmVar.p);
        if (this.j.o().e(zzmVar.f2516a, C0324o.ka)) {
            c0267ccB.a(zzmVar.s);
        }
        c0267ccB.f(zzmVar.t);
        if (c0267ccB.a()) {
            j().a(c0267ccB);
        }
        return c0267ccB;
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final C0365wb d() {
        return this.j.d();
    }

    final String d(zzm zzmVar) {
        try {
            return (String) this.j.c().a(new he(this, zzmVar)).get(30000L, TimeUnit.MILLISECONDS);
        } catch (InterruptedException | ExecutionException | TimeoutException e2) {
            this.j.d().t().a("Failed to get app instance id. appId", C0365wb.a(zzmVar.f2516a), e2);
            return null;
        }
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final Context e() {
        return this.j.e();
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final ye f() {
        return this.j.f();
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final com.google.android.gms.common.util.e g() {
        return this.j.g();
    }

    public final Vb h() {
        b(this.f2235b);
        return this.f2235b;
    }

    public final Ab i() {
        b(this.f2236c);
        return this.f2236c;
    }

    public final C0269d j() {
        b(this.f2237d);
        return this.f2237d;
    }

    public final qe k() {
        b(this.g);
        return this.g;
    }

    public final C0288gd l() {
        b(this.i);
        return this.i;
    }

    public final ie m() {
        b(this.h);
        return this.h;
    }

    public final C0355ub n() {
        return this.j.w();
    }

    public final le o() {
        return this.j.v();
    }

    final void p() {
        if (!this.k) {
            throw new IllegalStateException("UploadController is not initialized");
        }
    }

    final void q() {
        C0267cc c0267ccB;
        String strS;
        C0375yb c0375ybB;
        String str;
        z();
        p();
        this.t = true;
        try {
            this.j.f();
            Boolean boolG = this.j.E().G();
            if (boolG == null) {
                c0375ybB = this.j.d().w();
                str = "Upload data called on the client side before use of service was decided";
            } else {
                if (!boolG.booleanValue()) {
                    if (this.n > 0) {
                        C();
                    } else {
                        z();
                        if (this.w != null) {
                            c0375ybB = this.j.d().B();
                            str = "Uploading requested multiple times";
                        } else if (i().v()) {
                            long jA = this.j.g().a();
                            a((String) null, jA - ze.u());
                            long jA2 = this.j.p().f2014f.a();
                            if (jA2 != 0) {
                                this.j.d().A().a("Uploading events. Elapsed time since last upload attempt (ms)", Long.valueOf(Math.abs(jA - jA2)));
                            }
                            String strX = j().x();
                            if (TextUtils.isEmpty(strX)) {
                                this.y = -1L;
                                String strA = j().a(jA - ze.u());
                                if (!TextUtils.isEmpty(strA) && (c0267ccB = j().b(strA)) != null) {
                                    a(c0267ccB);
                                }
                            } else {
                                if (this.y == -1) {
                                    this.y = j().y();
                                }
                                List<Pair<com.google.android.gms.internal.measurement.V, Long>> listA = j().a(strX, this.j.o().b(strX, C0324o.n), Math.max(0, this.j.o().b(strX, C0324o.o)));
                                if (!listA.isEmpty()) {
                                    Iterator<Pair<com.google.android.gms.internal.measurement.V, Long>> it = listA.iterator();
                                    while (true) {
                                        if (!it.hasNext()) {
                                            strS = null;
                                            break;
                                        }
                                        com.google.android.gms.internal.measurement.V v = (com.google.android.gms.internal.measurement.V) it.next().first;
                                        if (!TextUtils.isEmpty(v.s())) {
                                            strS = v.s();
                                            break;
                                        }
                                    }
                                    if (strS != null) {
                                        int i = 0;
                                        while (true) {
                                            if (i >= listA.size()) {
                                                break;
                                            }
                                            com.google.android.gms.internal.measurement.V v2 = (com.google.android.gms.internal.measurement.V) listA.get(i).first;
                                            if (!TextUtils.isEmpty(v2.s()) && !v2.s().equals(strS)) {
                                                listA = listA.subList(0, i);
                                                break;
                                            }
                                            i++;
                                        }
                                    }
                                    U.a aVarP = com.google.android.gms.internal.measurement.U.p();
                                    int size = listA.size();
                                    ArrayList arrayList = new ArrayList(listA.size());
                                    boolean z = ze.x() && this.j.o().d(strX);
                                    for (int i2 = 0; i2 < size; i2++) {
                                        V.a aVarK = ((com.google.android.gms.internal.measurement.V) listA.get(i2).first).k();
                                        arrayList.add((Long) listA.get(i2).second);
                                        aVarK.g(this.j.o().o());
                                        aVarK.a(jA);
                                        this.j.f();
                                        aVarK.b(false);
                                        if (!z) {
                                            aVarK.x();
                                        }
                                        if (this.j.o().e(strX, C0324o.qa)) {
                                            aVarK.l(m().a(((com.google.android.gms.internal.measurement.V) ((com.google.android.gms.internal.measurement.Jb) aVarK.j())).g()));
                                        }
                                        aVarP.a(aVarK);
                                    }
                                    String strA2 = this.j.d().a(2) ? m().a((com.google.android.gms.internal.measurement.U) ((com.google.android.gms.internal.measurement.Jb) aVarP.j())) : null;
                                    m();
                                    byte[] bArrG = ((com.google.android.gms.internal.measurement.U) ((com.google.android.gms.internal.measurement.Jb) aVarP.j())).g();
                                    String strA3 = C0324o.x.a(null);
                                    try {
                                        URL url = new URL(strA3);
                                        com.google.android.gms.common.internal.r.a(!arrayList.isEmpty());
                                        if (this.w != null) {
                                            this.j.d().t().a("Set uploading progress before finishing the previous upload");
                                        } else {
                                            this.w = new ArrayList(arrayList);
                                        }
                                        this.j.p().g.a(jA);
                                        this.j.d().B().a("Uploading data. app, uncompressed size, data", size > 0 ? aVarP.a(0).qa() : "?", Integer.valueOf(bArrG.length), strA2);
                                        this.s = true;
                                        Ab abI = i();
                                        ge geVar = new ge(this, strX);
                                        abI.h();
                                        abI.s();
                                        com.google.android.gms.common.internal.r.a(url);
                                        com.google.android.gms.common.internal.r.a(bArrG);
                                        com.google.android.gms.common.internal.r.a(geVar);
                                        abI.c().b(new Fb(abI, strX, url, bArrG, null, geVar));
                                    } catch (MalformedURLException unused) {
                                        this.j.d().t().a("Failed to parse upload URL. Not uploading. appId", C0365wb.a(strX), strA3);
                                    }
                                }
                            }
                        } else {
                            this.j.d().B().a("Network not connected, ignoring upload request");
                            C();
                        }
                    }
                }
                c0375ybB = this.j.d().t();
                str = "Upload called in the client side when service should be used";
            }
            c0375ybB.a(str);
        } finally {
            this.t = false;
            u();
        }
    }

    final void r() {
        C0375yb c0375ybT;
        Integer numValueOf;
        Integer numValueOf2;
        String str;
        z();
        p();
        if (!this.m) {
            this.m = true;
            z();
            p();
            if ((this.j.o().a(C0324o.na) || w()) && v()) {
                int iA = a(this.v);
                int iE = this.j.G().E();
                z();
                if (iA > iE) {
                    c0375ybT = this.j.d().t();
                    numValueOf = Integer.valueOf(iA);
                    numValueOf2 = Integer.valueOf(iE);
                    str = "Panic: can't downgrade version. Previous, current version";
                } else if (iA < iE) {
                    if (a(iE, this.v)) {
                        c0375ybT = this.j.d().B();
                        numValueOf = Integer.valueOf(iA);
                        numValueOf2 = Integer.valueOf(iE);
                        str = "Storage version upgraded. Previous, current version";
                    } else {
                        c0375ybT = this.j.d().t();
                        numValueOf = Integer.valueOf(iA);
                        numValueOf2 = Integer.valueOf(iE);
                        str = "Storage version upgrade failed. Previous, current version";
                    }
                }
                c0375ybT.a(str, numValueOf, numValueOf2);
            }
        }
        if (this.l || this.j.o().a(C0324o.na)) {
            return;
        }
        this.j.d().z().a("This instance being marked as an uploader");
        this.l = true;
        C();
    }

    final void s() {
        this.q++;
    }

    final _b t() {
        return this.j;
    }
}
