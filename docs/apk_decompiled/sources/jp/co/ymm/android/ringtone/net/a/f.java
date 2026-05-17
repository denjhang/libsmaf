package jp.co.ymm.android.ringtone.net.a;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class f extends Handler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ g f3657a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    f(g gVar, Looper looper) {
        super(looper);
        this.f3657a = gVar;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        this.f3657a.f3660c.a(message.arg1, message.arg2);
    }
}
