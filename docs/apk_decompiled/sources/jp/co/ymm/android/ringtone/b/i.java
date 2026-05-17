package jp.co.ymm.android.ringtone.b;

import java.io.File;
import java.io.FileFilter;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class i extends File {
    i(File file, String str) {
        super(file, str);
    }

    private File[] a(File[] fileArr) {
        if (fileArr == null) {
            jp.co.ymm.android.ringtone.util.g.g("**Caution!** java.io.File#listFiles(" + this + ") returns null, why?");
        }
        return fileArr != null ? fileArr : new File[0];
    }

    @Override // java.io.File
    public File[] listFiles() {
        return a(super.listFiles());
    }

    @Override // java.io.File
    public File[] listFiles(FileFilter fileFilter) {
        return a(super.listFiles(fileFilter));
    }
}
