package jp.co.ymm.android.ringtone.ui.preferences.top;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class g extends BroadcastReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ RingtoneVolumePreference f3861a;

    g(RingtoneVolumePreference ringtoneVolumePreference) {
        this.f3861a = ringtoneVolumePreference;
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        jp.co.ymm.android.ringtone.util.g.d("received: Intent.ACTION_CLOSE_SYSTEM_DIALOGS");
        this.f3861a.a();
        this.f3861a.c();
    }
}
