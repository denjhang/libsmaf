package com.google.android.gms.measurement.internal;

import java.util.HashSet;
import java.util.Map;
import java.util.Set;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class ve {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2440a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Set<Integer> f2441b = new HashSet();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private Map<Integer, se> f2442c = new b.b.b();

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ qe f2443d;

    ve(qe qeVar, String str) {
        this.f2443d = qeVar;
        this.f2440a = str;
    }

    private final se a(int i) {
        if (this.f2442c.containsKey(Integer.valueOf(i))) {
            return this.f2442c.get(Integer.valueOf(i));
        }
        se seVar = new se(this.f2443d, this.f2440a, null);
        this.f2442c.put(Integer.valueOf(i), seVar);
        return seVar;
    }

    private final boolean a(int i, int i2) {
        if (this.f2442c.get(Integer.valueOf(i)) == null) {
            return false;
        }
        return this.f2442c.get(Integer.valueOf(i)).f2408c.get(i2);
    }

    /* JADX WARN: Removed duplicated region for block: B:145:0x03a2  */
    /* JADX WARN: Removed duplicated region for block: B:150:0x03c1  */
    /* JADX WARN: Removed duplicated region for block: B:151:0x03c6  */
    /* JADX WARN: Removed duplicated region for block: B:169:0x045e  */
    /* JADX WARN: Removed duplicated region for block: B:173:0x04bf  */
    /* JADX WARN: Removed duplicated region for block: B:179:0x053d  */
    /* JADX WARN: Removed duplicated region for block: B:186:0x0561  */
    /* JADX WARN: Removed duplicated region for block: B:239:0x0760  */
    /* JADX WARN: Removed duplicated region for block: B:326:0x0769 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:86:0x024b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    final java.util.List<com.google.android.gms.internal.measurement.O> a(java.util.List<com.google.android.gms.internal.measurement.Q> r62, java.util.List<com.google.android.gms.internal.measurement.Z> r63, java.lang.Long r64) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 2116
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.ve.a(java.util.List, java.util.List, java.lang.Long):java.util.List");
    }
}
