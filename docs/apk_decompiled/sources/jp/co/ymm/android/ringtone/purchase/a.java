package jp.co.ymm.android.ringtone.purchase;

import android.net.Uri;
import java.util.List;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.n;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a implements n.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Uri f3757a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ ContentsDownLoadActivity f3758b;

    a(ContentsDownLoadActivity contentsDownLoadActivity, Uri uri) {
        this.f3758b = contentsDownLoadActivity;
        this.f3757a = uri;
    }

    @Override // jp.co.ymm.android.ringtone.util.n.b
    public void a(List<String> list, boolean z) {
        g.a("isPermissionRequest Result : " + this.f3758b.l);
        this.f3758b.l = false;
        if (z) {
            this.f3758b.b(this.f3757a);
        } else {
            androidx.core.app.a.a(this.f3758b.k);
        }
    }
}
