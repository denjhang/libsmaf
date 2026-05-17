package jp.co.ymm.android.ringtone.ui.customview;

import android.view.View;
import android.widget.AdapterView;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a implements AdapterView.OnItemSelectedListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ b f3797a;

    a(b bVar) {
        this.f3797a = bVar;
    }

    @Override // android.widget.AdapterView.OnItemSelectedListener
    public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
        if (this.f3797a.isSelected() || !this.f3797a.f3803f.isSelected()) {
            return;
        }
        this.f3797a.f3803f.setSelected(false);
    }

    @Override // android.widget.AdapterView.OnItemSelectedListener
    public void onNothingSelected(AdapterView<?> adapterView) {
    }
}
