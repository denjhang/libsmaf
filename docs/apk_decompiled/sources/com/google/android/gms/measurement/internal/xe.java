package com.google.android.gms.measurement.internal;

import com.google.android.gms.internal.measurement.C;
import com.google.android.gms.internal.measurement.E;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.regex.Pattern;
import java.util.regex.PatternSyntaxException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
abstract class xe {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f2464a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    int f2465b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    Boolean f2466c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    Boolean f2467d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    Long f2468e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    Long f2469f;

    xe(String str, int i) {
        this.f2464a = str;
        this.f2465b = i;
    }

    static Boolean a(double d2, com.google.android.gms.internal.measurement.C c2) {
        try {
            return a(new BigDecimal(d2), c2, Math.ulp(d2));
        } catch (NumberFormatException unused) {
            return null;
        }
    }

    static Boolean a(long j, com.google.android.gms.internal.measurement.C c2) {
        try {
            return a(new BigDecimal(j), c2, 0.0d);
        } catch (NumberFormatException unused) {
            return null;
        }
    }

    static Boolean a(Boolean bool, boolean z) {
        if (bool == null) {
            return null;
        }
        return Boolean.valueOf(bool.booleanValue() != z);
    }

    static Boolean a(String str, com.google.android.gms.internal.measurement.C c2) {
        if (!ie.a(str)) {
            return null;
        }
        try {
            return a(new BigDecimal(str), c2, 0.0d);
        } catch (NumberFormatException unused) {
            return null;
        }
    }

    private static Boolean a(String str, E.b bVar, boolean z, String str2, List<String> list, String str3, C0365wb c0365wb) {
        boolean zStartsWith;
        if (str == null) {
            return null;
        }
        if (bVar == E.b.IN_LIST) {
            if (list == null || list.size() == 0) {
                return null;
            }
        } else if (str2 == null) {
            return null;
        }
        if (!z && bVar != E.b.REGEXP) {
            str = str.toUpperCase(Locale.ENGLISH);
        }
        switch (te.f2425a[bVar.ordinal()]) {
            case 1:
                try {
                    return Boolean.valueOf(Pattern.compile(str3, z ? 0 : 66).matcher(str).matches());
                } catch (PatternSyntaxException unused) {
                    if (c0365wb != null) {
                        c0365wb.w().a("Invalid regular expression in REGEXP audience filter. expression", str3);
                    }
                    return null;
                }
            case 2:
                zStartsWith = str.startsWith(str2);
                break;
            case 3:
                zStartsWith = str.endsWith(str2);
                break;
            case 4:
                zStartsWith = str.contains(str2);
                break;
            case 5:
                zStartsWith = str.equals(str2);
                break;
            case 6:
                zStartsWith = list.contains(str);
                break;
            default:
                return null;
        }
        return Boolean.valueOf(zStartsWith);
    }

    static Boolean a(String str, com.google.android.gms.internal.measurement.E e2, C0365wb c0365wb) {
        List<String> list;
        com.google.android.gms.common.internal.r.a(e2);
        if (str == null || !e2.o() || e2.p() == E.b.UNKNOWN_MATCH_TYPE) {
            return null;
        }
        if (e2.p() == E.b.IN_LIST) {
            if (e2.v() == 0) {
                return null;
            }
        } else if (!e2.q()) {
            return null;
        }
        E.b bVarP = e2.p();
        boolean zT = e2.t();
        String strR = (zT || bVarP == E.b.REGEXP || bVarP == E.b.IN_LIST) ? e2.r() : e2.r().toUpperCase(Locale.ENGLISH);
        if (e2.v() == 0) {
            list = null;
        } else {
            List<String> listU = e2.u();
            if (!zT) {
                ArrayList arrayList = new ArrayList(listU.size());
                Iterator<String> it = listU.iterator();
                while (it.hasNext()) {
                    arrayList.add(it.next().toUpperCase(Locale.ENGLISH));
                }
                listU = Collections.unmodifiableList(arrayList);
            }
            list = listU;
        }
        return a(str, bVarP, zT, strR, list, bVarP == E.b.REGEXP ? strR : null, c0365wb);
    }

    private static Boolean a(BigDecimal bigDecimal, com.google.android.gms.internal.measurement.C c2, double d2) {
        BigDecimal bigDecimal2;
        BigDecimal bigDecimal3;
        BigDecimal bigDecimal4;
        com.google.android.gms.common.internal.r.a(c2);
        if (c2.o() && c2.p() != C.a.UNKNOWN_COMPARISON_TYPE) {
            if (c2.p() == C.a.BETWEEN) {
                if (!c2.u() || !c2.w()) {
                    return null;
                }
            } else if (!c2.s()) {
                return null;
            }
            C.a aVarP = c2.p();
            if (c2.p() == C.a.BETWEEN) {
                if (ie.a(c2.v()) && ie.a(c2.x())) {
                    try {
                        BigDecimal bigDecimal5 = new BigDecimal(c2.v());
                        bigDecimal4 = new BigDecimal(c2.x());
                        bigDecimal3 = bigDecimal5;
                        bigDecimal2 = null;
                    } catch (NumberFormatException unused) {
                    }
                }
                return null;
            }
            if (!ie.a(c2.t())) {
                return null;
            }
            try {
                bigDecimal2 = new BigDecimal(c2.t());
                bigDecimal3 = null;
                bigDecimal4 = null;
            } catch (NumberFormatException unused2) {
            }
            if (aVarP == C.a.BETWEEN) {
                if (bigDecimal3 == null) {
                    return null;
                }
            } else if (bigDecimal2 != null) {
            }
            int i = te.f2426b[aVarP.ordinal()];
            if (i == 1) {
                return Boolean.valueOf(bigDecimal.compareTo(bigDecimal2) == -1);
            }
            if (i == 2) {
                return Boolean.valueOf(bigDecimal.compareTo(bigDecimal2) == 1);
            }
            if (i == 3) {
                if (d2 == 0.0d) {
                    return Boolean.valueOf(bigDecimal.compareTo(bigDecimal2) == 0);
                }
                if (bigDecimal.compareTo(bigDecimal2.subtract(new BigDecimal(d2).multiply(new BigDecimal(2)))) == 1 && bigDecimal.compareTo(bigDecimal2.add(new BigDecimal(d2).multiply(new BigDecimal(2)))) == -1) {
                    z = true;
                }
                return Boolean.valueOf(z);
            }
            if (i == 4) {
                if (bigDecimal.compareTo(bigDecimal3) != -1 && bigDecimal.compareTo(bigDecimal4) != 1) {
                    z = true;
                }
                return Boolean.valueOf(z);
            }
        }
        return null;
    }

    abstract int a();
}
