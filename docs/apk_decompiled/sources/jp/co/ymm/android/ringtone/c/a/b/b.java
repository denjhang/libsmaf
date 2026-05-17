package jp.co.ymm.android.ringtone.c.a.b;

import android.view.View;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b implements View.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ c f3559a;

    b(c cVar) {
        this.f3559a = cVar;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (Integer.parseInt(view.getTag().toString()) == 0) {
            this.f3559a.b();
            return;
        }
        if (Integer.parseInt(view.getTag().toString()) == 1) {
            this.f3559a.u = false;
            this.f3559a.a(1);
        } else {
            this.f3559a.a("Alarm_music_info", "Alarm_set", jp.co.ymm.android.ringtone.ui.activity.a.a.a(jp.co.ymm.android.ringtone.b.d.a().a(this.f3559a.o.a())), "/Alarm/AlarmSetting");
            this.f3559a.a(Integer.parseInt(view.getTag().toString()));
        }
    }
}
