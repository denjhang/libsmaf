package jp.co.acrodea.runtime.drm.agent;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.UnsupportedEncodingException;
import java.util.Iterator;
import jp.co.acrodea.drm.DRMAgent;
import jp.co.acrodea.drm.DRMContent;
import jp.co.acrodea.drm.DRMDeviceDoesNotMatchException;
import jp.co.acrodea.drm.DRMGeneralException;
import jp.co.acrodea.drm.DRMGetInfo;
import jp.co.acrodea.drm.DRMInfo;
import jp.co.acrodea.drm.DRMNoRightsException;
import jp.co.acrodea.drm.DRMRightsExpiredException;
import jp.co.acrodea.drm.DRMSecurityException;
import jp.co.acrodea.runtime.drm.AcDRMUtil;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a extends DRMAgent {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Object f3319a = new Object();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private AcDRMUtil f3320b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int f3321c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private DRMGetInfo f3322d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private DRMGetInfo f3323e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private g f3324f;
    private k g;
    private f h;
    private r i;
    private boolean j;

    private b a(File file, boolean z) throws DRMNoRightsException, DRMSecurityException, IOException, DRMRightsExpiredException, DRMDeviceDoesNotMatchException {
        Object e2;
        File[] fileArrB = this.f3324f.b(file, true);
        j jVarG = this.f3324f.g(file);
        if (jVarG == null) {
            throw new IOException("Not registered");
        }
        int i = jVarG.f3356a;
        b bVar = null;
        if (i != 1 && i != 2) {
            int length = fileArrB.length;
            j jVar = jVarG;
            int i2 = 0;
            while (true) {
                if (i2 >= length) {
                    file = null;
                    jVarG = jVar;
                    break;
                }
                File file2 = fileArrB[i2];
                j jVarG2 = this.f3324f.g(file);
                if (jVarG2 != null && jVarG2.f3356a == 2) {
                    file = file2;
                    jVarG = jVarG2;
                    break;
                }
                i2++;
                jVar = jVarG2;
            }
        }
        if (file == null) {
            throw new DRMSecurityException("Cannot find DRM Content");
        }
        if (jVarG.f3356a == 1) {
            b bVar2 = new b(this, file, null);
            try {
                bVar2.a(z ? 0 : 1);
                e2 = null;
                bVar = bVar2;
            } catch (IOException | DRMGeneralException e3) {
                e2 = e3;
                try {
                    bVar2.close();
                } catch (IOException unused) {
                }
            }
        } else {
            b bVar3 = null;
            Object e4 = null;
            for (File file3 : fileArrB) {
                j jVarG3 = this.f3324f.g(file3);
                if (jVarG3 != null && jVarG3.f3356a == 3) {
                    bVar3 = new b(this, file, file3);
                    try {
                        bVar3.a(z ? 0 : 1);
                    } catch (IOException | DRMGeneralException e5) {
                        e4 = e5;
                        try {
                            bVar3.close();
                        } catch (IOException unused2) {
                        }
                        bVar3 = null;
                    }
                    if (bVar3 != null) {
                        break;
                    }
                }
            }
            bVar = bVar3;
            e2 = e4;
        }
        if (bVar != null) {
            return bVar;
        }
        if (e2 == null) {
            throw new DRMNoRightsException();
        }
        if (e2 instanceof DRMNoRightsException) {
            throw ((DRMNoRightsException) e2);
        }
        if (e2 instanceof DRMRightsExpiredException) {
            throw ((DRMRightsExpiredException) e2);
        }
        if (e2 instanceof DRMDeviceDoesNotMatchException) {
            throw ((DRMDeviceDoesNotMatchException) e2);
        }
        if (e2 instanceof DRMSecurityException) {
            throw ((DRMSecurityException) e2);
        }
        if (e2 instanceof IOException) {
            throw ((IOException) e2);
        }
        throw new DRMSecurityException();
    }

    public static void a() {
        DRMAgent.registerImplementation(a.class, "jp.co.acrodea.runtime.drm.agent.DRMAgent", "IMEI", true);
        DRMAgent.registerImplementation(a.class, "jp.co.acrodea.runtime.drm.agent.DRMAgent.IMSI", "IMSI", false);
        DRMAgent.registerImplementation(a.class, "jp.co.acrodea.runtime.drm.agent.DRMAgent.IMSI_NOCACHE", "IMSI_NOCACHE", false);
    }

    private void a(File file) throws IOException {
        if (!this.f3324f.e(file)) {
            throw new IOException("Not registered");
        }
    }

    static /* synthetic */ void a(a aVar, jp.co.acrodea.runtime.drm.o oVar) throws DRMNoRightsException, DRMSecurityException, IOException, DRMRightsExpiredException, DRMDeviceDoesNotMatchException {
        aVar.a(oVar);
        throw null;
    }

    private void a(jp.co.acrodea.runtime.drm.o oVar) throws DRMNoRightsException, DRMSecurityException, IOException, DRMRightsExpiredException, DRMDeviceDoesNotMatchException {
        switch (oVar.a()) {
            case 1:
                throw new DRMSecurityException("Broken data", oVar);
            case 2:
                throw new DRMSecurityException("Key not found", oVar);
            case 3:
                throw new DRMSecurityException("Invalid signature", oVar);
            case 4:
            case 5:
                throw new DRMSecurityException("Bad encryption", oVar);
            case 6:
                throw new IOException("Already opened");
            case 7:
                throw new IOException();
            case 8:
                throw new DRMSecurityException("Not supported operation", oVar);
            case 9:
                throw new IOException("Already closed");
            case 10:
                throw new DRMSecurityException("Initialization failure", oVar);
            case 11:
                throw new DRMSecurityException("Encryption failure", oVar);
            case 12:
                throw new DRMSecurityException("Invalid operation", oVar);
            case HTTP.CR /* 13 */:
                throw new DRMNoRightsException(oVar);
            case 14:
                throw new DRMRightsExpiredException(oVar);
            case 15:
                throw new DRMDeviceDoesNotMatchException(oVar);
            default:
                throw new DRMSecurityException("Unknown error");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b() throws DRMSecurityException {
        String deviceId = this.f3322d.getDeviceId();
        if (deviceId == null) {
            throw new DRMSecurityException("Cannot get device id");
        }
        this.f3320b.b(deviceId);
    }

    static /* synthetic */ void b(a aVar, jp.co.acrodea.runtime.drm.o oVar) throws DRMSecurityException {
        aVar.b(oVar);
        throw null;
    }

    private void b(jp.co.acrodea.runtime.drm.o oVar) throws DRMSecurityException {
        try {
            a(oVar);
            throw null;
        } catch (IOException e2) {
            throw new DRMSecurityException("IO error", e2);
        } catch (DRMDeviceDoesNotMatchException e3) {
            throw new DRMSecurityException("Device does not match", e3);
        } catch (DRMNoRightsException e4) {
            throw new DRMSecurityException("No Rights", e4);
        } catch (DRMRightsExpiredException e5) {
            throw new DRMSecurityException("Rights expired", e5);
        }
    }

    private void c() {
        synchronized (f3319a) {
            int i = 0;
            File fileD = d();
            File file = new File(fileD, "kv.dat");
            try {
                i = Integer.parseInt(new String(r.a(file), HTTP.UTF_8));
            } catch (UnsupportedEncodingException | IOException | NumberFormatException unused) {
            }
            File file2 = new File(fileD, "p.dat");
            File file3 = new File(fileD, "s.dat");
            File file4 = new File(fileD, "a.dat");
            if (i == 0 || i < 1) {
                this.i.a("keylist.pub", file2);
                this.i.a("keylist.pri", file3);
                this.i.a("keylist.sec", file4);
                try {
                    r.a(file, Integer.toString(1).getBytes(HTTP.UTF_8));
                } catch (UnsupportedEncodingException | IOException unused2) {
                }
            }
            try {
                this.f3320b.a(file2);
                this.f3320b.b(file3);
                this.f3320b.c(file4);
            } catch (jp.co.acrodea.runtime.drm.o unused3) {
                throw new IOException("Cannot initialize key database");
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public File d() {
        return this.h.a("da");
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public void clearAllPersistentInfo() {
        synchronized (f3319a) {
            File fileD = d();
            try {
                this.f3320b.c();
                this.f3324f.a();
                this.g.a();
                new File(fileD, "i.dat").delete();
            } catch (jp.co.acrodea.runtime.drm.o unused) {
                throw new IOException("Unknown error");
            }
        }
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public byte[] genRequestData() {
        byte[] bArrA;
        synchronized (this.f3320b) {
            b();
            try {
                bArrA = this.f3320b.a(2164397569L, 2164401665L, 1L, 1L, true);
            } catch (jp.co.acrodea.runtime.drm.o e2) {
                b(e2);
                throw null;
            }
        }
        return bArrA;
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public File[] getAssociatedDRMFile(File file) throws IOException {
        a(file);
        return this.f3324f.b(file, false);
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public DRMContent getDRMContent(File file) throws IOException {
        a(file);
        return a(file, true);
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public int getDRMFileType(File file) throws IOException {
        a(file);
        return g.a(file, false).f3356a;
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public DRMInfo getInfo(File file) throws IOException {
        a(file);
        FileInputStream fileInputStream = new FileInputStream(file);
        try {
            Object objA = jp.co.acrodea.runtime.drm.p.a(fileInputStream);
            if (objA != null && (objA instanceof DRMInfo)) {
                DRMInfo dRMInfo = (DRMInfo) objA;
                fileInputStream.close();
                return dRMInfo;
            }
        } catch (IOException unused) {
        } catch (Throwable th) {
            fileInputStream.close();
            throw th;
        }
        fileInputStream.close();
        return null;
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public String getModuleName() {
        return this.f3321c == 1 ? this.j ? "jp.co.acrodea.runtime.drm.agent.DRMAgent.IMSI" : "jp.co.acrodea.runtime.drm.agent.DRMAgent.IMSI_NOCACHE" : "jp.co.acrodea.runtime.drm.agent.DRMAgent";
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public File[] getRegisteredDRMFile() {
        File[] fileArr;
        synchronized (this.f3324f) {
            fileArr = new File[this.f3324f.b()];
            int i = 0;
            Iterator<File> it = this.f3324f.iterator();
            while (it.hasNext()) {
                fileArr[i] = it.next();
                i++;
            }
        }
        return fileArr;
    }

    /* JADX WARN: Removed duplicated region for block: B:27:0x0049  */
    @Override // jp.co.acrodea.drm.DRMAgent
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public jp.co.acrodea.drm.DRMRightsConstraint getRightsConstraint(java.io.File r5) throws java.lang.Throwable {
        /*
            r4 = this;
            r4.a(r5)
            r0 = 0
            jp.co.acrodea.runtime.drm.agent.g r1 = r4.f3324f     // Catch: java.lang.Throwable -> L46 jp.co.acrodea.drm.DRMRightsExpiredException -> L4d jp.co.acrodea.drm.DRMNoRightsException -> L54
            jp.co.acrodea.runtime.drm.agent.j r1 = r1.g(r5)     // Catch: java.lang.Throwable -> L46 jp.co.acrodea.drm.DRMRightsExpiredException -> L4d jp.co.acrodea.drm.DRMNoRightsException -> L54
            int r1 = r1.f3356a     // Catch: java.lang.Throwable -> L46 jp.co.acrodea.drm.DRMRightsExpiredException -> L4d jp.co.acrodea.drm.DRMNoRightsException -> L54
            r2 = 3
            if (r1 != r2) goto L21
            jp.co.acrodea.runtime.drm.agent.b r1 = new jp.co.acrodea.runtime.drm.agent.b     // Catch: java.lang.Throwable -> L46 jp.co.acrodea.drm.DRMRightsExpiredException -> L4d jp.co.acrodea.drm.DRMNoRightsException -> L54
            r1.<init>(r4, r0, r5)     // Catch: java.lang.Throwable -> L46 jp.co.acrodea.drm.DRMRightsExpiredException -> L4d jp.co.acrodea.drm.DRMNoRightsException -> L54
            r5 = 2
            r1.a(r5)     // Catch: java.lang.Throwable -> L1a jp.co.acrodea.drm.DRMRightsExpiredException -> L1d jp.co.acrodea.drm.DRMNoRightsException -> L1f
            r5 = r1
            goto L26
        L1a:
            r5 = move-exception
            r0 = r1
            goto L47
        L1d:
            goto L4e
        L1f:
            goto L55
        L21:
            r1 = 0
            jp.co.acrodea.runtime.drm.agent.b r5 = r4.a(r5, r1)     // Catch: java.lang.Throwable -> L46 jp.co.acrodea.drm.DRMRightsExpiredException -> L4d jp.co.acrodea.drm.DRMNoRightsException -> L54
        L26:
            if (r5 != 0) goto L2e
            if (r5 == 0) goto L2d
            r5.close()
        L2d:
            return r0
        L2e:
            jp.co.acrodea.runtime.drm.agent.d r0 = new jp.co.acrodea.runtime.drm.agent.d     // Catch: java.lang.Throwable -> L41
            jp.co.acrodea.runtime.drm.v r1 = r5.a()     // Catch: java.lang.Throwable -> L41
            jp.co.acrodea.runtime.drm.agent.l r2 = r5.b()     // Catch: java.lang.Throwable -> L41
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L41
            if (r5 == 0) goto L40
            r5.close()
        L40:
            return r0
        L41:
            r0 = move-exception
            r3 = r0
            r0 = r5
            r5 = r3
            goto L47
        L46:
            r5 = move-exception
        L47:
            if (r0 == 0) goto L4c
            r0.close()
        L4c:
            throw r5
        L4d:
            r1 = r0
        L4e:
            if (r1 == 0) goto L53
            r1.close()
        L53:
            return r0
        L54:
            r1 = r0
        L55:
            if (r1 == 0) goto L5a
            r1.close()
        L5a:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.acrodea.runtime.drm.agent.a.getRightsConstraint(java.io.File):jp.co.acrodea.drm.DRMRightsConstraint");
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public boolean isCompletedDRMFile(File file) throws IOException {
        a(file);
        return this.f3324f.f(file);
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public boolean isDRMFile(File file) {
        return g.b(file);
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public byte[] loadSecureStorage(File file, String str) throws DRMSecurityException, IOException {
        try {
            String canonicalPath = file.getCanonicalPath();
            b();
            return this.f3320b.a(canonicalPath, file).a_(str);
        } catch (jp.co.acrodea.runtime.drm.o e2) {
            b(e2);
            throw null;
        }
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    protected void onCreate(String str, DRMGetInfo dRMGetInfo) throws DRMSecurityException, IOException {
        this.h = new f(this.context);
        this.i = new r(this.h);
        File fileD = d();
        if (!fileD.isDirectory() && !fileD.mkdirs()) {
            throw new IOException("Cannot create internal directory");
        }
        this.f3320b = AcDRMUtil.a();
        this.f3320b.d(d());
        this.f3321c = 0;
        this.f3322d = new c(this, null);
        this.f3324f = null;
        this.g = null;
        this.j = false;
        if ("IMSI".equals(str)) {
            this.f3321c = 1;
            this.j = true;
        } else {
            if ("IMSI_NOCACHE".equals(str)) {
                this.f3321c = 1;
            } else {
                this.f3321c = 0;
            }
            this.j = false;
        }
        this.f3323e = dRMGetInfo;
        b();
        c();
        this.f3324f = g.a(fileD);
        this.g = k.a(fileD);
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public void registerDRMFile(File file) {
        this.f3324f.c(file);
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public void storeSecureStorage(File file, String str, byte[] bArr, int i, int i2) throws DRMSecurityException, IOException {
        try {
            String canonicalPath = file.getCanonicalPath();
            b();
            this.f3320b.a(canonicalPath, file).a(str, bArr, i, i2);
        } catch (jp.co.acrodea.runtime.drm.o e2) {
            b(e2);
            throw null;
        }
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public void unregisterAllDRMFiles() {
        this.f3324f.a();
    }

    @Override // jp.co.acrodea.drm.DRMAgent
    public boolean unregisterDRMFile(File file) {
        return this.f3324f.d(file);
    }
}
