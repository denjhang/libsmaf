package jp.co.ymm.android.ringtone.ui.preferences.top;

import android.content.Context;
import java.util.List;
import jp.co.ymm.android.ringtone.util.n;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class e implements n.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f3858a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ ReloadDialogPreference f3859b;

    e(ReloadDialogPreference reloadDialogPreference, Context context) {
        this.f3859b = reloadDialogPreference;
        this.f3858a = context;
    }

    @Override // jp.co.ymm.android.ringtone.util.n.b
    public void a(List<String> list, boolean z) {
        if (z) {
            this.f3859b.a(this.f3858a);
        } else {
            this.f3859b.getDialog().dismiss();
        }
    }
}
