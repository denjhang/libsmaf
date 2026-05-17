package com.google.android.gms.internal.measurement;

import android.content.ContentResolver;
import android.database.ContentObserver;
import android.database.Cursor;
import android.database.sqlite.SQLiteException;
import android.net.Uri;
import android.os.StrictMode;
import android.util.Log;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.fa, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0119fa implements InterfaceC0153ka {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Map<Uri, C0119fa> f1693a = new b.b.b();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final String[] f1694b = {"key", "value"};

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final ContentResolver f1695c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Uri f1696d;
    private volatile Map<String, String> g;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final ContentObserver f1697e = new C0133ha(this, null);

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final Object f1698f = new Object();
    private final List<InterfaceC0160la> h = new ArrayList();

    private C0119fa(ContentResolver contentResolver, Uri uri) {
        this.f1695c = contentResolver;
        this.f1696d = uri;
        contentResolver.registerContentObserver(uri, false, this.f1697e);
    }

    public static C0119fa a(ContentResolver contentResolver, Uri uri) {
        C0119fa c0119fa;
        synchronized (C0119fa.class) {
            c0119fa = f1693a.get(uri);
            if (c0119fa == null) {
                try {
                    C0119fa c0119fa2 = new C0119fa(contentResolver, uri);
                    try {
                        f1693a.put(uri, c0119fa2);
                    } catch (SecurityException unused) {
                    }
                    c0119fa = c0119fa2;
                } catch (SecurityException unused2) {
                }
            }
        }
        return c0119fa;
    }

    static synchronized void c() {
        for (C0119fa c0119fa : f1693a.values()) {
            c0119fa.f1695c.unregisterContentObserver(c0119fa.f1697e);
        }
        f1693a.clear();
    }

    private final Map<String, String> e() {
        StrictMode.ThreadPolicy threadPolicyAllowThreadDiskReads = StrictMode.allowThreadDiskReads();
        try {
            try {
                return (Map) C0174na.a(new InterfaceC0167ma(this) { // from class: com.google.android.gms.internal.measurement.ja

                    /* JADX INFO: renamed from: a, reason: collision with root package name */
                    private final C0119fa f1731a;

                    {
                        this.f1731a = this;
                    }

                    @Override // com.google.android.gms.internal.measurement.InterfaceC0167ma
                    public final Object h() {
                        return this.f1731a.d();
                    }
                });
            } catch (SQLiteException | IllegalStateException | SecurityException unused) {
                Log.e("ConfigurationContentLoader", "PhenotypeFlag unable to load ContentProvider, using default values");
                StrictMode.setThreadPolicy(threadPolicyAllowThreadDiskReads);
                return null;
            }
        } finally {
            StrictMode.setThreadPolicy(threadPolicyAllowThreadDiskReads);
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0153ka
    public final /* synthetic */ Object a(String str) {
        return a().get(str);
    }

    public final Map<String, String> a() {
        Map<String, String> mapE = this.g;
        if (mapE == null) {
            synchronized (this.f1698f) {
                mapE = this.g;
                if (mapE == null) {
                    mapE = e();
                    this.g = mapE;
                }
            }
        }
        return mapE != null ? mapE : Collections.emptyMap();
    }

    public final void b() {
        synchronized (this.f1698f) {
            this.g = null;
            AbstractC0217ua.a();
        }
        synchronized (this) {
            Iterator<InterfaceC0160la> it = this.h.iterator();
            while (it.hasNext()) {
                it.next().h();
            }
        }
    }

    final /* synthetic */ Map d() {
        Cursor cursorQuery = this.f1695c.query(this.f1696d, f1694b, null, null, null);
        if (cursorQuery == null) {
            return Collections.emptyMap();
        }
        try {
            int count = cursorQuery.getCount();
            if (count == 0) {
                return Collections.emptyMap();
            }
            Map bVar = count <= 256 ? new b.b.b(count) : new HashMap(count, 1.0f);
            while (cursorQuery.moveToNext()) {
                bVar.put(cursorQuery.getString(0), cursorQuery.getString(1));
            }
            return bVar;
        } finally {
            cursorQuery.close();
        }
    }
}
