package jp.co.ymm.android.ringtone.ui.preferences.top;

import java.util.List;
import jp.co.ymm.android.ringtone.util.n;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c implements n.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ PlayKeyDialogPreference f3856a;

    c(PlayKeyDialogPreference playKeyDialogPreference) {
        this.f3856a = playKeyDialogPreference;
    }

    @Override // jp.co.ymm.android.ringtone.util.n.b
    public void a(List<String> list, boolean z) {
        if (z) {
            this.f3856a.onClick();
        }
    }
}
