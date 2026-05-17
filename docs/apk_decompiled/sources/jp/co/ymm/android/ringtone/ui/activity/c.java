package jp.co.ymm.android.ringtone.ui.activity;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c extends BroadcastReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ AlarmControlActivity f3783a;

    c(AlarmControlActivity alarmControlActivity) {
        this.f3783a = alarmControlActivity;
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        g.a("" + "jp.co.ymm.android.ringtone.event.STOPPED".equals(intent.getAction()));
        if (this.f3783a.f3767b) {
            this.f3783a.g();
        }
        this.f3783a.finish();
    }
}
