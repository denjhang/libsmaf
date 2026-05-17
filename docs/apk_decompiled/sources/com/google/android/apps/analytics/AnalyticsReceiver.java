package com.google.android.apps.analytics;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.util.Log;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class AnalyticsReceiver extends BroadcastReceiver {
    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        String stringExtra = intent.getStringExtra("referrer");
        if (!"com.android.vending.INSTALL_REFERRER".equals(intent.getAction()) || stringExtra == null) {
            return;
        }
        Log.i("GoogleAnalyticsTracker", "referrer=" + stringExtra);
        if (new i(context).a(stringExtra)) {
            Log.d("GoogleAnalyticsTracker", "Referrer store attemped succeeded.");
        } else {
            Log.w("GoogleAnalyticsTracker", "Referrer store attempt failed.");
        }
    }
}
