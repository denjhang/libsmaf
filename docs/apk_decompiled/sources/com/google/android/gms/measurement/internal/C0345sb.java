package com.google.android.gms.measurement.internal;

import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteException;
import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.sb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0345sb extends AbstractC0266cb {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final C0360vb f2397c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private boolean f2398d;

    C0345sb(_b _bVar) {
        super(_bVar);
        this.f2397c = new C0360vb(this, e(), "google_app_measurement_local.db");
    }

    private final SQLiteDatabase E() {
        if (this.f2398d) {
            return null;
        }
        SQLiteDatabase writableDatabase = this.f2397c.getWritableDatabase();
        if (writableDatabase != null) {
            return writableDatabase;
        }
        this.f2398d = true;
        return null;
    }

    private final boolean F() {
        return e().getDatabasePath("google_app_measurement_local.db").exists();
    }

    private static long a(SQLiteDatabase sQLiteDatabase) {
        Cursor cursorQuery = null;
        try {
            cursorQuery = sQLiteDatabase.query("messages", new String[]{"rowid"}, "type=?", new String[]{"3"}, null, null, "rowid desc", "1");
            if (cursorQuery.moveToFirst()) {
                return cursorQuery.getLong(0);
            }
            if (cursorQuery == null) {
                return -1L;
            }
            cursorQuery.close();
            return -1L;
        } finally {
            if (cursorQuery != null) {
                cursorQuery.close();
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:106:0x012e A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:110:0x012e A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:61:0x00f6  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x00fb  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x0111 A[PHI: r7 r10
  0x0111: PHI (r7v4 int) = (r7v2 int), (r7v1 int) binds: [B:72:0x010f, B:79:0x012b] A[DONT_GENERATE, DONT_INLINE]
  0x0111: PHI (r10v5 android.database.sqlite.SQLiteDatabase) = (r10v3 android.database.sqlite.SQLiteDatabase), (r10v6 android.database.sqlite.SQLiteDatabase) binds: [B:72:0x010f, B:79:0x012b] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:78:0x0128  */
    /* JADX WARN: Removed duplicated region for block: B:85:0x0138  */
    /* JADX WARN: Removed duplicated region for block: B:87:0x013d  */
    /* JADX WARN: Removed duplicated region for block: B:94:0x00dd A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r13v0 */
    /* JADX WARN: Type inference failed for: r13v1 */
    /* JADX WARN: Type inference failed for: r13v10 */
    /* JADX WARN: Type inference failed for: r13v2, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r13v3, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r13v4 */
    /* JADX WARN: Type inference failed for: r13v5 */
    /* JADX WARN: Type inference failed for: r13v6 */
    /* JADX WARN: Type inference failed for: r13v7, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r13v8 */
    /* JADX WARN: Type inference failed for: r13v9 */
    /* JADX WARN: Type inference failed for: r3v0 */
    /* JADX WARN: Type inference failed for: r3v1, types: [boolean, int] */
    /* JADX WARN: Type inference failed for: r3v10 */
    /* JADX WARN: Type inference failed for: r8v1, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r8v12 */
    /* JADX WARN: Type inference failed for: r8v13 */
    /* JADX WARN: Type inference failed for: r8v14 */
    /* JADX WARN: Type inference failed for: r8v15 */
    /* JADX WARN: Type inference failed for: r8v16 */
    /* JADX WARN: Type inference failed for: r8v3, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r8v4 */
    /* JADX WARN: Type inference failed for: r8v5 */
    /* JADX WARN: Type inference failed for: r8v6 */
    /* JADX WARN: Type inference failed for: r8v7 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private final boolean a(int r18, byte[] r19) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 336
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.C0345sb.a(int, byte[]):boolean");
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0266cb
    protected final boolean A() {
        return false;
    }

    public final void B() {
        a();
        h();
        try {
            int iDelete = E().delete("messages", null, null) + 0;
            if (iDelete > 0) {
                d().B().a("Reset local analytics data. records", Integer.valueOf(iDelete));
            }
        } catch (SQLiteException e2) {
            d().t().a("Error resetting local analytics data. error", e2);
        }
    }

    public final boolean C() {
        return a(3, new byte[0]);
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x006f A[PHI: r4
  0x006f: PHI (r4v4 int) = (r4v1 int), (r4v2 int), (r4v1 int) binds: [B:37:0x0081, B:33:0x006d, B:30:0x0066] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final boolean D() {
        /*
            r11 = this;
            java.lang.String r0 = "Error deleting app launch break from local database"
            r11.h()
            r11.a()
            boolean r1 = r11.f2398d
            r2 = 0
            if (r1 == 0) goto Le
            return r2
        Le:
            boolean r1 = r11.F()
            if (r1 != 0) goto L15
            return r2
        L15:
            r1 = 5
            r3 = 0
            r4 = 5
        L18:
            if (r3 >= r1) goto L8d
            r5 = 0
            r6 = 1
            android.database.sqlite.SQLiteDatabase r5 = r11.E()     // Catch: java.lang.Throwable -> L49 android.database.sqlite.SQLiteException -> L4b android.database.sqlite.SQLiteDatabaseLockedException -> L67 android.database.sqlite.SQLiteFullException -> L73
            if (r5 != 0) goto L2a
            r11.f2398d = r6     // Catch: java.lang.Throwable -> L49 android.database.sqlite.SQLiteException -> L4b android.database.sqlite.SQLiteDatabaseLockedException -> L67 android.database.sqlite.SQLiteFullException -> L73
            if (r5 == 0) goto L29
            r5.close()
        L29:
            return r2
        L2a:
            r5.beginTransaction()     // Catch: java.lang.Throwable -> L49 android.database.sqlite.SQLiteException -> L4b android.database.sqlite.SQLiteDatabaseLockedException -> L67 android.database.sqlite.SQLiteFullException -> L73
            java.lang.String r7 = "messages"
            java.lang.String r8 = "type == ?"
            java.lang.String[] r9 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L49 android.database.sqlite.SQLiteException -> L4b android.database.sqlite.SQLiteDatabaseLockedException -> L67 android.database.sqlite.SQLiteFullException -> L73
            r10 = 3
            java.lang.String r10 = java.lang.Integer.toString(r10)     // Catch: java.lang.Throwable -> L49 android.database.sqlite.SQLiteException -> L4b android.database.sqlite.SQLiteDatabaseLockedException -> L67 android.database.sqlite.SQLiteFullException -> L73
            r9[r2] = r10     // Catch: java.lang.Throwable -> L49 android.database.sqlite.SQLiteException -> L4b android.database.sqlite.SQLiteDatabaseLockedException -> L67 android.database.sqlite.SQLiteFullException -> L73
            r5.delete(r7, r8, r9)     // Catch: java.lang.Throwable -> L49 android.database.sqlite.SQLiteException -> L4b android.database.sqlite.SQLiteDatabaseLockedException -> L67 android.database.sqlite.SQLiteFullException -> L73
            r5.setTransactionSuccessful()     // Catch: java.lang.Throwable -> L49 android.database.sqlite.SQLiteException -> L4b android.database.sqlite.SQLiteDatabaseLockedException -> L67 android.database.sqlite.SQLiteFullException -> L73
            r5.endTransaction()     // Catch: java.lang.Throwable -> L49 android.database.sqlite.SQLiteException -> L4b android.database.sqlite.SQLiteDatabaseLockedException -> L67 android.database.sqlite.SQLiteFullException -> L73
            if (r5 == 0) goto L48
            r5.close()
        L48:
            return r6
        L49:
            r0 = move-exception
            goto L87
        L4b:
            r7 = move-exception
            if (r5 == 0) goto L57
            boolean r8 = r5.inTransaction()     // Catch: java.lang.Throwable -> L49
            if (r8 == 0) goto L57
            r5.endTransaction()     // Catch: java.lang.Throwable -> L49
        L57:
            com.google.android.gms.measurement.internal.wb r8 = r11.d()     // Catch: java.lang.Throwable -> L49
            com.google.android.gms.measurement.internal.yb r8 = r8.t()     // Catch: java.lang.Throwable -> L49
            r8.a(r0, r7)     // Catch: java.lang.Throwable -> L49
            r11.f2398d = r6     // Catch: java.lang.Throwable -> L49
            if (r5 == 0) goto L84
            goto L6f
        L67:
            long r6 = (long) r4     // Catch: java.lang.Throwable -> L49
            android.os.SystemClock.sleep(r6)     // Catch: java.lang.Throwable -> L49
            int r4 = r4 + 20
            if (r5 == 0) goto L84
        L6f:
            r5.close()
            goto L84
        L73:
            r7 = move-exception
            com.google.android.gms.measurement.internal.wb r8 = r11.d()     // Catch: java.lang.Throwable -> L49
            com.google.android.gms.measurement.internal.yb r8 = r8.t()     // Catch: java.lang.Throwable -> L49
            r8.a(r0, r7)     // Catch: java.lang.Throwable -> L49
            r11.f2398d = r6     // Catch: java.lang.Throwable -> L49
            if (r5 == 0) goto L84
            goto L6f
        L84:
            int r3 = r3 + 1
            goto L18
        L87:
            if (r5 == 0) goto L8c
            r5.close()
        L8c:
            throw r0
        L8d:
            com.google.android.gms.measurement.internal.wb r0 = r11.d()
            com.google.android.gms.measurement.internal.yb r0 = r0.w()
            java.lang.String r1 = "Error deleting app launch break from local database in reasonable time"
            r0.a(r1)
            return r2
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.C0345sb.D():boolean");
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:124:0x01fc  */
    /* JADX WARN: Removed duplicated region for block: B:126:0x0201  */
    /* JADX WARN: Removed duplicated region for block: B:134:0x0211  */
    /* JADX WARN: Removed duplicated region for block: B:136:0x0216  */
    /* JADX WARN: Removed duplicated region for block: B:143:0x0230  */
    /* JADX WARN: Removed duplicated region for block: B:145:0x0235  */
    /* JADX WARN: Removed duplicated region for block: B:150:0x0243  */
    /* JADX WARN: Removed duplicated region for block: B:152:0x0248  */
    /* JADX WARN: Removed duplicated region for block: B:168:0x01e4 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:184:0x0238 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:186:0x0238 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:188:0x0238 A[SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r10v0 */
    /* JADX WARN: Type inference failed for: r10v1 */
    /* JADX WARN: Type inference failed for: r10v11, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r10v15 */
    /* JADX WARN: Type inference failed for: r10v16 */
    /* JADX WARN: Type inference failed for: r10v2, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r10v3 */
    /* JADX WARN: Type inference failed for: r10v4, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r10v5 */
    /* JADX WARN: Type inference failed for: r10v6 */
    /* JADX WARN: Type inference failed for: r3v0 */
    /* JADX WARN: Type inference failed for: r3v1, types: [java.util.List<com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable>] */
    /* JADX WARN: Type inference failed for: r3v11, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r3v13 */
    /* JADX WARN: Type inference failed for: r3v14, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r3v18 */
    /* JADX WARN: Type inference failed for: r3v23 */
    /* JADX WARN: Type inference failed for: r3v26 */
    /* JADX WARN: Type inference failed for: r3v27 */
    /* JADX WARN: Type inference failed for: r3v4 */
    /* JADX WARN: Type inference failed for: r3v5 */
    /* JADX WARN: Type inference failed for: r3v9 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.util.List<com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable> a(int r25) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 603
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.C0345sb.a(int):java.util.List");
    }

    @Override // com.google.android.gms.measurement.internal.Db, com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ void a() {
        super.a();
    }

    public final boolean a(zzan zzanVar) {
        Parcel parcelObtain = Parcel.obtain();
        zzanVar.writeToParcel(parcelObtain, 0);
        byte[] bArrMarshall = parcelObtain.marshall();
        parcelObtain.recycle();
        if (bArrMarshall.length <= 131072) {
            return a(0, bArrMarshall);
        }
        d().w().a("Event is too long for local database. Sending event directly to service");
        return false;
    }

    public final boolean a(zzkj zzkjVar) {
        Parcel parcelObtain = Parcel.obtain();
        zzkjVar.writeToParcel(parcelObtain, 0);
        byte[] bArrMarshall = parcelObtain.marshall();
        parcelObtain.recycle();
        if (bArrMarshall.length <= 131072) {
            return a(1, bArrMarshall);
        }
        d().w().a("User property too long for local database. Sending directly to service");
        return false;
    }

    public final boolean a(zzv zzvVar) {
        k();
        byte[] bArrA = le.a((Parcelable) zzvVar);
        if (bArrA.length <= 131072) {
            return a(2, bArrA);
        }
        d().w().a("Conditional user property too long for local database. Sending directly to service");
        return false;
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Xb c() {
        return super.c();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ C0365wb d() {
        return super.d();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Context e() {
        return super.e();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ ye f() {
        return super.f();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ com.google.android.gms.common.util.e g() {
        return super.g();
    }

    @Override // com.google.android.gms.measurement.internal.Db, com.google.android.gms.measurement.internal.C0361vc
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
}
