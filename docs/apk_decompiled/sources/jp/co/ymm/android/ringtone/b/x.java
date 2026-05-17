package jp.co.ymm.android.ringtone.b;

import java.io.File;
import java.io.InputStream;
import jp.co.ymm.android.ringtone.b.u;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class x extends u.b {
    x() {
    }

    @Override // jp.co.ymm.android.ringtone.b.u.b
    InputStream a(File file) {
        jp.co.ymm.android.ringtone.util.g.a(z.f3549a != null);
        return z.f3549a.getResources().getAssets().open(file.getPath());
    }
}
