package d.a.a.a;

import android.R;
import d.a.a.a.m;
import org.apache.http.HttpStatus;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class n implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ m.b f2796a;

    n(m.b bVar) {
        this.f2796a = bVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        m mVar = m.this;
        mVar.a(mVar.q.getString(d.a.a.a.mktlibrary_dialog_apk_update_title), m.this.q.getString(d.a.a.a.mktlibrary_dialog_apk_no_update_message), R.drawable.ic_dialog_info, m.this.q.getString(d.a.a.a.mktlibrary_dialog_btn_ok), (String) null, (String) null);
        m mVar2 = m.this;
        mVar2.j = mVar2.a(new m.d(mVar2, null), m.this.x, m.this.y);
        m.this.f2781b = HttpStatus.SC_CREATED;
    }
}
