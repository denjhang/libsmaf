package com.google.firebase.iid;

import com.google.firebase.iid.Registrar;

/* JADX INFO: renamed from: com.google.firebase.iid.q, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final /* synthetic */ class C0399q implements com.google.firebase.components.i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final com.google.firebase.components.i f2697a = new C0399q();

    private C0399q() {
    }

    @Override // com.google.firebase.components.i
    public final Object a(com.google.firebase.components.f fVar) {
        return new Registrar.a((FirebaseInstanceId) fVar.a(FirebaseInstanceId.class));
    }
}
