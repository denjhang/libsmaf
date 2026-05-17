package jp.co.ymm.android.ringtone.c.a.d;

import android.view.View;
import android.widget.ListAdapter;
import jp.co.ymm.android.ringtone.player.l;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class f implements View.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ k f3573a;

    f(k kVar) {
        this.f3573a = kVar;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        int i;
        k kVar = this.f3573a;
        if (view == kVar.E) {
            i = 0;
        } else if (view == kVar.F) {
            i = 1;
        } else if (view != kVar.G) {
            return;
        } else {
            i = 2;
        }
        kVar.u = i;
        k kVar2 = this.f3573a;
        kVar2.B.setAdapter((ListAdapter) kVar2.h());
        z.a(this.f3573a.v, l.Preview);
        this.f3573a.d();
    }
}
