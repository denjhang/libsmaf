package jp.co.acrodea.runtime.drm.agent;

import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.io.RandomAccessFile;
import jp.co.acrodea.drm.DRMContent;
import jp.co.acrodea.drm.DRMRandomAccessRead;
import jp.co.acrodea.drm.DRMSecurityException;
import jp.co.acrodea.drm.URIEventListener;
import jp.co.acrodea.drm.URIStreamServer;
import jp.co.acrodea.runtime.drm.v;
import jp.co.acrodea.runtime.drm.w;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b implements DRMContent, jp.co.acrodea.runtime.drm.i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ a f3325a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f3326b = 0;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int f3327c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private File f3328d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private File f3329e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private RandomAccessFile f3330f;
    private RandomAccessFile g;
    private jp.co.acrodea.runtime.drm.a h;
    private v i;
    private l j;
    private m k;

    public b(a aVar, File file, File file2) {
        this.f3325a = aVar;
        this.f3328d = file;
        this.f3329e = file2;
    }

    v a() {
        return this.i;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x005e  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0060  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x006e  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0070  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(int r4) {
        /*
            r3 = this;
            int r0 = r3.f3326b
            if (r0 != 0) goto L84
            r3.f3327c = r4
            jp.co.acrodea.runtime.drm.agent.a r0 = r3.f3325a
            jp.co.acrodea.runtime.drm.agent.a.f(r0)
            java.io.File r0 = r3.f3328d
            java.lang.String r1 = "r"
            if (r0 == 0) goto L3b
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile
            r2.<init>(r0, r1)
            r3.f3330f = r2
            java.io.File r0 = r3.f3329e
            if (r0 == 0) goto L32
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile
            r2.<init>(r0, r1)
            r3.g = r2
            jp.co.acrodea.runtime.drm.agent.a r0 = r3.f3325a
            jp.co.acrodea.runtime.drm.AcDRMUtil r0 = jp.co.acrodea.runtime.drm.agent.a.g(r0)
            java.io.RandomAccessFile r1 = r3.g
            java.io.RandomAccessFile r2 = r3.f3330f
            jp.co.acrodea.runtime.drm.a r0 = r0.a(r1, r2)
            goto L52
        L32:
            jp.co.acrodea.runtime.drm.agent.a r0 = r3.f3325a
            jp.co.acrodea.runtime.drm.AcDRMUtil r0 = jp.co.acrodea.runtime.drm.agent.a.g(r0)
            java.io.RandomAccessFile r1 = r3.f3330f
            goto L4e
        L3b:
            java.io.File r0 = r3.f3329e
            if (r0 == 0) goto L7e
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile
            r2.<init>(r0, r1)
            r3.g = r2
            jp.co.acrodea.runtime.drm.agent.a r0 = r3.f3325a
            jp.co.acrodea.runtime.drm.AcDRMUtil r0 = jp.co.acrodea.runtime.drm.agent.a.g(r0)
            java.io.RandomAccessFile r1 = r3.g
        L4e:
            jp.co.acrodea.runtime.drm.a r0 = r0.a(r1)
        L52:
            r3.h = r0
            jp.co.acrodea.runtime.drm.a r0 = r3.h
            r0.a(r3)
            jp.co.acrodea.runtime.drm.a r0 = r3.h
            r1 = 1
            if (r4 == 0) goto L60
            r2 = 1
            goto L61
        L60:
            r2 = 0
        L61:
            r0.a(r2)
            jp.co.acrodea.runtime.drm.a r0 = r3.h     // Catch: jp.co.acrodea.runtime.drm.o -> L74
            jp.co.acrodea.runtime.drm.v r0 = r0.a()     // Catch: jp.co.acrodea.runtime.drm.o -> L74
            r3.i = r0     // Catch: jp.co.acrodea.runtime.drm.o -> L74
            if (r4 != 0) goto L70
            r4 = 3
            goto L71
        L70:
            r4 = 2
        L71:
            r3.f3326b = r4
            return
        L74:
            r4 = move-exception
            r3.f3326b = r1
            jp.co.acrodea.runtime.drm.agent.a r0 = r3.f3325a
            jp.co.acrodea.runtime.drm.agent.a.a(r0, r4)
            r4 = 0
            throw r4
        L7e:
            java.lang.NullPointerException r4 = new java.lang.NullPointerException
            r4.<init>()
            throw r4
        L84:
            jp.co.acrodea.drm.DRMSecurityException r4 = new jp.co.acrodea.drm.DRMSecurityException
            java.lang.String r0 = "Invalid status"
            r4.<init>(r0)
            throw r4
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.acrodea.runtime.drm.agent.b.a(int):void");
    }

    /* JADX WARN: Code restructure failed: missing block: B:46:0x007e, code lost:
    
        if (r4.compareTo(jp.co.acrodea.runtime.drm.agent.r.a(r2, r9)) > 0) goto L22;
     */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0046  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0064  */
    @Override // jp.co.acrodea.runtime.drm.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean a(jp.co.acrodea.runtime.drm.v r9) {
        /*
            r8 = this;
            r0 = 1
            if (r9 != 0) goto L4
            return r0
        L4:
            java.util.UUID r1 = r9.b()
            if (r1 != 0) goto Lb
            return r0
        Lb:
            jp.co.acrodea.runtime.drm.agent.a r2 = r8.f3325a
            jp.co.acrodea.runtime.drm.agent.k r2 = jp.co.acrodea.runtime.drm.agent.a.h(r2)
            jp.co.acrodea.runtime.drm.agent.l r2 = r2.b(r1)
            r8.j = r2
            int r3 = r8.f3327c
            r4 = 2
            if (r3 != r4) goto L1d
            return r0
        L1d:
            r3 = 0
            if (r2 == 0) goto L25
            boolean r4 = r2.f3367a
            if (r4 == 0) goto L25
            return r3
        L25:
            java.util.Date r4 = new java.util.Date
            r4.<init>()
            int r5 = r9.c()
            r6 = r5 & 1
            if (r6 == 0) goto L46
            int r6 = r9.d()
            if (r2 == 0) goto L46
            int r7 = r2.f3369c
            if (r7 < r6) goto L46
        L3c:
            jp.co.acrodea.runtime.drm.agent.a r9 = r8.f3325a
            jp.co.acrodea.runtime.drm.agent.k r9 = jp.co.acrodea.runtime.drm.agent.a.h(r9)
            r9.c(r1)
            return r3
        L46:
            r6 = r5 & 2
            if (r6 == 0) goto L64
            java.util.Date r6 = r9.e()
            if (r6 == 0) goto L57
            int r6 = r4.compareTo(r6)
            if (r6 >= 0) goto L57
            return r3
        L57:
            java.util.Date r6 = r9.f()
            if (r6 == 0) goto L64
            int r6 = r4.compareTo(r6)
            if (r6 <= 0) goto L64
            goto L3c
        L64:
            r5 = r5 & 4
            if (r5 == 0) goto L81
            if (r2 == 0) goto L81
            java.lang.String r9 = r9.g()
            if (r9 == 0) goto L81
            java.util.Date r2 = r2.f3368b
            if (r2 == 0) goto L75
            goto L76
        L75:
            r2 = r4
        L76:
            java.util.Date r9 = jp.co.acrodea.runtime.drm.agent.r.a(r2, r9)
            int r9 = r4.compareTo(r9)
            if (r9 <= 0) goto L81
            goto L3c
        L81:
            int r9 = r8.f3327c
            if (r9 != 0) goto L91
            jp.co.acrodea.runtime.drm.agent.a r9 = r8.f3325a
            jp.co.acrodea.runtime.drm.agent.k r9 = jp.co.acrodea.runtime.drm.agent.a.h(r9)
            jp.co.acrodea.runtime.drm.agent.l r9 = r9.a(r1)
            r8.j = r9
        L91:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.acrodea.runtime.drm.agent.b.a(jp.co.acrodea.runtime.drm.v):boolean");
    }

    l b() {
        return this.j;
    }

    @Override // jp.co.acrodea.drm.DRMContent, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        this.i = null;
        m mVar = this.k;
        if (mVar != null) {
            mVar.close();
            this.k = null;
        }
        jp.co.acrodea.runtime.drm.a aVar = this.h;
        if (aVar != null) {
            aVar.close();
            this.h = null;
        }
        RandomAccessFile randomAccessFile = this.f3330f;
        if (randomAccessFile != null) {
            randomAccessFile.close();
            this.f3330f = null;
        }
        RandomAccessFile randomAccessFile2 = this.g;
        if (randomAccessFile2 != null) {
            randomAccessFile2.close();
            this.g = null;
        }
        this.f3326b = 4;
    }

    @Override // jp.co.acrodea.drm.DRMContent
    public URIStreamServer createURIStreamServer(URIEventListener uRIEventListener, String str) throws DRMSecurityException, IOException {
        if (uRIEventListener == null) {
            throw new NullPointerException();
        }
        if (this.f3326b != 3) {
            throw new DRMSecurityException("Invalid status");
        }
        if (this.k != null) {
            throw new DRMSecurityException("Invalid status");
        }
        try {
            w wVarE = this.h.e();
            long jC = this.h.c();
            if (str == null || str.length() == 0) {
                str = this.h.b();
            }
            this.k = new m(uRIEventListener, wVarE, jC, str);
            return this.k;
        } catch (jp.co.acrodea.runtime.drm.o e2) {
            a.b(this.f3325a, e2);
            throw null;
        }
    }

    @Override // jp.co.acrodea.drm.DRMContent
    public InputStream getContentInputStream() throws DRMSecurityException {
        if (this.f3326b != 3) {
            throw new DRMSecurityException("Invalid status");
        }
        try {
            return this.h.d();
        } catch (jp.co.acrodea.runtime.drm.o e2) {
            a.b(this.f3325a, e2);
            throw null;
        }
    }

    @Override // jp.co.acrodea.drm.DRMContent
    public long getContentLength() throws DRMSecurityException {
        int i = this.f3326b;
        if (i != 3 && i != 2) {
            throw new DRMSecurityException("Invalid status");
        }
        try {
            return this.h.c();
        } catch (jp.co.acrodea.runtime.drm.o e2) {
            a.b(this.f3325a, e2);
            throw null;
        }
    }

    @Override // jp.co.acrodea.drm.DRMContent
    public String getContentMIMEType() throws DRMSecurityException {
        int i = this.f3326b;
        if (i != 3 && i != 2) {
            throw new DRMSecurityException("Invalid status");
        }
        try {
            return this.h.b();
        } catch (jp.co.acrodea.runtime.drm.o e2) {
            a.b(this.f3325a, e2);
            throw null;
        }
    }

    @Override // jp.co.acrodea.drm.DRMContent
    public DRMRandomAccessRead getContentRandomAccessRead() throws DRMSecurityException {
        if (this.f3326b != 3) {
            throw new DRMSecurityException("Invalid status");
        }
        try {
            return this.h.e();
        } catch (jp.co.acrodea.runtime.drm.o e2) {
            a.b(this.f3325a, e2);
            throw null;
        }
    }

    @Override // jp.co.acrodea.drm.DRMContent
    public boolean validateContent() throws DRMSecurityException {
        if (this.f3326b != 3) {
            throw new DRMSecurityException("Invalid status");
        }
        try {
            return this.h.b(true);
        } catch (jp.co.acrodea.runtime.drm.o e2) {
            a.b(this.f3325a, e2);
            throw null;
        }
    }
}
