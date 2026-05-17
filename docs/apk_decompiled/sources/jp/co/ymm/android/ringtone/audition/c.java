package jp.co.ymm.android.ringtone.audition;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c extends BroadcastReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ PreviewService f3500a;

    c(PreviewService previewService) {
        this.f3500a = previewService;
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        g.a("jp.co.ymm.android.ringtone.event.STOPPED".equals(intent.getAction()));
        this.f3500a.a();
    }
}
