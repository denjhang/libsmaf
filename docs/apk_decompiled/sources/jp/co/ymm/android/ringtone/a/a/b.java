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
public class b {
    public static Boolean a(String str) {
        return Boolean.valueOf(jp.co.ymm.android.ringtone.a.b.a("cgrp", "cid = ?", str) == 1);
    }

    public static Boolean a(String str, String str2) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("cid", str2);
        contentValues.put("tid", str);
        return Boolean.valueOf(jp.co.ymm.android.ringtone.a.b.a("cgrp", contentValues) != -1);
    }

    public static String a(Context context, ArrayList<Map<String, Object>> arrayList) {
        SQLiteDatabase writableDatabase = jp.co.ymm.android.ringtone.a.b.a().getWritableDatabase();
        String string = "";
        for (int i = 0; i < arrayList.size(); i++) {
            if (arrayList.get(i).get(a.f3469f).equals(a.f3465b)) {
                ArrayList arrayList2 = (ArrayList) arrayList.get(i).get(a.j);
                int i2 = 0;
                while (true) {
                    if (i2 < arrayList2.size()) {
                        g.a("Group ID: " + ((String) arrayList2.get(i2)));
                        Cursor cursorRawQuery = writableDatabase.rawQuery("select * from cgrp where cid = ?", new String[]{(String) arrayList2.get(i2)});
                        if (cursorRawQuery.getCount() > 0) {
                            cursorRawQuery.moveToFirst();
                            string = cursorRawQuery.getString(cursorRawQuery.getColumnIndex("tid"));
                            g.a("Find group: " + ((String) arrayList2.get(i2)));
                            cursorRawQuery.close();
                            break;
                        }
                        g.a("Find group: none");
                        cursorRawQuery.close();
                        i2++;
                    }
                }
            }
        }
        writableDatabase.close();
        g.a("Find toneId: " + string);
        return string;
    }

    public static ArrayList<Map<String, Object>> a(Activity activity, d dVar) {
        ArrayList<Map<String, Object>> arrayList = new ArrayList<>();
        SQLiteDatabase writableDatabase = jp.co.ymm.android.ringtone.a.b.a().getWritableDatabase();
        Cursor cursorRawQuery = writableDatabase.rawQuery("select * from cgrp", null);
        for (boolean zMoveToFirst = cursorRawQuery.moveToFirst(); zMoveToFirst; zMoveToFirst = cursorRawQuery.moveToNext()) {
            int columnIndex = cursorRawQuery.getColumnIndex("_id");
            int columnIndex2 = cursorRawQuery.getColumnIndex("cid");
            int columnIndex3 = cursorRawQuery.getColumnIndex("tid");
            String string = cursorRawQuery.getString(columnIndex2);
            Map<String, Object> mapB = a.b(activity, string);
            if (mapB.size() != 0) {
                jp.co.ymm.android.ringtone.b.c cVarA = dVar.a(cursorRawQuery.getString(columnIndex3));
                String str = cVarA != null ? cVarA.getAttributes().f3513a : "---";
                HashMap map = new HashMap();
                map.put("_id", Long.valueOf(cursorRawQuery.getLong(columnIndex)));
                map.put("cid", string);
                map.put("tid", cursorRawQuery.getString(columnIndex3));
                map.put("toneName", str);
                String str2 = a.f3467d;
                map.put(str2, (String) mapB.get(str2));
                arrayList.add(map);
            } else {
                g.a("delete status: " + a(string));
            }
        }
        cursorRawQuery.close();
        writableDatabase.close();
        return arrayList;
    }

    public static String b(String str) {
        String string;
        SQLiteDatabase writableDatabase = jp.co.ymm.android.ringtone.a.b.a().getWritableDatabase();
        Cursor cursorRawQuery = writableDatabase.rawQuery("select * from cgrp where cid = ?", new String[]{str});
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
        return jp.co.ymm.android.ringtone.a.b.a("cgrp", contentValues, "cid = ?", str2) != -1;
    }
}
