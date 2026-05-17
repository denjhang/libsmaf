package jp.co.ymm.android.ringtone.util;

import android.content.Context;
import android.content.SharedPreferences;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import java.io.File;
import jp.co.acrodea.drm.Base64Encoder;
import jp.co.acrodea.drm.DRMAgent;
import jp.co.acrodea.drm.DRMContent;
import jp.co.acrodea.drm.DRMGetInfo;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class m {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Context f3887a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static boolean f3888b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static m f3889c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static m f3890d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private DRMAgent f3891e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final String f3892f;

    class a implements DRMGetInfo {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f3893a;

        a(String str) {
            this.f3893a = str;
        }

        @Override // jp.co.acrodea.drm.DRMGetInfo
        public String getDeviceId() {
            return this.f3893a;
        }
    }

    static {
        System.loadLibrary("acdrm");
        f3887a = null;
        f3888b = false;
        f3889c = null;
        f3890d = null;
    }

    private m(Context context, boolean z, boolean z2) {
        this.f3891e = null;
        g.a(context != null);
        if (!n.a(context, "android.permission.READ_PHONE_STATE")) {
            this.f3892f = null;
            return;
        }
        try {
            this.f3891e = DRMAgent.getInstance(context, null, new a(z ? z.b() : a(context)));
        } catch (Exception e2) {
            g.a("DRMAgent#getInstance() throws ...", e2);
            if (z2) {
                try {
                    this.f3891e = DRMAgent.getInstance(context);
                } catch (Exception e3) {
                    g.a("DRMAgent#getInstance() throws ...", e3);
                }
            }
        }
        if (this.f3891e == null) {
            g.g("DRMAgent is null ...");
        }
        g();
        g.a(((TelephonyManager) context.getSystemService("phone")) != null);
        this.f3892f = z ? z.b() : a(context);
        g.a("userKey=" + this.f3892f);
    }

    private String a(Context context) {
        String strA = z.a(context, o.User_Key.name(), (String) null);
        if (TextUtils.isEmpty(strA)) {
            TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
            g.a(telephonyManager != null);
            if (n.a(context, "android.permission.READ_PHONE_STATE")) {
                String subscriberId = telephonyManager.getSubscriberId();
                String strG = z.g(subscriberId);
                SharedPreferences.Editor editorEdit = context.getSharedPreferences(o.L, 0).edit();
                editorEdit.putString(o.User_Key.name(), z.g(subscriberId));
                editorEdit.apply();
                strA = strG;
            }
        }
        if (TextUtils.isEmpty(strA)) {
            return null;
        }
        return z.e(strA);
    }

    public static void a(Context context, boolean z) {
        f3887a = context;
        g.a(f3887a != null);
        f3888b = z;
    }

    public static m c() {
        if (f3890d == null) {
            f3890d = new m(f3887a, true, f3888b);
        }
        g.a(f3890d != null);
        return f3890d;
    }

    public static m d() {
        f3890d = new m(f3887a, true, f3888b);
        g.a(f3890d != null);
        return f3890d;
    }

    public static m e() {
        if (f3889c == null) {
            f3889c = new m(f3887a, false, f3888b);
        }
        g.a(f3889c != null);
        return f3889c;
    }

    public static m f() {
        f3889c = new m(f3887a, false, f3888b);
        g.a(f3889c != null);
        return f3889c;
    }

    public String a() {
        byte[] bArrB = b();
        if (bArrB != null) {
            return new Base64Encoder().doFinal(bArrB);
        }
        return null;
    }

    public DRMContent a(File file) {
        g.a(file != null);
        try {
            if (this.f3891e != null) {
                return this.f3891e.getDRMContent(file);
            }
            return null;
        } catch (Exception e2) {
            g.a("DRMAgent#getDRMContent(" + file + ") throws ...", e2);
            return null;
        }
    }

    public int b(File file) {
        g.a(file != null);
        try {
            if (this.f3891e != null) {
                return this.f3891e.getDRMFileType(file);
            }
            return 0;
        } catch (Exception e2) {
            g.a("DRMAgent#getDRMFileType(" + file + ") throws ...", e2);
            return 0;
        }
    }

    public byte[] b() {
        try {
            if (this.f3891e != null) {
                return this.f3891e.genRequestData();
            }
            return null;
        } catch (Exception e2) {
            g.a("DRMAgent#genRequestData() throws ...", e2);
            return null;
        }
    }

    public boolean c(File file) {
        g.a(file != null);
        try {
            if (this.f3891e != null) {
                return this.f3891e.isDRMFile(file);
            }
            return false;
        } catch (Exception e2) {
            g.b("DRMAgent#isDRMFile(" + file + ") throws ...", e2);
            return false;
        }
    }

    public void d(File file) {
        g.a(file != null);
        try {
            if (this.f3891e != null) {
                this.f3891e.registerDRMFile(file);
            }
        } catch (Exception e2) {
            g.a("DRMAgent#registerDRMFile(" + file + ") throws ...", e2);
        }
    }

    public boolean e(File file) {
        g.a(file != null);
        try {
            g.a("DRMAgent#unregisterDRMFile(" + file + ")");
            if (this.f3891e != null) {
                return this.f3891e.unregisterDRMFile(file);
            }
            return false;
        } catch (Exception e2) {
            g.a("DRMAgent#unregisterDRMFile(" + file + ") throws ...", e2);
            return false;
        }
    }

    public void g() {
        try {
            g.a("DRMAgent#unregisterAllDRMFiles()");
            if (this.f3891e != null) {
                this.f3891e.unregisterAllDRMFiles();
            }
        } catch (Exception e2) {
            g.a("DRMAgent#unregisterAllDRMFiles() throws ...", e2);
        }
    }

    public String h() {
        return this.f3892f;
    }
}
