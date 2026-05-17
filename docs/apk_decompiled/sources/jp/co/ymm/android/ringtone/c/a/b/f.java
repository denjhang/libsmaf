package jp.co.ymm.android.ringtone.c.a.b;

import android.view.View;
import android.widget.AdapterView;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class f implements AdapterView.OnItemLongClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ i f3562a;

    f(i iVar) {
        this.f3562a = iVar;
    }

    @Override // android.widget.AdapterView.OnItemLongClickListener
    public boolean onItemLongClick(AdapterView<?> adapterView, View view, int i, long j) {
        this.f3562a.e(i);
        return true;
    }
}
