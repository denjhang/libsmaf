package androidx.fragment.app;

import android.content.Context;
import android.os.Bundle;
import android.view.View;

/* JADX INFO: renamed from: androidx.fragment.app.e, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class C0041e extends AbstractC0045i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Fragment f377a;

    C0041e(Fragment fragment) {
        this.f377a = fragment;
    }

    @Override // androidx.fragment.app.AbstractC0045i
    public View a(int i) {
        View view = this.f377a.K;
        if (view != null) {
            return view.findViewById(i);
        }
        throw new IllegalStateException("Fragment does not have a view");
    }

    @Override // androidx.fragment.app.AbstractC0045i
    public Fragment a(Context context, String str, Bundle bundle) {
        return this.f377a.u.a(context, str, bundle);
    }

    @Override // androidx.fragment.app.AbstractC0045i
    public boolean a() {
        return this.f377a.K != null;
    }
}
