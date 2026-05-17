package d.a.a.a;

import android.R;
import d.a.a.a.m;
import org.apache.http.HttpStatus;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class i implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ m f2774a;

    i(m mVar) {
        this.f2774a = mVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        m mVar = this.f2774a;
        mVar.a(mVar.q.getString(d.a.a.a.mktlibrary_dialog_apk_update_title), this.f2774a.r + this.f2774a.q.getString(d.a.a.a.mktlibrary_dialog_apk_update_message), R.drawable.ic_dialog_info, this.f2774a.q.getString(d.a.a.a.mktlibrary_dialog_btn_update_do), this.f2774a.q.getString(d.a.a.a.mktlibrary_dialog_btn_update_after_do), this.f2774a.q.getString(d.a.a.a.mktlibrary_dialog_btn_update_do_detail));
        m mVar2 = this.f2774a;
        mVar2.j = mVar2.a(new m.d(mVar2, null), new m.e(this.f2774a, null), new m.f(this.f2774a, null), this.f2774a.x, this.f2774a.y);
        this.f2774a.f2781b = HttpStatus.SC_OK;
    }
}
