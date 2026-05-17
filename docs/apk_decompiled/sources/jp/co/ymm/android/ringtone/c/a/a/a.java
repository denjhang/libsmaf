package jp.co.ymm.android.ringtone.c.a.a;

import android.view.View;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a implements View.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ b f3557a;

    a(b bVar) {
        this.f3557a = bVar;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        b bVar = this.f3557a;
        bVar.r = null;
        bVar.d();
        ((jp.co.ymm.android.ringtone.c.a.g.a) this.f3557a).n = false;
    }
}
