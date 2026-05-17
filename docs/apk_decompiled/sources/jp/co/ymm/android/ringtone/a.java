package jp.co.ymm.android.ringtone;

import android.content.SharedPreferences;
import android.view.View;
import android.widget.CheckBox;
import jp.co.ymm.android.ringtone.util.o;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a implements View.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ SharedPreferences f3463a;

    a(SharedPreferences sharedPreferences) {
        this.f3463a = sharedPreferences;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        boolean zIsChecked = ((CheckBox) view).isChecked();
        SharedPreferences.Editor editorEdit = this.f3463a.edit();
        editorEdit.putBoolean(o.Launch_Alert_Hidden.name(), zIsChecked);
        editorEdit.commit();
        jp.co.ymm.android.ringtone.util.g.a("save hidden: " + String.valueOf(zIsChecked));
    }
}
