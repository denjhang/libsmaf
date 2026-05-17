package jp.co.ymm.android.ringtone.net;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a extends Handler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ b f3632a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    a(b bVar, Looper looper) {
        super(looper);
        this.f3632a = bVar;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        jp.co.ymm.android.ringtone.net.a.a aVar = (jp.co.ymm.android.ringtone.net.a.a) message.obj;
        int i = message.what;
        if (i == 1 || i == 2) {
            this.f3632a.f3694c.a(aVar, message.what);
        }
    }
}
