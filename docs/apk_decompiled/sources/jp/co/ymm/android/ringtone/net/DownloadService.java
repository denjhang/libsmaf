package jp.co.ymm.android.ringtone.net;

import android.app.Service;
import android.content.Intent;
import android.os.Binder;
import android.os.IBinder;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class DownloadService extends Service {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private b f3630a = null;

    public class a extends Binder {
        public a() {
        }
    }

    public interface b {
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return new a();
    }

    @Override // android.app.Service
    public void onCreate() {
        jp.co.ymm.android.ringtone.util.g.d("onCreate");
    }

    @Override // android.app.Service
    public void onDestroy() {
        jp.co.ymm.android.ringtone.util.g.d("onDestroy");
    }

    @Override // android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        jp.co.ymm.android.ringtone.util.g.d("onStartCommand(" + i2 + ":" + intent + ")");
        return 2;
    }

    @Override // android.app.Service
    public boolean onUnbind(Intent intent) {
        this.f3630a = null;
        return false;
    }
}
