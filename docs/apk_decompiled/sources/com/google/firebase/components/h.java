package com.google.firebase.components;

import android.content.ComponentName;
import android.content.Context;
import android.content.pm.PackageManager;
import android.content.pm.ServiceInfo;
import android.os.Bundle;
import android.util.Log;
import java.lang.reflect.InvocationTargetException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class h<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final T f2564a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final b<T> f2565b;

    private static class a implements b<Context> {
        private a() {
        }

        private static Bundle b(Context context) {
            try {
                PackageManager packageManager = context.getPackageManager();
                if (packageManager == null) {
                    Log.w("ComponentDiscovery", "Context has no PackageManager.");
                    return null;
                }
                ServiceInfo serviceInfo = packageManager.getServiceInfo(new ComponentName(context, (Class<?>) ComponentDiscoveryService.class), 128);
                if (serviceInfo != null) {
                    return serviceInfo.metaData;
                }
                Log.w("ComponentDiscovery", "ComponentDiscoveryService has no service info.");
                return null;
            } catch (PackageManager.NameNotFoundException unused) {
                Log.w("ComponentDiscovery", "Application info not found.");
                return null;
            }
        }

        @Override // com.google.firebase.components.h.b
        public List<String> a(Context context) {
            Bundle bundleB = b(context);
            if (bundleB == null) {
                Log.w("ComponentDiscovery", "Could not retrieve metadata, returning empty list of registrars.");
                return Collections.emptyList();
            }
            ArrayList arrayList = new ArrayList();
            for (String str : bundleB.keySet()) {
                if ("com.google.firebase.components.ComponentRegistrar".equals(bundleB.get(str)) && str.startsWith("com.google.firebase.components:")) {
                    arrayList.add(str.substring(31));
                }
            }
            return arrayList;
        }
    }

    interface b<T> {
        List<String> a(T t);
    }

    h(T t, b<T> bVar) {
        this.f2564a = t;
        this.f2565b = bVar;
    }

    public static h<Context> a(Context context) {
        return new h<>(context, new a());
    }

    private static List<j> a(List<String> list) {
        String str;
        ArrayList arrayList = new ArrayList();
        for (String str2 : list) {
            try {
                Class<?> cls = Class.forName(str2);
                if (j.class.isAssignableFrom(cls)) {
                    arrayList.add((j) cls.getDeclaredConstructor(new Class[0]).newInstance(new Object[0]));
                } else {
                    Log.w("ComponentDiscovery", String.format("Class %s is not an instance of %s", str2, "com.google.firebase.components.ComponentRegistrar"));
                }
            } catch (ClassNotFoundException e2) {
                e = e2;
                str = String.format("Class %s is not an found.", str2);
                Log.w("ComponentDiscovery", str, e);
            } catch (IllegalAccessException e3) {
                e = e3;
                str = String.format("Could not instantiate %s.", str2);
                Log.w("ComponentDiscovery", str, e);
            } catch (InstantiationException e4) {
                e = e4;
                str = String.format("Could not instantiate %s.", str2);
                Log.w("ComponentDiscovery", str, e);
            } catch (NoSuchMethodException e5) {
                e = e5;
                str = String.format("Could not instantiate %s", str2);
                Log.w("ComponentDiscovery", str, e);
            } catch (InvocationTargetException e6) {
                e = e6;
                str = String.format("Could not instantiate %s", str2);
                Log.w("ComponentDiscovery", str, e);
            }
        }
        return arrayList;
    }

    public List<j> a() {
        return a(this.f2565b.a(this.f2564a));
    }
}
