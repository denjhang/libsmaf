package jp.co.ymm.android.ringtone.ui.activity;

import android.widget.CompoundButton;
import jp.co.ymm.android.ringtone.util.o;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class f implements CompoundButton.OnCheckedChangeListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ BaseActivity f3787a;

    f(BaseActivity baseActivity) {
        this.f3787a = baseActivity;
    }

    @Override // android.widget.CompoundButton.OnCheckedChangeListener
    public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
        z.b(this.f3787a.getApplicationContext(), o.Play_Key_Heads_Up.name(), z);
    }
}
