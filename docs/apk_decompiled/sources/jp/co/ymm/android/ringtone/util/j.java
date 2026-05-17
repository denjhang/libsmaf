package jp.co.ymm.android.ringtone.util;

import android.content.SharedPreferences;
import android.view.View;
import android.widget.CheckBox;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class j implements View.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ SharedPreferences f3884a;

    j(SharedPreferences sharedPreferences) {
        this.f3884a = sharedPreferences;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        boolean zIsChecked = ((CheckBox) view).isChecked();
        SharedPreferences.Editor editorEdit = this.f3884a.edit();
        editorEdit.putBoolean(o.CarrierMail_Alert_Hidden.name(), zIsChecked);
        editorEdit.commit();
        g.a("save hidden: " + String.valueOf(zIsChecked));
    }
}
