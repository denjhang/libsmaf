package com.google.firebase.iid;

import android.text.TextUtils;
import android.util.Log;
import java.io.IOException;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class B {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f2604a = 0;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Map<Integer, c.a.a.a.f.h<Void>> f2605b = new b.b.b();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final C0405x f2606c;

    B(C0405x c0405x) {
        this.f2606c = c0405x;
    }

    private static boolean a(FirebaseInstanceId firebaseInstanceId, String str) {
        String str2;
        String[] strArrSplit = str.split("!");
        if (strArrSplit.length == 2) {
            String str3 = strArrSplit[0];
            String str4 = strArrSplit[1];
            byte b2 = -1;
            try {
                int iHashCode = str3.hashCode();
                if (iHashCode != 83) {
                    if (iHashCode == 85 && str3.equals("U")) {
                        b2 = 1;
                    }
                } else if (str3.equals("S")) {
                    b2 = 0;
                }
                if (b2 == 0) {
                    firebaseInstanceId.a(str4);
                    if (FirebaseInstanceId.f()) {
                        str2 = "subscribe operation succeeded";
                        Log.d("FirebaseInstanceId", str2);
                    }
                } else if (b2 == 1) {
                    firebaseInstanceId.b(str4);
                    if (FirebaseInstanceId.f()) {
                        str2 = "unsubscribe operation succeeded";
                        Log.d("FirebaseInstanceId", str2);
                    }
                }
            } catch (IOException e2) {
                String strValueOf = String.valueOf(e2.getMessage());
                Log.e("FirebaseInstanceId", strValueOf.length() != 0 ? "Topic sync failed: ".concat(strValueOf) : new String("Topic sync failed: "));
                return false;
            }
        }
        return true;
    }

    private final synchronized boolean a(String str) {
        synchronized (this.f2606c) {
            String strA = this.f2606c.a();
            String strValueOf = String.valueOf(str);
            if (!strA.startsWith(strValueOf.length() != 0 ? ",".concat(strValueOf) : new String(","))) {
                return false;
            }
            String strValueOf2 = String.valueOf(str);
            this.f2606c.a(strA.substring((strValueOf2.length() != 0 ? ",".concat(strValueOf2) : new String(",")).length()));
            return true;
        }
    }

    private final String b() {
        String strA;
        synchronized (this.f2606c) {
            strA = this.f2606c.a();
        }
        if (TextUtils.isEmpty(strA)) {
            return null;
        }
        String[] strArrSplit = strA.split(",");
        if (strArrSplit.length <= 1 || TextUtils.isEmpty(strArrSplit[1])) {
            return null;
        }
        return strArrSplit[1];
    }

    final synchronized boolean a() {
        return b() != null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:6:0x000c, code lost:
    
        if (com.google.firebase.iid.FirebaseInstanceId.f() == false) goto L8;
     */
    /* JADX WARN: Code restructure failed: missing block: B:7:0x000e, code lost:
    
        android.util.Log.d("FirebaseInstanceId", "topic sync succeeded");
     */
    /* JADX WARN: Code restructure failed: missing block: B:9:0x0016, code lost:
    
        return true;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    final boolean a(com.google.firebase.iid.FirebaseInstanceId r5) {
        /*
            r4 = this;
        L0:
            monitor-enter(r4)
            java.lang.String r0 = r4.b()     // Catch: java.lang.Throwable -> L42
            r1 = 1
            if (r0 != 0) goto L17
            boolean r5 = com.google.firebase.iid.FirebaseInstanceId.f()     // Catch: java.lang.Throwable -> L42
            if (r5 == 0) goto L15
            java.lang.String r5 = "FirebaseInstanceId"
            java.lang.String r0 = "topic sync succeeded"
            android.util.Log.d(r5, r0)     // Catch: java.lang.Throwable -> L42
        L15:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L42
            return r1
        L17:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L42
            boolean r2 = a(r5, r0)
            if (r2 != 0) goto L20
            r5 = 0
            return r5
        L20:
            monitor-enter(r4)
            java.util.Map<java.lang.Integer, c.a.a.a.f.h<java.lang.Void>> r2 = r4.f2605b     // Catch: java.lang.Throwable -> L3f
            int r3 = r4.f2604a     // Catch: java.lang.Throwable -> L3f
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L3f
            java.lang.Object r2 = r2.remove(r3)     // Catch: java.lang.Throwable -> L3f
            c.a.a.a.f.h r2 = (c.a.a.a.f.h) r2     // Catch: java.lang.Throwable -> L3f
            r4.a(r0)     // Catch: java.lang.Throwable -> L3f
            int r0 = r4.f2604a     // Catch: java.lang.Throwable -> L3f
            int r0 = r0 + r1
            r4.f2604a = r0     // Catch: java.lang.Throwable -> L3f
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L3f
            if (r2 == 0) goto L0
            r0 = 0
            r2.a(r0)
            goto L0
        L3f:
            r5 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L3f
            throw r5
        L42:
            r5 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L42
            goto L46
        L45:
            throw r5
        L46:
            goto L45
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.firebase.iid.B.a(com.google.firebase.iid.FirebaseInstanceId):boolean");
    }
}
