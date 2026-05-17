package jp.co.acrodea.drm.dumb;

import java.io.File;
import java.io.IOException;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;
import jp.co.acrodea.drm.DRMAgent;
import jp.co.acrodea.drm.DRMContent;
import jp.co.acrodea.drm.DRMGetInfo;
import jp.co.acrodea.drm.DRMInfo;
import jp.co.acrodea.drm.DRMRightsConstraint;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a extends DRMAgent {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Set<File> f3303a = Collections.synchronizedSet(new HashSet());

    public static void a() {
        DRMAgent.registerImplementation(a.class, "jp.co.acrodea.drm.dumb.DumbDRMAgent", null, false);
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public void clearAllPersistentInfo() {
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public byte[] genRequestData() {
        return new byte[0];
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public File[] getAssociatedDRMFile(File file) throws IOException {
        getDRMFileType(file);
        return new File[0];
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public DRMContent getDRMContent(File file) throws IOException {
        getDRMFileType(file);
        return new b(this, file);
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public int getDRMFileType(File file) throws IOException {
        if (this.f3303a.contains(file)) {
            return 1;
        }
        throw new IOException("Not registered");
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public DRMInfo getInfo(File file) throws IOException {
        getDRMFileType(file);
        return null;
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public String getModuleName() {
        return "jp.co.acrodea.drm.dumb.DumbDRMAgent";
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public File[] getRegisteredDRMFile() {
        return (File[]) this.f3303a.toArray(new File[0]);
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public DRMRightsConstraint getRightsConstraint(File file) throws IOException {
        getDRMFileType(file);
        return new c(this);
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public boolean isCompletedDRMFile(File file) throws IOException {
        getDRMFileType(file);
        return true;
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public boolean isDRMFile(File file) throws IOException {
        if (file == null) {
            throw new NullPointerException();
        }
        if (file.isFile()) {
            return true;
        }
        throw new IOException("Not a file");
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public byte[] loadSecureStorage(File file, String str) {
        if (str != null) {
            return null;
        }
        throw new NullPointerException();
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    protected void onCreate(String str, DRMGetInfo dRMGetInfo) {
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public void registerDRMFile(File file) throws IOException {
        isDRMFile(file);
        this.f3303a.add(file);
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public void storeSecureStorage(File file, String str, byte[] bArr, int i, int i2) {
        if (str == null) {
            throw new NullPointerException();
        }
        if (i >= 0 && i2 >= 0 && i + i2 <= bArr.length) {
            throw new UnsupportedOperationException();
        }
        throw new IndexOutOfBoundsException();
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public void unregisterAllDRMFiles() {
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public boolean unregisterDRMFile(File file) throws IOException {
        isDRMFile(file);
        return this.f3303a.remove(file);
    }
}
