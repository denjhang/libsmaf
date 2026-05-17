package com.google.firebase.iid;

import android.os.Looper;
import android.os.Message;

/* JADX INFO: renamed from: com.google.firebase.iid.v, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class HandlerC0403v extends c.a.a.a.d.d.e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ C0404w f2703a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    HandlerC0403v(C0404w c0404w, Looper looper) {
        super(looper);
        this.f2703a = c0404w;
    }

    @Override // android.os.Handler
    public final void handleMessage(Message message) {
        this.f2703a.a(message);
    }
}
