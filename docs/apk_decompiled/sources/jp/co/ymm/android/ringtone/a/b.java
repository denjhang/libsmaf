package jp.co.ymm.android.ringtone.a;

import android.content.ContentValues;
import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class b extends SQLiteOpenHelper {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static b f3470a;

    public b(Context context) {
        super(context, "contacts.db", (SQLiteDatabase.CursorFactory) null, 1);
    }

    public static long a(String str, ContentValues contentValues) {
        SQLiteDatabase writableDatabase = f3470a.getWritableDatabase();
        writableDatabase.beginTransaction();
        try {
            long jInsert = writableDatabase.insert(str, null, contentValues);
            writableDatabase.setTransactionSuccessful();
            writableDatabase.endTransaction();
            writableDatabase.close();
            return jInsert;
        } catch (Throwable th) {
            writableDatabase.endTransaction();
            throw th;
        }
    }

    public static long a(String str, ContentValues contentValues, String str2, String str3) {
        SQLiteDatabase writableDatabase = f3470a.getWritableDatabase();
        writableDatabase.beginTransaction();
        try {
            int iUpdate = writableDatabase.update(str, contentValues, str2, new String[]{str3});
            writableDatabase.setTransactionSuccessful();
            writableDatabase.endTransaction();
            writableDatabase.close();
            return iUpdate;
        } catch (Throwable th) {
            writableDatabase.endTransaction();
            throw th;
        }
    }

    public static long a(String str, String str2, String str3) {
        SQLiteDatabase writableDatabase = f3470a.getWritableDatabase();
        writableDatabase.beginTransaction();
        try {
            int iDelete = writableDatabase.delete(str, str2, new String[]{str3});
            if (iDelete == 1) {
                writableDatabase.setTransactionSuccessful();
            }
            writableDatabase.endTransaction();
            writableDatabase.close();
            return iDelete;
        } catch (Throwable th) {
            writableDatabase.endTransaction();
            throw th;
        }
    }

    public static b a() {
        b bVar = f3470a;
        if (bVar == null) {
            return null;
        }
        return bVar;
    }

    public static void a(Context context) {
        if (f3470a == null) {
            f3470a = new b(context);
        }
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onCreate(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("create table cidv (_id integer primary key autoincrement, cid numeric not null unique, tid text not null)");
        sQLiteDatabase.execSQL("create table cgrp (_id integer primary key autoincrement, cid numeric not null unique, tid text not null)");
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
    }
}
