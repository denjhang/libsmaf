package com.google.firebase.components;

import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final /* synthetic */ class t implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Map.Entry f2584a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final c.a.b.a.a f2585b;

    private t(Map.Entry entry, c.a.b.a.a aVar) {
        this.f2584a = entry;
        this.f2585b = aVar;
    }

    public static Runnable a(Map.Entry entry, c.a.b.a.a aVar) {
        return new t(entry, aVar);
    }

    @Override // java.lang.Runnable
    public void run() {
        ((c.a.b.a.b) this.f2584a.getKey()).a(this.f2585b);
    }
}
