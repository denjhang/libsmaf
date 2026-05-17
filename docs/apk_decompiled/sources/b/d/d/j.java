package b.d.d;

import android.view.View;
import android.view.ViewGroup;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final ViewGroup f777a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f778b;

    public j(ViewGroup viewGroup) {
        this.f777a = viewGroup;
    }

    public int a() {
        return this.f778b;
    }

    public void a(View view) {
        a(view, 0);
    }

    public void a(View view, int i) {
        this.f778b = 0;
    }

    public void a(View view, View view2, int i) {
        a(view, view2, i, 0);
    }

    public void a(View view, View view2, int i, int i2) {
        this.f778b = i;
    }
}
