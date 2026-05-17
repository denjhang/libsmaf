package jp.co.ymm.android.ringtone.c.a.h;

import android.media.MediaScannerConnection;
import android.net.Uri;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class e implements MediaScannerConnection.OnScanCompletedListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ f f3595a;

    e(f fVar) {
        this.f3595a = fVar;
    }

    @Override // android.media.MediaScannerConnection.OnScanCompletedListener
    public void onScanCompleted(String str, Uri uri) {
        g.d("onScanCompleted");
    }
}
