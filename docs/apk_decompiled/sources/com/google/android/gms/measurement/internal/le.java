package com.google.android.gms.measurement.internal;

import android.annotation.SuppressLint;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.ServiceInfo;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.RemoteException;
import android.text.TextUtils;
import com.google.android.gms.internal.measurement.Ef;
import java.io.ByteArrayInputStream;
import java.math.BigInteger;
import java.net.MalformedURLException;
import java.net.URL;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.security.SecureRandom;
import java.security.cert.CertificateException;
import java.security.cert.CertificateFactory;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Locale;
import java.util.Random;
import java.util.concurrent.atomic.AtomicLong;
import javax.security.auth.x500.X500Principal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class le extends AbstractC0356uc {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final String[] f2325c = {"firebase_", "google_", "ga_"};

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private SecureRandom f2326d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final AtomicLong f2327e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private int f2328f;
    private Integer g;

    le(_b _bVar) {
        super(_bVar);
        this.g = null;
        this.f2327e = new AtomicLong(0L);
    }

    public static long a(long j, long j2) {
        return (j + (j2 * 60000)) / 86400000;
    }

    static long a(byte[] bArr) {
        com.google.android.gms.common.internal.r.a(bArr);
        int i = 0;
        com.google.android.gms.common.internal.r.b(bArr.length > 0);
        long j = 0;
        for (int length = bArr.length - 1; length >= 0 && length >= bArr.length - 8; length--) {
            j += (((long) bArr[length]) & 255) << i;
            i += 8;
        }
        return j;
    }

    public static Bundle a(List<zzkj> list) {
        Bundle bundle = new Bundle();
        if (list == null) {
            return bundle;
        }
        for (zzkj zzkjVar : list) {
            String str = zzkjVar.f2515f;
            if (str != null) {
                bundle.putString(zzkjVar.f2511b, str);
            } else {
                Long l = zzkjVar.f2513d;
                if (l != null) {
                    bundle.putLong(zzkjVar.f2511b, l.longValue());
                } else {
                    Double d2 = zzkjVar.h;
                    if (d2 != null) {
                        bundle.putDouble(zzkjVar.f2511b, d2.doubleValue());
                    }
                }
            }
        }
        return bundle;
    }

    private static Object a(int i, Object obj, boolean z) {
        if (obj == null) {
            return null;
        }
        if ((obj instanceof Long) || (obj instanceof Double)) {
            return obj;
        }
        if (obj instanceof Integer) {
            return Long.valueOf(((Integer) obj).intValue());
        }
        if (obj instanceof Byte) {
            return Long.valueOf(((Byte) obj).byteValue());
        }
        if (obj instanceof Short) {
            return Long.valueOf(((Short) obj).shortValue());
        }
        if (obj instanceof Boolean) {
            return Long.valueOf(((Boolean) obj).booleanValue() ? 1L : 0L);
        }
        if (obj instanceof Float) {
            return Double.valueOf(((Float) obj).doubleValue());
        }
        if ((obj instanceof String) || (obj instanceof Character) || (obj instanceof CharSequence)) {
            return a(String.valueOf(obj), i, z);
        }
        return null;
    }

    public static String a(String str, int i, boolean z) {
        if (str == null) {
            return null;
        }
        if (str.codePointCount(0, str.length()) <= i) {
            return str;
        }
        if (z) {
            return String.valueOf(str.substring(0, str.offsetByCodePoints(0, i))).concat("...");
        }
        return null;
    }

    private static void a(Bundle bundle, Object obj) {
        com.google.android.gms.common.internal.r.a(bundle);
        if (obj != null) {
            if ((obj instanceof String) || (obj instanceof CharSequence)) {
                bundle.putLong("_el", String.valueOf(obj).length());
            }
        }
    }

    static boolean a(Context context, boolean z) {
        com.google.android.gms.common.internal.r.a(context);
        return b(context, Build.VERSION.SDK_INT >= 24 ? "com.google.android.gms.measurement.AppMeasurementJobService" : "com.google.android.gms.measurement.AppMeasurementService");
    }

    static boolean a(Intent intent) {
        String stringExtra = intent.getStringExtra("android.intent.extra.REFERRER_NAME");
        return "android-app://com.google.android.googlequicksearchbox/https/www.google.com".equals(stringExtra) || "https://www.google.com".equals(stringExtra) || "android-app://com.google.appcrawler".equals(stringExtra);
    }

    private static boolean a(Bundle bundle, int i) {
        if (bundle.getLong("_err") != 0) {
            return false;
        }
        bundle.putLong("_err", i);
        return true;
    }

    static boolean a(Boolean bool, Boolean bool2) {
        if (bool == null && bool2 == null) {
            return true;
        }
        if (bool == null) {
            return false;
        }
        return bool.equals(bool2);
    }

    static boolean a(String str) {
        com.google.android.gms.common.internal.r.b(str);
        return str.charAt(0) != '_' || str.equals("_ep");
    }

    private final boolean a(String str, String str2, int i, Object obj, boolean z) {
        if (obj != null && !(obj instanceof Long) && !(obj instanceof Float) && !(obj instanceof Integer) && !(obj instanceof Byte) && !(obj instanceof Short) && !(obj instanceof Boolean) && !(obj instanceof Double)) {
            if (!(obj instanceof String) && !(obj instanceof Character) && !(obj instanceof CharSequence)) {
                if ((obj instanceof Bundle) && z) {
                    return true;
                }
                if ((obj instanceof Parcelable[]) && z) {
                    for (Parcelable parcelable : (Parcelable[]) obj) {
                        if (!(parcelable instanceof Bundle)) {
                            d().y().a("All Parcelable[] elements must be of type Bundle. Value type, name", parcelable.getClass(), str2);
                            return false;
                        }
                    }
                    return true;
                }
                if (!(obj instanceof ArrayList) || !z) {
                    return false;
                }
                ArrayList arrayList = (ArrayList) obj;
                int size = arrayList.size();
                int i2 = 0;
                while (i2 < size) {
                    Object obj2 = arrayList.get(i2);
                    i2++;
                    if (!(obj2 instanceof Bundle)) {
                        d().y().a("All ArrayList elements must be of type Bundle. Value type, name", obj2.getClass(), str2);
                        return false;
                    }
                }
                return true;
            }
            String strValueOf = String.valueOf(obj);
            if (strValueOf.codePointCount(0, strValueOf.length()) > i) {
                d().y().a("Value is too long; discarded. Value kind, name, value length", str, str2, Integer.valueOf(strValueOf.length()));
                return false;
            }
        }
        return true;
    }

    static boolean a(String str, String str2, String str3, String str4) {
        boolean zIsEmpty = TextUtils.isEmpty(str);
        boolean zIsEmpty2 = TextUtils.isEmpty(str2);
        if (!zIsEmpty && !zIsEmpty2) {
            return !str.equals(str2);
        }
        if (zIsEmpty && zIsEmpty2) {
            return (TextUtils.isEmpty(str3) || TextUtils.isEmpty(str4)) ? !TextUtils.isEmpty(str4) : !str3.equals(str4);
        }
        if (zIsEmpty || !zIsEmpty2) {
            return TextUtils.isEmpty(str3) || !str3.equals(str4);
        }
        if (TextUtils.isEmpty(str4)) {
            return false;
        }
        return TextUtils.isEmpty(str3) || !str3.equals(str4);
    }

    static boolean a(List<String> list, List<String> list2) {
        if (list == null && list2 == null) {
            return true;
        }
        if (list == null) {
            return false;
        }
        return list.equals(list2);
    }

    static byte[] a(Parcelable parcelable) {
        if (parcelable == null) {
            return null;
        }
        Parcel parcelObtain = Parcel.obtain();
        try {
            parcelable.writeToParcel(parcelObtain, 0);
            return parcelObtain.marshall();
        } finally {
            parcelObtain.recycle();
        }
    }

    static Bundle[] a(Object obj) {
        Object[] array;
        if (obj instanceof Bundle) {
            return new Bundle[]{(Bundle) obj};
        }
        if (obj instanceof Parcelable[]) {
            Parcelable[] parcelableArr = (Parcelable[]) obj;
            array = Arrays.copyOf(parcelableArr, parcelableArr.length, Bundle[].class);
        } else {
            if (!(obj instanceof ArrayList)) {
                return null;
            }
            ArrayList arrayList = (ArrayList) obj;
            array = arrayList.toArray(new Bundle[arrayList.size()]);
        }
        return (Bundle[]) array;
    }

    public static Bundle b(Bundle bundle) {
        if (bundle == null) {
            return new Bundle();
        }
        Bundle bundle2 = new Bundle(bundle);
        for (String str : bundle2.keySet()) {
            Object obj = bundle2.get(str);
            if (obj instanceof Bundle) {
                bundle2.putBundle(str, new Bundle((Bundle) obj));
            } else {
                int i = 0;
                if (obj instanceof Parcelable[]) {
                    Parcelable[] parcelableArr = (Parcelable[]) obj;
                    while (i < parcelableArr.length) {
                        if (parcelableArr[i] instanceof Bundle) {
                            parcelableArr[i] = new Bundle((Bundle) parcelableArr[i]);
                        }
                        i++;
                    }
                } else if (obj instanceof List) {
                    List list = (List) obj;
                    while (i < list.size()) {
                        Object obj2 = list.get(i);
                        if (obj2 instanceof Bundle) {
                            list.set(i, new Bundle((Bundle) obj2));
                        }
                        i++;
                    }
                }
            }
        }
        return bundle2;
    }

    public static ArrayList<Bundle> b(List<zzv> list) {
        if (list == null) {
            return new ArrayList<>(0);
        }
        ArrayList<Bundle> arrayList = new ArrayList<>(list.size());
        for (zzv zzvVar : list) {
            Bundle bundle = new Bundle();
            bundle.putString("app_id", zzvVar.f2522a);
            bundle.putString("origin", zzvVar.f2523b);
            bundle.putLong("creation_timestamp", zzvVar.f2525d);
            bundle.putString("name", zzvVar.f2524c.f2511b);
            C0366wc.a(bundle, zzvVar.f2524c.h());
            bundle.putBoolean("active", zzvVar.f2526e);
            String str = zzvVar.f2527f;
            if (str != null) {
                bundle.putString("trigger_event_name", str);
            }
            zzan zzanVar = zzvVar.g;
            if (zzanVar != null) {
                bundle.putString("timed_out_event_name", zzanVar.f2506a);
                zzam zzamVar = zzvVar.g.f2507b;
                if (zzamVar != null) {
                    bundle.putBundle("timed_out_event_params", zzamVar.m());
                }
            }
            bundle.putLong("trigger_timeout", zzvVar.h);
            zzan zzanVar2 = zzvVar.i;
            if (zzanVar2 != null) {
                bundle.putString("triggered_event_name", zzanVar2.f2506a);
                zzam zzamVar2 = zzvVar.i.f2507b;
                if (zzamVar2 != null) {
                    bundle.putBundle("triggered_event_params", zzamVar2.m());
                }
            }
            bundle.putLong("triggered_timestamp", zzvVar.f2524c.f2512c);
            bundle.putLong("time_to_live", zzvVar.j);
            zzan zzanVar3 = zzvVar.k;
            if (zzanVar3 != null) {
                bundle.putString("expired_event_name", zzanVar3.f2506a);
                zzam zzamVar3 = zzvVar.k.f2507b;
                if (zzamVar3 != null) {
                    bundle.putBundle("expired_event_params", zzamVar3.m());
                }
            }
            arrayList.add(bundle);
        }
        return arrayList;
    }

    private static boolean b(Context context, String str) {
        ServiceInfo serviceInfo;
        try {
            PackageManager packageManager = context.getPackageManager();
            if (packageManager != null && (serviceInfo = packageManager.getServiceInfo(new ComponentName(context, str), 0)) != null) {
                if (serviceInfo.enabled) {
                    return true;
                }
            }
        } catch (PackageManager.NameNotFoundException unused) {
        }
        return false;
    }

    private final boolean c(Context context, String str) {
        C0375yb c0375ybT;
        String str2;
        X500Principal x500Principal = new X500Principal("CN=Android Debug,O=Android,C=US");
        try {
            PackageInfo packageInfoB = com.google.android.gms.common.a.c.a(context).b(str, 64);
            if (packageInfoB == null || packageInfoB.signatures == null || packageInfoB.signatures.length <= 0) {
                return true;
            }
            return ((X509Certificate) CertificateFactory.getInstance("X.509").generateCertificate(new ByteArrayInputStream(packageInfoB.signatures[0].toByteArray()))).getSubjectX500Principal().equals(x500Principal);
        } catch (PackageManager.NameNotFoundException e2) {
            e = e2;
            c0375ybT = d().t();
            str2 = "Package name not found";
            c0375ybT.a(str2, e);
            return true;
        } catch (CertificateException e3) {
            e = e3;
            c0375ybT = d().t();
            str2 = "Error obtaining certificate";
            c0375ybT.a(str2, e);
            return true;
        }
    }

    static boolean d(String str, String str2) {
        if (str == null && str2 == null) {
            return true;
        }
        if (str == null) {
            return false;
        }
        return str.equals(str2);
    }

    static boolean e(String str) {
        return !TextUtils.isEmpty(str) && str.startsWith("_");
    }

    private static boolean g(String str) {
        com.google.android.gms.common.internal.r.a(str);
        return str.matches("^(1:\\d+:android:[a-f0-9]+|ca-app-pub-.*)$");
    }

    private static int h(String str) {
        if ("_ldl".equals(str)) {
            return 2048;
        }
        return "_id".equals(str) ? 256 : 36;
    }

    static MessageDigest v() {
        MessageDigest messageDigest;
        for (int i = 0; i < 2; i++) {
            try {
                messageDigest = MessageDigest.getInstance("MD5");
            } catch (NoSuchAlgorithmException unused) {
            }
            if (messageDigest != null) {
                return messageDigest;
            }
        }
        return null;
    }

    public final int a(int i) {
        return com.google.android.gms.common.d.a().a(e(), 12451000);
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x0076  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:16:0x0069 -> B:17:0x0076). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    final long a(android.content.Context r7, java.lang.String r8) {
        /*
            r6 = this;
            r6.h()
            com.google.android.gms.common.internal.r.a(r7)
            com.google.android.gms.common.internal.r.b(r8)
            android.content.pm.PackageManager r0 = r7.getPackageManager()
            java.security.MessageDigest r1 = v()
            r2 = -1
            r4 = 0
            if (r1 != 0) goto L25
            com.google.android.gms.measurement.internal.wb r7 = r6.d()
            com.google.android.gms.measurement.internal.yb r7 = r7.t()
            java.lang.String r8 = "Could not get MD5 instance"
            r7.a(r8)
            goto L77
        L25:
            if (r0 == 0) goto L76
            boolean r8 = r6.c(r7, r8)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L68
            if (r8 != 0) goto L76
            com.google.android.gms.common.a.b r7 = com.google.android.gms.common.a.c.a(r7)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L68
            android.content.Context r8 = r6.e()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L68
            java.lang.String r8 = r8.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L68
            r0 = 64
            android.content.pm.PackageInfo r7 = r7.b(r8, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L68
            android.content.pm.Signature[] r8 = r7.signatures     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L68
            if (r8 == 0) goto L5a
            android.content.pm.Signature[] r8 = r7.signatures     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L68
            int r8 = r8.length     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L68
            if (r8 <= 0) goto L5a
            android.content.pm.Signature[] r7 = r7.signatures     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L68
            r8 = 0
            r7 = r7[r8]     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L68
            byte[] r7 = r7.toByteArray()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L68
            byte[] r7 = r1.digest(r7)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L68
            long r2 = a(r7)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L68
            goto L77
        L5a:
            com.google.android.gms.measurement.internal.wb r7 = r6.d()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L68
            com.google.android.gms.measurement.internal.yb r7 = r7.w()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L68
            java.lang.String r8 = "Could not get signatures"
            r7.a(r8)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L68
            goto L77
        L68:
            r7 = move-exception
            com.google.android.gms.measurement.internal.wb r8 = r6.d()
            com.google.android.gms.measurement.internal.yb r8 = r8.t()
            java.lang.String r0 = "Package name not found"
            r8.a(r0, r7)
        L76:
            r2 = r4
        L77:
            return r2
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.le.a(android.content.Context, java.lang.String):long");
    }

    final Bundle a(Uri uri) {
        String queryParameter;
        String queryParameter2;
        String queryParameter3;
        String queryParameter4;
        if (uri == null) {
            return null;
        }
        try {
            if (uri.isHierarchical()) {
                queryParameter = uri.getQueryParameter("utm_campaign");
                queryParameter2 = uri.getQueryParameter("utm_source");
                queryParameter3 = uri.getQueryParameter("utm_medium");
                queryParameter4 = uri.getQueryParameter("gclid");
            } else {
                queryParameter = null;
                queryParameter2 = null;
                queryParameter3 = null;
                queryParameter4 = null;
            }
            if (TextUtils.isEmpty(queryParameter) && TextUtils.isEmpty(queryParameter2) && TextUtils.isEmpty(queryParameter3) && TextUtils.isEmpty(queryParameter4)) {
                return null;
            }
            Bundle bundle = new Bundle();
            if (!TextUtils.isEmpty(queryParameter)) {
                bundle.putString("campaign", queryParameter);
            }
            if (!TextUtils.isEmpty(queryParameter2)) {
                bundle.putString("source", queryParameter2);
            }
            if (!TextUtils.isEmpty(queryParameter3)) {
                bundle.putString("medium", queryParameter3);
            }
            if (!TextUtils.isEmpty(queryParameter4)) {
                bundle.putString("gclid", queryParameter4);
            }
            String queryParameter5 = uri.getQueryParameter("utm_term");
            if (!TextUtils.isEmpty(queryParameter5)) {
                bundle.putString("term", queryParameter5);
            }
            String queryParameter6 = uri.getQueryParameter("utm_content");
            if (!TextUtils.isEmpty(queryParameter6)) {
                bundle.putString("content", queryParameter6);
            }
            String queryParameter7 = uri.getQueryParameter("aclid");
            if (!TextUtils.isEmpty(queryParameter7)) {
                bundle.putString("aclid", queryParameter7);
            }
            String queryParameter8 = uri.getQueryParameter("cp1");
            if (!TextUtils.isEmpty(queryParameter8)) {
                bundle.putString("cp1", queryParameter8);
            }
            String queryParameter9 = uri.getQueryParameter("anid");
            if (!TextUtils.isEmpty(queryParameter9)) {
                bundle.putString("anid", queryParameter9);
            }
            return bundle;
        } catch (UnsupportedOperationException e2) {
            d().w().a("Install referrer url isn't a hierarchical URI", e2);
            return null;
        }
    }

    final Bundle a(Bundle bundle) {
        Bundle bundle2 = new Bundle();
        if (bundle != null) {
            for (String str : bundle.keySet()) {
                Object objA = a(str, bundle.get(str));
                if (objA == null) {
                    d().y().a("Param value can't be null", j().b(str));
                } else {
                    a(bundle2, str, objA);
                }
            }
        }
        return bundle2;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0048  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0056  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x0068  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x006b  */
    /* JADX WARN: Removed duplicated region for block: B:32:0x0071  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x0081  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x00d4  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x00da  */
    /* JADX WARN: Removed duplicated region for block: B:74:0x0118  */
    /* JADX WARN: Removed duplicated region for block: B:80:0x0137  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    final android.os.Bundle a(java.lang.String r17, java.lang.String r18, android.os.Bundle r19, java.util.List<java.lang.String> r20, boolean r21, boolean r22) {
        /*
            Method dump skipped, instruction units count: 381
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.le.a(java.lang.String, java.lang.String, android.os.Bundle, java.util.List, boolean, boolean):android.os.Bundle");
    }

    final zzan a(String str, String str2, Bundle bundle, String str3, long j, boolean z, boolean z2) {
        if (TextUtils.isEmpty(str2)) {
            return null;
        }
        if (b(str2) != 0) {
            d().t().a("Invalid conditional property event name", j().c(str2));
            throw new IllegalArgumentException();
        }
        Bundle bundle2 = bundle != null ? new Bundle(bundle) : new Bundle();
        bundle2.putString("_o", str3);
        return new zzan(str2, new zzam(a(a(str, str2, bundle2, com.google.android.gms.common.util.f.a("_o"), false, false))), str3, j);
    }

    final Object a(String str, Object obj) {
        boolean z;
        if ("_ev".equals(str)) {
            z = true;
        } else {
            i = e(str) ? 256 : 100;
            z = false;
        }
        return a(i, obj, z);
    }

    public final URL a(long j, String str, String str2, long j2) {
        try {
            com.google.android.gms.common.internal.r.b(str2);
            com.google.android.gms.common.internal.r.b(str);
            String strConcat = String.format("https://www.googleadservices.com/pagead/conversion/app/deeplink?id_type=adid&sdk_version=%s&rdid=%s&bundleid=%s&retry=%s", String.format("v%s.%s", Long.valueOf(j), Integer.valueOf(w())), str2, str, Long.valueOf(j2));
            if (str.equals(m().w())) {
                strConcat = strConcat.concat("&ddl_test=1");
            }
            return new URL(strConcat);
        } catch (IllegalArgumentException | MalformedURLException e2) {
            d().t().a("Failed to create BOW URL for Deferred Deep Link. exception", e2.getMessage());
            return null;
        }
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ void a() {
        super.a();
    }

    public final void a(int i, String str, String str2, int i2) {
        a((String) null, i, str, str2, i2);
    }

    final void a(Bundle bundle, long j) {
        long j2 = bundle.getLong("_et");
        if (j2 != 0) {
            d().w().a("Params already contained engagement", Long.valueOf(j2));
        }
        bundle.putLong("_et", j + j2);
    }

    final void a(Bundle bundle, String str, Object obj) {
        if (bundle == null) {
            return;
        }
        if (obj instanceof Long) {
            bundle.putLong(str, ((Long) obj).longValue());
            return;
        }
        if (obj instanceof String) {
            bundle.putString(str, String.valueOf(obj));
        } else if (obj instanceof Double) {
            bundle.putDouble(str, ((Double) obj).doubleValue());
        } else if (str != null) {
            d().y().a("Not putting event parameter. Invalid value type. name, type", j().b(str), obj != null ? obj.getClass().getSimpleName() : null);
        }
    }

    public final void a(Ef ef, int i) {
        Bundle bundle = new Bundle();
        bundle.putInt("r", i);
        try {
            ef.b(bundle);
        } catch (RemoteException e2) {
            this.f2438a.d().w().a("Error returning int value to wrapper", e2);
        }
    }

    public final void a(Ef ef, long j) {
        Bundle bundle = new Bundle();
        bundle.putLong("r", j);
        try {
            ef.b(bundle);
        } catch (RemoteException e2) {
            this.f2438a.d().w().a("Error returning long value to wrapper", e2);
        }
    }

    public final void a(Ef ef, Bundle bundle) {
        try {
            ef.b(bundle);
        } catch (RemoteException e2) {
            this.f2438a.d().w().a("Error returning bundle value to wrapper", e2);
        }
    }

    public final void a(Ef ef, String str) {
        Bundle bundle = new Bundle();
        bundle.putString("r", str);
        try {
            ef.b(bundle);
        } catch (RemoteException e2) {
            this.f2438a.d().w().a("Error returning string value to wrapper", e2);
        }
    }

    public final void a(Ef ef, ArrayList<Bundle> arrayList) {
        Bundle bundle = new Bundle();
        bundle.putParcelableArrayList("r", arrayList);
        try {
            ef.b(bundle);
        } catch (RemoteException e2) {
            this.f2438a.d().w().a("Error returning bundle list to wrapper", e2);
        }
    }

    public final void a(Ef ef, boolean z) {
        Bundle bundle = new Bundle();
        bundle.putBoolean("r", z);
        try {
            ef.b(bundle);
        } catch (RemoteException e2) {
            this.f2438a.d().w().a("Error returning boolean value to wrapper", e2);
        }
    }

    public final void a(Ef ef, byte[] bArr) {
        Bundle bundle = new Bundle();
        bundle.putByteArray("r", bArr);
        try {
            ef.b(bundle);
        } catch (RemoteException e2) {
            this.f2438a.d().w().a("Error returning byte array to wrapper", e2);
        }
    }

    final void a(String str, int i, String str2, String str3, int i2) {
        Bundle bundle = new Bundle();
        a(bundle, i);
        if (!TextUtils.isEmpty(str2) && !TextUtils.isEmpty(str3)) {
            bundle.putString(str2, str3);
        }
        if (i == 6 || i == 7 || i == 2) {
            bundle.putLong("_el", i2);
        }
        this.f2438a.f();
        this.f2438a.u().a("auto", "_err", bundle);
    }

    @SuppressLint({"ApplySharedPref"})
    final boolean a(String str, double d2) {
        try {
            SharedPreferences.Editor editorEdit = e().getSharedPreferences("google.analytics.deferred.deeplink.prefs", 0).edit();
            editorEdit.putString("deeplink", str);
            editorEdit.putLong("timestamp", Double.doubleToRawLongBits(d2));
            return editorEdit.commit();
        } catch (Exception e2) {
            d().t().a("Failed to persist Deferred Deep Link. exception", e2);
            return false;
        }
    }

    final boolean a(String str, int i, String str2) {
        if (str2 == null) {
            d().v().a("Name is required and can't be null. Type", str);
            return false;
        }
        if (str2.codePointCount(0, str2.length()) <= i) {
            return true;
        }
        d().v().a("Name is too long. Type, maximum supported length, name", str, Integer.valueOf(i), str2);
        return false;
    }

    final boolean a(String str, String str2) {
        if (str2 == null) {
            d().v().a("Name is required and can't be null. Type", str);
            return false;
        }
        if (str2.length() == 0) {
            d().v().a("Name is required and can't be empty. Type", str);
            return false;
        }
        int iCodePointAt = str2.codePointAt(0);
        if (!Character.isLetter(iCodePointAt)) {
            d().v().a("Name must start with a letter. Type, name", str, str2);
            return false;
        }
        int length = str2.length();
        int iCharCount = Character.charCount(iCodePointAt);
        while (iCharCount < length) {
            int iCodePointAt2 = str2.codePointAt(iCharCount);
            if (iCodePointAt2 != 95 && !Character.isLetterOrDigit(iCodePointAt2)) {
                d().v().a("Name must consist of letters, digits or _ (underscores). Type, name", str, str2);
                return false;
            }
            iCharCount += Character.charCount(iCodePointAt2);
        }
        return true;
    }

    final boolean a(String str, String[] strArr, String str2) {
        boolean z;
        boolean z2;
        if (str2 == null) {
            d().v().a("Name is required and can't be null. Type", str);
            return false;
        }
        com.google.android.gms.common.internal.r.a(str2);
        String[] strArr2 = f2325c;
        int length = strArr2.length;
        int i = 0;
        while (true) {
            if (i >= length) {
                z = false;
                break;
            }
            if (str2.startsWith(strArr2[i])) {
                z = true;
                break;
            }
            i++;
        }
        if (z) {
            d().v().a("Name starts with reserved prefix. Type, name", str, str2);
            return false;
        }
        if (strArr != null) {
            com.google.android.gms.common.internal.r.a(strArr);
            int length2 = strArr.length;
            int i2 = 0;
            while (true) {
                if (i2 >= length2) {
                    z2 = false;
                    break;
                }
                if (d(str2, strArr[i2])) {
                    z2 = true;
                    break;
                }
                i2++;
            }
            if (z2) {
                d().v().a("Name is reserved. Type, name", str, str2);
                return false;
            }
        }
        return true;
    }

    final int b(String str) {
        if (!b("event", str)) {
            return 2;
        }
        if (a("event", C0381zc.f2494a, str)) {
            return !a("event", 40, str) ? 2 : 0;
        }
        return 13;
    }

    final int b(String str, Object obj) {
        return "_ldl".equals(str) ? a("user property referrer", str, h(str), obj, false) : a("user property", str, h(str), obj, false) ? 0 : 7;
    }

    final boolean b(String str, String str2) {
        if (str2 == null) {
            d().v().a("Name is required and can't be null. Type", str);
            return false;
        }
        if (str2.length() == 0) {
            d().v().a("Name is required and can't be empty. Type", str);
            return false;
        }
        int iCodePointAt = str2.codePointAt(0);
        if (!Character.isLetter(iCodePointAt) && iCodePointAt != 95) {
            d().v().a("Name must start with a letter or _ (underscore). Type, name", str, str2);
            return false;
        }
        int length = str2.length();
        int iCharCount = Character.charCount(iCodePointAt);
        while (iCharCount < length) {
            int iCodePointAt2 = str2.codePointAt(iCharCount);
            if (iCodePointAt2 != 95 && !Character.isLetterOrDigit(iCodePointAt2)) {
                d().v().a("Name must consist of letters, digits or _ (underscores). Type, name", str, str2);
                return false;
            }
            iCharCount += Character.charCount(iCodePointAt2);
        }
        return true;
    }

    final int c(String str) {
        if (!b("user property", str)) {
            return 6;
        }
        if (a("user property", Bc.f1919a, str)) {
            return !a("user property", 24, str) ? 6 : 0;
        }
        return 15;
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Xb c() {
        return super.c();
    }

    final Object c(String str, Object obj) {
        int iH;
        boolean z;
        if ("_ldl".equals(str)) {
            iH = h(str);
            z = true;
        } else {
            iH = h(str);
            z = false;
        }
        return a(iH, obj, z);
    }

    final boolean c(String str, String str2) {
        if (!TextUtils.isEmpty(str)) {
            if (g(str)) {
                return true;
            }
            if (this.f2438a.y()) {
                d().v().a("Invalid google_app_id. Firebase Analytics disabled. See https://goo.gl/NAOOOI. provided id", C0365wb.a(str));
            }
            return false;
        }
        if (TextUtils.isEmpty(str2)) {
            if (this.f2438a.y()) {
                d().v().a("Missing google_app_id. Firebase Analytics disabled. See https://goo.gl/NAOOOI");
            }
            return false;
        }
        if (g(str2)) {
            return true;
        }
        d().v().a("Invalid admob_app_id. Analytics disabled.", C0365wb.a(str2));
        return false;
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ C0365wb d() {
        return super.d();
    }

    final boolean d(String str) {
        h();
        if (com.google.android.gms.common.a.c.a(e()).a(str) == 0) {
            return true;
        }
        d().A().a("Permission not granted", str);
        return false;
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Context e() {
        return super.e();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ ye f() {
        return super.f();
    }

    final boolean f(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        String strV = m().v();
        f();
        return strV.equals(str);
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ com.google.android.gms.common.util.e g() {
        return super.g();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ void h() {
        super.h();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ C0294i i() {
        return super.i();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ C0355ub j() {
        return super.j();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ le k() {
        return super.k();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ Kb l() {
        return super.l();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ ze m() {
        return super.m();
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0356uc
    protected final void n() {
        h();
        SecureRandom secureRandom = new SecureRandom();
        long jNextLong = secureRandom.nextLong();
        if (jNextLong == 0) {
            jNextLong = secureRandom.nextLong();
            if (jNextLong == 0) {
                d().w().a("Utils falling back to Random for random id");
            }
        }
        this.f2327e.set(jNextLong);
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0356uc
    protected final boolean r() {
        return true;
    }

    public final long t() {
        long andIncrement;
        long j;
        if (this.f2327e.get() != 0) {
            synchronized (this.f2327e) {
                this.f2327e.compareAndSet(-1L, 1L);
                andIncrement = this.f2327e.getAndIncrement();
            }
            return andIncrement;
        }
        synchronized (this.f2327e) {
            long jNextLong = new Random(System.nanoTime() ^ g().a()).nextLong();
            int i = this.f2328f + 1;
            this.f2328f = i;
            j = jNextLong + ((long) i);
        }
        return j;
    }

    final SecureRandom u() {
        h();
        if (this.f2326d == null) {
            this.f2326d = new SecureRandom();
        }
        return this.f2326d;
    }

    public final int w() {
        if (this.g == null) {
            this.g = Integer.valueOf(com.google.android.gms.common.d.a().a(e()) / 1000);
        }
        return this.g.intValue();
    }

    final String x() {
        byte[] bArr = new byte[16];
        u().nextBytes(bArr);
        return String.format(Locale.US, "%032x", new BigInteger(1, bArr));
    }

    public final boolean y() {
        try {
            e().getClassLoader().loadClass("com.google.firebase.remoteconfig.FirebaseRemoteConfig");
            return true;
        } catch (ClassNotFoundException unused) {
            return false;
        }
    }
}
