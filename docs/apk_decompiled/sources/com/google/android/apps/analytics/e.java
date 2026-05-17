package com.google.android.apps.analytics;

import java.util.Locale;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class e {
    public static String a(d dVar) {
        StringBuilder sb = new StringBuilder();
        c cVarC = dVar.c();
        if (cVarC == null || !cVarC.b()) {
            return "";
        }
        b[] bVarArrA = cVarC.a();
        a(bVarArrA, sb, 8);
        a(bVarArrA, sb, 9);
        a(bVarArrA, sb, 11);
        return sb.toString();
    }

    public static String a(d dVar, j jVar) {
        StringBuilder sb = new StringBuilder();
        sb.append("__##GOOGLEPAGEVIEW##__".equals(dVar.m) ? e(dVar, jVar) : "__##GOOGLEITEM##__".equals(dVar.m) ? d(dVar, jVar) : "__##GOOGLETRANSACTION##__".equals(dVar.m) ? f(dVar, jVar) : c(dVar, jVar));
        if (dVar.b()) {
            sb.append("&aip=1");
        }
        if (!dVar.j()) {
            sb.append("&utmht=" + System.currentTimeMillis());
        }
        return sb.toString();
    }

    private static String a(String str) {
        return a.a(str);
    }

    static void a(StringBuilder sb, String str, double d2) {
        sb.append(str);
        sb.append("=");
        double dFloor = Math.floor((d2 * 1000000.0d) + 0.5d) / 1000000.0d;
        if (dFloor != 0.0d) {
            sb.append(Double.toString(dFloor));
        }
    }

    private static void a(StringBuilder sb, String str, String str2) {
        sb.append(str);
        sb.append("=");
        if (str2 == null || str2.trim().length() <= 0) {
            return;
        }
        sb.append(a.a(str2));
    }

    private static void a(b[] bVarArr, StringBuilder sb, int i) {
        String strB;
        sb.append(i);
        sb.append("(");
        boolean z = true;
        for (int i2 = 0; i2 < bVarArr.length; i2++) {
            if (bVarArr[i2] != null) {
                b bVar = bVarArr[i2];
                if (z) {
                    z = false;
                } else {
                    sb.append("*");
                }
                sb.append(bVar.a());
                sb.append("!");
                if (i == 8) {
                    strB = bVar.b();
                } else if (i == 9) {
                    strB = bVar.d();
                } else if (i == 11) {
                    sb.append(bVar.c());
                }
                sb.append(a(b(strB)));
            }
        }
        sb.append(")");
    }

    private static String b(d dVar) {
        String str = dVar.l;
        if (str == null) {
            str = "";
        }
        if (!str.startsWith("/")) {
            str = "/" + str;
        }
        return a(str);
    }

    public static String b(d dVar, j jVar) {
        StringBuilder sb = new StringBuilder();
        sb.append("__utma=");
        sb.append("1");
        sb.append(".");
        sb.append(dVar.k());
        sb.append(".");
        sb.append(dVar.g());
        sb.append(".");
        sb.append(dVar.h());
        sb.append(".");
        sb.append(dVar.f());
        sb.append(".");
        sb.append(dVar.l());
        sb.append(";");
        if (jVar != null) {
            sb.append("+__utmz=");
            sb.append("1");
            sb.append(".");
            sb.append(jVar.c());
            sb.append(".");
            sb.append(Integer.valueOf(jVar.d()).toString());
            sb.append(".");
            sb.append(Integer.valueOf(jVar.a()).toString());
            sb.append(".");
            sb.append(jVar.b());
            sb.append(";");
        }
        return a(sb.toString());
    }

    private static String b(String str) {
        return str.replace("'", "'0").replace(")", "'1").replace("*", "'2").replace("!", "'3");
    }

    private static String c(d dVar, j jVar) {
        Locale locale = Locale.getDefault();
        StringBuilder sb = new StringBuilder();
        StringBuilder sb2 = new StringBuilder();
        sb2.append(String.format("5(%s*%s", a(b(dVar.m)), a(b(dVar.n))));
        if (dVar.o != null) {
            sb2.append("*");
            sb2.append(a(b(dVar.o)));
        }
        sb2.append(")");
        int i = dVar.p;
        if (i > -1) {
            sb2.append(String.format("(%d)", Integer.valueOf(i)));
        }
        sb2.append(a(dVar));
        sb.append("/__utm.gif");
        sb.append("?utmwv=4.9.1ma");
        sb.append("&utmn=");
        sb.append(dVar.e());
        sb.append("&utmt=event");
        sb.append("&utme=");
        sb.append(sb2.toString());
        sb.append("&utmcs=UTF-8");
        sb.append(String.format("&utmsr=%dx%d", Integer.valueOf(dVar.q), Integer.valueOf(dVar.r)));
        sb.append(String.format("&utmul=%s-%s", locale.getLanguage(), locale.getCountry()));
        String strB = b(dVar);
        if (strB != null) {
            sb.append("&utmp=");
            sb.append(strB);
        }
        sb.append("&utmac=");
        sb.append(dVar.f936b);
        sb.append("&utmcc=");
        sb.append(b(dVar, jVar));
        if (dVar.a() != 0) {
            sb.append("&utmhid=");
            sb.append(dVar.a());
        }
        return sb.toString();
    }

    private static String d(d dVar, j jVar) {
        StringBuilder sb = new StringBuilder();
        sb.append("/__utm.gif");
        sb.append("?utmwv=4.9.1ma");
        sb.append("&utmn=");
        sb.append(dVar.e());
        sb.append("&utmt=item");
        h hVarD = dVar.d();
        if (hVarD != null) {
            a(sb, "&utmtid", hVarD.f());
            a(sb, "&utmipc", hVarD.e());
            a(sb, "&utmipn", hVarD.c());
            a(sb, "&utmiva", hVarD.a());
            a(sb, "&utmipr", hVarD.d());
            sb.append("&utmiqt=");
            if (hVarD.b() != 0) {
                sb.append(hVarD.b());
            }
        }
        sb.append("&utmac=");
        sb.append(dVar.f936b);
        sb.append("&utmcc=");
        sb.append(b(dVar, jVar));
        return sb.toString();
    }

    private static String e(d dVar, j jVar) {
        String strA = a(dVar);
        Locale locale = Locale.getDefault();
        StringBuilder sb = new StringBuilder();
        sb.append("/__utm.gif");
        sb.append("?utmwv=4.9.1ma");
        sb.append("&utmn=");
        sb.append(dVar.e());
        if (strA.length() > 0) {
            sb.append("&utme=");
            sb.append(strA);
        }
        sb.append("&utmcs=UTF-8");
        sb.append(String.format("&utmsr=%dx%d", Integer.valueOf(dVar.q), Integer.valueOf(dVar.r)));
        sb.append(String.format("&utmul=%s-%s", locale.getLanguage(), locale.getCountry()));
        sb.append("&utmp=");
        sb.append(b(dVar));
        sb.append("&utmac=");
        sb.append(dVar.f936b);
        sb.append("&utmcc=");
        sb.append(b(dVar, jVar));
        if (dVar.a() != 0) {
            sb.append("&utmhid=");
            sb.append(dVar.a());
        }
        return sb.toString();
    }

    private static String f(d dVar, j jVar) {
        StringBuilder sb = new StringBuilder();
        sb.append("/__utm.gif");
        sb.append("?utmwv=4.9.1ma");
        sb.append("&utmn=");
        sb.append(dVar.e());
        sb.append("&utmt=tran");
        l lVarI = dVar.i();
        if (lVarI != null) {
            a(sb, "&utmtid", lVarI.a());
            a(sb, "&utmtst", lVarI.c());
            a(sb, "&utmtto", lVarI.d());
            a(sb, "&utmttx", lVarI.e());
            a(sb, "&utmtsp", lVarI.b());
            a(sb, "&utmtci", "");
            a(sb, "&utmtrg", "");
            a(sb, "&utmtco", "");
        }
        sb.append("&utmac=");
        sb.append(dVar.f936b);
        sb.append("&utmcc=");
        sb.append(b(dVar, jVar));
        return sb.toString();
    }
}
