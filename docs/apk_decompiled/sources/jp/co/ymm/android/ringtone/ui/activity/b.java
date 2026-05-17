package jp.co.ymm.android.ringtone.ui.activity;

import android.view.View;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b implements View.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ AlarmControlActivity f3782a;

    b(AlarmControlActivity alarmControlActivity) {
        this.f3782a = alarmControlActivity;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) throws Throwable {
        AlarmControlActivity alarmControlActivity = this.f3782a;
        alarmControlActivity.a(view == alarmControlActivity.i);
        this.f3782a.f();
    }
}
