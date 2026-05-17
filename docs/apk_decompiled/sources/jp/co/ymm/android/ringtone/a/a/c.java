package jp.co.ymm.android.ringtone.a.a;

import android.app.Activity;
import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import jp.co.ymm.android.ringtone.b.d;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class c {
    public static Boolean a(String str, String str2) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("cid", str2);
        contentValues.put("tid", str);
        return Boolean.valueOf(jp.co.ymm.android.ringtone.a.b.a("cidv", contentValues) != -1);
    }

    public static String a(Context context, ArrayList<Map<String, Object>> arrayList) {
        String str;
        SQLiteDatabase writableDatabase = jp.co.ymm.android.ringtone.a.b.a().getWritableDatabase();
        String string = "";
        for (int i = 0; i < arrayList.size(); i++) {
            Cursor cursorRawQuery = writableDatabase.rawQuery("select * from cidv where cid = ?", new String[]{(String) arrayList.get(i).get(a.f3466c)});
            if (cursorRawQuery.getCount() > 0) {
                cursorRawQuery.moveToFirst();
                string = cursorRawQuery.getString(cursorRawQuery.getColumnIndex("tid"));
                str = "Find invidual: " + ((String) arrayList.get(i).get(a.f3466c));
            } else {
                str = "Find invidual: none";
            }
            g.a(str);
            cursorRawQuery.close();
        }
        writableDatabase.close();
        g.a("Find toneId: " + string);
        return string;
    }

    public static ArrayList<Map<String, Object>> a(Activity activity, d dVar) {
        ArrayList<Map<String, Object>> arrayList = new ArrayList<>();
        SQLiteDatabase writableDatabase = jp.co.ymm.android.ringtone.a.b.a().getWritableDatabase();
        Cursor cursorRawQuery = writableDatabase.rawQuery("select * from cidv", null);
        for (boolean zMoveToFirst = cursorRawQuery.moveToFirst(); zMoveToFirst; zMoveToFirst = cursorRawQuery.moveToNext()) {
            int columnIndex = cursorRawQuery.getColumnIndex("_id");
            int columnIndex2 = cursorRawQuery.getColumnIndex("cid");
            int columnIndex3 = cursorRawQuery.getColumnIndex("tid");
            String string = cursorRawQuery.getString(columnIndex2);
            Map<String, Object> mapA = a.a(activity, string);
            if (mapA.size() != 0) {
                jp.co.ymm.android.ringtone.b.c cVarA = dVar.a(cursorRawQuery.getString(columnIndex3));
                String str = cVarA != null ? cVarA.getAttributes().f3513a : "---";
                HashMap map = new HashMap();
                map.put("_id", Long.valueOf(cursorRawQuery.getLong(columnIndex)));
                map.put("cid", string);
                map.put("tid", cursorRawQuery.getString(columnIndex3));
                map.put("toneName", str);
                String str2 = a.f3467d;
                map.put(str2, (String) mapA.get(str2));
                arrayList.add(map);
            } else {
                g.a("delete status: " + a(string));
            }
        }
        cursorRawQuery.close();
        writableDatabase.close();
        return arrayList;
    }

    public static boolean a(String str) {
        return jp.co.ymm.android.ringtone.a.b.a("cidv", "cid = ?", str) == 1;
    }

    public static String b(String str) {
        String string;
        SQLiteDatabase writableDatabase = jp.co.ymm.android.ringtone.a.b.a().getWritableDatabase();
        Cursor cursorRawQuery = writableDatabase.rawQuery("select * from cidv where cid = ?", new String[]{str});
        if (cursorRawQuery.getCount() > 0) {
            cursorRawQuery.moveToFirst();
            string = cursorRawQuery.getString(cursorRawQuery.getColumnIndex("tid"));
        } else {
            string = "";
        }
        writableDatabase.close();
        return string;
    }

    public static boolean b(String str, String str2) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("tid", str);
        return jp.co.ymm.android.ringtone.a.b.a("cidv", contentValues, "cid = ?", str2) != -1;
    }
}
