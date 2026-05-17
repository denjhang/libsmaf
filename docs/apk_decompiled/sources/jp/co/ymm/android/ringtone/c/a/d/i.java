package jp.co.ymm.android.ringtone.c.a.d;

import android.widget.ListAdapter;
import java.util.List;
import jp.co.ymm.android.ringtone.util.n;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class i implements n.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ k f3576a;

    i(k kVar) {
        this.f3576a = kVar;
    }

    @Override // jp.co.ymm.android.ringtone.util.n.b
    public void a(List<String> list, boolean z) {
        if (z) {
            k kVar = this.f3576a;
            kVar.B.setAdapter((ListAdapter) kVar.h());
        }
    }
}
