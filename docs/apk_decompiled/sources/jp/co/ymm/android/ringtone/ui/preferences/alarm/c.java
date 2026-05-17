package jp.co.ymm.android.ringtone.ui.preferences.alarm;

import android.widget.CompoundButton;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c implements CompoundButton.OnCheckedChangeListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ AlarmRepeatPreference f3831a;

    c(AlarmRepeatPreference alarmRepeatPreference) {
        this.f3831a = alarmRepeatPreference;
    }

    @Override // android.widget.CompoundButton.OnCheckedChangeListener
    public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
        this.f3831a.a(z);
    }
}
