package jp.co.ymm.android.ringtone.util;

import android.content.DialogInterface;
import jp.co.ymm.android.ringtone.util.f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class e implements DialogInterface.OnDismissListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ f f3871a;

    e(f fVar) {
        this.f3871a = fVar;
    }

    @Override // android.content.DialogInterface.OnDismissListener
    public void onDismiss(DialogInterface dialogInterface) {
        int i = this.f3871a.t;
        int i2 = this.f3871a.f3876e;
        boolean z = this.f3871a.u;
        f.a aVar = this.f3871a.f3874c;
        this.f3871a.f();
        if (!z || aVar == null) {
            return;
        }
        aVar.a(dialogInterface, i2, i);
    }
}
