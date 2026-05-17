package jp.co.ymm.android.ringtone.ui.preferences.alarm;

import android.view.View;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a implements View.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ AlarmRepeatPreference f3829a;

    a(AlarmRepeatPreference alarmRepeatPreference) {
        this.f3829a = alarmRepeatPreference;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        this.f3829a.f3812b.toggle();
    }
}
