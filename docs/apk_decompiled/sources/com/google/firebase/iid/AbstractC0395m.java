package com.google.firebase.iid;

import android.os.Bundle;
import android.util.Log;

/* JADX INFO: renamed from: com.google.firebase.iid.m, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
abstract class AbstractC0395m<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final int f2687a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final c.a.a.a.f.h<T> f2688b = new c.a.a.a.f.h<>();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final int f2689c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final Bundle f2690d;

    AbstractC0395m(int i, int i2, Bundle bundle) {
        this.f2687a = i;
        this.f2689c = i2;
        this.f2690d = bundle;
    }

    abstract void a(Bundle bundle);

    final void a(C0397o c0397o) {
        if (Log.isLoggable("MessengerIpcClient", 3)) {
            String strValueOf = String.valueOf(this);
            String strValueOf2 = String.valueOf(c0397o);
            StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 14 + String.valueOf(strValueOf2).length());
            sb.append("Failing ");
            sb.append(strValueOf);
            sb.append(" with ");
            sb.append(strValueOf2);
            Log.d("MessengerIpcClient", sb.toString());
        }
        this.f2688b.a(c0397o);
    }

    final void a(T t) {
        if (Log.isLoggable("MessengerIpcClient", 3)) {
            String strValueOf = String.valueOf(this);
            String strValueOf2 = String.valueOf(t);
            StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 16 + String.valueOf(strValueOf2).length());
            sb.append("Finishing ");
            sb.append(strValueOf);
            sb.append(" with ");
            sb.append(strValueOf2);
            Log.d("MessengerIpcClient", sb.toString());
        }
        this.f2688b.a(t);
    }

    abstract boolean a();

    public String toString() {
        int i = this.f2689c;
        int i2 = this.f2687a;
        boolean zA = a();
        StringBuilder sb = new StringBuilder(55);
        sb.append("Request { what=");
        sb.append(i);
        sb.append(" id=");
        sb.append(i2);
        sb.append(" oneWay=");
        sb.append(zA);
        sb.append("}");
        return sb.toString();
    }
}
