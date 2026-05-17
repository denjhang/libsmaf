package jp.co.ymm.android.ringtone.c.a.b;

import android.content.Context;
import android.text.TextUtils;
import android.text.format.DateFormat;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.ToggleButton;
import java.util.List;
import jp.co.ymm.android.ringtone.alarm.AlarmItem;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class e extends ArrayAdapter<AlarmItem> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ i f3561a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(i iVar, Context context, List<AlarmItem> list) {
        super(context, 0, list);
        this.f3561a = iVar;
    }

    @Override // android.widget.ArrayAdapter, android.widget.Adapter
    public View getView(int i, View view, ViewGroup viewGroup) {
        AlarmItem item = getItem(i);
        jp.co.ymm.android.ringtone.ui.customview.b bVarA = (jp.co.ymm.android.ringtone.ui.customview.b) view;
        if (bVarA == null) {
            bVarA = this.f3561a.a(item.p());
        }
        bVarA.setTag(item);
        String str = DateFormat.getTimeFormat(this.f3561a.getActivity()).format(item.l());
        String strA = jp.co.ymm.android.ringtone.alarm.b.a(getContext(), item.c());
        String strG = item.g();
        ((ToggleButton) bVarA.findViewById(2131165184)).setEnabled(item.n() || !TextUtils.isEmpty(item.m()));
        bVarA.a(str, strA, strG);
        bVarA.setChecked(item.p());
        return bVarA;
    }
}
