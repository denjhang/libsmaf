package jp.co.acrodea.drm;

import android.content.Context;
import java.io.File;
import java.util.HashMap;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class DRMAgent {
    public static final int FILETYPE_COMBINED = 1;
    public static final int FILETYPE_CONTENT = 2;
    public static final int FILETYPE_RIGHTS = 3;
    public static final int FILETYPE_UNKNOWN = 0;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static HashMap<String, a> f3291a = new HashMap<>();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static String f3292b = null;
    protected Context context;

    static {
        jp.co.acrodea.runtime.drm.agent.a.a();
        jp.co.acrodea.drm.dumb.a.a();
    }

    protected DRMAgent() {
    }

    public static DRMAgent getInstance(Context context) {
        return getInstance(context, null);
    }

    public static DRMAgent getInstance(Context context, String str) {
        return getInstance(context, str, null);
    }

    public static DRMAgent getInstance(Context context, String str, DRMGetInfo dRMGetInfo) throws ClassNotFoundException {
        if (context == null) {
            throw new NullPointerException();
        }
        if (str == null) {
            str = f3292b;
        }
        a aVar = f3291a.get(str);
        if (aVar == null) {
            throw new ClassNotFoundException();
        }
        try {
            DRMAgent dRMAgentNewInstance = aVar.f3293a.newInstance();
            dRMAgentNewInstance.context = context;
            dRMAgentNewInstance.onCreate(aVar.f3294b, dRMGetInfo);
            return dRMAgentNewInstance;
        } catch (IllegalAccessException unused) {
            throw new ClassNotFoundException();
        } catch (InstantiationException unused2) {
            throw new ClassNotFoundException();
        }
    }

    protected static void registerImplementation(Class<? extends DRMAgent> cls, String str, String str2, boolean z) {
        a aVar = new a(null);
        aVar.f3293a = cls;
        aVar.f3294b = str2;
        f3291a.put(str, aVar);
        if (z || f3292b == null) {
            f3292b = str;
        }
    }

    public abstract void clearAllPersistentInfo();

    public abstract byte[] genRequestData();

    public abstract File[] getAssociatedDRMFile(File file);

    public abstract DRMContent getDRMContent(File file);

    public abstract int getDRMFileType(File file);

    public abstract DRMInfo getInfo(File file);

    public abstract String getModuleName();

    public abstract File[] getRegisteredDRMFile();

    public abstract DRMRightsConstraint getRightsConstraint(File file);

    public abstract boolean isCompletedDRMFile(File file);

    public abstract boolean isDRMFile(File file);

    public abstract byte[] loadSecureStorage(File file, String str);

    protected void onCreate(String str, DRMGetInfo dRMGetInfo) {
    }

    public abstract void registerDRMFile(File file);

    public void storeSecureStorage(File file, String str, byte[] bArr) {
        storeSecureStorage(file, str, bArr, 0, bArr.length);
    }

    public abstract void storeSecureStorage(File file, String str, byte[] bArr, int i, int i2);

    public abstract void unregisterAllDRMFiles();

    public abstract boolean unregisterDRMFile(File file);
}
