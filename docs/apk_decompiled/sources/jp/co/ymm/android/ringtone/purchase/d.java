package jp.co.ymm.android.ringtone.purchase;

import android.content.DialogInterface;
import android.content.Intent;
import jp.co.ymm.android.ringtone.ui.activity.TopActivity;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class d implements DialogInterface.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ContentsDownLoadActivity f3761a;

    d(ContentsDownLoadActivity contentsDownLoadActivity) {
        this.f3761a = contentsDownLoadActivity;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        androidx.core.app.a.a(this.f3761a.k);
        Intent intent = new Intent(this.f3761a, (Class<?>) TopActivity.class);
        intent.putExtra("jp.co.ymm.android.ringtone.intent.INTENT_START_POPUP", false);
        this.f3761a.startActivity(intent);
    }
}
