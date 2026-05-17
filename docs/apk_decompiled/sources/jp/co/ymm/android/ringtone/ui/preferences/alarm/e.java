package jp.co.ymm.android.ringtone.ui.preferences.alarm;

import android.widget.TimePicker;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class e implements TimePicker.OnTimeChangedListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ TimePickerPreference f3833a;

    e(TimePickerPreference timePickerPreference) {
        this.f3833a = timePickerPreference;
    }

    @Override // android.widget.TimePicker.OnTimeChangedListener
    public void onTimeChanged(TimePicker timePicker, int i, int i2) {
        this.f3833a.getDialog().setTitle(this.f3833a.b(i, i2));
    }
}
