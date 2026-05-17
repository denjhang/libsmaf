package jp.co.ymm.android.ringtone.c.a.b;

import android.view.View;
import android.view.ViewParent;
import android.widget.ToggleButton;
import jp.co.ymm.android.ringtone.alarm.AlarmItem;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class h implements View.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ i f3564a;

    h(i iVar) {
        this.f3564a = iVar;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) throws Throwable {
        ToggleButton toggleButton = (ToggleButton) view;
        ViewParent parent = toggleButton.getParent();
        while (!(parent instanceof jp.co.ymm.android.ringtone.ui.customview.b)) {
            parent = parent.getParent();
        }
        this.f3564a.a((AlarmItem) ((jp.co.ymm.android.ringtone.ui.customview.b) parent).getTag(), toggleButton.isChecked());
    }
}
