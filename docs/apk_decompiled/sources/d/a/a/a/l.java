package d.a.a.a;

import android.R;
import d.a.a.a.m;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class l implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ int f2778a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ m f2779b;

    l(m mVar, int i) {
        this.f2779b = mVar;
        this.f2778a = i;
    }

    @Override // java.lang.Runnable
    public void run() {
        m mVar = this.f2779b;
        mVar.a(mVar.q.getString(d.a.a.a.mktlibrary_dialog_error_title), this.f2779b.q.getString(d.a.a.a.mktlibrary_dialog_nonconnect_message), R.drawable.ic_dialog_alert, this.f2779b.q.getString(d.a.a.a.mktlibrary_dialog_btn_app_retry), this.f2779b.q.getString(d.a.a.a.mktlibrary_dialog_btn_update_finish), (String) null);
        m mVar2 = this.f2779b;
        mVar2.j = mVar2.a(new m.d(mVar2, null), new m.e(this.f2779b, null), this.f2779b.x, this.f2779b.y);
        this.f2779b.f2781b = this.f2778a;
    }
}
