package jp.co.ymm.android.ringtone.ui.preferences.top;

import android.content.Context;
import android.view.View;
import android.widget.AdapterView;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a implements AdapterView.OnItemClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f3853a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ AboutAppDialogPreference f3854b;

    a(AboutAppDialogPreference aboutAppDialogPreference, Context context) {
        this.f3854b = aboutAppDialogPreference;
        this.f3853a = context;
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        String str = (String) adapterView.getItemAtPosition(i);
        if (this.f3853a.getString(2131493177).equals(str)) {
            this.f3854b.a(this.f3853a, 2131493178, 2131493177);
        }
        if (this.f3853a.getString(2131493181).equals(str)) {
            this.f3854b.a(this.f3853a, 2131493182, 2131493181);
        }
    }
}
