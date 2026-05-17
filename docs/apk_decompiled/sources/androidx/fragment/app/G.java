package androidx.fragment.app;

import android.graphics.Rect;
import android.transition.Transition;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class G extends Transition.EpicenterCallback {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Rect f347a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ H f348b;

    G(H h, Rect rect) {
        this.f348b = h;
        this.f347a = rect;
    }

    @Override // android.transition.Transition.EpicenterCallback
    public Rect onGetEpicenter(Transition transition) {
        Rect rect = this.f347a;
        if (rect == null || rect.isEmpty()) {
            return null;
        }
        return this.f347a;
    }
}
