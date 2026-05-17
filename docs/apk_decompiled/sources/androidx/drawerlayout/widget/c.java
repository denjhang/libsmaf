package androidx.drawerlayout.widget;

import androidx.drawerlayout.widget.DrawerLayout;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ DrawerLayout.d f265a;

    c(DrawerLayout.d dVar) {
        this.f265a = dVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.f265a.a();
    }
}
