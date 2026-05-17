package d.a.a.a;

import android.R;
import d.a.a.a.m;
import org.apache.http.HttpStatus;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class j implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ m f2775a;

    j(m mVar) {
        this.f2775a = mVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        m mVar = this.f2775a;
        mVar.a(mVar.q.getString(d.a.a.a.mktlibrary_dialog_apk_update_title), this.f2775a.r + this.f2775a.q.getString(d.a.a.a.mktlibrary_dialog_apk_update_message), R.drawable.ic_dialog_info, this.f2775a.q.getString(d.a.a.a.mktlibrary_dialog_btn_update_do), this.f2775a.q.getString(d.a.a.a.mktlibrary_dialog_btn_update_finish), this.f2775a.q.getString(d.a.a.a.mktlibrary_dialog_btn_update_do_detail));
        m mVar2 = this.f2775a;
        mVar2.j = mVar2.a(new m.d(mVar2, null), new m.e(this.f2775a, null), new m.f(this.f2775a, null), this.f2775a.x, this.f2775a.y);
        this.f2775a.f2781b = HttpStatus.SC_OK;
    }
}
