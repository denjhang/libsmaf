package com.google.firebase.iid;

import android.os.Bundle;
import c.a.a.a.f.InterfaceC0053a;
import java.io.IOException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class U implements InterfaceC0053a<Bundle, String> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ T f2663a;

    U(T t) {
        this.f2663a = t;
    }

    @Override // c.a.a.a.f.InterfaceC0053a
    public final /* synthetic */ String a(c.a.a.a.f.g<Bundle> gVar) {
        Bundle bundleA = gVar.a(IOException.class);
        T t = this.f2663a;
        return T.a(bundleA);
    }
}
