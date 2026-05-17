package com.google.android.apps.analytics;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteException;
import android.database.sqlite.SQLiteOpenHelper;
import android.util.Log;
import java.io.UnsupportedEncodingException;
import java.net.URLDecoder;
import java.security.SecureRandom;
import java.util.ArrayList;
import java.util.Map;
import java.util.Random;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class i implements f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f953a = "CREATE TABLE events (" + String.format(" '%s' INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,", "event_id") + String.format(" '%s' INTEGER NOT NULL,", "user_id") + String.format(" '%s' CHAR(256) NOT NULL,", "account_id") + String.format(" '%s' INTEGER NOT NULL,", "random_val") + String.format(" '%s' INTEGER NOT NULL,", "timestamp_first") + String.format(" '%s' INTEGER NOT NULL,", "timestamp_previous") + String.format(" '%s' INTEGER NOT NULL,", "timestamp_current") + String.format(" '%s' INTEGER NOT NULL,", "visits") + String.format(" '%s' CHAR(256) NOT NULL,", "category") + String.format(" '%s' CHAR(256) NOT NULL,", "action") + String.format(" '%s' CHAR(256), ", "label") + String.format(" '%s' INTEGER,", "value") + String.format(" '%s' INTEGER,", "screen_width") + String.format(" '%s' INTEGER);", "screen_height");

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final String f954b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final String f955c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static final String f956d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static final String f957e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private static final String f958f;
    private static final String g;
    private static final String h;
    private a i;
    private int j;
    private long k;
    private long l;
    private long m;
    private int n;
    private volatile int o;
    private boolean p;
    private boolean q;
    private boolean r;
    private int s;
    private Random t;
    private c u;

    static class a extends SQLiteOpenHelper {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final int f959a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final i f960b;

        a(Context context, String str, int i, i iVar) {
            super(context, str, (SQLiteDatabase.CursorFactory) null, i);
            this.f959a = i;
            this.f960b = iVar;
        }

        private void a(SQLiteDatabase sQLiteDatabase, int i) throws Throwable {
            this.f960b.c(sQLiteDatabase);
            i iVar = this.f960b;
            iVar.u = iVar.b(sQLiteDatabase);
            for (d dVar : this.f960b.a(1000, sQLiteDatabase, i)) {
                this.f960b.a(dVar, sQLiteDatabase, false);
            }
            sQLiteDatabase.execSQL("DELETE from events;");
            sQLiteDatabase.execSQL("DELETE from item_events;");
            sQLiteDatabase.execSQL("DELETE from transaction_events;");
            sQLiteDatabase.execSQL("DELETE from custom_variables;");
        }

        private boolean a(String str, SQLiteDatabase sQLiteDatabase) {
            Cursor cursorQuery = null;
            try {
                try {
                    cursorQuery = sQLiteDatabase.query("SQLITE_MASTER", new String[]{"name"}, "name=?", new String[]{str}, null, null, null);
                    boolean zMoveToFirst = cursorQuery.moveToFirst();
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return zMoveToFirst;
                } catch (SQLiteException unused) {
                    Log.w("GoogleAnalyticsTracker", "error querying for table " + str);
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return false;
                }
            } catch (Throwable th) {
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                throw th;
            }
        }

        private void b(SQLiteDatabase sQLiteDatabase) {
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS transaction_events;");
            sQLiteDatabase.execSQL(i.f958f);
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS item_events;");
            sQLiteDatabase.execSQL(i.g);
        }

        private void c(SQLiteDatabase sQLiteDatabase) {
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS hits;");
            sQLiteDatabase.execSQL(i.h);
        }

        private void d(SQLiteDatabase sQLiteDatabase) {
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS referrer;");
            sQLiteDatabase.execSQL("CREATE TABLE IF NOT EXISTS referrer (referrer TEXT PRIMARY KEY NOT NULL,timestamp_referrer INTEGER NOT NULL,referrer_visit INTEGER NOT NULL DEFAULT 1,referrer_index INTEGER NOT NULL DEFAULT 1);");
        }

        private void e(SQLiteDatabase sQLiteDatabase) {
            if (a(i.f957e, sQLiteDatabase)) {
                return;
            }
            sQLiteDatabase.execSQL(i.f957e);
        }

        /* JADX WARN: Removed duplicated region for block: B:67:0x00f7  */
        /* JADX WARN: Removed duplicated region for block: B:70:0x0100  */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        private void f(android.database.sqlite.SQLiteDatabase r17) throws java.lang.Throwable {
            /*
                Method dump skipped, instruction units count: 262
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: com.google.android.apps.analytics.i.a.f(android.database.sqlite.SQLiteDatabase):void");
        }

        /* JADX WARN: Removed duplicated region for block: B:39:0x009c  */
        /* JADX WARN: Removed duplicated region for block: B:41:0x00a1  */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        private void g(android.database.sqlite.SQLiteDatabase r21) throws java.lang.Throwable {
            /*
                r20 = this;
                java.lang.String r0 = "referrer"
                r1 = 0
                java.lang.String r3 = "install_referrer"
                r10 = 1
                java.lang.String[] r4 = new java.lang.String[r10]     // Catch: java.lang.Throwable -> L7e android.database.sqlite.SQLiteException -> L82
                r11 = 0
                r4[r11] = r0     // Catch: java.lang.Throwable -> L7e android.database.sqlite.SQLiteException -> L82
                r5 = 0
                r6 = 0
                r7 = 0
                r8 = 0
                r9 = 0
                r2 = r21
                android.database.Cursor r2 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L7e android.database.sqlite.SQLiteException -> L82
                r3 = 0
                boolean r5 = r2.moveToFirst()     // Catch: java.lang.Throwable -> L77 android.database.sqlite.SQLiteException -> L7a
                if (r5 == 0) goto L6c
                java.lang.String r5 = r2.getString(r11)     // Catch: java.lang.Throwable -> L77 android.database.sqlite.SQLiteException -> L7a
                java.lang.String r13 = "session"
                r14 = 0
                r15 = 0
                r16 = 0
                r17 = 0
                r18 = 0
                r19 = 0
                r12 = r21
                android.database.Cursor r6 = r12.query(r13, r14, r15, r16, r17, r18, r19)     // Catch: java.lang.Throwable -> L77 android.database.sqlite.SQLiteException -> L7a
                boolean r7 = r6.moveToFirst()     // Catch: java.lang.Throwable -> L68 android.database.sqlite.SQLiteException -> L6a
                if (r7 == 0) goto L3e
                long r3 = r6.getLong(r11)     // Catch: java.lang.Throwable -> L68 android.database.sqlite.SQLiteException -> L6a
            L3e:
                android.content.ContentValues r7 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L68 android.database.sqlite.SQLiteException -> L6a
                r7.<init>()     // Catch: java.lang.Throwable -> L68 android.database.sqlite.SQLiteException -> L6a
                r7.put(r0, r5)     // Catch: java.lang.Throwable -> L68 android.database.sqlite.SQLiteException -> L6a
                java.lang.String r5 = "timestamp_referrer"
                java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L68 android.database.sqlite.SQLiteException -> L6a
                r7.put(r5, r3)     // Catch: java.lang.Throwable -> L68 android.database.sqlite.SQLiteException -> L6a
                java.lang.String r3 = "referrer_visit"
                java.lang.Integer r4 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Throwable -> L68 android.database.sqlite.SQLiteException -> L6a
                r7.put(r3, r4)     // Catch: java.lang.Throwable -> L68 android.database.sqlite.SQLiteException -> L6a
                java.lang.String r3 = "referrer_index"
                java.lang.Integer r4 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Throwable -> L68 android.database.sqlite.SQLiteException -> L6a
                r7.put(r3, r4)     // Catch: java.lang.Throwable -> L68 android.database.sqlite.SQLiteException -> L6a
                r3 = r21
                r3.insert(r0, r1, r7)     // Catch: java.lang.Throwable -> L68 android.database.sqlite.SQLiteException -> L6a
                r1 = r6
                goto L6c
            L68:
                r0 = move-exception
                goto L9a
            L6a:
                r0 = move-exception
                goto L7c
            L6c:
                if (r2 == 0) goto L71
                r2.close()
            L71:
                if (r1 == 0) goto L97
                r1.close()
                goto L97
            L77:
                r0 = move-exception
                r6 = r1
                goto L9a
            L7a:
                r0 = move-exception
                r6 = r1
            L7c:
                r1 = r2
                goto L84
            L7e:
                r0 = move-exception
                r2 = r1
                r6 = r2
                goto L9a
            L82:
                r0 = move-exception
                r6 = r1
            L84:
                java.lang.String r2 = "GoogleAnalyticsTracker"
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L98
                android.util.Log.e(r2, r0)     // Catch: java.lang.Throwable -> L98
                if (r1 == 0) goto L92
                r1.close()
            L92:
                if (r6 == 0) goto L97
                r6.close()
            L97:
                return
            L98:
                r0 = move-exception
                r2 = r1
            L9a:
                if (r2 == 0) goto L9f
                r2.close()
            L9f:
                if (r6 == 0) goto La4
                r6.close()
            La4:
                throw r0
            */
            throw new UnsupportedOperationException("Method not decompiled: com.google.android.apps.analytics.i.a.g(android.database.sqlite.SQLiteDatabase):void");
        }

        private void h(SQLiteDatabase sQLiteDatabase) {
            Cursor cursorQuery = sQLiteDatabase.query("custom_var_cache", null, "cv_scope= ?", new String[]{Integer.toString(1)}, null, null, null);
            while (cursorQuery.moveToNext()) {
                int i = cursorQuery.getInt(cursorQuery.getColumnIndex("cv_index"));
                String string = cursorQuery.getString(cursorQuery.getColumnIndex("cv_name"));
                String string2 = cursorQuery.getString(cursorQuery.getColumnIndex("cv_value"));
                if (i > 0 && i <= 50) {
                    ContentValues contentValues = new ContentValues();
                    contentValues.put("cv_index", Integer.valueOf(i));
                    contentValues.put("cv_name", string);
                    contentValues.put("cv_value", string2);
                    sQLiteDatabase.insert("custom_var_visitor_cache", null, contentValues);
                }
            }
            if (cursorQuery != null) {
                cursorQuery.close();
            }
        }

        void a(SQLiteDatabase sQLiteDatabase) {
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS custom_variables;");
            sQLiteDatabase.execSQL(i.f955c);
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS custom_var_cache;");
            sQLiteDatabase.execSQL(i.f956d);
            for (int i = 1; i <= 5; i++) {
                ContentValues contentValues = new ContentValues();
                contentValues.put("event_id", (Integer) 0);
                contentValues.put("cv_index", Integer.valueOf(i));
                contentValues.put("cv_name", "");
                contentValues.put("cv_scope", (Integer) 3);
                contentValues.put("cv_value", "");
                sQLiteDatabase.insert("custom_var_cache", "event_id", contentValues);
            }
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS custom_var_visitor_cache;");
            sQLiteDatabase.execSQL(i.f957e);
        }

        @Override // android.database.sqlite.SQLiteOpenHelper
        public void onCreate(SQLiteDatabase sQLiteDatabase) {
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS events;");
            sQLiteDatabase.execSQL(i.f953a);
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS install_referrer;");
            sQLiteDatabase.execSQL("CREATE TABLE install_referrer (referrer TEXT PRIMARY KEY NOT NULL);");
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS session;");
            sQLiteDatabase.execSQL(i.f954b);
            if (this.f959a > 1) {
                a(sQLiteDatabase);
            }
            if (this.f959a > 2) {
                b(sQLiteDatabase);
            }
            if (this.f959a > 3) {
                c(sQLiteDatabase);
                d(sQLiteDatabase);
            }
        }

        @Override // android.database.sqlite.SQLiteOpenHelper
        public void onDowngrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
            Log.w("GoogleAnalyticsTracker", "Downgrading database version from " + i + " to " + i2 + " not recommended.");
            sQLiteDatabase.execSQL("CREATE TABLE IF NOT EXISTS referrer (referrer TEXT PRIMARY KEY NOT NULL,timestamp_referrer INTEGER NOT NULL,referrer_visit INTEGER NOT NULL DEFAULT 1,referrer_index INTEGER NOT NULL DEFAULT 1);");
            sQLiteDatabase.execSQL(i.h);
            sQLiteDatabase.execSQL(i.f957e);
            sQLiteDatabase.execSQL(i.f954b);
        }

        @Override // android.database.sqlite.SQLiteOpenHelper
        public void onOpen(SQLiteDatabase sQLiteDatabase) throws Throwable {
            if (sQLiteDatabase.isReadOnly()) {
                Log.w("GoogleAnalyticsTracker", "Warning: Need to update database, but it's read only.");
            } else {
                f(sQLiteDatabase);
                e(sQLiteDatabase);
            }
        }

        @Override // android.database.sqlite.SQLiteOpenHelper
        public void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) throws Throwable {
            if (i > i2) {
                onDowngrade(sQLiteDatabase, i, i2);
                return;
            }
            if (i < 2 && i2 > 1) {
                a(sQLiteDatabase);
            }
            if (i < 3 && i2 > 2) {
                b(sQLiteDatabase);
            }
            if (i < 4 && i2 > 3) {
                c(sQLiteDatabase);
                d(sQLiteDatabase);
                a(sQLiteDatabase, i);
                g(sQLiteDatabase);
            }
            if (i >= 6 || i2 <= 5) {
                return;
            }
            sQLiteDatabase.execSQL(i.f957e);
            h(sQLiteDatabase);
        }
    }

    static {
        StringBuilder sb = new StringBuilder();
        sb.append("CREATE TABLE IF NOT EXISTS session (");
        sb.append(String.format(" '%s' INTEGER PRIMARY KEY,", "timestamp_first"));
        sb.append(String.format(" '%s' INTEGER NOT NULL,", "timestamp_previous"));
        sb.append(String.format(" '%s' INTEGER NOT NULL,", "timestamp_current"));
        sb.append(String.format(" '%s' INTEGER NOT NULL,", "visits"));
        sb.append(String.format(" '%s' INTEGER NOT NULL);", "store_id"));
        f954b = sb.toString();
        f955c = "CREATE TABLE custom_variables (" + String.format(" '%s' INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,", "cv_id") + String.format(" '%s' INTEGER NOT NULL,", "event_id") + String.format(" '%s' INTEGER NOT NULL,", "cv_index") + String.format(" '%s' CHAR(64) NOT NULL,", "cv_name") + String.format(" '%s' CHAR(64) NOT NULL,", "cv_value") + String.format(" '%s' INTEGER NOT NULL);", "cv_scope");
        f956d = "CREATE TABLE IF NOT EXISTS custom_var_cache (" + String.format(" '%s' INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,", "cv_id") + String.format(" '%s' INTEGER NOT NULL,", "event_id") + String.format(" '%s' INTEGER NOT NULL,", "cv_index") + String.format(" '%s' CHAR(64) NOT NULL,", "cv_name") + String.format(" '%s' CHAR(64) NOT NULL,", "cv_value") + String.format(" '%s' INTEGER NOT NULL);", "cv_scope");
        StringBuilder sb2 = new StringBuilder();
        sb2.append("CREATE TABLE IF NOT EXISTS custom_var_visitor_cache (");
        sb2.append(String.format(" '%s' INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,", "cv_id"));
        sb2.append(String.format(" '%s' INTEGER NOT NULL,", "cv_index"));
        sb2.append(String.format(" '%s' %s,", "cv_name", "CHAR(64) NOT NULL"));
        sb2.append(String.format(" '%s' %s);", "cv_value", "CHAR(64) NOT NULL"));
        f957e = sb2.toString();
        f958f = "CREATE TABLE transaction_events (" + String.format(" '%s' INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,", "tran_id") + String.format(" '%s' INTEGER NOT NULL,", "event_id") + String.format(" '%s' TEXT NOT NULL,", "order_id") + String.format(" '%s' TEXT,", "tran_storename") + String.format(" '%s' TEXT NOT NULL,", "tran_totalcost") + String.format(" '%s' TEXT,", "tran_totaltax") + String.format(" '%s' TEXT);", "tran_shippingcost");
        g = "CREATE TABLE item_events (" + String.format(" '%s' INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,", "item_id") + String.format(" '%s' INTEGER NOT NULL,", "event_id") + String.format(" '%s' TEXT NOT NULL,", "order_id") + String.format(" '%s' TEXT NOT NULL,", "item_sku") + String.format(" '%s' TEXT,", "item_name") + String.format(" '%s' TEXT,", "item_category") + String.format(" '%s' TEXT NOT NULL,", "item_price") + String.format(" '%s' TEXT NOT NULL);", "item_count");
        StringBuilder sb3 = new StringBuilder();
        sb3.append("CREATE TABLE IF NOT EXISTS hits (");
        sb3.append(String.format(" '%s' INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,", "hit_id"));
        sb3.append(String.format(" '%s' TEXT NOT NULL,", "hit_string"));
        sb3.append(String.format(" '%s' INTEGER NOT NULL);", "hit_time"));
        h = sb3.toString();
    }

    i(Context context) {
        this(context, "google_analytics.db", 6);
    }

    i(Context context, String str, int i) throws Throwable {
        this.s = 100;
        this.t = new Random();
        this.i = new a(context, str, i, this);
        k();
        this.u = j();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(d dVar, SQLiteDatabase sQLiteDatabase, boolean z) throws Throwable {
        if (!dVar.m()) {
            dVar.a(this.t.nextInt(Integer.MAX_VALUE));
            dVar.c((int) this.k);
            dVar.d((int) this.l);
            dVar.b((int) this.m);
            dVar.f(this.n);
        }
        dVar.a(this.r);
        if (dVar.k() == -1) {
            dVar.e(this.j);
        }
        a(dVar, sQLiteDatabase);
        j jVarF = f(sQLiteDatabase);
        String[] strArrSplit = dVar.f936b.split(",");
        if (strArrSplit.length == 1) {
            a(dVar, jVarF, sQLiteDatabase, z);
            return;
        }
        for (String str : strArrSplit) {
            a(new d(dVar, str), jVarF, sQLiteDatabase, z);
        }
    }

    private boolean a(SQLiteDatabase sQLiteDatabase, ContentValues contentValues) {
        try {
            try {
                sQLiteDatabase.beginTransaction();
                sQLiteDatabase.delete("referrer", null, null);
                sQLiteDatabase.insert("referrer", null, contentValues);
                sQLiteDatabase.setTransactionSuccessful();
                return !sQLiteDatabase.inTransaction() || e(sQLiteDatabase);
            } catch (SQLiteException e2) {
                Log.e("GoogleAnalyticsTracker", e2.toString());
                if (!sQLiteDatabase.inTransaction() || !e(sQLiteDatabase)) {
                }
                return false;
            }
        } catch (Throwable th) {
            if (!sQLiteDatabase.inTransaction() || e(sQLiteDatabase)) {
                throw th;
            }
            return false;
        }
    }

    static String b(String str) {
        if (str == null) {
            return null;
        }
        if (!str.contains("=")) {
            if (str.contains("%3D")) {
                try {
                    str = URLDecoder.decode(str, HTTP.UTF_8);
                } catch (UnsupportedEncodingException unused) {
                }
            }
            return null;
        }
        Map<String, String> mapA = m.a(str);
        boolean z = mapA.get("utm_campaign") != null;
        boolean z2 = mapA.get("utm_medium") != null;
        boolean z3 = mapA.get("utm_source") != null;
        if (!(mapA.get("gclid") != null) && (!z || !z2 || !z3)) {
            Log.w("GoogleAnalyticsTracker", "Badly formatted referrer missing campaign, medium and source or click ID");
            return null;
        }
        String[][] strArr = {new String[]{"utmcid", mapA.get("utm_id")}, new String[]{"utmcsr", mapA.get("utm_source")}, new String[]{"utmgclid", mapA.get("gclid")}, new String[]{"utmccn", mapA.get("utm_campaign")}, new String[]{"utmcmd", mapA.get("utm_medium")}, new String[]{"utmctr", mapA.get("utm_term")}, new String[]{"utmcct", mapA.get("utm_content")}};
        StringBuilder sb = new StringBuilder();
        boolean z4 = true;
        for (int i = 0; i < strArr.length; i++) {
            if (strArr[i][1] != null) {
                String strReplace = strArr[i][1].replace("+", "%20").replace(" ", "%20");
                if (z4) {
                    z4 = false;
                } else {
                    sb.append("|");
                }
                sb.append(strArr[i][0]);
                sb.append("=");
                sb.append(strReplace);
            }
        }
        return sb.toString();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static boolean e(SQLiteDatabase sQLiteDatabase) {
        try {
            sQLiteDatabase.endTransaction();
            return true;
        } catch (SQLiteException e2) {
            Log.e("GoogleAnalyticsTracker", "exception ending transaction:" + e2.toString());
            return false;
        }
    }

    private j f(SQLiteDatabase sQLiteDatabase) throws Throwable {
        j jVarD = d(sQLiteDatabase);
        if (jVarD == null) {
            return null;
        }
        if (jVarD.c() != 0) {
            return jVarD;
        }
        int iA = jVarD.a();
        String strB = jVarD.b();
        ContentValues contentValues = new ContentValues();
        contentValues.put("referrer", strB);
        contentValues.put("timestamp_referrer", Long.valueOf(this.m));
        contentValues.put("referrer_visit", Integer.valueOf(this.n));
        contentValues.put("referrer_index", Integer.valueOf(iA));
        if (a(sQLiteDatabase, contentValues)) {
            return new j(strB, this.m, this.n, iA);
        }
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0065 A[PHI: r1
  0x0065: PHI (r1v3 android.database.Cursor) = (r1v2 android.database.Cursor), (r1v4 android.database.Cursor) binds: [B:14:0x0063, B:8:0x0054] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    com.google.android.apps.analytics.c a(long r11, android.database.sqlite.SQLiteDatabase r13) {
        /*
            r10 = this;
            com.google.android.apps.analytics.c r0 = new com.google.android.apps.analytics.c
            r0.<init>()
            r1 = 0
            java.lang.String r3 = "custom_variables"
            r4 = 0
            java.lang.String r5 = "event_id= ?"
            r2 = 1
            java.lang.String[] r6 = new java.lang.String[r2]     // Catch: java.lang.Throwable -> L57 android.database.sqlite.SQLiteException -> L59
            r2 = 0
            java.lang.String r11 = java.lang.Long.toString(r11)     // Catch: java.lang.Throwable -> L57 android.database.sqlite.SQLiteException -> L59
            r6[r2] = r11     // Catch: java.lang.Throwable -> L57 android.database.sqlite.SQLiteException -> L59
            r7 = 0
            r8 = 0
            r9 = 0
            r2 = r13
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L57 android.database.sqlite.SQLiteException -> L59
        L1d:
            boolean r11 = r1.moveToNext()     // Catch: java.lang.Throwable -> L57 android.database.sqlite.SQLiteException -> L59
            if (r11 == 0) goto L54
            com.google.android.apps.analytics.b r11 = new com.google.android.apps.analytics.b     // Catch: java.lang.Throwable -> L57 android.database.sqlite.SQLiteException -> L59
            java.lang.String r12 = "cv_index"
            int r12 = r1.getColumnIndex(r12)     // Catch: java.lang.Throwable -> L57 android.database.sqlite.SQLiteException -> L59
            int r12 = r1.getInt(r12)     // Catch: java.lang.Throwable -> L57 android.database.sqlite.SQLiteException -> L59
            java.lang.String r13 = "cv_name"
            int r13 = r1.getColumnIndex(r13)     // Catch: java.lang.Throwable -> L57 android.database.sqlite.SQLiteException -> L59
            java.lang.String r13 = r1.getString(r13)     // Catch: java.lang.Throwable -> L57 android.database.sqlite.SQLiteException -> L59
            java.lang.String r2 = "cv_value"
            int r2 = r1.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L57 android.database.sqlite.SQLiteException -> L59
            java.lang.String r2 = r1.getString(r2)     // Catch: java.lang.Throwable -> L57 android.database.sqlite.SQLiteException -> L59
            java.lang.String r3 = "cv_scope"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L57 android.database.sqlite.SQLiteException -> L59
            int r3 = r1.getInt(r3)     // Catch: java.lang.Throwable -> L57 android.database.sqlite.SQLiteException -> L59
            r11.<init>(r12, r13, r2, r3)     // Catch: java.lang.Throwable -> L57 android.database.sqlite.SQLiteException -> L59
            r0.a(r11)     // Catch: java.lang.Throwable -> L57 android.database.sqlite.SQLiteException -> L59
            goto L1d
        L54:
            if (r1 == 0) goto L68
            goto L65
        L57:
            r11 = move-exception
            goto L69
        L59:
            r11 = move-exception
            java.lang.String r12 = "GoogleAnalyticsTracker"
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L57
            android.util.Log.e(r12, r11)     // Catch: java.lang.Throwable -> L57
            if (r1 == 0) goto L68
        L65:
            r1.close()
        L68:
            return r0
        L69:
            if (r1 == 0) goto L6e
            r1.close()
        L6e:
            goto L70
        L6f:
            throw r11
        L70:
            goto L6f
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.apps.analytics.i.a(long, android.database.sqlite.SQLiteDatabase):com.google.android.apps.analytics.c");
    }

    void a(d dVar, SQLiteDatabase sQLiteDatabase) {
        if ("__##GOOGLEITEM##__".equals(dVar.m) || "__##GOOGLETRANSACTION##__".equals(dVar.m)) {
            return;
        }
        c cVarC = dVar.c();
        if (this.q) {
            if (cVarC == null) {
                cVarC = new c();
                dVar.a(cVarC);
            }
            for (int i = 1; i <= 50; i++) {
                b bVarB = this.u.b(i);
                b bVarB2 = cVarC.b(i);
                if (bVarB != null && bVarB2 == null) {
                    cVarC.a(bVarB);
                }
            }
            this.q = false;
        }
        if (cVarC != null) {
            for (int i2 = 1; i2 <= 50; i2++) {
                if (!cVarC.c(i2)) {
                    b bVarB3 = cVarC.b(i2);
                    sQLiteDatabase.delete("custom_var_visitor_cache", "cv_index = ?", new String[]{Integer.toString(bVarB3.a())});
                    if (bVarB3.c() == 1) {
                        ContentValues contentValues = new ContentValues();
                        contentValues.put("cv_index", Integer.valueOf(bVarB3.a()));
                        contentValues.put("cv_name", bVarB3.b());
                        contentValues.put("cv_value", bVarB3.d());
                        sQLiteDatabase.insert("custom_var_visitor_cache", null, contentValues);
                        this.u.a(bVarB3);
                    } else {
                        this.u.a(bVarB3.a());
                    }
                }
            }
        }
    }

    void a(d dVar, j jVar, SQLiteDatabase sQLiteDatabase, boolean z) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("hit_string", e.a(dVar, jVar));
        contentValues.put("hit_time", Long.valueOf(z ? System.currentTimeMillis() : 0L));
        sQLiteDatabase.insert("hits", null, contentValues);
        this.o++;
    }

    @Override // com.google.android.apps.analytics.f
    public boolean a(String str) throws Throwable {
        String strB = b(str);
        if (strB == null) {
            return false;
        }
        try {
            SQLiteDatabase writableDatabase = this.i.getWritableDatabase();
            j jVarD = d(writableDatabase);
            ContentValues contentValues = new ContentValues();
            contentValues.put("referrer", strB);
            contentValues.put("timestamp_referrer", (Long) 0L);
            contentValues.put("referrer_visit", (Integer) 0);
            long j = 1;
            if (jVarD != null) {
                long jA = jVarD.a();
                j = jVarD.c() > 0 ? 1 + jA : jA;
            }
            contentValues.put("referrer_index", Long.valueOf(j));
            if (!a(writableDatabase, contentValues)) {
                return false;
            }
            l();
            return true;
        } catch (SQLiteException e2) {
            Log.e("GoogleAnalyticsTracker", e2.toString());
            return false;
        }
    }

    public d[] a(int i, SQLiteDatabase sQLiteDatabase, int i2) throws Throwable {
        Cursor cursorQuery;
        String str;
        String str2;
        ArrayList arrayList = new ArrayList();
        Cursor cursor = null;
        try {
            try {
                cursorQuery = sQLiteDatabase.query("events", null, null, null, null, null, "event_id", Integer.toString(i));
                while (cursorQuery.moveToNext()) {
                    try {
                        String string = cursorQuery.getString(8);
                        String string2 = cursorQuery.getString(9);
                        if ("__##GOOGLEPAGEVIEW##__".equals(string)) {
                            str2 = string2;
                            str = null;
                        } else {
                            str = string2;
                            str2 = null;
                        }
                        d dVar = new d(cursorQuery.getLong(0), cursorQuery.getString(2), cursorQuery.getInt(3), cursorQuery.getInt(4), cursorQuery.getInt(5), cursorQuery.getInt(6), cursorQuery.getInt(7), str2, string, str, cursorQuery.getString(10), cursorQuery.getInt(11), cursorQuery.getInt(12), cursorQuery.getInt(13));
                        dVar.e(cursorQuery.getInt(1));
                        long j = cursorQuery.getLong(cursorQuery.getColumnIndex("event_id"));
                        if ("__##GOOGLETRANSACTION##__".equals(dVar.m)) {
                            l lVarC = c(j, sQLiteDatabase);
                            if (lVarC == null) {
                                Log.w("GoogleAnalyticsTracker", "missing expected transaction for event " + j);
                            }
                            dVar.a(lVarC);
                        } else if ("__##GOOGLEITEM##__".equals(dVar.m)) {
                            h hVarB = b(j, sQLiteDatabase);
                            if (hVarB == null) {
                                Log.w("GoogleAnalyticsTracker", "missing expected item for event " + j);
                            }
                            dVar.a(hVarB);
                        } else {
                            dVar.a(i2 > 1 ? a(j, sQLiteDatabase) : new c());
                            arrayList.add(dVar);
                        }
                        arrayList.add(dVar);
                    } catch (SQLiteException e2) {
                        e = e2;
                        cursor = cursorQuery;
                        Log.e("GoogleAnalyticsTracker", e.toString());
                        d[] dVarArr = new d[0];
                        if (cursor != null) {
                            cursor.close();
                        }
                        return dVarArr;
                    } catch (Throwable th) {
                        th = th;
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                        throw th;
                    }
                }
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                return (d[]) arrayList.toArray(new d[arrayList.size()]);
            } catch (SQLiteException e3) {
                e = e3;
            }
        } catch (Throwable th2) {
            th = th2;
            cursorQuery = cursor;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x0060 A[PHI: r2
  0x0060: PHI (r2v3 android.database.Cursor) = (r2v1 android.database.Cursor), (r2v4 android.database.Cursor) binds: [B:18:0x005e, B:12:0x004f] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    com.google.android.apps.analytics.c b(android.database.sqlite.SQLiteDatabase r12) {
        /*
            r11 = this;
            java.lang.String r0 = "cv_index"
            com.google.android.apps.analytics.c r1 = new com.google.android.apps.analytics.c
            r1.<init>()
            r2 = 0
            java.lang.String r4 = "custom_var_visitor_cache"
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r10 = 0
            r3 = r12
            android.database.Cursor r2 = r3.query(r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L52 android.database.sqlite.SQLiteException -> L54
        L15:
            boolean r12 = r2.moveToNext()     // Catch: java.lang.Throwable -> L52 android.database.sqlite.SQLiteException -> L54
            if (r12 == 0) goto L4f
            int r12 = r2.getColumnIndex(r0)     // Catch: java.lang.Throwable -> L52 android.database.sqlite.SQLiteException -> L54
            if (r12 <= 0) goto L15
            int r12 = r2.getColumnIndex(r0)     // Catch: java.lang.Throwable -> L52 android.database.sqlite.SQLiteException -> L54
            r3 = 50
            if (r12 > r3) goto L15
            com.google.android.apps.analytics.b r12 = new com.google.android.apps.analytics.b     // Catch: java.lang.Throwable -> L52 android.database.sqlite.SQLiteException -> L54
            int r3 = r2.getColumnIndex(r0)     // Catch: java.lang.Throwable -> L52 android.database.sqlite.SQLiteException -> L54
            int r3 = r2.getInt(r3)     // Catch: java.lang.Throwable -> L52 android.database.sqlite.SQLiteException -> L54
            java.lang.String r4 = "cv_name"
            int r4 = r2.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L52 android.database.sqlite.SQLiteException -> L54
            java.lang.String r4 = r2.getString(r4)     // Catch: java.lang.Throwable -> L52 android.database.sqlite.SQLiteException -> L54
            java.lang.String r5 = "cv_value"
            int r5 = r2.getColumnIndex(r5)     // Catch: java.lang.Throwable -> L52 android.database.sqlite.SQLiteException -> L54
            java.lang.String r5 = r2.getString(r5)     // Catch: java.lang.Throwable -> L52 android.database.sqlite.SQLiteException -> L54
            r6 = 1
            r12.<init>(r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L52 android.database.sqlite.SQLiteException -> L54
            r1.a(r12)     // Catch: java.lang.Throwable -> L52 android.database.sqlite.SQLiteException -> L54
            goto L15
        L4f:
            if (r2 == 0) goto L63
            goto L60
        L52:
            r12 = move-exception
            goto L64
        L54:
            r12 = move-exception
            java.lang.String r0 = "GoogleAnalyticsTracker"
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> L52
            android.util.Log.e(r0, r12)     // Catch: java.lang.Throwable -> L52
            if (r2 == 0) goto L63
        L60:
            r2.close()
        L63:
            return r1
        L64:
            if (r2 == 0) goto L69
            r2.close()
        L69:
            goto L6b
        L6a:
            throw r12
        L6b:
            goto L6a
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.apps.analytics.i.b(android.database.sqlite.SQLiteDatabase):com.google.android.apps.analytics.c");
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x0085 A[PHI: r10
  0x0085: PHI (r10v6 android.database.Cursor) = (r10v5 android.database.Cursor), (r10v8 android.database.Cursor) binds: [B:19:0x0083, B:10:0x0070] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:24:0x008c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    com.google.android.apps.analytics.h b(long r10, android.database.sqlite.SQLiteDatabase r12) throws java.lang.Throwable {
        /*
            r9 = this;
            r0 = 0
            java.lang.String r2 = "item_events"
            r3 = 0
            java.lang.String r4 = "event_id= ?"
            r1 = 1
            java.lang.String[] r5 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> L75 android.database.sqlite.SQLiteException -> L78
            r1 = 0
            java.lang.String r10 = java.lang.Long.toString(r10)     // Catch: java.lang.Throwable -> L75 android.database.sqlite.SQLiteException -> L78
            r5[r1] = r10     // Catch: java.lang.Throwable -> L75 android.database.sqlite.SQLiteException -> L78
            r6 = 0
            r7 = 0
            r8 = 0
            r1 = r12
            android.database.Cursor r10 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L75 android.database.sqlite.SQLiteException -> L78
            boolean r11 = r10.moveToFirst()     // Catch: android.database.sqlite.SQLiteException -> L73 java.lang.Throwable -> L89
            if (r11 == 0) goto L70
            com.google.android.apps.analytics.h$a r11 = new com.google.android.apps.analytics.h$a     // Catch: android.database.sqlite.SQLiteException -> L73 java.lang.Throwable -> L89
            java.lang.String r12 = "order_id"
            int r12 = r10.getColumnIndex(r12)     // Catch: android.database.sqlite.SQLiteException -> L73 java.lang.Throwable -> L89
            java.lang.String r2 = r10.getString(r12)     // Catch: android.database.sqlite.SQLiteException -> L73 java.lang.Throwable -> L89
            java.lang.String r12 = "item_sku"
            int r12 = r10.getColumnIndex(r12)     // Catch: android.database.sqlite.SQLiteException -> L73 java.lang.Throwable -> L89
            java.lang.String r3 = r10.getString(r12)     // Catch: android.database.sqlite.SQLiteException -> L73 java.lang.Throwable -> L89
            java.lang.String r12 = "item_price"
            int r12 = r10.getColumnIndex(r12)     // Catch: android.database.sqlite.SQLiteException -> L73 java.lang.Throwable -> L89
            double r4 = r10.getDouble(r12)     // Catch: android.database.sqlite.SQLiteException -> L73 java.lang.Throwable -> L89
            java.lang.String r12 = "item_count"
            int r12 = r10.getColumnIndex(r12)     // Catch: android.database.sqlite.SQLiteException -> L73 java.lang.Throwable -> L89
            long r6 = r10.getLong(r12)     // Catch: android.database.sqlite.SQLiteException -> L73 java.lang.Throwable -> L89
            r1 = r11
            r1.<init>(r2, r3, r4, r6)     // Catch: android.database.sqlite.SQLiteException -> L73 java.lang.Throwable -> L89
            java.lang.String r12 = "item_name"
            int r12 = r10.getColumnIndex(r12)     // Catch: android.database.sqlite.SQLiteException -> L73 java.lang.Throwable -> L89
            java.lang.String r12 = r10.getString(r12)     // Catch: android.database.sqlite.SQLiteException -> L73 java.lang.Throwable -> L89
            r11.b(r12)     // Catch: android.database.sqlite.SQLiteException -> L73 java.lang.Throwable -> L89
            java.lang.String r12 = "item_category"
            int r12 = r10.getColumnIndex(r12)     // Catch: android.database.sqlite.SQLiteException -> L73 java.lang.Throwable -> L89
            java.lang.String r12 = r10.getString(r12)     // Catch: android.database.sqlite.SQLiteException -> L73 java.lang.Throwable -> L89
            r11.a(r12)     // Catch: android.database.sqlite.SQLiteException -> L73 java.lang.Throwable -> L89
            com.google.android.apps.analytics.h r11 = r11.a()     // Catch: android.database.sqlite.SQLiteException -> L73 java.lang.Throwable -> L89
            if (r10 == 0) goto L6f
            r10.close()
        L6f:
            return r11
        L70:
            if (r10 == 0) goto L88
            goto L85
        L73:
            r11 = move-exception
            goto L7a
        L75:
            r11 = move-exception
            r10 = r0
            goto L8a
        L78:
            r11 = move-exception
            r10 = r0
        L7a:
            java.lang.String r12 = "GoogleAnalyticsTracker"
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L89
            android.util.Log.e(r12, r11)     // Catch: java.lang.Throwable -> L89
            if (r10 == 0) goto L88
        L85:
            r10.close()
        L88:
            return r0
        L89:
            r11 = move-exception
        L8a:
            if (r10 == 0) goto L8f
            r10.close()
        L8f:
            throw r11
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.apps.analytics.i.b(long, android.database.sqlite.SQLiteDatabase):com.google.android.apps.analytics.h");
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:20:0x007d A[PHI: r10
  0x007d: PHI (r10v5 android.database.Cursor) = (r10v4 android.database.Cursor), (r10v7 android.database.Cursor) binds: [B:19:0x007b, B:10:0x0068] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0084  */
    /* JADX WARN: Type inference failed for: r10v0, types: [long] */
    /* JADX WARN: Type inference failed for: r10v1 */
    /* JADX WARN: Type inference failed for: r10v3, types: [android.database.Cursor] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    com.google.android.apps.analytics.l c(long r10, android.database.sqlite.SQLiteDatabase r12) throws java.lang.Throwable {
        /*
            r9 = this;
            r0 = 0
            java.lang.String r2 = "transaction_events"
            r3 = 0
            java.lang.String r4 = "event_id= ?"
            r1 = 1
            java.lang.String[] r5 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> L6d android.database.sqlite.SQLiteException -> L70
            r1 = 0
            java.lang.String r10 = java.lang.Long.toString(r10)     // Catch: java.lang.Throwable -> L6d android.database.sqlite.SQLiteException -> L70
            r5[r1] = r10     // Catch: java.lang.Throwable -> L6d android.database.sqlite.SQLiteException -> L70
            r6 = 0
            r7 = 0
            r8 = 0
            r1 = r12
            android.database.Cursor r10 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L6d android.database.sqlite.SQLiteException -> L70
            boolean r11 = r10.moveToFirst()     // Catch: android.database.sqlite.SQLiteException -> L6b java.lang.Throwable -> L81
            if (r11 == 0) goto L68
            com.google.android.apps.analytics.l$a r11 = new com.google.android.apps.analytics.l$a     // Catch: android.database.sqlite.SQLiteException -> L6b java.lang.Throwable -> L81
            java.lang.String r12 = "order_id"
            int r12 = r10.getColumnIndex(r12)     // Catch: android.database.sqlite.SQLiteException -> L6b java.lang.Throwable -> L81
            java.lang.String r12 = r10.getString(r12)     // Catch: android.database.sqlite.SQLiteException -> L6b java.lang.Throwable -> L81
            java.lang.String r1 = "tran_totalcost"
            int r1 = r10.getColumnIndex(r1)     // Catch: android.database.sqlite.SQLiteException -> L6b java.lang.Throwable -> L81
            double r1 = r10.getDouble(r1)     // Catch: android.database.sqlite.SQLiteException -> L6b java.lang.Throwable -> L81
            r11.<init>(r12, r1)     // Catch: android.database.sqlite.SQLiteException -> L6b java.lang.Throwable -> L81
            java.lang.String r12 = "tran_storename"
            int r12 = r10.getColumnIndex(r12)     // Catch: android.database.sqlite.SQLiteException -> L6b java.lang.Throwable -> L81
            java.lang.String r12 = r10.getString(r12)     // Catch: android.database.sqlite.SQLiteException -> L6b java.lang.Throwable -> L81
            r11.a(r12)     // Catch: android.database.sqlite.SQLiteException -> L6b java.lang.Throwable -> L81
            java.lang.String r12 = "tran_totaltax"
            int r12 = r10.getColumnIndex(r12)     // Catch: android.database.sqlite.SQLiteException -> L6b java.lang.Throwable -> L81
            double r1 = r10.getDouble(r12)     // Catch: android.database.sqlite.SQLiteException -> L6b java.lang.Throwable -> L81
            r11.b(r1)     // Catch: android.database.sqlite.SQLiteException -> L6b java.lang.Throwable -> L81
            java.lang.String r12 = "tran_shippingcost"
            int r12 = r10.getColumnIndex(r12)     // Catch: android.database.sqlite.SQLiteException -> L6b java.lang.Throwable -> L81
            double r1 = r10.getDouble(r12)     // Catch: android.database.sqlite.SQLiteException -> L6b java.lang.Throwable -> L81
            r11.a(r1)     // Catch: android.database.sqlite.SQLiteException -> L6b java.lang.Throwable -> L81
            com.google.android.apps.analytics.l r11 = r11.a()     // Catch: android.database.sqlite.SQLiteException -> L6b java.lang.Throwable -> L81
            if (r10 == 0) goto L67
            r10.close()
        L67:
            return r11
        L68:
            if (r10 == 0) goto L80
            goto L7d
        L6b:
            r11 = move-exception
            goto L72
        L6d:
            r11 = move-exception
            r10 = r0
            goto L82
        L70:
            r11 = move-exception
            r10 = r0
        L72:
            java.lang.String r12 = "GoogleAnalyticsTracker"
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L81
            android.util.Log.e(r12, r11)     // Catch: java.lang.Throwable -> L81
            if (r10 == 0) goto L80
        L7d:
            r10.close()
        L80:
            return r0
        L81:
            r11 = move-exception
        L82:
            if (r10 == 0) goto L87
            r10.close()
        L87:
            throw r11
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.apps.analytics.i.c(long, android.database.sqlite.SQLiteDatabase):com.google.android.apps.analytics.l");
    }

    public void c(SQLiteDatabase sQLiteDatabase) throws Throwable {
        Cursor cursorQuery;
        Cursor cursor = null;
        try {
            try {
                cursorQuery = sQLiteDatabase.query("session", null, null, null, null, null, null);
            } catch (Throwable th) {
                th = th;
            }
        } catch (SQLiteException e2) {
            e = e2;
        }
        try {
            boolean z = true;
            if (cursorQuery.moveToFirst()) {
                this.k = cursorQuery.getLong(0);
                this.l = cursorQuery.getLong(1);
                this.m = cursorQuery.getLong(2);
                this.n = cursorQuery.getInt(3);
                this.j = cursorQuery.getInt(4);
                j jVarD = d(sQLiteDatabase);
                if (this.k == 0 || (jVarD != null && jVarD.c() == 0)) {
                    z = false;
                }
                this.p = z;
                cursor = cursorQuery;
            } else {
                this.p = false;
                this.q = true;
                this.j = new SecureRandom().nextInt() & Integer.MAX_VALUE;
                cursorQuery.close();
                ContentValues contentValues = new ContentValues();
                contentValues.put("timestamp_first", (Long) 0L);
                contentValues.put("timestamp_previous", (Long) 0L);
                contentValues.put("timestamp_current", (Long) 0L);
                contentValues.put("visits", (Integer) 0);
                contentValues.put("store_id", Integer.valueOf(this.j));
                sQLiteDatabase.insert("session", null, contentValues);
            }
            if (cursor == null) {
                return;
            }
        } catch (SQLiteException e3) {
            e = e3;
            cursor = cursorQuery;
            Log.e("GoogleAnalyticsTracker", e.toString());
            if (cursor == null) {
                return;
            }
        } catch (Throwable th2) {
            th = th2;
            cursor = cursorQuery;
            if (cursor != null) {
                cursor.close();
            }
            throw th;
        }
        cursor.close();
    }

    /* JADX WARN: Removed duplicated region for block: B:24:0x0071  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    com.google.android.apps.analytics.j d(android.database.sqlite.SQLiteDatabase r14) throws java.lang.Throwable {
        /*
            r13 = this;
            java.lang.String r0 = "referrer_index"
            java.lang.String r1 = "referrer_visit"
            java.lang.String r2 = "timestamp_referrer"
            java.lang.String r3 = "referrer"
            r4 = 0
            java.lang.String r6 = "referrer"
            r5 = 4
            java.lang.String[] r7 = new java.lang.String[r5]     // Catch: java.lang.Throwable -> L5a android.database.sqlite.SQLiteException -> L5d
            r5 = 0
            r7[r5] = r3     // Catch: java.lang.Throwable -> L5a android.database.sqlite.SQLiteException -> L5d
            r5 = 1
            r7[r5] = r2     // Catch: java.lang.Throwable -> L5a android.database.sqlite.SQLiteException -> L5d
            r5 = 2
            r7[r5] = r1     // Catch: java.lang.Throwable -> L5a android.database.sqlite.SQLiteException -> L5d
            r5 = 3
            r7[r5] = r0     // Catch: java.lang.Throwable -> L5a android.database.sqlite.SQLiteException -> L5d
            r8 = 0
            r9 = 0
            r10 = 0
            r11 = 0
            r12 = 0
            r5 = r14
            android.database.Cursor r14 = r5.query(r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L5a android.database.sqlite.SQLiteException -> L5d
            boolean r5 = r14.moveToFirst()     // Catch: android.database.sqlite.SQLiteException -> L58 java.lang.Throwable -> L6e
            if (r5 == 0) goto L51
            int r2 = r14.getColumnIndex(r2)     // Catch: android.database.sqlite.SQLiteException -> L58 java.lang.Throwable -> L6e
            long r7 = r14.getLong(r2)     // Catch: android.database.sqlite.SQLiteException -> L58 java.lang.Throwable -> L6e
            int r1 = r14.getColumnIndex(r1)     // Catch: android.database.sqlite.SQLiteException -> L58 java.lang.Throwable -> L6e
            int r9 = r14.getInt(r1)     // Catch: android.database.sqlite.SQLiteException -> L58 java.lang.Throwable -> L6e
            int r0 = r14.getColumnIndex(r0)     // Catch: android.database.sqlite.SQLiteException -> L58 java.lang.Throwable -> L6e
            int r10 = r14.getInt(r0)     // Catch: android.database.sqlite.SQLiteException -> L58 java.lang.Throwable -> L6e
            int r0 = r14.getColumnIndex(r3)     // Catch: android.database.sqlite.SQLiteException -> L58 java.lang.Throwable -> L6e
            java.lang.String r6 = r14.getString(r0)     // Catch: android.database.sqlite.SQLiteException -> L58 java.lang.Throwable -> L6e
            com.google.android.apps.analytics.j r0 = new com.google.android.apps.analytics.j     // Catch: android.database.sqlite.SQLiteException -> L58 java.lang.Throwable -> L6e
            r5 = r0
            r5.<init>(r6, r7, r9, r10)     // Catch: android.database.sqlite.SQLiteException -> L58 java.lang.Throwable -> L6e
            goto L52
        L51:
            r0 = r4
        L52:
            if (r14 == 0) goto L57
            r14.close()
        L57:
            return r0
        L58:
            r0 = move-exception
            goto L5f
        L5a:
            r0 = move-exception
            r14 = r4
            goto L6f
        L5d:
            r0 = move-exception
            r14 = r4
        L5f:
            java.lang.String r1 = "GoogleAnalyticsTracker"
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L6e
            android.util.Log.e(r1, r0)     // Catch: java.lang.Throwable -> L6e
            if (r14 == 0) goto L6d
            r14.close()
        L6d:
            return r4
        L6e:
            r0 = move-exception
        L6f:
            if (r14 == 0) goto L74
            r14.close()
        L74:
            throw r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.apps.analytics.i.d(android.database.sqlite.SQLiteDatabase):com.google.android.apps.analytics.j");
    }

    public int i() {
        Cursor cursorRawQuery = null;
        try {
            try {
                cursorRawQuery = this.i.getReadableDatabase().rawQuery("SELECT COUNT(*) from hits", null);
                i = cursorRawQuery.moveToFirst() ? (int) cursorRawQuery.getLong(0) : 0;
            } catch (SQLiteException e2) {
                Log.e("GoogleAnalyticsTracker", e2.toString());
                if (cursorRawQuery != null) {
                }
            }
            return i;
        } finally {
            if (cursorRawQuery != null) {
                cursorRawQuery.close();
            }
        }
    }

    c j() {
        try {
            return b(this.i.getReadableDatabase());
        } catch (SQLiteException e2) {
            Log.e("GoogleAnalyticsTracker", e2.toString());
            return new c();
        }
    }

    public void k() throws Throwable {
        try {
            c(this.i.getWritableDatabase());
        } catch (SQLiteException e2) {
            Log.e("GoogleAnalyticsTracker", e2.toString());
        }
    }

    public synchronized void l() {
        this.p = false;
        this.q = true;
        this.o = i();
    }
}
