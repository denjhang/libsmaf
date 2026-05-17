package jp.co.ymm.android.ringtone.net.a;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c extends Handler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ d f3639a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    c(d dVar, Looper looper) {
        super(looper);
        this.f3639a = dVar;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        this.f3639a.f3642c.a(message.arg1, message.arg2);
    }
}
