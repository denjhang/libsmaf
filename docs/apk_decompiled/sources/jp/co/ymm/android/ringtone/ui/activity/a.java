package jp.co.ymm.android.ringtone.ui.activity;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ AlarmControlActivity f3778a;

    a(AlarmControlActivity alarmControlActivity) {
        this.f3778a = alarmControlActivity;
    }

    @Override // java.lang.Runnable
    public void run() throws Throwable {
        this.f3778a.a(false);
    }
}
