package jp.co.ymm.android.ringtone.ui.preferences;

import jp.co.ymm.android.ringtone.b.d;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ d f3809a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ RingtoneSelectPreference f3810b;

    a(RingtoneSelectPreference ringtoneSelectPreference, d dVar) {
        this.f3810b = ringtoneSelectPreference;
        this.f3809a = dVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.f3810b.b(this.f3809a);
    }
}
