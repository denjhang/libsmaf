package jp.co.ymm.android.ringtone.b;

import android.database.ContentObserver;
import android.os.Handler;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class w extends ContentObserver {
    w(Handler handler) {
        super(handler);
    }

    @Override // android.database.ContentObserver
    public void onChange(boolean z) {
        super.onChange(z);
        z unused = z.f3552d = null;
        z.g().g();
        z.b((Boolean) false);
    }
}
