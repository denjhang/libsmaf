package jp.co.acrodea.runtime.drm.agent;

import java.io.File;
import java.util.Comparator;
import java.util.Date;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class h implements Comparator<File> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ g f3349a;

    h(g gVar) {
        this.f3349a = gVar;
    }

    @Override // java.util.Comparator
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compare(File file, File file2) {
        Date date;
        if (file.equals(file2)) {
            return 0;
        }
        j jVar = (j) this.f3349a.g.get(file);
        j jVar2 = (j) this.f3349a.g.get(file2);
        if (jVar == null || jVar2 == null) {
            return file.compareTo(file2);
        }
        int i = jVar2.f3356a - jVar.f3356a;
        if (i != 0) {
            return i;
        }
        Date date2 = jVar.f3359d;
        return (date2 == null || (date = jVar2.f3359d) == null) ? file.compareTo(file2) : date2.compareTo(date);
    }
}
