package jp.co.ymm.android.ringtone.a.a;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.provider.ContactsContract;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.n;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static String f3464a = "0";

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public static String f3465b = "1";

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    public static String f3466c = "id";

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    public static String f3467d = "name";

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    public static String f3468e = "phonetic_name";

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    public static String f3469f = "in_visible_group";
    public static String g = "data1";
    public static String h = "phone_more";
    public static String i = "account_name";
    public static String j = "gid";

    public static ArrayList<Map<String, Object>> a(Context context) {
        ArrayList<Map<String, Object>> arrayList = new ArrayList<>();
        if (n.a(context, "android.permission.WRITE_EXTERNAL_STORAGE") && n.a(context, "android.permission.READ_CONTACTS")) {
            Cursor cursorQuery = context.getContentResolver().query(ContactsContract.Groups.CONTENT_SUMMARY_URI, new String[]{"_id", "title", "account_name", "summ_count"}, "deleted == 0 AND summ_count > 0", null, "account_name ASC, title ASC");
            if (cursorQuery.getCount() == 0) {
                return arrayList;
            }
            cursorQuery.moveToFirst();
            do {
                HashMap map = new HashMap();
                String string = cursorQuery.getString(cursorQuery.getColumnIndex("title")) != null ? cursorQuery.getString(cursorQuery.getColumnIndex("title")) : "";
                String string2 = cursorQuery.getString(cursorQuery.getColumnIndex("account_name")) != null ? cursorQuery.getString(cursorQuery.getColumnIndex("account_name")) : "";
                map.put(f3466c, cursorQuery.getString(cursorQuery.getColumnIndex("_id")));
                map.put(f3467d, string);
                map.put(i, string2);
                arrayList.add(map);
            } while (cursorQuery.moveToNext());
            cursorQuery.close();
        }
        return arrayList;
    }

    public static Map<String, Object> a(Context context, String str) {
        String str2;
        HashMap map = new HashMap();
        if (n.a(context, "android.permission.WRITE_EXTERNAL_STORAGE") && n.a(context, "android.permission.READ_CONTACTS")) {
            Cursor cursorQuery = context.getContentResolver().query(ContactsContract.Data.CONTENT_URI, new String[]{"contact_id", "data1", "data9", "data7"}, "mimetype = ? AND contact_id = ?", new String[]{"vnd.android.cursor.item/name", str}, "contact_id ASC");
            if (cursorQuery.getCount() == 0) {
                cursorQuery.close();
                return map;
            }
            cursorQuery.moveToFirst();
            if (cursorQuery.getString(cursorQuery.getColumnIndex("data9")) == null || cursorQuery.getString(cursorQuery.getColumnIndex("data9")).equals("")) {
                str2 = "";
            } else {
                str2 = "" + cursorQuery.getString(cursorQuery.getColumnIndex("data9"));
            }
            if (cursorQuery.getString(cursorQuery.getColumnIndex("data7")) != null && !cursorQuery.getString(cursorQuery.getColumnIndex("data7")).equals("")) {
                str2 = str2 + cursorQuery.getString(cursorQuery.getColumnIndex("data7"));
            }
            map.put(f3466c, cursorQuery.getString(cursorQuery.getColumnIndex("contact_id")));
            map.put(f3467d, cursorQuery.getString(cursorQuery.getColumnIndex("data1")));
            map.put(f3468e, str2);
            cursorQuery.close();
            Cursor cursorQuery2 = context.getContentResolver().query(ContactsContract.CommonDataKinds.Phone.CONTENT_URI, new String[]{"data1"}, "contact_id = ?", new String[]{str}, "_id ASC");
            if (cursorQuery2.getCount() == 0) {
                cursorQuery2.close();
                return map;
            }
            cursorQuery2.moveToFirst();
            map.put(g, cursorQuery2.getString(cursorQuery2.getColumnIndex("data1")));
            map.put(h, cursorQuery2.getCount() > 1 ? "1" : "0");
            cursorQuery2.close();
        }
        return map;
    }

    public static ArrayList<Map<String, Object>> b(Context context) {
        ArrayList<Map<String, Object>> arrayList = new ArrayList<>();
        if (n.a(context, "android.permission.WRITE_EXTERNAL_STORAGE") && n.a(context, "android.permission.READ_CONTACTS")) {
            Cursor cursorQuery = context.getContentResolver().query(ContactsContract.Data.CONTENT_URI, new String[]{"contact_id", "data1", "data9", "data8", "data7"}, "mimetype = ? ", new String[]{"vnd.android.cursor.item/name"}, " CASE WHEN IFNULL(data9, '') = '' THEN 1 ELSE 0  END, data9,  CASE WHEN IFNULL(data7, '') = '' THEN 1 ELSE 0  END, data7, data1");
            if (cursorQuery.getCount() == 0) {
                cursorQuery.close();
                return arrayList;
            }
            cursorQuery.moveToFirst();
            Cursor cursorQuery2 = context.getContentResolver().query(ContactsContract.CommonDataKinds.Phone.CONTENT_URI, new String[]{"contact_id"}, null, null, "contact_id ASC");
            if (cursorQuery2.getCount() == 0) {
                cursorQuery2.close();
                return arrayList;
            }
            cursorQuery2.moveToFirst();
            ArrayList arrayList2 = new ArrayList();
            do {
                arrayList2.add(cursorQuery2.getString(cursorQuery2.getColumnIndex("contact_id")));
            } while (cursorQuery2.moveToNext());
            cursorQuery2.close();
            g.a("Count All: " + cursorQuery.getCount());
            do {
                if (arrayList2.indexOf(cursorQuery.getString(cursorQuery.getColumnIndex("contact_id"))) != -1) {
                    HashMap map = new HashMap();
                    String string = cursorQuery.getString(cursorQuery.getColumnIndex("data1")) != null ? cursorQuery.getString(cursorQuery.getColumnIndex("data1")) : "";
                    map.put(f3466c, cursorQuery.getString(cursorQuery.getColumnIndex("contact_id")));
                    map.put(f3467d, string);
                    arrayList.add(map);
                }
            } while (cursorQuery.moveToNext());
            cursorQuery.close();
            g.a("Count: " + arrayList.size());
        }
        return arrayList;
    }

    public static Map<String, Object> b(Context context, String str) {
        Cursor cursorQuery;
        HashMap map = new HashMap();
        if (!n.a(context, "android.permission.WRITE_EXTERNAL_STORAGE") || !n.a(context, "android.permission.READ_CONTACTS") || (cursorQuery = context.getContentResolver().query(ContactsContract.Groups.CONTENT_URI, new String[]{"_id", "title", "account_name"}, "_id = ? AND deleted == ?", new String[]{str, "0"}, null)) == null) {
            return map;
        }
        if (cursorQuery.moveToFirst()) {
            map.put(f3466c, cursorQuery.getString(cursorQuery.getColumnIndex("_id")));
            map.put(f3467d, cursorQuery.getString(cursorQuery.getColumnIndex("title")));
            map.put(i, cursorQuery.getString(cursorQuery.getColumnIndex("account_name")));
        }
        cursorQuery.close();
        return map;
    }

    public static ArrayList<Map<String, Object>> c(Context context, String str) {
        ArrayList<Map<String, Object>> arrayList = new ArrayList<>();
        if (n.a(context, "android.permission.WRITE_EXTERNAL_STORAGE") && n.a(context, "android.permission.READ_CONTACTS")) {
            Cursor cursorQuery = context.getContentResolver().query(ContactsContract.Data.CONTENT_URI, new String[]{"contact_id", "display_name"}, "mimetype =? AND data1 = ?", new String[]{"vnd.android.cursor.item/group_membership", str}, "display_name ASC ");
            if (cursorQuery.getCount() == 0) {
                return arrayList;
            }
            cursorQuery.moveToFirst();
            do {
                HashMap map = new HashMap();
                map.put(f3466c, cursorQuery.getString(cursorQuery.getColumnIndex("contact_id")));
                map.put(f3467d, cursorQuery.getString(cursorQuery.getColumnIndex("display_name")));
                arrayList.add(map);
            } while (cursorQuery.moveToNext());
            cursorQuery.close();
        }
        return arrayList;
    }

    public static ArrayList<Map<String, Object>> d(Context context, String str) {
        ArrayList<Map<String, Object>> arrayList = new ArrayList<>();
        if (n.a(context, "android.permission.WRITE_EXTERNAL_STORAGE") && n.a(context, "android.permission.READ_CONTACTS")) {
            Cursor cursorQuery = context.getContentResolver().query(Uri.withAppendedPath(ContactsContract.PhoneLookup.CONTENT_FILTER_URI, Uri.encode(str)), null, null, null, "_id ASC");
            g.a("COUNT: " + cursorQuery.getCount());
            if (cursorQuery.getCount() == 0) {
                return arrayList;
            }
            cursorQuery.moveToFirst();
            String string = "";
            do {
                if (string.equals(cursorQuery.getString(cursorQuery.getColumnIndex("_id")))) {
                    g.a("Skip: " + cursorQuery.getString(cursorQuery.getColumnIndex("_id")));
                } else {
                    string = cursorQuery.getString(cursorQuery.getColumnIndex("_id"));
                    HashMap map = new HashMap();
                    map.put(f3466c, cursorQuery.getString(cursorQuery.getColumnIndex("_id")));
                    g.a("KEY_ID: " + cursorQuery.getString(cursorQuery.getColumnIndex("_id")));
                    Cursor cursorQuery2 = context.getContentResolver().query(ContactsContract.Data.CONTENT_URI, new String[]{"data1"}, "mimetype=? AND contact_id=?", new String[]{"vnd.android.cursor.item/group_membership", cursorQuery.getString(cursorQuery.getColumnIndex("_id"))}, "data1 ASC");
                    if (cursorQuery2.getCount() == 0) {
                        map.put(f3469f, f3464a);
                        g.a("IN_VISIBLE_GROUP: " + f3464a);
                        cursorQuery2.close();
                    } else {
                        map.put(f3469f, f3465b);
                        g.a("IN_VISIBLE_GROUP: " + f3465b);
                        cursorQuery2.moveToFirst();
                        ArrayList arrayList2 = new ArrayList();
                        String string2 = "";
                        do {
                            g.a("GROUP_ROW_ID: " + cursorQuery2.getString(cursorQuery2.getColumnIndex("data1")));
                            if (!string2.equals(cursorQuery2.getString(cursorQuery2.getColumnIndex("data1")))) {
                                string2 = cursorQuery2.getString(cursorQuery2.getColumnIndex("data1"));
                                arrayList2.add(cursorQuery2.getString(cursorQuery2.getColumnIndex("data1")));
                            }
                        } while (cursorQuery2.moveToNext());
                        cursorQuery2.close();
                        map.put(j, arrayList2);
                    }
                    arrayList.add(map);
                }
            } while (cursorQuery.moveToNext());
            cursorQuery.close();
        }
        return arrayList;
    }
}
