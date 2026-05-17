package jp.co.ymm.android.ringtone.ui.preferences.top;

import android.widget.CompoundButton;
import jp.co.ymm.android.ringtone.util.o;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class f implements CompoundButton.OnCheckedChangeListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ RingTimePreference f3860a;

    f(RingTimePreference ringTimePreference) {
        this.f3860a = ringTimePreference;
    }

    @Override // android.widget.CompoundButton.OnCheckedChangeListener
    public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
        if (this.f3860a.f3846b.isChecked()) {
            this.f3860a.f3845a.setCurrent(o.N);
        }
        this.f3860a.f3845a.setEnabled(!this.f3860a.f3846b.isChecked());
    }
}
