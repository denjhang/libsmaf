package jp.co.ymm.android.ringtone.c.a.d;

import android.view.View;
import android.widget.AdapterView;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class g implements AdapterView.OnItemClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ k f3574a;

    g(k kVar) {
        this.f3574a = kVar;
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        this.f3574a.d(i);
        this.f3574a.s.setEnabled(true);
        this.f3574a.D.setEnabled(true);
        jp.co.ymm.android.ringtone.b.c cVar = (jp.co.ymm.android.ringtone.b.c) this.f3574a.B.getItemAtPosition(i);
        this.f3574a.I = cVar.getAttributes().f3513a;
    }
}
