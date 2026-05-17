package jp.co.ymm.android.ringtone.ui.preferences.alarm;

import android.widget.CompoundButton;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class d implements CompoundButton.OnCheckedChangeListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ AlarmSnoozePreference f3832a;

    d(AlarmSnoozePreference alarmSnoozePreference) {
        this.f3832a = alarmSnoozePreference;
    }

    @Override // android.widget.CompoundButton.OnCheckedChangeListener
    public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
        if (this.f3832a.f3817c.isChecked()) {
            AlarmSnoozePreference alarmSnoozePreference = this.f3832a;
            alarmSnoozePreference.f3818d.setCurrent(alarmSnoozePreference.f3819e);
        }
        AlarmSnoozePreference alarmSnoozePreference2 = this.f3832a;
        alarmSnoozePreference2.f3818d.setEnabled(alarmSnoozePreference2.f3817c.isChecked());
    }
}
