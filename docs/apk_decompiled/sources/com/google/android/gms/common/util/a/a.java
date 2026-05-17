package com.google.android.gms.common.util.a;

import com.google.android.gms.common.internal.r;
import java.util.concurrent.Executors;
import java.util.concurrent.ThreadFactory;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a implements ThreadFactory {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f1347a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final int f1348b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final ThreadFactory f1349c;

    public a(String str) {
        this(str, 0);
    }

    private a(String str, int i) {
        this.f1349c = Executors.defaultThreadFactory();
        r.a(str, (Object) "Name must not be null");
        this.f1347a = str;
        this.f1348b = 0;
    }

    @Override // java.util.concurrent.ThreadFactory
    public Thread newThread(Runnable runnable) {
        Thread threadNewThread = this.f1349c.newThread(new b(runnable, 0));
        threadNewThread.setName(this.f1347a);
        return threadNewThread;
    }
}
