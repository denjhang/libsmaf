package jp.co.acrodea.drm;

import java.util.zip.ZipEntry;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c extends ZipEntry {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f3298a;

    public c(String str) {
        super(str);
        this.f3298a = -1;
    }

    int a() {
        return this.f3298a;
    }

    void a(int i) {
        this.f3298a = i;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof c)) {
            return getName().equals(((c) obj).getName());
        }
        return false;
    }

    @Override // java.util.zip.ZipEntry
    public int hashCode() {
        return getName().hashCode();
    }
}
