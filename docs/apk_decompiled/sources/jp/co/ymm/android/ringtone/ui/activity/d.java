package jp.co.ymm.android.ringtone.ui.activity;

import android.telephony.PhoneStateListener;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class d extends PhoneStateListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ AlarmControlActivity f3784a;

    d(AlarmControlActivity alarmControlActivity) {
        this.f3784a = alarmControlActivity;
    }

    @Override // android.telephony.PhoneStateListener
    public void onCallStateChanged(int i, String str) {
        g.d("onCallStateChanged(state:" + i + ",number:" + str + ")");
        if (i != 0) {
            if (i == 1) {
                if (this.f3784a.f3767b) {
                    this.f3784a.g();
                }
                this.f3784a.finish();
            } else if (i != 2) {
                g.g("unknown state: " + i);
            }
        }
    }
}
