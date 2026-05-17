package c.a.a.a.c;

import android.os.IBinder;
import android.os.IInterface;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public interface a extends IInterface {

    /* JADX INFO: renamed from: c.a.a.a.c.a$a, reason: collision with other inner class name */
    public static abstract class AbstractBinderC0017a extends c.a.a.a.d.c.b implements a {

        /* JADX INFO: renamed from: c.a.a.a.c.a$a$a, reason: collision with other inner class name */
        public static class C0018a extends c.a.a.a.d.c.a implements a {
            C0018a(IBinder iBinder) {
                super(iBinder, "com.google.android.gms.dynamic.IObjectWrapper");
            }
        }

        public AbstractBinderC0017a() {
            super("com.google.android.gms.dynamic.IObjectWrapper");
        }

        public static a a(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.dynamic.IObjectWrapper");
            return iInterfaceQueryLocalInterface instanceof a ? (a) iInterfaceQueryLocalInterface : new C0018a(iBinder);
        }
    }
}
