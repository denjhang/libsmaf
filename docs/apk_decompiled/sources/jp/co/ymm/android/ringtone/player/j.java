package jp.co.ymm.android.ringtone.player;

import android.content.Intent;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class j extends Handler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ PlayerService f3736a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    j(PlayerService playerService, Looper looper) {
        super(looper);
        this.f3736a = playerService;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        this.f3736a.a((Intent) message.obj);
    }
}
