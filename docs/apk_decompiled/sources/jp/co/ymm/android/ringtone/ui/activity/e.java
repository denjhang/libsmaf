package jp.co.ymm.android.ringtone.ui.activity;

import android.app.AlertDialog;
import android.view.View;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class e implements View.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ AlertDialog f3785a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ BaseActivity f3786b;

    e(BaseActivity baseActivity, AlertDialog alertDialog) {
        this.f3786b = baseActivity;
        this.f3785a = alertDialog;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        this.f3785a.cancel();
    }
}
