package com.google.android.gms.measurement.internal;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteException;
import android.os.Parcelable;
import android.text.TextUtils;
import android.util.Pair;
import com.google.android.gms.internal.measurement.C0246z;
import com.google.android.gms.internal.measurement.Ce;
import com.google.android.gms.internal.measurement.Q;
import com.google.android.gms.internal.measurement.T;
import com.google.android.gms.internal.measurement.V;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.d, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0269d extends AbstractC0257ae {

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static final String[] f2210d = {"last_bundled_timestamp", "ALTER TABLE events ADD COLUMN last_bundled_timestamp INTEGER;", "last_bundled_day", "ALTER TABLE events ADD COLUMN last_bundled_day INTEGER;", "last_sampled_complex_event_id", "ALTER TABLE events ADD COLUMN last_sampled_complex_event_id INTEGER;", "last_sampling_rate", "ALTER TABLE events ADD COLUMN last_sampling_rate INTEGER;", "last_exempt_from_sampling", "ALTER TABLE events ADD COLUMN last_exempt_from_sampling INTEGER;", "current_session_count", "ALTER TABLE events ADD COLUMN current_session_count INTEGER;"};

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static final String[] f2211e = {"origin", "ALTER TABLE user_attributes ADD COLUMN origin TEXT;"};

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private static final String[] f2212f = {"app_version", "ALTER TABLE apps ADD COLUMN app_version TEXT;", "app_store", "ALTER TABLE apps ADD COLUMN app_store TEXT;", "gmp_version", "ALTER TABLE apps ADD COLUMN gmp_version INTEGER;", "dev_cert_hash", "ALTER TABLE apps ADD COLUMN dev_cert_hash INTEGER;", "measurement_enabled", "ALTER TABLE apps ADD COLUMN measurement_enabled INTEGER;", "last_bundle_start_timestamp", "ALTER TABLE apps ADD COLUMN last_bundle_start_timestamp INTEGER;", "day", "ALTER TABLE apps ADD COLUMN day INTEGER;", "daily_public_events_count", "ALTER TABLE apps ADD COLUMN daily_public_events_count INTEGER;", "daily_events_count", "ALTER TABLE apps ADD COLUMN daily_events_count INTEGER;", "daily_conversions_count", "ALTER TABLE apps ADD COLUMN daily_conversions_count INTEGER;", "remote_config", "ALTER TABLE apps ADD COLUMN remote_config BLOB;", "config_fetched_time", "ALTER TABLE apps ADD COLUMN config_fetched_time INTEGER;", "failed_config_fetch_time", "ALTER TABLE apps ADD COLUMN failed_config_fetch_time INTEGER;", "app_version_int", "ALTER TABLE apps ADD COLUMN app_version_int INTEGER;", "firebase_instance_id", "ALTER TABLE apps ADD COLUMN firebase_instance_id TEXT;", "daily_error_events_count", "ALTER TABLE apps ADD COLUMN daily_error_events_count INTEGER;", "daily_realtime_events_count", "ALTER TABLE apps ADD COLUMN daily_realtime_events_count INTEGER;", "health_monitor_sample", "ALTER TABLE apps ADD COLUMN health_monitor_sample TEXT;", "android_id", "ALTER TABLE apps ADD COLUMN android_id INTEGER;", "adid_reporting_enabled", "ALTER TABLE apps ADD COLUMN adid_reporting_enabled INTEGER;", "ssaid_reporting_enabled", "ALTER TABLE apps ADD COLUMN ssaid_reporting_enabled INTEGER;", "admob_app_id", "ALTER TABLE apps ADD COLUMN admob_app_id TEXT;", "linked_admob_app_id", "ALTER TABLE apps ADD COLUMN linked_admob_app_id TEXT;", "dynamite_version", "ALTER TABLE apps ADD COLUMN dynamite_version INTEGER;", "safelisted_events", "ALTER TABLE apps ADD COLUMN safelisted_events TEXT;", "ga_app_id", "ALTER TABLE apps ADD COLUMN ga_app_id TEXT;"};
    private static final String[] g = {"realtime", "ALTER TABLE raw_events ADD COLUMN realtime INTEGER;"};
    private static final String[] h = {"has_realtime", "ALTER TABLE queue ADD COLUMN has_realtime INTEGER;", "retry_count", "ALTER TABLE queue ADD COLUMN retry_count INTEGER;"};
    private static final String[] i = {"session_scoped", "ALTER TABLE event_filters ADD COLUMN session_scoped BOOLEAN;"};
    private static final String[] j = {"session_scoped", "ALTER TABLE property_filters ADD COLUMN session_scoped BOOLEAN;"};
    private static final String[] k = {"previous_install_count", "ALTER TABLE app2 ADD COLUMN previous_install_count INTEGER;"};
    private final C0274e l;
    private final Xd m;

    C0269d(ee eeVar) {
        super(eeVar);
        this.m = new Xd(g());
        this.l = new C0274e(this, e(), "google_app_measurement.db");
    }

    private final boolean P() {
        return e().getDatabasePath("google_app_measurement.db").exists();
    }

    private final long a(String str, String[] strArr, long j2) {
        Cursor cursorRawQuery = null;
        try {
            try {
                cursorRawQuery = w().rawQuery(str, strArr);
                if (cursorRawQuery.moveToFirst()) {
                    return cursorRawQuery.getLong(0);
                }
                if (cursorRawQuery != null) {
                    cursorRawQuery.close();
                }
                return j2;
            } catch (SQLiteException e2) {
                d().t().a("Database error", str, e2);
                throw e2;
            }
        } finally {
            if (cursorRawQuery != null) {
                cursorRawQuery.close();
            }
        }
    }

    private final Object a(Cursor cursor, int i2) {
        int type = cursor.getType(i2);
        if (type == 0) {
            d().t().a("Loaded invalid null value from database");
            return null;
        }
        if (type == 1) {
            return Long.valueOf(cursor.getLong(i2));
        }
        if (type == 2) {
            return Double.valueOf(cursor.getDouble(i2));
        }
        if (type == 3) {
            return cursor.getString(i2);
        }
        if (type != 4) {
            d().t().a("Loaded invalid unknown value type, ignoring it", Integer.valueOf(type));
            return null;
        }
        d().t().a("Loaded invalid blob type value, ignoring it");
        return null;
    }

    private static void a(ContentValues contentValues, String str, Object obj) {
        com.google.android.gms.common.internal.r.b(str);
        com.google.android.gms.common.internal.r.a(obj);
        if (obj instanceof String) {
            contentValues.put(str, (String) obj);
        } else if (obj instanceof Long) {
            contentValues.put(str, (Long) obj);
        } else {
            if (!(obj instanceof Double)) {
                throw new IllegalArgumentException("Invalid value type");
            }
            contentValues.put(str, (Double) obj);
        }
    }

    private final boolean a(String str, int i2, com.google.android.gms.internal.measurement.A a2) {
        s();
        h();
        com.google.android.gms.common.internal.r.b(str);
        com.google.android.gms.common.internal.r.a(a2);
        if (TextUtils.isEmpty(a2.q())) {
            d().w().a("Event filter had no event name. Audience definition ignored. appId, audienceId, filterId", C0365wb.a(str), Integer.valueOf(i2), String.valueOf(a2.o() ? Integer.valueOf(a2.p()) : null));
            return false;
        }
        byte[] bArrG = a2.g();
        ContentValues contentValues = new ContentValues();
        contentValues.put("app_id", str);
        contentValues.put("audience_id", Integer.valueOf(i2));
        contentValues.put("filter_id", a2.o() ? Integer.valueOf(a2.p()) : null);
        contentValues.put("event_name", a2.q());
        if (m().e(str, C0324o.wa)) {
            contentValues.put("session_scoped", a2.x() ? Boolean.valueOf(a2.y()) : null);
        }
        contentValues.put("data", bArrG);
        try {
            if (w().insertWithOnConflict("event_filters", null, contentValues, 5) != -1) {
                return true;
            }
            d().t().a("Failed to insert event filter (got -1). appId", C0365wb.a(str));
            return true;
        } catch (SQLiteException e2) {
            d().t().a("Error storing event filter. appId", C0365wb.a(str), e2);
            return false;
        }
    }

    private final boolean a(String str, int i2, com.google.android.gms.internal.measurement.D d2) {
        s();
        h();
        com.google.android.gms.common.internal.r.b(str);
        com.google.android.gms.common.internal.r.a(d2);
        if (TextUtils.isEmpty(d2.q())) {
            d().w().a("Property filter had no property name. Audience definition ignored. appId, audienceId, filterId", C0365wb.a(str), Integer.valueOf(i2), String.valueOf(d2.o() ? Integer.valueOf(d2.p()) : null));
            return false;
        }
        byte[] bArrG = d2.g();
        ContentValues contentValues = new ContentValues();
        contentValues.put("app_id", str);
        contentValues.put("audience_id", Integer.valueOf(i2));
        contentValues.put("filter_id", d2.o() ? Integer.valueOf(d2.p()) : null);
        contentValues.put("property_name", d2.q());
        if (m().e(str, C0324o.wa)) {
            contentValues.put("session_scoped", d2.u() ? Boolean.valueOf(d2.v()) : null);
        }
        contentValues.put("data", bArrG);
        try {
            if (w().insertWithOnConflict("property_filters", null, contentValues, 5) != -1) {
                return true;
            }
            d().t().a("Failed to insert property filter (got -1). appId", C0365wb.a(str));
            return false;
        } catch (SQLiteException e2) {
            d().t().a("Error storing property filter. appId", C0365wb.a(str), e2);
            return false;
        }
    }

    private final long b(String str, String[] strArr) {
        Cursor cursor = null;
        try {
            try {
                Cursor cursorRawQuery = w().rawQuery(str, strArr);
                if (!cursorRawQuery.moveToFirst()) {
                    throw new SQLiteException("Database returned empty set");
                }
                long j2 = cursorRawQuery.getLong(0);
                if (cursorRawQuery != null) {
                    cursorRawQuery.close();
                }
                return j2;
            } catch (SQLiteException e2) {
                d().t().a("Database error", str, e2);
                throw e2;
            }
        } catch (Throwable th) {
            if (0 != 0) {
                cursor.close();
            }
            throw th;
        }
    }

    private final boolean c(String str, List<Integer> list) {
        com.google.android.gms.common.internal.r.b(str);
        s();
        h();
        SQLiteDatabase sQLiteDatabaseW = w();
        try {
            long jB = b("select count(1) from audience_filter_values where app_id=?", new String[]{str});
            int iMax = Math.max(0, Math.min(2000, m().b(str, C0324o.M)));
            if (jB <= iMax) {
                return false;
            }
            ArrayList arrayList = new ArrayList();
            for (int i2 = 0; i2 < list.size(); i2++) {
                Integer num = list.get(i2);
                if (num == null || !(num instanceof Integer)) {
                    return false;
                }
                arrayList.add(Integer.toString(num.intValue()));
            }
            String strJoin = TextUtils.join(",", arrayList);
            StringBuilder sb = new StringBuilder(String.valueOf(strJoin).length() + 2);
            sb.append("(");
            sb.append(strJoin);
            sb.append(")");
            String string = sb.toString();
            StringBuilder sb2 = new StringBuilder(String.valueOf(string).length() + 140);
            sb2.append("audience_id in (select audience_id from audience_filter_values where app_id=? and audience_id not in ");
            sb2.append(string);
            sb2.append(" order by rowid desc limit -1 offset ?)");
            return sQLiteDatabaseW.delete("audience_filter_values", sb2.toString(), new String[]{str, Integer.toString(iMax)}) > 0;
        } catch (SQLiteException e2) {
            d().t().a("Database error querying filters. appId", C0365wb.a(str), e2);
            return false;
        }
    }

    public final void H() {
        s();
        w().beginTransaction();
    }

    public final void I() {
        s();
        w().endTransaction();
    }

    public final boolean J() {
        return b("select count(1) > 0 from queue where has_realtime = 1", (String[]) null) != 0;
    }

    final void K() {
        int iDelete;
        h();
        s();
        if (P()) {
            long jA = l().i.a();
            long jB = g().b();
            if (Math.abs(jB - jA) > C0324o.F.a(null).longValue()) {
                l().i.a(jB);
                h();
                s();
                if (!P() || (iDelete = w().delete("queue", "abs(bundle_end_timestamp - ?) > cast(? as integer)", new String[]{String.valueOf(g().a()), String.valueOf(ze.t())})) <= 0) {
                    return;
                }
                d().B().a("Deleted stale rows. rowsDeleted", Integer.valueOf(iDelete));
            }
        }
    }

    public final long L() {
        return a("select max(bundle_end_timestamp) from queue", (String[]) null, 0L);
    }

    public final long M() {
        return a("select max(timestamp) from raw_events", (String[]) null, 0L);
    }

    public final boolean N() {
        return b("select count(1) > 0 from raw_events", (String[]) null) != 0;
    }

    public final boolean O() {
        return b("select count(1) > 0 from raw_events where realtime = 1", (String[]) null) != 0;
    }

    public final long a(com.google.android.gms.internal.measurement.V v) {
        h();
        s();
        com.google.android.gms.common.internal.r.a(v);
        com.google.android.gms.common.internal.r.b(v.qa());
        byte[] bArrG = v.g();
        long jA = o().a(bArrG);
        ContentValues contentValues = new ContentValues();
        contentValues.put("app_id", v.qa());
        contentValues.put("metadata_fingerprint", Long.valueOf(jA));
        contentValues.put("metadata", bArrG);
        try {
            w().insertWithOnConflict("raw_events_metadata", null, contentValues, 4);
            return jA;
        } catch (SQLiteException e2) {
            d().t().a("Error storing raw event metadata. appId", C0365wb.a(v.qa()), e2);
            throw e2;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:33:0x0093  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final android.util.Pair<com.google.android.gms.internal.measurement.Q, java.lang.Long> a(java.lang.String r8, java.lang.Long r9) throws java.lang.Throwable {
        /*
            r7 = this;
            r7.h()
            r7.s()
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r7.w()     // Catch: java.lang.Throwable -> L78 android.database.sqlite.SQLiteException -> L7b
            java.lang.String r2 = "select main_event, children_to_process from main_event_params where app_id=? and event_id=?"
            r3 = 2
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L78 android.database.sqlite.SQLiteException -> L7b
            r4 = 0
            r3[r4] = r8     // Catch: java.lang.Throwable -> L78 android.database.sqlite.SQLiteException -> L7b
            java.lang.String r5 = java.lang.String.valueOf(r9)     // Catch: java.lang.Throwable -> L78 android.database.sqlite.SQLiteException -> L7b
            r6 = 1
            r3[r6] = r5     // Catch: java.lang.Throwable -> L78 android.database.sqlite.SQLiteException -> L7b
            android.database.Cursor r1 = r1.rawQuery(r2, r3)     // Catch: java.lang.Throwable -> L78 android.database.sqlite.SQLiteException -> L7b
            boolean r2 = r1.moveToFirst()     // Catch: android.database.sqlite.SQLiteException -> L76 java.lang.Throwable -> L90
            if (r2 != 0) goto L37
            com.google.android.gms.measurement.internal.wb r8 = r7.d()     // Catch: android.database.sqlite.SQLiteException -> L76 java.lang.Throwable -> L90
            com.google.android.gms.measurement.internal.yb r8 = r8.B()     // Catch: android.database.sqlite.SQLiteException -> L76 java.lang.Throwable -> L90
            java.lang.String r9 = "Main event not found"
            r8.a(r9)     // Catch: android.database.sqlite.SQLiteException -> L76 java.lang.Throwable -> L90
            if (r1 == 0) goto L36
            r1.close()
        L36:
            return r0
        L37:
            byte[] r2 = r1.getBlob(r4)     // Catch: android.database.sqlite.SQLiteException -> L76 java.lang.Throwable -> L90
            long r3 = r1.getLong(r6)     // Catch: android.database.sqlite.SQLiteException -> L76 java.lang.Throwable -> L90
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: android.database.sqlite.SQLiteException -> L76 java.lang.Throwable -> L90
            com.google.android.gms.internal.measurement.Q$a r4 = com.google.android.gms.internal.measurement.Q.x()     // Catch: java.io.IOException -> L5e android.database.sqlite.SQLiteException -> L76 java.lang.Throwable -> L90
            com.google.android.gms.measurement.internal.ie.a(r4, r2)     // Catch: java.io.IOException -> L5e android.database.sqlite.SQLiteException -> L76 java.lang.Throwable -> L90
            com.google.android.gms.internal.measurement.Q$a r4 = (com.google.android.gms.internal.measurement.Q.a) r4     // Catch: java.io.IOException -> L5e android.database.sqlite.SQLiteException -> L76 java.lang.Throwable -> L90
            com.google.android.gms.internal.measurement.uc r2 = r4.j()     // Catch: java.io.IOException -> L5e android.database.sqlite.SQLiteException -> L76 java.lang.Throwable -> L90
            com.google.android.gms.internal.measurement.Jb r2 = (com.google.android.gms.internal.measurement.Jb) r2     // Catch: java.io.IOException -> L5e android.database.sqlite.SQLiteException -> L76 java.lang.Throwable -> L90
            com.google.android.gms.internal.measurement.Q r2 = (com.google.android.gms.internal.measurement.Q) r2     // Catch: java.io.IOException -> L5e android.database.sqlite.SQLiteException -> L76 java.lang.Throwable -> L90
            android.util.Pair r8 = android.util.Pair.create(r2, r3)     // Catch: android.database.sqlite.SQLiteException -> L76 java.lang.Throwable -> L90
            if (r1 == 0) goto L5d
            r1.close()
        L5d:
            return r8
        L5e:
            r2 = move-exception
            com.google.android.gms.measurement.internal.wb r3 = r7.d()     // Catch: android.database.sqlite.SQLiteException -> L76 java.lang.Throwable -> L90
            com.google.android.gms.measurement.internal.yb r3 = r3.t()     // Catch: android.database.sqlite.SQLiteException -> L76 java.lang.Throwable -> L90
            java.lang.String r4 = "Failed to merge main event. appId, eventId"
            java.lang.Object r8 = com.google.android.gms.measurement.internal.C0365wb.a(r8)     // Catch: android.database.sqlite.SQLiteException -> L76 java.lang.Throwable -> L90
            r3.a(r4, r8, r9, r2)     // Catch: android.database.sqlite.SQLiteException -> L76 java.lang.Throwable -> L90
            if (r1 == 0) goto L75
            r1.close()
        L75:
            return r0
        L76:
            r8 = move-exception
            goto L7d
        L78:
            r8 = move-exception
            r1 = r0
            goto L91
        L7b:
            r8 = move-exception
            r1 = r0
        L7d:
            com.google.android.gms.measurement.internal.wb r9 = r7.d()     // Catch: java.lang.Throwable -> L90
            com.google.android.gms.measurement.internal.yb r9 = r9.t()     // Catch: java.lang.Throwable -> L90
            java.lang.String r2 = "Error selecting main event"
            r9.a(r2, r8)     // Catch: java.lang.Throwable -> L90
            if (r1 == 0) goto L8f
            r1.close()
        L8f:
            return r0
        L90:
            r8 = move-exception
        L91:
            if (r1 == 0) goto L96
            r1.close()
        L96:
            throw r8
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.C0269d.a(java.lang.String, java.lang.Long):android.util.Pair");
    }

    /* JADX WARN: Removed duplicated region for block: B:40:0x012a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final com.google.android.gms.measurement.internal.C0264c a(long r22, java.lang.String r24, boolean r25, boolean r26, boolean r27, boolean r28, boolean r29) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 302
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.C0269d.a(long, java.lang.String, boolean, boolean, boolean, boolean, boolean):com.google.android.gms.measurement.internal.c");
    }

    public final C0304k a(String str, String str2) throws Throwable {
        Cursor cursor;
        Cursor cursor2;
        Cursor cursorQuery;
        Boolean boolValueOf;
        com.google.android.gms.common.internal.r.b(str);
        com.google.android.gms.common.internal.r.b(str2);
        h();
        s();
        boolean zE = m().e(str, C0324o.xa);
        ArrayList arrayList = new ArrayList(Arrays.asList("lifetime_count", "current_bundle_count", "last_fire_timestamp", "last_bundled_timestamp", "last_bundled_day", "last_sampled_complex_event_id", "last_sampling_rate", "last_exempt_from_sampling"));
        if (zE) {
            arrayList.add("current_session_count");
        }
        try {
            try {
                cursorQuery = w().query("events", (String[]) arrayList.toArray(new String[0]), "app_id=? and name=?", new String[]{str, str2}, null, null, null);
            } catch (Throwable th) {
                th = th;
            }
            try {
                if (!cursorQuery.moveToFirst()) {
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return null;
                }
                long j2 = cursorQuery.getLong(0);
                long j3 = cursorQuery.getLong(1);
                long j4 = cursorQuery.getLong(2);
                long j5 = cursorQuery.isNull(3) ? 0L : cursorQuery.getLong(3);
                Long lValueOf = cursorQuery.isNull(4) ? null : Long.valueOf(cursorQuery.getLong(4));
                Long lValueOf2 = cursorQuery.isNull(5) ? null : Long.valueOf(cursorQuery.getLong(5));
                Long lValueOf3 = cursorQuery.isNull(6) ? null : Long.valueOf(cursorQuery.getLong(6));
                if (cursorQuery.isNull(7)) {
                    boolValueOf = null;
                } else {
                    boolValueOf = Boolean.valueOf(cursorQuery.getLong(7) == 1);
                }
                cursor2 = cursorQuery;
                try {
                    C0304k c0304k = new C0304k(str, str2, j2, j3, (!zE || cursorQuery.isNull(8)) ? 0L : cursorQuery.getLong(8), j4, j5, lValueOf, lValueOf2, lValueOf3, boolValueOf);
                    if (cursor2.moveToNext()) {
                        d().t().a("Got multiple records for event aggregates, expected one. appId", C0365wb.a(str));
                    }
                    if (cursor2 != null) {
                        cursor2.close();
                    }
                    return c0304k;
                } catch (SQLiteException e2) {
                    e = e2;
                }
            } catch (SQLiteException e3) {
                e = e3;
                cursor2 = cursorQuery;
            } catch (Throwable th2) {
                th = th2;
                cursor = cursorQuery;
                if (cursor != null) {
                    cursor.close();
                }
                throw th;
            }
        } catch (SQLiteException e4) {
            e = e4;
            cursor2 = null;
        } catch (Throwable th3) {
            th = th3;
            cursor = null;
        }
        d().t().a("Error querying events. appId", C0365wb.a(str), j().a(str2), e);
        if (cursor2 != null) {
            cursor2.close();
        }
        return null;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:26:0x005b  */
    /* JADX WARN: Type inference failed for: r5v0, types: [long] */
    /* JADX WARN: Type inference failed for: r5v1 */
    /* JADX WARN: Type inference failed for: r5v3, types: [android.database.Cursor] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.lang.String a(long r5) throws java.lang.Throwable {
        /*
            r4 = this;
            r4.h()
            r4.s()
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r4.w()     // Catch: java.lang.Throwable -> L40 android.database.sqlite.SQLiteException -> L43
            java.lang.String r2 = "select app_id from apps where app_id in (select distinct app_id from raw_events) and config_fetched_time < ? order by failed_config_fetch_time limit 1;"
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L40 android.database.sqlite.SQLiteException -> L43
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> L40 android.database.sqlite.SQLiteException -> L43
            r6 = 0
            r3[r6] = r5     // Catch: java.lang.Throwable -> L40 android.database.sqlite.SQLiteException -> L43
            android.database.Cursor r5 = r1.rawQuery(r2, r3)     // Catch: java.lang.Throwable -> L40 android.database.sqlite.SQLiteException -> L43
            boolean r1 = r5.moveToFirst()     // Catch: android.database.sqlite.SQLiteException -> L3e java.lang.Throwable -> L58
            if (r1 != 0) goto L34
            com.google.android.gms.measurement.internal.wb r6 = r4.d()     // Catch: android.database.sqlite.SQLiteException -> L3e java.lang.Throwable -> L58
            com.google.android.gms.measurement.internal.yb r6 = r6.B()     // Catch: android.database.sqlite.SQLiteException -> L3e java.lang.Throwable -> L58
            java.lang.String r1 = "No expired configs for apps with pending events"
            r6.a(r1)     // Catch: android.database.sqlite.SQLiteException -> L3e java.lang.Throwable -> L58
            if (r5 == 0) goto L33
            r5.close()
        L33:
            return r0
        L34:
            java.lang.String r6 = r5.getString(r6)     // Catch: android.database.sqlite.SQLiteException -> L3e java.lang.Throwable -> L58
            if (r5 == 0) goto L3d
            r5.close()
        L3d:
            return r6
        L3e:
            r6 = move-exception
            goto L45
        L40:
            r6 = move-exception
            r5 = r0
            goto L59
        L43:
            r6 = move-exception
            r5 = r0
        L45:
            com.google.android.gms.measurement.internal.wb r1 = r4.d()     // Catch: java.lang.Throwable -> L58
            com.google.android.gms.measurement.internal.yb r1 = r1.t()     // Catch: java.lang.Throwable -> L58
            java.lang.String r2 = "Error selecting expired configs"
            r1.a(r2, r6)     // Catch: java.lang.Throwable -> L58
            if (r5 == 0) goto L57
            r5.close()
        L57:
            return r0
        L58:
            r6 = move-exception
        L59:
            if (r5 == 0) goto L5e
            r5.close()
        L5e:
            throw r6
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.C0269d.a(long):java.lang.String");
    }

    public final List<me> a(String str) throws Throwable {
        Cursor cursorQuery;
        com.google.android.gms.common.internal.r.b(str);
        h();
        s();
        ArrayList arrayList = new ArrayList();
        try {
            try {
                cursorQuery = w().query("user_attributes", new String[]{"name", "origin", "set_timestamp", "value"}, "app_id=?", new String[]{str}, null, null, "rowid", "1000");
            } catch (Throwable th) {
                th = th;
            }
        } catch (SQLiteException e2) {
            e = e2;
            cursorQuery = null;
        } catch (Throwable th2) {
            th = th2;
            cursorQuery = null;
        }
        try {
            if (!cursorQuery.moveToFirst()) {
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                return arrayList;
            }
            do {
                String string = cursorQuery.getString(0);
                String string2 = cursorQuery.getString(1);
                if (string2 == null) {
                    string2 = "";
                }
                String str2 = string2;
                long j2 = cursorQuery.getLong(2);
                try {
                    Object objA = a(cursorQuery, 3);
                    if (objA == null) {
                        d().t().a("Read invalid user property value, ignoring it. appId", C0365wb.a(str));
                    } else {
                        arrayList.add(new me(str, str2, string, j2, objA));
                    }
                } catch (SQLiteException e3) {
                    e = e3;
                }
            } while (cursorQuery.moveToNext());
            if (cursorQuery != null) {
                cursorQuery.close();
            }
            return arrayList;
        } catch (SQLiteException e4) {
            e = e4;
        } catch (Throwable th3) {
            th = th3;
            if (cursorQuery != null) {
                cursorQuery.close();
            }
            throw th;
        }
        d().t().a("Error querying user properties. appId", C0365wb.a(str), e);
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return null;
    }

    public final List<Pair<com.google.android.gms.internal.measurement.V, Long>> a(String str, int i2, int i3) {
        C0375yb c0375ybT;
        String str2;
        Object objA;
        byte[] bArrB;
        h();
        s();
        com.google.android.gms.common.internal.r.a(i2 > 0);
        com.google.android.gms.common.internal.r.a(i3 > 0);
        com.google.android.gms.common.internal.r.b(str);
        Cursor cursor = null;
        try {
            try {
                Cursor cursorQuery = w().query("queue", new String[]{"rowid", "data", "retry_count"}, "app_id=?", new String[]{str}, null, null, "rowid", String.valueOf(i2));
                if (!cursorQuery.moveToFirst()) {
                    List<Pair<com.google.android.gms.internal.measurement.V, Long>> listEmptyList = Collections.emptyList();
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return listEmptyList;
                }
                ArrayList arrayList = new ArrayList();
                int length = 0;
                do {
                    long j2 = cursorQuery.getLong(0);
                    try {
                        bArrB = o().b(cursorQuery.getBlob(1));
                    } catch (IOException e2) {
                        e = e2;
                        c0375ybT = d().t();
                        str2 = "Failed to unzip queued bundle. appId";
                        objA = C0365wb.a(str);
                    }
                    if (!arrayList.isEmpty() && bArrB.length + length > i3) {
                        break;
                    }
                    try {
                        V.a aVarU = com.google.android.gms.internal.measurement.V.U();
                        ie.a(aVarU, bArrB);
                        V.a aVar = aVarU;
                        if (!cursorQuery.isNull(2)) {
                            aVar.i(cursorQuery.getInt(2));
                        }
                        length += bArrB.length;
                        arrayList.add(Pair.create((com.google.android.gms.internal.measurement.V) ((com.google.android.gms.internal.measurement.Jb) aVar.j()), Long.valueOf(j2)));
                    } catch (IOException e3) {
                        e = e3;
                        c0375ybT = d().t();
                        str2 = "Failed to merge queued bundle. appId";
                        objA = C0365wb.a(str);
                        c0375ybT.a(str2, objA, e);
                    }
                    if (!cursorQuery.moveToNext()) {
                        break;
                    }
                } while (length <= i3);
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                return arrayList;
            } catch (Throwable th) {
                if (0 != 0) {
                    cursor.close();
                }
                throw th;
            }
        } catch (SQLiteException e4) {
            d().t().a("Error querying bundles. appId", C0365wb.a(str), e4);
            List<Pair<com.google.android.gms.internal.measurement.V, Long>> listEmptyList2 = Collections.emptyList();
            if (0 != 0) {
                cursor.close();
            }
            return listEmptyList2;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:21:0x009a, code lost:
    
        d().t().a("Read more than the max allowed user properties, ignoring excess", 1000);
     */
    /* JADX WARN: Removed duplicated region for block: B:62:0x0141  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x0149  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.util.List<com.google.android.gms.measurement.internal.me> a(java.lang.String r22, java.lang.String r23, java.lang.String r24) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 335
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.C0269d.a(java.lang.String, java.lang.String, java.lang.String):java.util.List");
    }

    /* JADX WARN: Code restructure failed: missing block: B:11:0x008e, code lost:
    
        d().t().a("Read more than the max allowed conditional properties, ignoring extra", 1000);
     */
    /* JADX WARN: Removed duplicated region for block: B:37:0x0175  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.util.List<com.google.android.gms.measurement.internal.zzv> a(java.lang.String r40, java.lang.String[] r41) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 379
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.C0269d.a(java.lang.String, java.lang.String[]):java.util.List");
    }

    public final void a(C0267cc c0267cc) {
        com.google.android.gms.common.internal.r.a(c0267cc);
        h();
        s();
        ContentValues contentValues = new ContentValues();
        contentValues.put("app_id", c0267cc.l());
        contentValues.put("app_instance_id", c0267cc.m());
        contentValues.put("gmp_app_id", c0267cc.n());
        contentValues.put("resettable_device_id_hash", c0267cc.q());
        contentValues.put("last_bundle_index", Long.valueOf(c0267cc.B()));
        contentValues.put("last_bundle_start_timestamp", Long.valueOf(c0267cc.s()));
        contentValues.put("last_bundle_end_timestamp", Long.valueOf(c0267cc.t()));
        contentValues.put("app_version", c0267cc.u());
        contentValues.put("app_store", c0267cc.w());
        contentValues.put("gmp_version", Long.valueOf(c0267cc.x()));
        contentValues.put("dev_cert_hash", Long.valueOf(c0267cc.y()));
        contentValues.put("measurement_enabled", Boolean.valueOf(c0267cc.A()));
        contentValues.put("day", Long.valueOf(c0267cc.F()));
        contentValues.put("daily_public_events_count", Long.valueOf(c0267cc.G()));
        contentValues.put("daily_events_count", Long.valueOf(c0267cc.H()));
        contentValues.put("daily_conversions_count", Long.valueOf(c0267cc.I()));
        contentValues.put("config_fetched_time", Long.valueOf(c0267cc.C()));
        contentValues.put("failed_config_fetch_time", Long.valueOf(c0267cc.D()));
        contentValues.put("app_version_int", Long.valueOf(c0267cc.v()));
        contentValues.put("firebase_instance_id", c0267cc.r());
        contentValues.put("daily_error_events_count", Long.valueOf(c0267cc.c()));
        contentValues.put("daily_realtime_events_count", Long.valueOf(c0267cc.b()));
        contentValues.put("health_monitor_sample", c0267cc.d());
        contentValues.put("android_id", Long.valueOf(c0267cc.f()));
        contentValues.put("adid_reporting_enabled", Boolean.valueOf(c0267cc.g()));
        contentValues.put("ssaid_reporting_enabled", Boolean.valueOf(c0267cc.h()));
        contentValues.put("admob_app_id", c0267cc.o());
        contentValues.put("dynamite_version", Long.valueOf(c0267cc.z()));
        if (c0267cc.j() != null) {
            if (c0267cc.j().size() == 0) {
                d().w().a("Safelisted events should not be an empty list. appId", c0267cc.l());
            } else {
                contentValues.put("safelisted_events", TextUtils.join(",", c0267cc.j()));
            }
        }
        if (Ce.a() && m().e(c0267cc.l(), C0324o.Na)) {
            contentValues.put("ga_app_id", c0267cc.p());
        }
        try {
            SQLiteDatabase sQLiteDatabaseW = w();
            if (sQLiteDatabaseW.update("apps", contentValues, "app_id = ?", new String[]{c0267cc.l()}) == 0 && sQLiteDatabaseW.insertWithOnConflict("apps", null, contentValues, 5) == -1) {
                d().t().a("Failed to insert/update app (got -1). appId", C0365wb.a(c0267cc.l()));
            }
        } catch (SQLiteException e2) {
            d().t().a("Error storing app. appId", C0365wb.a(c0267cc.l()), e2);
        }
    }

    public final void a(C0304k c0304k) {
        com.google.android.gms.common.internal.r.a(c0304k);
        h();
        s();
        ContentValues contentValues = new ContentValues();
        contentValues.put("app_id", c0304k.f2298a);
        contentValues.put("name", c0304k.f2299b);
        contentValues.put("lifetime_count", Long.valueOf(c0304k.f2300c));
        contentValues.put("current_bundle_count", Long.valueOf(c0304k.f2301d));
        contentValues.put("last_fire_timestamp", Long.valueOf(c0304k.f2303f));
        contentValues.put("last_bundled_timestamp", Long.valueOf(c0304k.g));
        contentValues.put("last_bundled_day", c0304k.h);
        contentValues.put("last_sampled_complex_event_id", c0304k.i);
        contentValues.put("last_sampling_rate", c0304k.j);
        if (m().e(c0304k.f2298a, C0324o.xa)) {
            contentValues.put("current_session_count", Long.valueOf(c0304k.f2302e));
        }
        Boolean bool = c0304k.k;
        contentValues.put("last_exempt_from_sampling", (bool == null || !bool.booleanValue()) ? null : 1L);
        try {
            if (w().insertWithOnConflict("events", null, contentValues, 5) == -1) {
                d().t().a("Failed to insert/update event aggregates (got -1). appId", C0365wb.a(c0304k.f2298a));
            }
        } catch (SQLiteException e2) {
            d().t().a("Error storing event aggregates. appId", C0365wb.a(c0304k.f2298a), e2);
        }
    }

    final void a(String str, List<C0246z> list) {
        boolean z;
        C0375yb c0375ybW;
        String str2;
        Object objA;
        Integer numValueOf;
        s();
        h();
        com.google.android.gms.common.internal.r.b(str);
        com.google.android.gms.common.internal.r.a(list);
        SQLiteDatabase sQLiteDatabaseW = w();
        sQLiteDatabaseW.beginTransaction();
        try {
            s();
            h();
            com.google.android.gms.common.internal.r.b(str);
            SQLiteDatabase sQLiteDatabaseW2 = w();
            sQLiteDatabaseW2.delete("property_filters", "app_id=?", new String[]{str});
            sQLiteDatabaseW2.delete("event_filters", "app_id=?", new String[]{str});
            for (C0246z c0246z : list) {
                s();
                h();
                com.google.android.gms.common.internal.r.b(str);
                com.google.android.gms.common.internal.r.a(c0246z);
                if (c0246z.o()) {
                    int iP = c0246z.p();
                    Iterator<com.google.android.gms.internal.measurement.A> it = c0246z.s().iterator();
                    while (true) {
                        if (it.hasNext()) {
                            if (!it.next().o()) {
                                c0375ybW = d().w();
                                str2 = "Event filter with no ID. Audience definition ignored. appId, audienceId";
                                objA = C0365wb.a(str);
                                numValueOf = Integer.valueOf(iP);
                                break;
                            }
                        } else {
                            Iterator<com.google.android.gms.internal.measurement.D> it2 = c0246z.q().iterator();
                            while (it2.hasNext()) {
                                if (!it2.next().o()) {
                                    c0375ybW = d().w();
                                    str2 = "Property filter with no ID. Audience definition ignored. appId, audienceId";
                                    objA = C0365wb.a(str);
                                    numValueOf = Integer.valueOf(iP);
                                }
                            }
                            Iterator<com.google.android.gms.internal.measurement.A> it3 = c0246z.s().iterator();
                            while (true) {
                                if (it3.hasNext()) {
                                    if (!a(str, iP, it3.next())) {
                                        z = false;
                                        break;
                                    }
                                } else {
                                    z = true;
                                    break;
                                }
                            }
                            if (z) {
                                Iterator<com.google.android.gms.internal.measurement.D> it4 = c0246z.q().iterator();
                                while (true) {
                                    if (it4.hasNext()) {
                                        if (!a(str, iP, it4.next())) {
                                            z = false;
                                            break;
                                        }
                                    } else {
                                        break;
                                    }
                                }
                            }
                            if (!z) {
                                s();
                                h();
                                com.google.android.gms.common.internal.r.b(str);
                                SQLiteDatabase sQLiteDatabaseW3 = w();
                                sQLiteDatabaseW3.delete("property_filters", "app_id=? and audience_id=?", new String[]{str, String.valueOf(iP)});
                                sQLiteDatabaseW3.delete("event_filters", "app_id=? and audience_id=?", new String[]{str, String.valueOf(iP)});
                            }
                        }
                    }
                    c0375ybW.a(str2, objA, numValueOf);
                    break;
                }
                d().w().a("Audience with no ID. appId", C0365wb.a(str));
            }
            ArrayList arrayList = new ArrayList();
            for (C0246z c0246z2 : list) {
                arrayList.add(c0246z2.o() ? Integer.valueOf(c0246z2.p()) : null);
            }
            c(str, arrayList);
            sQLiteDatabaseW.setTransactionSuccessful();
        } finally {
            sQLiteDatabaseW.endTransaction();
        }
    }

    final void a(List<Long> list) {
        h();
        s();
        com.google.android.gms.common.internal.r.a(list);
        com.google.android.gms.common.internal.r.a(list.size());
        if (P()) {
            String strJoin = TextUtils.join(",", list);
            StringBuilder sb = new StringBuilder(String.valueOf(strJoin).length() + 2);
            sb.append("(");
            sb.append(strJoin);
            sb.append(")");
            String string = sb.toString();
            StringBuilder sb2 = new StringBuilder(String.valueOf(string).length() + 80);
            sb2.append("SELECT COUNT(1) FROM queue WHERE rowid IN ");
            sb2.append(string);
            sb2.append(" AND retry_count =  2147483647 LIMIT 1");
            if (b(sb2.toString(), (String[]) null) > 0) {
                d().w().a("The number of upload retries exceeds the limit. Will remain unchanged.");
            }
            try {
                SQLiteDatabase sQLiteDatabaseW = w();
                StringBuilder sb3 = new StringBuilder(String.valueOf(string).length() + 127);
                sb3.append("UPDATE queue SET retry_count = IFNULL(retry_count, 0) + 1 WHERE rowid IN ");
                sb3.append(string);
                sb3.append(" AND (retry_count IS NULL OR retry_count < 2147483647)");
                sQLiteDatabaseW.execSQL(sb3.toString());
            } catch (SQLiteException e2) {
                d().t().a("Error incrementing retry count. error", e2);
            }
        }
    }

    public final boolean a(com.google.android.gms.internal.measurement.V v, boolean z) {
        C0375yb c0375ybT;
        Object objA;
        String str;
        ContentValues contentValues;
        h();
        s();
        com.google.android.gms.common.internal.r.a(v);
        com.google.android.gms.common.internal.r.b(v.qa());
        com.google.android.gms.common.internal.r.b(v.ea());
        K();
        long jA = g().a();
        if (v.fa() < jA - ze.t() || v.fa() > ze.t() + jA) {
            d().w().a("Storing bundle outside of the max uploading time span. appId, now, timestamp", C0365wb.a(v.qa()), Long.valueOf(jA), Long.valueOf(v.fa()));
        }
        try {
            byte[] bArrC = o().c(v.g());
            d().B().a("Saving bundle, size", Integer.valueOf(bArrC.length));
            contentValues = new ContentValues();
            contentValues.put("app_id", v.qa());
            contentValues.put("bundle_end_timestamp", Long.valueOf(v.fa()));
            contentValues.put("data", bArrC);
            contentValues.put("has_realtime", Integer.valueOf(z ? 1 : 0));
            if (v.O()) {
                contentValues.put("retry_count", Integer.valueOf(v.Q()));
            }
        } catch (IOException e2) {
            e = e2;
            c0375ybT = d().t();
            objA = C0365wb.a(v.qa());
            str = "Data loss. Failed to serialize bundle. appId";
        }
        try {
            if (w().insert("queue", null, contentValues) != -1) {
                return true;
            }
            d().t().a("Failed to insert bundle (got -1). appId", C0365wb.a(v.qa()));
            return false;
        } catch (SQLiteException e3) {
            e = e3;
            c0375ybT = d().t();
            objA = C0365wb.a(v.qa());
            str = "Error storing bundle. appId";
            c0375ybT.a(str, objA, e);
            return false;
        }
    }

    public final boolean a(C0309l c0309l, long j2, boolean z) {
        h();
        s();
        com.google.android.gms.common.internal.r.a(c0309l);
        com.google.android.gms.common.internal.r.b(c0309l.f2312a);
        Q.a aVarX = com.google.android.gms.internal.measurement.Q.x();
        aVarX.b(c0309l.f2316e);
        for (String str : c0309l.f2317f) {
            T.a aVarV = com.google.android.gms.internal.measurement.T.v();
            aVarV.a(str);
            o().a(aVarV, c0309l.f2317f.a(str));
            aVarX.a(aVarV);
        }
        byte[] bArrG = ((com.google.android.gms.internal.measurement.Q) aVarX.j()).g();
        d().B().a("Saving event, name, data size", j().a(c0309l.f2313b), Integer.valueOf(bArrG.length));
        ContentValues contentValues = new ContentValues();
        contentValues.put("app_id", c0309l.f2312a);
        contentValues.put("name", c0309l.f2313b);
        contentValues.put("timestamp", Long.valueOf(c0309l.f2315d));
        contentValues.put("metadata_fingerprint", Long.valueOf(j2));
        contentValues.put("data", bArrG);
        contentValues.put("realtime", Integer.valueOf(z ? 1 : 0));
        try {
            if (w().insert("raw_events", null, contentValues) != -1) {
                return true;
            }
            d().t().a("Failed to insert raw event (got -1). appId", C0365wb.a(c0309l.f2312a));
            return false;
        } catch (SQLiteException e2) {
            d().t().a("Error storing raw event. appId", C0365wb.a(c0309l.f2312a), e2);
            return false;
        }
    }

    public final boolean a(me meVar) {
        com.google.android.gms.common.internal.r.a(meVar);
        h();
        s();
        if (c(meVar.f2339a, meVar.f2341c) == null) {
            if (le.a(meVar.f2341c)) {
                if (b("select count(1) from user_attributes where app_id=? and name not like '!_%' escape '!'", new String[]{meVar.f2339a}) >= 25) {
                    return false;
                }
            } else if (m().e(meVar.f2339a, C0324o.ka)) {
                if (!"_npa".equals(meVar.f2341c) && b("select count(1) from user_attributes where app_id=? and origin=? AND name like '!_%' escape '!'", new String[]{meVar.f2339a, meVar.f2340b}) >= 25) {
                    return false;
                }
            } else if (b("select count(1) from user_attributes where app_id=? and origin=? AND name like '!_%' escape '!'", new String[]{meVar.f2339a, meVar.f2340b}) >= 25) {
                return false;
            }
        }
        ContentValues contentValues = new ContentValues();
        contentValues.put("app_id", meVar.f2339a);
        contentValues.put("origin", meVar.f2340b);
        contentValues.put("name", meVar.f2341c);
        contentValues.put("set_timestamp", Long.valueOf(meVar.f2342d));
        a(contentValues, "value", meVar.f2343e);
        try {
            if (w().insertWithOnConflict("user_attributes", null, contentValues, 5) == -1) {
                d().t().a("Failed to insert/update user property (got -1). appId", C0365wb.a(meVar.f2339a));
            }
        } catch (SQLiteException e2) {
            d().t().a("Error storing user property. appId", C0365wb.a(meVar.f2339a), e2);
        }
        return true;
    }

    public final boolean a(zzv zzvVar) {
        com.google.android.gms.common.internal.r.a(zzvVar);
        h();
        s();
        if (c(zzvVar.f2522a, zzvVar.f2524c.f2511b) == null && b("SELECT COUNT(1) FROM conditional_properties WHERE app_id=?", new String[]{zzvVar.f2522a}) >= 1000) {
            return false;
        }
        ContentValues contentValues = new ContentValues();
        contentValues.put("app_id", zzvVar.f2522a);
        contentValues.put("origin", zzvVar.f2523b);
        contentValues.put("name", zzvVar.f2524c.f2511b);
        a(contentValues, "value", zzvVar.f2524c.h());
        contentValues.put("active", Boolean.valueOf(zzvVar.f2526e));
        contentValues.put("trigger_event_name", zzvVar.f2527f);
        contentValues.put("trigger_timeout", Long.valueOf(zzvVar.h));
        k();
        contentValues.put("timed_out_event", le.a((Parcelable) zzvVar.g));
        contentValues.put("creation_timestamp", Long.valueOf(zzvVar.f2525d));
        k();
        contentValues.put("triggered_event", le.a((Parcelable) zzvVar.i));
        contentValues.put("triggered_timestamp", Long.valueOf(zzvVar.f2524c.f2512c));
        contentValues.put("time_to_live", Long.valueOf(zzvVar.j));
        k();
        contentValues.put("expired_event", le.a((Parcelable) zzvVar.k));
        try {
            if (w().insertWithOnConflict("conditional_properties", null, contentValues, 5) == -1) {
                d().t().a("Failed to insert/update conditional user property (got -1)", C0365wb.a(zzvVar.f2522a));
            }
        } catch (SQLiteException e2) {
            d().t().a("Error storing conditional user property", C0365wb.a(zzvVar.f2522a), e2);
        }
        return true;
    }

    public final boolean a(String str, Long l, long j2, com.google.android.gms.internal.measurement.Q q) {
        h();
        s();
        com.google.android.gms.common.internal.r.a(q);
        com.google.android.gms.common.internal.r.b(str);
        com.google.android.gms.common.internal.r.a(l);
        byte[] bArrG = q.g();
        d().B().a("Saving complex main event, appId, data size", j().a(str), Integer.valueOf(bArrG.length));
        ContentValues contentValues = new ContentValues();
        contentValues.put("app_id", str);
        contentValues.put("event_id", l);
        contentValues.put("children_to_process", Long.valueOf(j2));
        contentValues.put("main_event", bArrG);
        try {
            if (w().insertWithOnConflict("main_event_params", null, contentValues, 5) != -1) {
                return true;
            }
            d().t().a("Failed to insert complex main event (got -1). appId", C0365wb.a(str));
            return false;
        } catch (SQLiteException e2) {
            d().t().a("Error storing complex main event. appId", C0365wb.a(str), e2);
            return false;
        }
    }

    public final C0267cc b(String str) {
        Cursor cursorQuery;
        com.google.android.gms.common.internal.r.b(str);
        h();
        s();
        try {
            try {
                cursorQuery = w().query("apps", new String[]{"app_instance_id", "gmp_app_id", "resettable_device_id_hash", "last_bundle_index", "last_bundle_start_timestamp", "last_bundle_end_timestamp", "app_version", "app_store", "gmp_version", "dev_cert_hash", "measurement_enabled", "day", "daily_public_events_count", "daily_events_count", "daily_conversions_count", "config_fetched_time", "failed_config_fetch_time", "app_version_int", "firebase_instance_id", "daily_error_events_count", "daily_realtime_events_count", "health_monitor_sample", "android_id", "adid_reporting_enabled", "ssaid_reporting_enabled", "admob_app_id", "dynamite_version", "safelisted_events", "ga_app_id"}, "app_id=?", new String[]{str}, null, null, null);
            } catch (Throwable th) {
                th = th;
            }
        } catch (SQLiteException e2) {
            e = e2;
            cursorQuery = null;
        } catch (Throwable th2) {
            th = th2;
            cursorQuery = null;
        }
        try {
            if (!cursorQuery.moveToFirst()) {
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                return null;
            }
            try {
                C0267cc c0267cc = new C0267cc(this.f2209b.t(), str);
                c0267cc.a(cursorQuery.getString(0));
                c0267cc.b(cursorQuery.getString(1));
                c0267cc.e(cursorQuery.getString(2));
                c0267cc.g(cursorQuery.getLong(3));
                c0267cc.a(cursorQuery.getLong(4));
                c0267cc.b(cursorQuery.getLong(5));
                c0267cc.g(cursorQuery.getString(6));
                c0267cc.h(cursorQuery.getString(7));
                c0267cc.d(cursorQuery.getLong(8));
                c0267cc.e(cursorQuery.getLong(9));
                c0267cc.a(cursorQuery.isNull(10) || cursorQuery.getInt(10) != 0);
                c0267cc.j(cursorQuery.getLong(11));
                c0267cc.k(cursorQuery.getLong(12));
                c0267cc.l(cursorQuery.getLong(13));
                c0267cc.m(cursorQuery.getLong(14));
                c0267cc.h(cursorQuery.getLong(15));
                c0267cc.i(cursorQuery.getLong(16));
                c0267cc.c(cursorQuery.isNull(17) ? -2147483648L : cursorQuery.getInt(17));
                c0267cc.f(cursorQuery.getString(18));
                c0267cc.o(cursorQuery.getLong(19));
                c0267cc.n(cursorQuery.getLong(20));
                c0267cc.i(cursorQuery.getString(21));
                c0267cc.p(cursorQuery.isNull(22) ? 0L : cursorQuery.getLong(22));
                c0267cc.b(cursorQuery.isNull(23) || cursorQuery.getInt(23) != 0);
                c0267cc.c(cursorQuery.isNull(24) || cursorQuery.getInt(24) != 0);
                c0267cc.c(cursorQuery.getString(25));
                c0267cc.f(cursorQuery.isNull(26) ? 0L : cursorQuery.getLong(26));
                if (!cursorQuery.isNull(27)) {
                    c0267cc.a(Arrays.asList(cursorQuery.getString(27).split(",", -1)));
                }
                if (Ce.a() && m().e(str, C0324o.Na)) {
                    c0267cc.d(cursorQuery.getString(28));
                }
                c0267cc.k();
                if (cursorQuery.moveToNext()) {
                    d().t().a("Got multiple records for app, expected one. appId", C0365wb.a(str));
                }
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                return c0267cc;
            } catch (SQLiteException e3) {
                e = e3;
            }
        } catch (SQLiteException e4) {
            e = e4;
        } catch (Throwable th3) {
            th = th3;
            if (cursorQuery != null) {
                cursorQuery.close();
            }
            throw th;
        }
        d().t().a("Error querying app. appId", C0365wb.a(str), e);
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return null;
    }

    public final List<zzv> b(String str, String str2, String str3) {
        com.google.android.gms.common.internal.r.b(str);
        h();
        s();
        ArrayList arrayList = new ArrayList(3);
        arrayList.add(str);
        StringBuilder sb = new StringBuilder("app_id=?");
        if (!TextUtils.isEmpty(str2)) {
            arrayList.add(str2);
            sb.append(" and origin=?");
        }
        if (!TextUtils.isEmpty(str3)) {
            arrayList.add(String.valueOf(str3).concat("*"));
            sb.append(" and name glob ?");
        }
        return a(sb.toString(), (String[]) arrayList.toArray(new String[arrayList.size()]));
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:38:0x00cd  */
    /* JADX WARN: Type inference failed for: r1v1, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r1v2 */
    /* JADX WARN: Type inference failed for: r1v4, types: [android.database.Cursor] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    final java.util.Map<java.lang.Integer, java.util.List<java.lang.Integer>> b(java.lang.String r14, java.util.List<java.lang.String> r15) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 211
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.C0269d.b(java.lang.String, java.util.List):java.util.Map");
    }

    public final void b(String str, String str2) {
        com.google.android.gms.common.internal.r.b(str);
        com.google.android.gms.common.internal.r.b(str2);
        h();
        s();
        try {
            d().B().a("Deleted user attribute rows", Integer.valueOf(w().delete("user_attributes", "app_id=? and name=?", new String[]{str, str2})));
        } catch (SQLiteException e2) {
            d().t().a("Error deleting user attribute. appId", C0365wb.a(str), j().c(str2), e2);
        }
    }

    public final long c(String str) {
        com.google.android.gms.common.internal.r.b(str);
        h();
        s();
        try {
            return w().delete("raw_events", "rowid in (select rowid from raw_events where app_id=? order by rowid desc limit -1 offset ?)", new String[]{str, String.valueOf(Math.max(0, Math.min(1000000, m().b(str, C0324o.w))))});
        } catch (SQLiteException e2) {
            d().t().a("Error deleting over the limit events. appId", C0365wb.a(str), e2);
            return 0L;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:29:0x00a7  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x00ae  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final com.google.android.gms.measurement.internal.me c(java.lang.String r19, java.lang.String r20) {
        /*
            r18 = this;
            r8 = r20
            com.google.android.gms.common.internal.r.b(r19)
            com.google.android.gms.common.internal.r.b(r20)
            r18.h()
            r18.s()
            r9 = 0
            android.database.sqlite.SQLiteDatabase r10 = r18.w()     // Catch: java.lang.Throwable -> L83 android.database.sqlite.SQLiteException -> L88
            java.lang.String r11 = "user_attributes"
            r0 = 3
            java.lang.String[] r12 = new java.lang.String[r0]     // Catch: java.lang.Throwable -> L83 android.database.sqlite.SQLiteException -> L88
            java.lang.String r0 = "set_timestamp"
            r1 = 0
            r12[r1] = r0     // Catch: java.lang.Throwable -> L83 android.database.sqlite.SQLiteException -> L88
            java.lang.String r0 = "value"
            r2 = 1
            r12[r2] = r0     // Catch: java.lang.Throwable -> L83 android.database.sqlite.SQLiteException -> L88
            java.lang.String r0 = "origin"
            r3 = 2
            r12[r3] = r0     // Catch: java.lang.Throwable -> L83 android.database.sqlite.SQLiteException -> L88
            java.lang.String r13 = "app_id=? and name=?"
            java.lang.String[] r14 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L83 android.database.sqlite.SQLiteException -> L88
            r14[r1] = r19     // Catch: java.lang.Throwable -> L83 android.database.sqlite.SQLiteException -> L88
            r14[r2] = r8     // Catch: java.lang.Throwable -> L83 android.database.sqlite.SQLiteException -> L88
            r15 = 0
            r16 = 0
            r17 = 0
            android.database.Cursor r10 = r10.query(r11, r12, r13, r14, r15, r16, r17)     // Catch: java.lang.Throwable -> L83 android.database.sqlite.SQLiteException -> L88
            boolean r0 = r10.moveToFirst()     // Catch: java.lang.Throwable -> L7b android.database.sqlite.SQLiteException -> L7f
            if (r0 != 0) goto L44
            if (r10 == 0) goto L43
            r10.close()
        L43:
            return r9
        L44:
            long r5 = r10.getLong(r1)     // Catch: java.lang.Throwable -> L7b android.database.sqlite.SQLiteException -> L7f
            r11 = r18
            java.lang.Object r7 = r11.a(r10, r2)     // Catch: android.database.sqlite.SQLiteException -> L79 java.lang.Throwable -> Lab
            java.lang.String r3 = r10.getString(r3)     // Catch: android.database.sqlite.SQLiteException -> L79 java.lang.Throwable -> Lab
            com.google.android.gms.measurement.internal.me r0 = new com.google.android.gms.measurement.internal.me     // Catch: android.database.sqlite.SQLiteException -> L79 java.lang.Throwable -> Lab
            r1 = r0
            r2 = r19
            r4 = r20
            r1.<init>(r2, r3, r4, r5, r7)     // Catch: android.database.sqlite.SQLiteException -> L79 java.lang.Throwable -> Lab
            boolean r1 = r10.moveToNext()     // Catch: android.database.sqlite.SQLiteException -> L79 java.lang.Throwable -> Lab
            if (r1 == 0) goto L73
            com.google.android.gms.measurement.internal.wb r1 = r18.d()     // Catch: android.database.sqlite.SQLiteException -> L79 java.lang.Throwable -> Lab
            com.google.android.gms.measurement.internal.yb r1 = r1.t()     // Catch: android.database.sqlite.SQLiteException -> L79 java.lang.Throwable -> Lab
            java.lang.String r2 = "Got multiple records for user property, expected one. appId"
            java.lang.Object r3 = com.google.android.gms.measurement.internal.C0365wb.a(r19)     // Catch: android.database.sqlite.SQLiteException -> L79 java.lang.Throwable -> Lab
            r1.a(r2, r3)     // Catch: android.database.sqlite.SQLiteException -> L79 java.lang.Throwable -> Lab
        L73:
            if (r10 == 0) goto L78
            r10.close()
        L78:
            return r0
        L79:
            r0 = move-exception
            goto L8c
        L7b:
            r0 = move-exception
            r11 = r18
            goto Lac
        L7f:
            r0 = move-exception
            r11 = r18
            goto L8c
        L83:
            r0 = move-exception
            r11 = r18
            r10 = r9
            goto Lac
        L88:
            r0 = move-exception
            r11 = r18
            r10 = r9
        L8c:
            com.google.android.gms.measurement.internal.wb r1 = r18.d()     // Catch: java.lang.Throwable -> Lab
            com.google.android.gms.measurement.internal.yb r1 = r1.t()     // Catch: java.lang.Throwable -> Lab
            java.lang.String r2 = "Error querying user property. appId"
            java.lang.Object r3 = com.google.android.gms.measurement.internal.C0365wb.a(r19)     // Catch: java.lang.Throwable -> Lab
            com.google.android.gms.measurement.internal.ub r4 = r18.j()     // Catch: java.lang.Throwable -> Lab
            java.lang.String r4 = r4.c(r8)     // Catch: java.lang.Throwable -> Lab
            r1.a(r2, r3, r4, r0)     // Catch: java.lang.Throwable -> Lab
            if (r10 == 0) goto Laa
            r10.close()
        Laa:
            return r9
        Lab:
            r0 = move-exception
        Lac:
            if (r10 == 0) goto Lb1
            r10.close()
        Lb1:
            throw r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.C0269d.c(java.lang.String, java.lang.String):com.google.android.gms.measurement.internal.me");
    }

    public final zzv d(String str, String str2) throws Throwable {
        Cursor cursorQuery;
        com.google.android.gms.common.internal.r.b(str);
        com.google.android.gms.common.internal.r.b(str2);
        h();
        s();
        try {
            try {
                cursorQuery = w().query("conditional_properties", new String[]{"origin", "value", "active", "trigger_event_name", "trigger_timeout", "timed_out_event", "creation_timestamp", "triggered_event", "triggered_timestamp", "time_to_live", "expired_event"}, "app_id=? and name=?", new String[]{str, str2}, null, null, null);
            } catch (Throwable th) {
                th = th;
            }
            try {
                if (!cursorQuery.moveToFirst()) {
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return null;
                }
                String string = cursorQuery.getString(0);
                try {
                    Object objA = a(cursorQuery, 1);
                    boolean z = cursorQuery.getInt(2) != 0;
                    zzv zzvVar = new zzv(str, string, new zzkj(str2, cursorQuery.getLong(8), objA, string), cursorQuery.getLong(6), z, cursorQuery.getString(3), (zzan) o().a(cursorQuery.getBlob(5), zzan.CREATOR), cursorQuery.getLong(4), (zzan) o().a(cursorQuery.getBlob(7), zzan.CREATOR), cursorQuery.getLong(9), (zzan) o().a(cursorQuery.getBlob(10), zzan.CREATOR));
                    if (cursorQuery.moveToNext()) {
                        d().t().a("Got multiple records for conditional property, expected one", C0365wb.a(str), j().c(str2));
                    }
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return zzvVar;
                } catch (SQLiteException e2) {
                    e = e2;
                }
            } catch (SQLiteException e3) {
                e = e3;
            } catch (Throwable th2) {
                th = th2;
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                throw th;
            }
        } catch (SQLiteException e4) {
            e = e4;
            cursorQuery = null;
        } catch (Throwable th3) {
            th = th3;
            cursorQuery = null;
        }
        d().t().a("Error querying conditional property", C0365wb.a(str), j().c(str2), e);
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return null;
    }

    public final byte[] d(String str) {
        Cursor cursorQuery;
        com.google.android.gms.common.internal.r.b(str);
        h();
        s();
        try {
            cursorQuery = w().query("apps", new String[]{"remote_config"}, "app_id=?", new String[]{str}, null, null, null);
            try {
                try {
                    if (!cursorQuery.moveToFirst()) {
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                        return null;
                    }
                    byte[] blob = cursorQuery.getBlob(0);
                    if (cursorQuery.moveToNext()) {
                        d().t().a("Got multiple records for app config, expected one. appId", C0365wb.a(str));
                    }
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return blob;
                } catch (SQLiteException e2) {
                    e = e2;
                    d().t().a("Error querying remote config. appId", C0365wb.a(str), e);
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return null;
                }
            } catch (Throwable th) {
                th = th;
            }
            th = th;
        } catch (SQLiteException e3) {
            e = e3;
            cursorQuery = null;
        } catch (Throwable th2) {
            th = th2;
            cursorQuery = null;
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        throw th;
    }

    public final int e(String str, String str2) {
        com.google.android.gms.common.internal.r.b(str);
        com.google.android.gms.common.internal.r.b(str2);
        h();
        s();
        try {
            return w().delete("conditional_properties", "app_id=? and name=?", new String[]{str, str2});
        } catch (SQLiteException e2) {
            d().t().a("Error deleting conditional property", C0365wb.a(str), j().c(str2), e2);
            return 0;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:30:0x0086  */
    /* JADX WARN: Type inference failed for: r1v0, types: [android.database.sqlite.SQLiteDatabase] */
    /* JADX WARN: Type inference failed for: r1v1 */
    /* JADX WARN: Type inference failed for: r1v3, types: [android.database.Cursor] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    final java.util.Map<java.lang.Integer, java.util.List<java.lang.Integer>> e(java.lang.String r8) throws java.lang.Throwable {
        /*
            r7 = this;
            r7.s()
            r7.h()
            com.google.android.gms.common.internal.r.b(r8)
            b.b.b r0 = new b.b.b
            r0.<init>()
            android.database.sqlite.SQLiteDatabase r1 = r7.w()
            r2 = 0
            java.lang.String r3 = "select audience_id, filter_id from event_filters where app_id = ? and session_scoped = 1 UNION select audience_id, filter_id from property_filters where app_id = ? and session_scoped = 1;"
            r4 = 2
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L67 android.database.sqlite.SQLiteException -> L6a
            r5 = 0
            r4[r5] = r8     // Catch: java.lang.Throwable -> L67 android.database.sqlite.SQLiteException -> L6a
            r6 = 1
            r4[r6] = r8     // Catch: java.lang.Throwable -> L67 android.database.sqlite.SQLiteException -> L6a
            android.database.Cursor r1 = r1.rawQuery(r3, r4)     // Catch: java.lang.Throwable -> L67 android.database.sqlite.SQLiteException -> L6a
            boolean r3 = r1.moveToFirst()     // Catch: android.database.sqlite.SQLiteException -> L65 java.lang.Throwable -> L83
            if (r3 != 0) goto L32
            java.util.Map r8 = java.util.Collections.emptyMap()     // Catch: android.database.sqlite.SQLiteException -> L65 java.lang.Throwable -> L83
            if (r1 == 0) goto L31
            r1.close()
        L31:
            return r8
        L32:
            int r3 = r1.getInt(r5)     // Catch: android.database.sqlite.SQLiteException -> L65 java.lang.Throwable -> L83
            java.lang.Integer r4 = java.lang.Integer.valueOf(r3)     // Catch: android.database.sqlite.SQLiteException -> L65 java.lang.Throwable -> L83
            java.lang.Object r4 = r0.get(r4)     // Catch: android.database.sqlite.SQLiteException -> L65 java.lang.Throwable -> L83
            java.util.List r4 = (java.util.List) r4     // Catch: android.database.sqlite.SQLiteException -> L65 java.lang.Throwable -> L83
            if (r4 != 0) goto L4e
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: android.database.sqlite.SQLiteException -> L65 java.lang.Throwable -> L83
            r4.<init>()     // Catch: android.database.sqlite.SQLiteException -> L65 java.lang.Throwable -> L83
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: android.database.sqlite.SQLiteException -> L65 java.lang.Throwable -> L83
            r0.put(r3, r4)     // Catch: android.database.sqlite.SQLiteException -> L65 java.lang.Throwable -> L83
        L4e:
            int r3 = r1.getInt(r6)     // Catch: android.database.sqlite.SQLiteException -> L65 java.lang.Throwable -> L83
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: android.database.sqlite.SQLiteException -> L65 java.lang.Throwable -> L83
            r4.add(r3)     // Catch: android.database.sqlite.SQLiteException -> L65 java.lang.Throwable -> L83
            boolean r3 = r1.moveToNext()     // Catch: android.database.sqlite.SQLiteException -> L65 java.lang.Throwable -> L83
            if (r3 != 0) goto L32
            if (r1 == 0) goto L64
            r1.close()
        L64:
            return r0
        L65:
            r0 = move-exception
            goto L6c
        L67:
            r8 = move-exception
            r1 = r2
            goto L84
        L6a:
            r0 = move-exception
            r1 = r2
        L6c:
            com.google.android.gms.measurement.internal.wb r3 = r7.d()     // Catch: java.lang.Throwable -> L83
            com.google.android.gms.measurement.internal.yb r3 = r3.t()     // Catch: java.lang.Throwable -> L83
            java.lang.String r4 = "Database error querying scoped filters. appId"
            java.lang.Object r8 = com.google.android.gms.measurement.internal.C0365wb.a(r8)     // Catch: java.lang.Throwable -> L83
            r3.a(r4, r8, r0)     // Catch: java.lang.Throwable -> L83
            if (r1 == 0) goto L82
            r1.close()
        L82:
            return r2
        L83:
            r8 = move-exception
        L84:
            if (r1 == 0) goto L89
            r1.close()
        L89:
            goto L8b
        L8a:
            throw r8
        L8b:
            goto L8a
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.C0269d.e(java.lang.String):java.util.Map");
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:32:0x009f  */
    /* JADX WARN: Type inference failed for: r0v0, types: [android.database.sqlite.SQLiteDatabase] */
    /* JADX WARN: Type inference failed for: r0v1 */
    /* JADX WARN: Type inference failed for: r0v3, types: [android.database.Cursor] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    final java.util.Map<java.lang.Integer, com.google.android.gms.internal.measurement.X> f(java.lang.String r12) throws java.lang.Throwable {
        /*
            r11 = this;
            r11.s()
            r11.h()
            com.google.android.gms.common.internal.r.b(r12)
            android.database.sqlite.SQLiteDatabase r0 = r11.w()
            r8 = 0
            java.lang.String r1 = "audience_filter_values"
            r2 = 2
            java.lang.String[] r2 = new java.lang.String[r2]     // Catch: java.lang.Throwable -> L80 android.database.sqlite.SQLiteException -> L83
            java.lang.String r3 = "audience_id"
            r9 = 0
            r2[r9] = r3     // Catch: java.lang.Throwable -> L80 android.database.sqlite.SQLiteException -> L83
            java.lang.String r3 = "current_results"
            r10 = 1
            r2[r10] = r3     // Catch: java.lang.Throwable -> L80 android.database.sqlite.SQLiteException -> L83
            java.lang.String r3 = "app_id=?"
            java.lang.String[] r4 = new java.lang.String[r10]     // Catch: java.lang.Throwable -> L80 android.database.sqlite.SQLiteException -> L83
            r4[r9] = r12     // Catch: java.lang.Throwable -> L80 android.database.sqlite.SQLiteException -> L83
            r5 = 0
            r6 = 0
            r7 = 0
            android.database.Cursor r0 = r0.query(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L80 android.database.sqlite.SQLiteException -> L83
            boolean r1 = r0.moveToFirst()     // Catch: android.database.sqlite.SQLiteException -> L7e java.lang.Throwable -> L9c
            if (r1 != 0) goto L36
            if (r0 == 0) goto L35
            r0.close()
        L35:
            return r8
        L36:
            b.b.b r1 = new b.b.b     // Catch: android.database.sqlite.SQLiteException -> L7e java.lang.Throwable -> L9c
            r1.<init>()     // Catch: android.database.sqlite.SQLiteException -> L7e java.lang.Throwable -> L9c
        L3b:
            int r2 = r0.getInt(r9)     // Catch: android.database.sqlite.SQLiteException -> L7e java.lang.Throwable -> L9c
            byte[] r3 = r0.getBlob(r10)     // Catch: android.database.sqlite.SQLiteException -> L7e java.lang.Throwable -> L9c
            com.google.android.gms.internal.measurement.X$a r4 = com.google.android.gms.internal.measurement.X.w()     // Catch: java.io.IOException -> L5c android.database.sqlite.SQLiteException -> L7e java.lang.Throwable -> L9c
            com.google.android.gms.measurement.internal.ie.a(r4, r3)     // Catch: java.io.IOException -> L5c android.database.sqlite.SQLiteException -> L7e java.lang.Throwable -> L9c
            com.google.android.gms.internal.measurement.X$a r4 = (com.google.android.gms.internal.measurement.X.a) r4     // Catch: java.io.IOException -> L5c android.database.sqlite.SQLiteException -> L7e java.lang.Throwable -> L9c
            com.google.android.gms.internal.measurement.uc r3 = r4.j()     // Catch: java.io.IOException -> L5c android.database.sqlite.SQLiteException -> L7e java.lang.Throwable -> L9c
            com.google.android.gms.internal.measurement.Jb r3 = (com.google.android.gms.internal.measurement.Jb) r3     // Catch: java.io.IOException -> L5c android.database.sqlite.SQLiteException -> L7e java.lang.Throwable -> L9c
            com.google.android.gms.internal.measurement.X r3 = (com.google.android.gms.internal.measurement.X) r3     // Catch: java.io.IOException -> L5c android.database.sqlite.SQLiteException -> L7e java.lang.Throwable -> L9c
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: android.database.sqlite.SQLiteException -> L7e java.lang.Throwable -> L9c
            r1.put(r2, r3)     // Catch: android.database.sqlite.SQLiteException -> L7e java.lang.Throwable -> L9c
            goto L72
        L5c:
            r3 = move-exception
            com.google.android.gms.measurement.internal.wb r4 = r11.d()     // Catch: android.database.sqlite.SQLiteException -> L7e java.lang.Throwable -> L9c
            com.google.android.gms.measurement.internal.yb r4 = r4.t()     // Catch: android.database.sqlite.SQLiteException -> L7e java.lang.Throwable -> L9c
            java.lang.String r5 = "Failed to merge filter results. appId, audienceId, error"
            java.lang.Object r6 = com.google.android.gms.measurement.internal.C0365wb.a(r12)     // Catch: android.database.sqlite.SQLiteException -> L7e java.lang.Throwable -> L9c
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: android.database.sqlite.SQLiteException -> L7e java.lang.Throwable -> L9c
            r4.a(r5, r6, r2, r3)     // Catch: android.database.sqlite.SQLiteException -> L7e java.lang.Throwable -> L9c
        L72:
            boolean r2 = r0.moveToNext()     // Catch: android.database.sqlite.SQLiteException -> L7e java.lang.Throwable -> L9c
            if (r2 != 0) goto L3b
            if (r0 == 0) goto L7d
            r0.close()
        L7d:
            return r1
        L7e:
            r1 = move-exception
            goto L85
        L80:
            r12 = move-exception
            r0 = r8
            goto L9d
        L83:
            r1 = move-exception
            r0 = r8
        L85:
            com.google.android.gms.measurement.internal.wb r2 = r11.d()     // Catch: java.lang.Throwable -> L9c
            com.google.android.gms.measurement.internal.yb r2 = r2.t()     // Catch: java.lang.Throwable -> L9c
            java.lang.String r3 = "Database error querying filter results. appId"
            java.lang.Object r12 = com.google.android.gms.measurement.internal.C0365wb.a(r12)     // Catch: java.lang.Throwable -> L9c
            r2.a(r3, r12, r1)     // Catch: java.lang.Throwable -> L9c
            if (r0 == 0) goto L9b
            r0.close()
        L9b:
            return r8
        L9c:
            r12 = move-exception
        L9d:
            if (r0 == 0) goto La2
            r0.close()
        La2:
            goto La4
        La3:
            throw r12
        La4:
            goto La3
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.C0269d.f(java.lang.String):java.util.Map");
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:35:0x00bc  */
    /* JADX WARN: Type inference failed for: r14v1 */
    /* JADX WARN: Type inference failed for: r14v3, types: [android.database.Cursor] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    final java.util.Map<java.lang.Integer, java.util.List<com.google.android.gms.internal.measurement.A>> f(java.lang.String r13, java.lang.String r14) throws java.lang.Throwable {
        /*
            r12 = this;
            r12.s()
            r12.h()
            com.google.android.gms.common.internal.r.b(r13)
            com.google.android.gms.common.internal.r.b(r14)
            b.b.b r0 = new b.b.b
            r0.<init>()
            android.database.sqlite.SQLiteDatabase r1 = r12.w()
            r9 = 0
            java.lang.String r2 = "event_filters"
            r3 = 2
            java.lang.String[] r4 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L9d android.database.sqlite.SQLiteException -> La0
            java.lang.String r5 = "audience_id"
            r10 = 0
            r4[r10] = r5     // Catch: java.lang.Throwable -> L9d android.database.sqlite.SQLiteException -> La0
            java.lang.String r5 = "data"
            r11 = 1
            r4[r11] = r5     // Catch: java.lang.Throwable -> L9d android.database.sqlite.SQLiteException -> La0
            java.lang.String r5 = "app_id=? AND event_name=?"
            java.lang.String[] r6 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L9d android.database.sqlite.SQLiteException -> La0
            r6[r10] = r13     // Catch: java.lang.Throwable -> L9d android.database.sqlite.SQLiteException -> La0
            r6[r11] = r14     // Catch: java.lang.Throwable -> L9d android.database.sqlite.SQLiteException -> La0
            r14 = 0
            r7 = 0
            r8 = 0
            r3 = r4
            r4 = r5
            r5 = r6
            r6 = r14
            android.database.Cursor r14 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L9d android.database.sqlite.SQLiteException -> La0
            boolean r1 = r14.moveToFirst()     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            if (r1 != 0) goto L48
            java.util.Map r13 = java.util.Collections.emptyMap()     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            if (r14 == 0) goto L47
            r14.close()
        L47:
            return r13
        L48:
            byte[] r1 = r14.getBlob(r11)     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            com.google.android.gms.internal.measurement.A$a r2 = com.google.android.gms.internal.measurement.A.z()     // Catch: java.io.IOException -> L7d android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            com.google.android.gms.measurement.internal.ie.a(r2, r1)     // Catch: java.io.IOException -> L7d android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            com.google.android.gms.internal.measurement.A$a r2 = (com.google.android.gms.internal.measurement.A.a) r2     // Catch: java.io.IOException -> L7d android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            com.google.android.gms.internal.measurement.uc r1 = r2.j()     // Catch: java.io.IOException -> L7d android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            com.google.android.gms.internal.measurement.Jb r1 = (com.google.android.gms.internal.measurement.Jb) r1     // Catch: java.io.IOException -> L7d android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            com.google.android.gms.internal.measurement.A r1 = (com.google.android.gms.internal.measurement.A) r1     // Catch: java.io.IOException -> L7d android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            int r2 = r14.getInt(r10)     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            java.lang.Object r3 = r0.get(r3)     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            java.util.List r3 = (java.util.List) r3     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            if (r3 != 0) goto L79
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            r3.<init>()     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            r0.put(r2, r3)     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
        L79:
            r3.add(r1)     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            goto L8f
        L7d:
            r1 = move-exception
            com.google.android.gms.measurement.internal.wb r2 = r12.d()     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            com.google.android.gms.measurement.internal.yb r2 = r2.t()     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            java.lang.String r3 = "Failed to merge filter. appId"
            java.lang.Object r4 = com.google.android.gms.measurement.internal.C0365wb.a(r13)     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            r2.a(r3, r4, r1)     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
        L8f:
            boolean r1 = r14.moveToNext()     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            if (r1 != 0) goto L48
            if (r14 == 0) goto L9a
            r14.close()
        L9a:
            return r0
        L9b:
            r0 = move-exception
            goto La2
        L9d:
            r13 = move-exception
            r14 = r9
            goto Lba
        La0:
            r0 = move-exception
            r14 = r9
        La2:
            com.google.android.gms.measurement.internal.wb r1 = r12.d()     // Catch: java.lang.Throwable -> Lb9
            com.google.android.gms.measurement.internal.yb r1 = r1.t()     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r2 = "Database error querying filters. appId"
            java.lang.Object r13 = com.google.android.gms.measurement.internal.C0365wb.a(r13)     // Catch: java.lang.Throwable -> Lb9
            r1.a(r2, r13, r0)     // Catch: java.lang.Throwable -> Lb9
            if (r14 == 0) goto Lb8
            r14.close()
        Lb8:
            return r9
        Lb9:
            r13 = move-exception
        Lba:
            if (r14 == 0) goto Lbf
            r14.close()
        Lbf:
            goto Lc1
        Lc0:
            throw r13
        Lc1:
            goto Lc0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.C0269d.f(java.lang.String, java.lang.String):java.util.Map");
    }

    public final long g(String str) {
        com.google.android.gms.common.internal.r.b(str);
        return a("select count(1) from events where app_id=? and name not like '!_%' escape '!'", new String[]{str}, 0L);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:35:0x00bc  */
    /* JADX WARN: Type inference failed for: r14v1 */
    /* JADX WARN: Type inference failed for: r14v3, types: [android.database.Cursor] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    final java.util.Map<java.lang.Integer, java.util.List<com.google.android.gms.internal.measurement.D>> g(java.lang.String r13, java.lang.String r14) throws java.lang.Throwable {
        /*
            r12 = this;
            r12.s()
            r12.h()
            com.google.android.gms.common.internal.r.b(r13)
            com.google.android.gms.common.internal.r.b(r14)
            b.b.b r0 = new b.b.b
            r0.<init>()
            android.database.sqlite.SQLiteDatabase r1 = r12.w()
            r9 = 0
            java.lang.String r2 = "property_filters"
            r3 = 2
            java.lang.String[] r4 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L9d android.database.sqlite.SQLiteException -> La0
            java.lang.String r5 = "audience_id"
            r10 = 0
            r4[r10] = r5     // Catch: java.lang.Throwable -> L9d android.database.sqlite.SQLiteException -> La0
            java.lang.String r5 = "data"
            r11 = 1
            r4[r11] = r5     // Catch: java.lang.Throwable -> L9d android.database.sqlite.SQLiteException -> La0
            java.lang.String r5 = "app_id=? AND property_name=?"
            java.lang.String[] r6 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L9d android.database.sqlite.SQLiteException -> La0
            r6[r10] = r13     // Catch: java.lang.Throwable -> L9d android.database.sqlite.SQLiteException -> La0
            r6[r11] = r14     // Catch: java.lang.Throwable -> L9d android.database.sqlite.SQLiteException -> La0
            r14 = 0
            r7 = 0
            r8 = 0
            r3 = r4
            r4 = r5
            r5 = r6
            r6 = r14
            android.database.Cursor r14 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L9d android.database.sqlite.SQLiteException -> La0
            boolean r1 = r14.moveToFirst()     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            if (r1 != 0) goto L48
            java.util.Map r13 = java.util.Collections.emptyMap()     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            if (r14 == 0) goto L47
            r14.close()
        L47:
            return r13
        L48:
            byte[] r1 = r14.getBlob(r11)     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            com.google.android.gms.internal.measurement.D$a r2 = com.google.android.gms.internal.measurement.D.w()     // Catch: java.io.IOException -> L7d android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            com.google.android.gms.measurement.internal.ie.a(r2, r1)     // Catch: java.io.IOException -> L7d android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            com.google.android.gms.internal.measurement.D$a r2 = (com.google.android.gms.internal.measurement.D.a) r2     // Catch: java.io.IOException -> L7d android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            com.google.android.gms.internal.measurement.uc r1 = r2.j()     // Catch: java.io.IOException -> L7d android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            com.google.android.gms.internal.measurement.Jb r1 = (com.google.android.gms.internal.measurement.Jb) r1     // Catch: java.io.IOException -> L7d android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            com.google.android.gms.internal.measurement.D r1 = (com.google.android.gms.internal.measurement.D) r1     // Catch: java.io.IOException -> L7d android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            int r2 = r14.getInt(r10)     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            java.lang.Object r3 = r0.get(r3)     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            java.util.List r3 = (java.util.List) r3     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            if (r3 != 0) goto L79
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            r3.<init>()     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            r0.put(r2, r3)     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
        L79:
            r3.add(r1)     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            goto L8f
        L7d:
            r1 = move-exception
            com.google.android.gms.measurement.internal.wb r2 = r12.d()     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            com.google.android.gms.measurement.internal.yb r2 = r2.t()     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            java.lang.String r3 = "Failed to merge filter"
            java.lang.Object r4 = com.google.android.gms.measurement.internal.C0365wb.a(r13)     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            r2.a(r3, r4, r1)     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
        L8f:
            boolean r1 = r14.moveToNext()     // Catch: android.database.sqlite.SQLiteException -> L9b java.lang.Throwable -> Lb9
            if (r1 != 0) goto L48
            if (r14 == 0) goto L9a
            r14.close()
        L9a:
            return r0
        L9b:
            r0 = move-exception
            goto La2
        L9d:
            r13 = move-exception
            r14 = r9
            goto Lba
        La0:
            r0 = move-exception
            r14 = r9
        La2:
            com.google.android.gms.measurement.internal.wb r1 = r12.d()     // Catch: java.lang.Throwable -> Lb9
            com.google.android.gms.measurement.internal.yb r1 = r1.t()     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r2 = "Database error querying filters. appId"
            java.lang.Object r13 = com.google.android.gms.measurement.internal.C0365wb.a(r13)     // Catch: java.lang.Throwable -> Lb9
            r1.a(r2, r13, r0)     // Catch: java.lang.Throwable -> Lb9
            if (r14 == 0) goto Lb8
            r14.close()
        Lb8:
            return r9
        Lb9:
            r13 = move-exception
        Lba:
            if (r14 == 0) goto Lbf
            r14.close()
        Lbf:
            goto Lc1
        Lc0:
            throw r13
        Lc1:
            goto Lc0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.C0269d.g(java.lang.String, java.lang.String):java.util.Map");
    }

    /* JADX WARN: Can't wrap try/catch for region: R(8:0|2|(6:36|3|4|38|5|6)|(5:8|(3:10|11|12)(1:13)|30|31|32)|37|14|(3:16|17|18)(3:19|31|32)|(1:(0))) */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x00c3, code lost:
    
        r0 = e;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected final long h(java.lang.String r18, java.lang.String r19) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 233
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.C0269d.h(java.lang.String, java.lang.String):long");
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0257ae
    protected final boolean u() {
        return false;
    }

    public final void v() {
        s();
        w().setTransactionSuccessful();
    }

    final SQLiteDatabase w() {
        h();
        try {
            return this.l.getWritableDatabase();
        } catch (SQLiteException e2) {
            d().w().a("Error opening database", e2);
            throw e2;
        }
    }

    public final String x() throws Throwable {
        Throwable th;
        Cursor cursorRawQuery;
        try {
            cursorRawQuery = w().rawQuery("select app_id from queue order by has_realtime desc, rowid asc limit 1;", null);
            try {
                try {
                    if (!cursorRawQuery.moveToFirst()) {
                        if (cursorRawQuery != null) {
                            cursorRawQuery.close();
                        }
                        return null;
                    }
                    String string = cursorRawQuery.getString(0);
                    if (cursorRawQuery != null) {
                        cursorRawQuery.close();
                    }
                    return string;
                } catch (SQLiteException e2) {
                    e = e2;
                    d().t().a("Database error getting next bundle app id", e);
                    if (cursorRawQuery != null) {
                        cursorRawQuery.close();
                    }
                    return null;
                }
            } catch (Throwable th2) {
                th = th2;
            }
            th = th2;
        } catch (SQLiteException e3) {
            e = e3;
            cursorRawQuery = null;
        } catch (Throwable th3) {
            th = th3;
            cursorRawQuery = null;
        }
        if (cursorRawQuery != null) {
            cursorRawQuery.close();
        }
        throw th;
    }

    public final long y() {
        Cursor cursorRawQuery = null;
        try {
            try {
                cursorRawQuery = w().rawQuery("select rowid from raw_events order by rowid desc limit 1;", null);
                if (!cursorRawQuery.moveToFirst()) {
                    if (cursorRawQuery != null) {
                        cursorRawQuery.close();
                    }
                    return -1L;
                }
                long j2 = cursorRawQuery.getLong(0);
                if (cursorRawQuery != null) {
                    cursorRawQuery.close();
                }
                return j2;
            } catch (SQLiteException e2) {
                d().t().a("Error querying raw events", e2);
                if (cursorRawQuery != null) {
                    cursorRawQuery.close();
                }
                return -1L;
            }
        } catch (Throwable th) {
            if (cursorRawQuery != null) {
                cursorRawQuery.close();
            }
            throw th;
        }
    }
}
