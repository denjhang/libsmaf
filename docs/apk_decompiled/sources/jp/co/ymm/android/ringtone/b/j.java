package jp.co.ymm.android.ringtone.b;

import java.io.File;
import java.io.FileInputStream;
import java.io.InputStream;
import jp.co.ymm.android.ringtone.b.u;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class j extends u.b {
    j() {
    }

    @Override // jp.co.ymm.android.ringtone.b.u.b
    InputStream a(File file) {
        return new FileInputStream(file);
    }
}
