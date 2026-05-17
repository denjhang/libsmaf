package com.google.android.gms.common.stats;

import android.annotation.SuppressLint;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.util.Log;
import com.google.android.gms.common.util.d;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static volatile a f1342b;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final List<String> f1344d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final List<String> f1345e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final List<String> f1346f;
    private final List<String> g;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Object f1341a = new Object();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static boolean f1343c = false;

    private a() {
        List<String> list = Collections.EMPTY_LIST;
        this.f1344d = list;
        this.f1345e = list;
        this.f1346f = list;
        this.g = list;
    }

    public static a a() {
        if (f1342b == null) {
            synchronized (f1341a) {
                if (f1342b == null) {
                    f1342b = new a();
                }
            }
        }
        return f1342b;
    }

    @SuppressLint({"UntrackedBindService"})
    public void a(Context context, ServiceConnection serviceConnection) {
        context.unbindService(serviceConnection);
    }

    public boolean a(Context context, Intent intent, ServiceConnection serviceConnection, int i) {
        return a(context, context.getClass().getName(), intent, serviceConnection, i);
    }

    public final boolean a(Context context, String str, Intent intent, ServiceConnection serviceConnection, int i) {
        ComponentName component = intent.getComponent();
        if (!(component == null ? false : d.a(context, component.getPackageName()))) {
            return context.bindService(intent, serviceConnection, i);
        }
        Log.w("ConnectionTracker", "Attempted to bind to a service in a STOPPED package.");
        return false;
    }
}
