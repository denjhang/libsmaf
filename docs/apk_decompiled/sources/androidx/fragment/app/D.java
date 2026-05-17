package androidx.fragment.app;

import android.graphics.Rect;
import android.transition.Transition;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class D extends Transition.EpicenterCallback {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Rect f293a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ H f294b;

    D(H h, Rect rect) {
        this.f294b = h;
        this.f293a = rect;
    }

    @Override // android.transition.Transition.EpicenterCallback
    public Rect onGetEpicenter(Transition transition) {
        return this.f293a;
    }
}
