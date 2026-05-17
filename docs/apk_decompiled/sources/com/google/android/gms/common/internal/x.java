package com.google.android.gms.common.internal;

import android.app.Activity;
import android.content.Intent;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class x extends AbstractDialogInterfaceOnClickListenerC0068f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ Intent f1282a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Activity f1283b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ int f1284c;

    x(Intent intent, Activity activity, int i) {
        this.f1282a = intent;
        this.f1283b = activity;
        this.f1284c = i;
    }

    @Override // com.google.android.gms.common.internal.AbstractDialogInterfaceOnClickListenerC0068f
    public final void a() {
        Intent intent = this.f1282a;
        if (intent != null) {
            this.f1283b.startActivityForResult(intent, this.f1284c);
        }
    }
}
