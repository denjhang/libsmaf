package androidx.fragment.app;

import android.view.View;
import java.util.ArrayList;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class y implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ArrayList f429a;

    y(ArrayList arrayList) {
        this.f429a = arrayList;
    }

    @Override // java.lang.Runnable
    public void run() {
        C.a((ArrayList<View>) this.f429a, 4);
    }
}
