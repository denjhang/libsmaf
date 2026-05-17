package jp.co.ymm.android.ringtone.util;

import android.app.Activity;
import android.content.Context;
import android.content.SharedPreferences;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class BookmarkAgent extends Activity {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f3864a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private String f3865b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private String f3866c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private SharedPreferences f3867d;

    public BookmarkAgent(Context context) {
        this.f3864a = "";
        this.f3865b = "";
        this.f3866c = "";
        this.f3867d = context.getSharedPreferences(o.L, 0);
        this.f3864a = this.f3867d.getString(o.Site_Name.name(), "");
        this.f3865b = this.f3867d.getString(o.Site_Url.name(), "");
        this.f3866c = this.f3867d.getString(o.Return_Url.name(), "");
    }

    public boolean a() {
        SharedPreferences.Editor editorEdit = this.f3867d.edit();
        editorEdit.remove(o.Site_Name.name());
        editorEdit.remove(o.Site_Url.name());
        editorEdit.remove(o.Return_Url.name());
        return editorEdit.commit();
    }

    public boolean a(String str, String str2, String str3) {
        this.f3864a = str;
        this.f3865b = str2;
        if (str3 == null || str3.length() == 0) {
            str3 = str2;
        }
        this.f3866c = str3;
        SharedPreferences.Editor editorEdit = this.f3867d.edit();
        editorEdit.putString(o.Site_Name.name(), str);
        editorEdit.putString(o.Site_Url.name(), str2);
        editorEdit.putString(o.Return_Url.name(), str3);
        return editorEdit.commit();
    }

    public String b() {
        String str = this.f3866c;
        return (str == null || str.length() == 0) ? this.f3865b : this.f3866c;
    }

    public String c() {
        return this.f3864a;
    }

    public String d() {
        return this.f3865b;
    }
}
