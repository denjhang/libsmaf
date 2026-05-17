package com.google.android.gms.common.api.internal;

import android.annotation.TargetApi;
import android.app.Activity;
import android.app.ActivityManager;
import android.app.Application;
import android.content.ComponentCallbacks2;
import android.content.res.Configuration;
import android.os.Bundle;
import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: renamed from: com.google.android.gms.common.api.internal.a, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class ComponentCallbacks2C0054a implements Application.ActivityLifecycleCallbacks, ComponentCallbacks2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final ComponentCallbacks2C0054a f1062a = new ComponentCallbacks2C0054a();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final AtomicBoolean f1063b = new AtomicBoolean();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final AtomicBoolean f1064c = new AtomicBoolean();

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final ArrayList<InterfaceC0024a> f1065d = new ArrayList<>();

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private boolean f1066e = false;

    /* JADX INFO: renamed from: com.google.android.gms.common.api.internal.a$a, reason: collision with other inner class name */
    public interface InterfaceC0024a {
        void a(boolean z);
    }

    private ComponentCallbacks2C0054a() {
    }

    public static ComponentCallbacks2C0054a a() {
        return f1062a;
    }

    public static void a(Application application) {
        synchronized (f1062a) {
            if (!f1062a.f1066e) {
                application.registerActivityLifecycleCallbacks(f1062a);
                application.registerComponentCallbacks(f1062a);
                f1062a.f1066e = true;
            }
        }
    }

    private final void b(boolean z) {
        synchronized (f1062a) {
            ArrayList<InterfaceC0024a> arrayList = this.f1065d;
            int size = arrayList.size();
            int i = 0;
            while (i < size) {
                InterfaceC0024a interfaceC0024a = arrayList.get(i);
                i++;
                interfaceC0024a.a(z);
            }
        }
    }

    public final void a(InterfaceC0024a interfaceC0024a) {
        synchronized (f1062a) {
            this.f1065d.add(interfaceC0024a);
        }
    }

    @TargetApi(16)
    public final boolean a(boolean z) {
        if (!this.f1064c.get()) {
            if (!com.google.android.gms.common.util.n.c()) {
                return z;
            }
            ActivityManager.RunningAppProcessInfo runningAppProcessInfo = new ActivityManager.RunningAppProcessInfo();
            ActivityManager.getMyMemoryState(runningAppProcessInfo);
            if (!this.f1064c.getAndSet(true) && runningAppProcessInfo.importance > 100) {
                this.f1063b.set(true);
            }
        }
        return b();
    }

    public final boolean b() {
        return this.f1063b.get();
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
        boolean zCompareAndSet = this.f1063b.compareAndSet(true, false);
        this.f1064c.set(true);
        if (zCompareAndSet) {
            b(false);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
        boolean zCompareAndSet = this.f1063b.compareAndSet(true, false);
        this.f1064c.set(true);
        if (zCompareAndSet) {
            b(false);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
    }

    @Override // android.content.ComponentCallbacks
    public final void onConfigurationChanged(Configuration configuration) {
    }

    @Override // android.content.ComponentCallbacks
    public final void onLowMemory() {
    }

    @Override // android.content.ComponentCallbacks2
    public final void onTrimMemory(int i) {
        if (i == 20 && this.f1063b.compareAndSet(false, true)) {
            this.f1064c.set(true);
            b(true);
        }
    }
}
