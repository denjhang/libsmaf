package jp.co.ymm.android.ringtone.c.a.d;

import android.view.View;
import android.widget.AdapterView;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class h implements AdapterView.OnItemLongClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ k f3575a;

    h(k kVar) {
        this.f3575a = kVar;
    }

    @Override // android.widget.AdapterView.OnItemLongClickListener
    public boolean onItemLongClick(AdapterView<?> adapterView, View view, int i, long j) {
        if (this.f3575a.u != 0) {
            return true;
        }
        this.f3575a.e(i);
        return true;
    }
}
