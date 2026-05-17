package jp.co.ymm.android.ringtone.a;

import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a extends SQLiteOpenHelper {
    public a(Context context) {
        super(context, "ymmRingtone.db", (SQLiteDatabase.CursorFactory) null, 1);
    }

    public String a(SQLiteDatabase sQLiteDatabase) {
        try {
            Cursor cursorRawQuery = sQLiteDatabase.rawQuery("SELECT value FROM properties WHERE key = 'install_key';", null);
            String string = cursorRawQuery.moveToFirst() ? cursorRawQuery.getString(0) : null;
            cursorRawQuery.close();
            sQLiteDatabase.close();
            return string;
        } catch (Exception unused) {
            sQLiteDatabase.close();
            return null;
        } catch (Throwable th) {
            sQLiteDatabase.close();
            throw th;
        }
    }

    public Boolean b(SQLiteDatabase sQLiteDatabase) {
        String strA = a(sQLiteDatabase);
        return Boolean.valueOf(strA != null ? strA.equals("app_pass") : false);
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onCreate(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.beginTransaction();
        try {
            sQLiteDatabase.execSQL("create table properties(key text,value text,update_time long);");
            sQLiteDatabase.setTransactionSuccessful();
        } finally {
            sQLiteDatabase.endTransaction();
        }
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
    }
}
