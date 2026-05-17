package jp.co.ymm.android.ringtone.c.a.d;

import android.view.View;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class e implements View.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ k f3572a;

    e(k kVar) {
        this.f3572a = kVar;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (this.f3572a.z) {
            this.f3572a.getActivity().finish();
        } else {
            this.f3572a.c();
        }
    }
}
