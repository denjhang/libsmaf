package com.google.android.gms.common.api.internal;

import com.google.android.gms.common.api.internal.ComponentCallbacks2C0054a;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class m implements ComponentCallbacks2C0054a.InterfaceC0024a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ C0055b f1100a;

    m(C0055b c0055b) {
        this.f1100a = c0055b;
    }

    @Override // com.google.android.gms.common.api.internal.ComponentCallbacks2C0054a.InterfaceC0024a
    public final void a(boolean z) {
        this.f1100a.q.sendMessage(this.f1100a.q.obtainMessage(1, Boolean.valueOf(z)));
    }
}
