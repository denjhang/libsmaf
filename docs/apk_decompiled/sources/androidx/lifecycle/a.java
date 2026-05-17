package androidx.lifecycle;

import androidx.lifecycle.f;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static a f455a = new a();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Map<Class, C0010a> f456b = new HashMap();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Map<Class, Boolean> f457c = new HashMap();

    /* JADX INFO: renamed from: androidx.lifecycle.a$a, reason: collision with other inner class name */
    static class C0010a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final Map<f.a, List<b>> f458a = new HashMap();

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final Map<b, f.a> f459b;

        C0010a(Map<b, f.a> map) {
            this.f459b = map;
            for (Map.Entry<b, f.a> entry : map.entrySet()) {
                f.a value = entry.getValue();
                List<b> arrayList = this.f458a.get(value);
                if (arrayList == null) {
                    arrayList = new ArrayList<>();
                    this.f458a.put(value, arrayList);
                }
                arrayList.add(entry.getKey());
            }
        }

        private static void a(List<b> list, h hVar, f.a aVar, Object obj) {
            if (list != null) {
                for (int size = list.size() - 1; size >= 0; size--) {
                    list.get(size).a(hVar, aVar, obj);
                }
            }
        }

        void a(h hVar, f.a aVar, Object obj) {
            a(this.f458a.get(aVar), hVar, aVar, obj);
            a(this.f458a.get(f.a.ON_ANY), hVar, aVar, obj);
        }
    }

    static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final int f460a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final Method f461b;

        b(int i, Method method) {
            this.f460a = i;
            this.f461b = method;
            this.f461b.setAccessible(true);
        }

        void a(h hVar, f.a aVar, Object obj) {
            try {
                int i = this.f460a;
                if (i == 0) {
                    this.f461b.invoke(obj, new Object[0]);
                } else if (i == 1) {
                    this.f461b.invoke(obj, hVar);
                } else {
                    if (i != 2) {
                        return;
                    }
                    this.f461b.invoke(obj, hVar, aVar);
                }
            } catch (IllegalAccessException e2) {
                throw new RuntimeException(e2);
            } catch (InvocationTargetException e3) {
                throw new RuntimeException("Failed to call observer method", e3.getCause());
            }
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj == null || b.class != obj.getClass()) {
                return false;
            }
            b bVar = (b) obj;
            return this.f460a == bVar.f460a && this.f461b.getName().equals(bVar.f461b.getName());
        }

        public int hashCode() {
            return (this.f460a * 31) + this.f461b.getName().hashCode();
        }
    }

    a() {
    }

    private C0010a a(Class cls, Method[] methodArr) {
        int i;
        C0010a c0010aA;
        Class superclass = cls.getSuperclass();
        HashMap map = new HashMap();
        if (superclass != null && (c0010aA = a(superclass)) != null) {
            map.putAll(c0010aA.f459b);
        }
        for (Class<?> cls2 : cls.getInterfaces()) {
            for (Map.Entry<b, f.a> entry : a(cls2).f459b.entrySet()) {
                a(map, entry.getKey(), entry.getValue(), cls);
            }
        }
        if (methodArr == null) {
            methodArr = c(cls);
        }
        boolean z = false;
        for (Method method : methodArr) {
            q qVar = (q) method.getAnnotation(q.class);
            if (qVar != null) {
                Class<?>[] parameterTypes = method.getParameterTypes();
                if (parameterTypes.length <= 0) {
                    i = 0;
                } else {
                    if (!parameterTypes[0].isAssignableFrom(h.class)) {
                        throw new IllegalArgumentException("invalid parameter type. Must be one and instanceof LifecycleOwner");
                    }
                    i = 1;
                }
                f.a aVarValue = qVar.value();
                if (parameterTypes.length > 1) {
                    if (!parameterTypes[1].isAssignableFrom(f.a.class)) {
                        throw new IllegalArgumentException("invalid parameter type. second arg must be an event");
                    }
                    if (aVarValue != f.a.ON_ANY) {
                        throw new IllegalArgumentException("Second arg is supported only for ON_ANY value");
                    }
                    i = 2;
                }
                if (parameterTypes.length > 2) {
                    throw new IllegalArgumentException("cannot have more than 2 params");
                }
                a(map, new b(i, method), aVarValue, cls);
                z = true;
            }
        }
        C0010a c0010a = new C0010a(map);
        this.f456b.put(cls, c0010a);
        this.f457c.put(cls, Boolean.valueOf(z));
        return c0010a;
    }

    private void a(Map<b, f.a> map, b bVar, f.a aVar, Class cls) {
        f.a aVar2 = map.get(bVar);
        if (aVar2 == null || aVar == aVar2) {
            if (aVar2 == null) {
                map.put(bVar, aVar);
                return;
            }
            return;
        }
        throw new IllegalArgumentException("Method " + bVar.f461b.getName() + " in " + cls.getName() + " already declared with different @OnLifecycleEvent value: previous value " + aVar2 + ", new value " + aVar);
    }

    private Method[] c(Class cls) {
        try {
            return cls.getDeclaredMethods();
        } catch (NoClassDefFoundError e2) {
            throw new IllegalArgumentException("The observer class has some methods that use newer APIs which are not available in the current OS version. Lifecycles cannot access even other methods so you should make sure that your observer classes only access framework classes that are available in your min API level OR use lifecycle:compiler annotation processor.", e2);
        }
    }

    C0010a a(Class cls) {
        C0010a c0010a = this.f456b.get(cls);
        return c0010a != null ? c0010a : a(cls, null);
    }

    boolean b(Class cls) {
        if (this.f457c.containsKey(cls)) {
            return this.f457c.get(cls).booleanValue();
        }
        Method[] methodArrC = c(cls);
        for (Method method : methodArrC) {
            if (((q) method.getAnnotation(q.class)) != null) {
                a(cls, methodArrC);
                return true;
            }
        }
        this.f457c.put(cls, false);
        return false;
    }
}
