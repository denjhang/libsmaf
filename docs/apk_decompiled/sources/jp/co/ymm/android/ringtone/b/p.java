package jp.co.ymm.android.ringtone.b;

import java.io.File;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class p {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final p f3532a = new p(0, 0);

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final long f3533b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final int f3534c;

    private p(long j, int i) {
        this.f3533b = j;
        this.f3534c = i;
    }

    p(File file) {
        this(file.lastModified(), a(file));
    }

    private static int a(File file) {
        File[] fileArrListFiles = file.listFiles(jp.co.ymm.android.ringtone.util.z.c());
        if (fileArrListFiles != null) {
            return fileArrListFiles.length;
        }
        return 0;
    }

    boolean a(p pVar) {
        return pVar != null && this.f3533b == pVar.f3533b && this.f3534c == pVar.f3534c;
    }

    public String toString() {
        return p.class.getName() + '@' + Integer.toHexString(hashCode()) + "[lastModified=" + this.f3533b + "[" + String.format("%tF %<tT.%<tL", Long.valueOf(this.f3533b)) + "], childCount=" + this.f3534c + "]";
    }
}
