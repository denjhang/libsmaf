package com.google.firebase.components;

import java.util.Set;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final /* synthetic */ class l implements c.a.b.b.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Set f2568a;

    private l(Set set) {
        this.f2568a = set;
    }

    public static c.a.b.b.a a(Set set) {
        return new l(set);
    }

    @Override // c.a.b.b.a
    public Object get() {
        return n.a(this.f2568a);
    }
}
