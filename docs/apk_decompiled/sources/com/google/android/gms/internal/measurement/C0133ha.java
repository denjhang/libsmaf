package com.google.android.gms.internal.measurement;

import android.database.ContentObserver;
import android.os.Handler;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ha, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0133ha extends ContentObserver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ C0119fa f1715a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    C0133ha(C0119fa c0119fa, Handler handler) {
        super(null);
        this.f1715a = c0119fa;
    }

    @Override // android.database.ContentObserver
    public final void onChange(boolean z) {
        this.f1715a.b();
    }
}
