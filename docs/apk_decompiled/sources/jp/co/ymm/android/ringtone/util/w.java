package jp.co.ymm.android.ringtone.util;

import java.io.File;
import java.io.FileFilter;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class w implements FileFilter {
    w() {
    }

    @Override // java.io.FileFilter
    public boolean accept(File file) {
        return file.isFile();
    }
}
