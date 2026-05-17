package jp.co.ymm.android.ringtone.c.a.c;

import android.view.View;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b implements View.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ c f3567a;

    b(c cVar) {
        this.f3567a = cVar;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        c cVar = this.f3567a;
        cVar.r = null;
        cVar.d();
        ((jp.co.ymm.android.ringtone.c.a.g.a) this.f3567a).n = false;
    }
}
