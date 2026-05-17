package jp.co.ymm.android.ringtone.c.a.b;

import android.view.View;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class g implements View.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ i f3563a;

    g(i iVar) {
        this.f3563a = iVar;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (this.f3563a.p.getCount() < 20) {
            this.f3563a.d();
        } else {
            this.f3563a.a(17);
        }
    }
}
