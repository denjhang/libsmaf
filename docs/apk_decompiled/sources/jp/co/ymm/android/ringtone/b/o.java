package jp.co.ymm.android.ringtone.b;

import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.util.Map;
import jp.co.acrodea.drm.DRMContent;
import jp.co.ymm.android.ringtone.b.c;
import jp.co.ymm.android.ringtone.b.u;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class o extends u {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static final Map<String, c.b> f3529e = new n();

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private jp.co.ymm.android.ringtone.util.m f3530f;

    private static class a extends u.b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final jp.co.ymm.android.ringtone.util.m f3531a;

        a(jp.co.ymm.android.ringtone.util.m mVar) {
            this.f3531a = mVar;
        }

        @Override // jp.co.ymm.android.ringtone.b.u.b
        InputStream a(File file) {
            return new m(this.f3531a.a(file));
        }
    }

    o(File file, String str, byte[] bArr, jp.co.ymm.android.ringtone.util.m mVar) throws Exception {
        super(file, new a(mVar));
        this.f3530f = null;
        jp.co.ymm.android.ringtone.util.g.a(str != null);
        jp.co.ymm.android.ringtone.util.g.a(bArr != null);
        jp.co.ymm.android.ringtone.util.g.d("<<create>> " + n() + ", ro=" + str.length() + " character(s), body=" + bArr.length + " byte(s)");
        this.f3530f = mVar;
        jp.co.ymm.android.ringtone.util.g.a(this.f3530f != null);
        FileOutputStream fileOutputStream = new FileOutputStream(n());
        try {
            fileOutputStream.write(jp.co.ymm.android.ringtone.util.z.b(str));
            fileOutputStream.write(bArr);
            fileOutputStream.close();
            b(1);
        } catch (Throwable th) {
            fileOutputStream.close();
            throw th;
        }
    }

    o(File file, jp.co.ymm.android.ringtone.util.m mVar) throws Exception {
        super(file, new a(mVar));
        this.f3530f = null;
        this.f3530f = mVar;
        jp.co.ymm.android.ringtone.util.g.a(this.f3530f != null);
        b(1);
    }

    private void b(int i) throws Exception {
        if (!this.f3530f.c(n())) {
            throw new Exception("!DRMAgent#isDRMFile(" + n() + ") ...");
        }
        this.f3530f.d(n());
        int iB = this.f3530f.b(n());
        if (iB == i) {
            return;
        }
        throw new Exception("DRMAgent#getDRMFileType(" + n() + ") returns " + iB + ", expectedType=" + i + " ...");
    }

    @Override // jp.co.ymm.android.ringtone.b.u
    long h() {
        DRMContent dRMContentA = this.f3530f.a(n());
        if (dRMContentA != null) {
            try {
                return dRMContentA.getContentLength();
            } finally {
                dRMContentA.close();
            }
        }
        jp.co.ymm.android.ringtone.util.g.g("DRMAgent#getDRMContent(" + n() + ") returns null ...");
        return 0L;
    }

    @Override // jp.co.ymm.android.ringtone.b.u
    c.b i() {
        DRMContent dRMContentA = this.f3530f.a(n());
        if (dRMContentA != null) {
            try {
                return f3529e.get(dRMContentA.getContentMIMEType());
            } finally {
                dRMContentA.close();
            }
        }
        jp.co.ymm.android.ringtone.util.g.g("DRMAgent#getDRMContent(" + n() + ") returns null ...");
        return null;
    }

    @Override // jp.co.ymm.android.ringtone.b.c
    public boolean isSecure() {
        return true;
    }

    @Override // jp.co.ymm.android.ringtone.b.u
    void l() {
        this.f3530f = null;
    }

    @Override // jp.co.ymm.android.ringtone.b.u
    boolean m() {
        return this.f3530f.e(n());
    }

    @Override // jp.co.ymm.android.ringtone.b.u
    Class<?> o() {
        return o.class;
    }
}
