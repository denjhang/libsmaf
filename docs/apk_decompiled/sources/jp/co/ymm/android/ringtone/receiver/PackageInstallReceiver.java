package jp.co.ymm.android.ringtone.receiver;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class PackageInstallReceiver extends BroadcastReceiver {
    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        if (intent.getAction().equals("android.intent.action.PACKAGE_REPLACED")) {
            g.a("onReceive ACTION_PACKAGE_REPLACED");
        }
    }
}
