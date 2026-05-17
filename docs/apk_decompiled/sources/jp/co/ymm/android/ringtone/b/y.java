package jp.co.ymm.android.ringtone.b;

import java.util.Comparator;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class y implements Comparator<u> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ z f3548a;

    y(z zVar) {
        this.f3548a = zVar;
    }

    @Override // java.util.Comparator
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compare(u uVar, u uVar2) {
        int iA = uVar.a() - uVar2.a();
        if (iA != 0) {
            return iA;
        }
        int iA2 = uVar.a();
        if (iA2 != 0) {
            if (iA2 != 1) {
                return 0;
            }
            int iA3 = this.f3548a.a(uVar.getAttributes().f3514b, uVar2.getAttributes().f3514b);
            return iA3 != 0 ? iA3 : this.f3548a.a(uVar.getAttributes().f3513a, uVar2.getAttributes().f3513a);
        }
        long jLastModified = uVar2.n().lastModified() - uVar.n().lastModified();
        if (jLastModified == 0) {
            return 0;
        }
        return jLastModified > 0 ? 1 : -1;
    }
}
