package jp.co.ymm.android.ringtone.net;

import android.annotation.SuppressLint;
import android.content.Context;
import android.content.pm.PackageInfo;
import android.os.Build;
import android.os.Environment;
import android.os.StatFs;
import android.provider.Settings;
import android.text.TextUtils;
import java.io.File;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.zip.ZipFile;
import jp.co.ymm.android.ringtone.net.a.j;
import jp.co.ymm.android.ringtone.util.RingtoneSiteJs;
import jp.co.ymm.android.ringtone.util.l;
import jp.co.ymm.android.ringtone.util.o;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private c f3701a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Context f3702b;

    public enum a {
        FIRST,
        UPDATE
    }

    public h(Context context) {
        this.f3702b = context;
    }

    public int a() {
        return this.f3702b.getSharedPreferences(o.L, 0).getInt(o.Volume_Alarm.name(), o.M);
    }

    public String a(a aVar) {
        long j;
        if (Build.VERSION.SDK_INT < 9) {
            return c();
        }
        PackageInfo packageInfoD = z.d(this.f3702b);
        if (packageInfoD == null) {
            return "";
        }
        if (aVar == a.FIRST) {
            j = packageInfoD.firstInstallTime;
        } else {
            if (aVar != a.UPDATE) {
                return "";
            }
            j = packageInfoD.lastUpdateTime;
        }
        return new SimpleDateFormat("yyyy-MM-dd HH:mm:ss").format(new Date(j));
    }

    public boolean a(String str, f fVar) {
        try {
            j jVar = new j();
            jVar.f3679a.f3685a = "1";
            jVar.f3679a.f3686b = RingtoneSiteJs.RINGTONE_SITE_JS_NAME;
            jVar.f3679a.f3687c = z.a();
            jVar.f3679a.f3688d = str;
            jVar.f3679a.f3689e = 1;
            jVar.f3679a.h = Build.MODEL;
            jVar.f3679a.f3690f = Build.VERSION.RELEASE;
            jVar.f3679a.g = z.e(this.f3702b);
            jVar.f3679a.i = b();
            jVar.f3679a.j = h();
            jVar.f3679a.k = g();
            jVar.f3679a.l = f();
            jVar.f3679a.m = m() ? 1 : 0;
            jVar.f3679a.n = i();
            jVar.f3679a.o = e();
            jVar.f3679a.p = d();
            jVar.f3679a.q = a();
            jVar.f3679a.r = l() ? 1 : 0;
            jVar.f3679a.s = k() ? 1 : 0;
            jVar.f3679a.t = a(a.FIRST);
            jVar.f3679a.u = a(a.UPDATE);
            String str2 = this.f3702b.getString(2131493171) + "/spdl/support/";
            this.f3701a = new c();
            this.f3701a.a(new g(str2, jVar, fVar));
            return true;
        } catch (Exception e2) {
            e2.printStackTrace();
            return false;
        }
    }

    public int b() {
        String strF = l.f(this.f3702b);
        if (strF.equals(o.T)) {
            return 1;
        }
        if (strF.equals(o.U)) {
            return 2;
        }
        return strF.equals(o.V) ? 3 : 0;
    }

    @SuppressLint({"SimpleDateFormat"})
    public String c() {
        String str = "";
        try {
            ZipFile zipFile = new ZipFile(new File(this.f3702b.getApplicationInfo().sourceDir));
            str = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss").format(new Date(zipFile.getEntry("META-INF/MANIFEST.MF").getTime()));
            zipFile.close();
            return str;
        } catch (Exception e2) {
            e2.printStackTrace();
            return str;
        }
    }

    public int d() {
        return this.f3702b.getSharedPreferences(o.L, 0).getInt(o.Volume_Mail.name(), o.M);
    }

    public int e() {
        return this.f3702b.getSharedPreferences(o.L, 0).getInt(o.Volume_Ringtone.name(), o.M);
    }

    public long f() {
        String externalStorageState = Environment.getExternalStorageState();
        if ((!"mounted".equals(externalStorageState) && !"mounted_ro".equals(externalStorageState)) || !m()) {
            return 0L;
        }
        try {
            StatFs statFs = new StatFs(h());
            return Build.VERSION.SDK_INT < 18 ? (((long) statFs.getAvailableBlocks()) * ((long) statFs.getBlockSize())) / 1048576 : (statFs.getAvailableBlocksLong() * statFs.getBlockSizeLong()) / 1048576;
        } catch (IllegalArgumentException unused) {
            return 0L;
        }
    }

    public long g() {
        String externalStorageState = Environment.getExternalStorageState();
        if ((!"mounted".equals(externalStorageState) && !"mounted_ro".equals(externalStorageState)) || !m()) {
            return 0L;
        }
        try {
            StatFs statFs = new StatFs(h());
            return Build.VERSION.SDK_INT < 18 ? (((long) statFs.getBlockCount()) * ((long) statFs.getBlockSize())) / 1048576 : (statFs.getBlockCountLong() * statFs.getBlockSizeLong()) / 1048576;
        } catch (IllegalArgumentException unused) {
            return 0L;
        }
    }

    public String h() {
        return jp.co.ymm.android.ringtone.b.d.b().getPath();
    }

    public int i() {
        return jp.co.ymm.android.ringtone.b.d.b().listFiles().length;
    }

    /* JADX WARN: Removed duplicated region for block: B:9:0x0022  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public java.lang.String j() {
        /*
            r9 = this;
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            r1 = 15
            char[] r2 = new char[r1]
            r3 = 91
        Lb:
            int r4 = r1 + (-1)
            if (r1 == 0) goto L6a
            int r1 = r0.nextInt(r3)
            int r1 = r1 + 32
            char r1 = (char) r1
            boolean r5 = java.lang.Character.isLetter(r1)
            if (r5 != 0) goto L26
            boolean r5 = java.lang.Character.isDigit(r1)
            if (r5 != 0) goto L26
        L22:
            int r4 = r4 + 1
        L24:
            r1 = r4
            goto Lb
        L26:
            r5 = 128(0x80, float:1.8E-43)
            r6 = 55296(0xd800, float:7.7486E-41)
            r7 = 56320(0xdc00, float:7.8921E-41)
            if (r1 < r7) goto L45
            r8 = 57343(0xdfff, float:8.0355E-41)
            if (r1 > r8) goto L45
            if (r4 != 0) goto L38
            goto L22
        L38:
            r2[r4] = r1
            int r4 = r4 + (-1)
            int r1 = r0.nextInt(r5)
            int r1 = r1 + r6
            char r1 = (char) r1
            r2[r4] = r1
            goto L24
        L45:
            if (r1 < r6) goto L5c
            r6 = 56191(0xdb7f, float:7.874E-41)
            if (r1 > r6) goto L5c
            if (r4 != 0) goto L4f
            goto L22
        L4f:
            int r5 = r0.nextInt(r5)
            int r5 = r5 + r7
            char r5 = (char) r5
            r2[r4] = r5
            int r4 = r4 + (-1)
            r2[r4] = r1
            goto L24
        L5c:
            r5 = 56192(0xdb80, float:7.8742E-41)
            if (r1 < r5) goto L67
            r5 = 56319(0xdbff, float:7.892E-41)
            if (r1 > r5) goto L67
            goto L22
        L67:
            r2[r4] = r1
            goto L24
        L6a:
            java.lang.String r0 = new java.lang.String
            r0.<init>(r2)
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.ymm.android.ringtone.net.h.j():java.lang.String");
    }

    public boolean k() {
        String strF = l.f(this.f3702b);
        if (strF.equals(o.T) && l.a(this.f3702b)) {
            return true;
        }
        if (strF.equals(o.U) && l.c(this.f3702b)) {
            return true;
        }
        return strF.equals(o.V) && l.e(this.f3702b);
    }

    public boolean l() {
        int i;
        String string;
        String packageName = this.f3702b.getPackageName();
        try {
            i = Settings.Secure.getInt(this.f3702b.getApplicationContext().getContentResolver(), "accessibility_enabled");
        } catch (Settings.SettingNotFoundException e2) {
            e2.printStackTrace();
            i = 0;
        }
        TextUtils.SimpleStringSplitter simpleStringSplitter = new TextUtils.SimpleStringSplitter(':');
        if (i == 1 && (string = Settings.Secure.getString(this.f3702b.getApplicationContext().getContentResolver(), "enabled_accessibility_services")) != null) {
            simpleStringSplitter.setString(string);
            while (simpleStringSplitter.hasNext()) {
                if (simpleStringSplitter.next().startsWith(packageName)) {
                    return true;
                }
            }
        }
        return false;
    }

    public boolean m() {
        return jp.co.ymm.android.ringtone.b.d.b().exists();
    }

    public void n() {
        this.f3702b = null;
    }
}
