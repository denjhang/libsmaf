package androidx.versionedparcelable;

import android.os.Parcelable;
import java.lang.reflect.InvocationTargetException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class b {
    protected static <T extends d> T a(String str, b bVar) {
        try {
            return (T) Class.forName(str, true, b.class.getClassLoader()).getDeclaredMethod("read", b.class).invoke(null, bVar);
        } catch (ClassNotFoundException e2) {
            throw new RuntimeException("VersionedParcel encountered ClassNotFoundException", e2);
        } catch (IllegalAccessException e3) {
            throw new RuntimeException("VersionedParcel encountered IllegalAccessException", e3);
        } catch (NoSuchMethodException e4) {
            throw new RuntimeException("VersionedParcel encountered NoSuchMethodException", e4);
        } catch (InvocationTargetException e5) {
            if (e5.getCause() instanceof RuntimeException) {
                throw ((RuntimeException) e5.getCause());
            }
            throw new RuntimeException("VersionedParcel encountered InvocationTargetException", e5);
        }
    }

    private static Class a(Class<? extends d> cls) {
        return Class.forName(String.format("%s.%sParcelizer", cls.getPackage().getName(), cls.getSimpleName()), false, cls.getClassLoader());
    }

    protected static <T extends d> void a(T t, b bVar) {
        try {
            b(t).getDeclaredMethod("write", t.getClass(), b.class).invoke(null, t, bVar);
        } catch (ClassNotFoundException e2) {
            throw new RuntimeException("VersionedParcel encountered ClassNotFoundException", e2);
        } catch (IllegalAccessException e3) {
            throw new RuntimeException("VersionedParcel encountered IllegalAccessException", e3);
        } catch (NoSuchMethodException e4) {
            throw new RuntimeException("VersionedParcel encountered NoSuchMethodException", e4);
        } catch (InvocationTargetException e5) {
            if (!(e5.getCause() instanceof RuntimeException)) {
                throw new RuntimeException("VersionedParcel encountered InvocationTargetException", e5);
            }
            throw ((RuntimeException) e5.getCause());
        }
    }

    private static <T extends d> Class b(T t) {
        return a((Class<? extends d>) t.getClass());
    }

    private void c(d dVar) {
        try {
            a(a((Class<? extends d>) dVar.getClass()).getName());
        } catch (ClassNotFoundException e2) {
            throw new RuntimeException(dVar.getClass().getSimpleName() + " does not have a Parcelizer", e2);
        }
    }

    public int a(int i, int i2) {
        return !a(i2) ? i : e();
    }

    public <T extends Parcelable> T a(T t, int i) {
        return !a(i) ? t : (T) f();
    }

    public <T extends d> T a(T t, int i) {
        return !a(i) ? t : (T) h();
    }

    public String a(String str, int i) {
        return !a(i) ? str : g();
    }

    protected abstract void a();

    protected abstract void a(Parcelable parcelable);

    protected void a(d dVar) {
        if (dVar == null) {
            a((String) null);
            return;
        }
        c(dVar);
        b bVarB = b();
        a(dVar, bVarB);
        bVarB.a();
    }

    protected abstract void a(String str);

    public void a(boolean z, boolean z2) {
    }

    protected abstract void a(byte[] bArr);

    protected abstract boolean a(int i);

    public byte[] a(byte[] bArr, int i) {
        return !a(i) ? bArr : d();
    }

    protected abstract b b();

    protected abstract void b(int i);

    public void b(int i, int i2) {
        b(i2);
        c(i);
    }

    public void b(Parcelable parcelable, int i) {
        b(i);
        a(parcelable);
    }

    public void b(d dVar, int i) {
        b(i);
        a(dVar);
    }

    public void b(String str, int i) {
        b(i);
        a(str);
    }

    public void b(byte[] bArr, int i) {
        b(i);
        a(bArr);
    }

    protected abstract void c(int i);

    public boolean c() {
        return false;
    }

    protected abstract byte[] d();

    protected abstract int e();

    protected abstract <T extends Parcelable> T f();

    protected abstract String g();

    protected <T extends d> T h() {
        String strG = g();
        if (strG == null) {
            return null;
        }
        return (T) a(strG, b());
    }
}
