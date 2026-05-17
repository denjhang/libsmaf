package jp.co.ymm.android.ringtone.c.a.h;

import android.view.KeyEvent;
import android.view.View;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b implements View.OnKeyListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ f f3593a;

    b(f fVar) {
        this.f3593a = fVar;
    }

    @Override // android.view.View.OnKeyListener
    public boolean onKey(View view, int i, KeyEvent keyEvent) {
        if (keyEvent.getAction() != 0 || i != 4 || !this.f3593a.x.canGoBack()) {
            return false;
        }
        this.f3593a.x.goBack();
        return true;
    }
}
