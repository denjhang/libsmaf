package d.a.a.a;

import android.content.DialogInterface;
import android.view.KeyEvent;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class d implements DialogInterface.OnKeyListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ m f2769a;

    d(m mVar) {
        this.f2769a = mVar;
    }

    @Override // android.content.DialogInterface.OnKeyListener
    public boolean onKey(DialogInterface dialogInterface, int i, KeyEvent keyEvent) {
        if (i != 84) {
            return false;
        }
        dialogInterface.cancel();
        return false;
    }
}
