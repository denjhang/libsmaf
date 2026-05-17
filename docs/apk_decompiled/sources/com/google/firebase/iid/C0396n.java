package com.google.firebase.iid;

import android.os.Bundle;

/* JADX INFO: renamed from: com.google.firebase.iid.n, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0396n extends AbstractC0395m<Bundle> {
    C0396n(int i, int i2, Bundle bundle) {
        super(i, 1, bundle);
    }

    @Override // com.google.firebase.iid.AbstractC0395m
    final void a(Bundle bundle) {
        Bundle bundle2 = bundle.getBundle("data");
        if (bundle2 == null) {
            bundle2 = Bundle.EMPTY;
        }
        a(bundle2);
    }

    @Override // com.google.firebase.iid.AbstractC0395m
    final boolean a() {
        return false;
    }
}
