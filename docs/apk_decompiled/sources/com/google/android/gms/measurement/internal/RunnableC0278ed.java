package com.google.android.gms.measurement.internal;

import java.net.URL;
import java.util.List;
import java.util.Map;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.ed, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0278ed implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final URL f2228a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final byte[] f2229b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final InterfaceC0256ad f2230c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final String f2231d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final Map<String, String> f2232e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ C0268cd f2233f;

    public RunnableC0278ed(C0268cd c0268cd, String str, URL url, byte[] bArr, Map<String, String> map, InterfaceC0256ad interfaceC0256ad) {
        this.f2233f = c0268cd;
        com.google.android.gms.common.internal.r.b(str);
        com.google.android.gms.common.internal.r.a(url);
        com.google.android.gms.common.internal.r.a(interfaceC0256ad);
        this.f2228a = url;
        this.f2229b = null;
        this.f2230c = interfaceC0256ad;
        this.f2231d = str;
        this.f2232e = null;
    }

    private final void b(final int i, final Exception exc, final byte[] bArr, final Map<String, List<String>> map) {
        this.f2233f.c().a(new Runnable(this, i, exc, bArr, map) { // from class: com.google.android.gms.measurement.internal.dd

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private final RunnableC0278ed f2216a;

            /* JADX INFO: renamed from: b, reason: collision with root package name */
            private final int f2217b;

            /* JADX INFO: renamed from: c, reason: collision with root package name */
            private final Exception f2218c;

            /* JADX INFO: renamed from: d, reason: collision with root package name */
            private final byte[] f2219d;

            /* JADX INFO: renamed from: e, reason: collision with root package name */
            private final Map f2220e;

            {
                this.f2216a = this;
                this.f2217b = i;
                this.f2218c = exc;
                this.f2219d = bArr;
                this.f2220e = map;
            }

            @Override // java.lang.Runnable
            public final void run() {
                this.f2216a.a(this.f2217b, this.f2218c, this.f2219d, this.f2220e);
            }
        });
    }

    final /* synthetic */ void a(int i, Exception exc, byte[] bArr, Map map) {
        this.f2230c.a(this.f2231d, i, exc, bArr, map);
    }

    /* JADX WARN: Removed duplicated region for block: B:33:0x0070  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x007d  */
    @Override // java.lang.Runnable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void run() throws java.lang.Throwable {
        /*
            r7 = this;
            com.google.android.gms.measurement.internal.cd r0 = r7.f2233f
            r0.b()
            r0 = 0
            r1 = 0
            com.google.android.gms.measurement.internal.cd r2 = r7.f2233f     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L77
            java.net.URL r3 = r7.f2228a     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L77
            java.net.HttpURLConnection r2 = r2.a(r3)     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L77
            java.util.Map<java.lang.String, java.lang.String> r3 = r7.f2232e     // Catch: java.lang.Throwable -> L64 java.io.IOException -> L67
            if (r3 == 0) goto L39
            java.util.Map<java.lang.String, java.lang.String> r3 = r7.f2232e     // Catch: java.lang.Throwable -> L64 java.io.IOException -> L67
            java.util.Set r3 = r3.entrySet()     // Catch: java.lang.Throwable -> L64 java.io.IOException -> L67
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L64 java.io.IOException -> L67
        L1d:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L64 java.io.IOException -> L67
            if (r4 == 0) goto L39
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L64 java.io.IOException -> L67
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4     // Catch: java.lang.Throwable -> L64 java.io.IOException -> L67
            java.lang.Object r5 = r4.getKey()     // Catch: java.lang.Throwable -> L64 java.io.IOException -> L67
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L64 java.io.IOException -> L67
            java.lang.Object r4 = r4.getValue()     // Catch: java.lang.Throwable -> L64 java.io.IOException -> L67
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L64 java.io.IOException -> L67
            r2.addRequestProperty(r5, r4)     // Catch: java.lang.Throwable -> L64 java.io.IOException -> L67
            goto L1d
        L39:
            int r1 = r2.getResponseCode()     // Catch: java.lang.Throwable -> L64 java.io.IOException -> L67
            java.util.Map r3 = r2.getHeaderFields()     // Catch: java.lang.Throwable -> L5c java.io.IOException -> L60
            com.google.android.gms.measurement.internal.cd r4 = r7.f2233f     // Catch: java.lang.Throwable -> L50 java.io.IOException -> L56
            byte[] r4 = com.google.android.gms.measurement.internal.C0268cd.a(r4, r2)     // Catch: java.lang.Throwable -> L50 java.io.IOException -> L56
            if (r2 == 0) goto L4c
            r2.disconnect()
        L4c:
            r7.b(r1, r0, r4, r3)
            return
        L50:
            r4 = move-exception
            r6 = r4
            r4 = r1
            r1 = r3
            r3 = r6
            goto L6e
        L56:
            r4 = move-exception
            r6 = r4
            r4 = r1
            r1 = r3
            r3 = r6
            goto L7b
        L5c:
            r3 = move-exception
            r4 = r1
            r1 = r0
            goto L6e
        L60:
            r3 = move-exception
            r4 = r1
            r1 = r0
            goto L7b
        L64:
            r3 = move-exception
            r1 = r0
            goto L6d
        L67:
            r3 = move-exception
            r1 = r0
            goto L7a
        L6a:
            r3 = move-exception
            r1 = r0
            r2 = r1
        L6d:
            r4 = 0
        L6e:
            if (r2 == 0) goto L73
            r2.disconnect()
        L73:
            r7.b(r4, r0, r0, r1)
            throw r3
        L77:
            r3 = move-exception
            r1 = r0
            r2 = r1
        L7a:
            r4 = 0
        L7b:
            if (r2 == 0) goto L80
            r2.disconnect()
        L80:
            r7.b(r4, r3, r0, r1)
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.RunnableC0278ed.run():void");
    }
}
