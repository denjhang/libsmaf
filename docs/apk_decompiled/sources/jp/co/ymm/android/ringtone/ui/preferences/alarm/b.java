package jp.co.ymm.android.ringtone.ui.preferences.alarm;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import java.util.ArrayList;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b extends ArrayAdapter<String> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ AlarmRepeatPreference f3830a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    b(AlarmRepeatPreference alarmRepeatPreference, Context context, int i, ArrayList<String> arrayList) {
        super(context, i, arrayList);
        this.f3830a = alarmRepeatPreference;
    }

    @Override // android.widget.ArrayAdapter, android.widget.Adapter
    public View getView(int i, View view, ViewGroup viewGroup) {
        View view2 = super.getView(i, view, viewGroup);
        view2.setEnabled(!this.f3830a.f3812b.isChecked());
        return view2;
    }
}
