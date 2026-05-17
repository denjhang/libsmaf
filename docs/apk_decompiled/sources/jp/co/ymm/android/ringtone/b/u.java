package jp.co.ymm.android.ringtone.b;

import java.io.File;
import java.io.InputStream;
import jp.co.ymm.android.ringtone.b.c;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
abstract class u implements c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private File f3541a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private b f3542b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private a f3543c = new a(null);

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    int f3544d = 0;

    /* JADX INFO: Access modifiers changed from: private */
    static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        Boolean f3545a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        c.a f3546b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        c.b f3547c;

        private a() {
            this.f3545a = null;
            this.f3546b = null;
            this.f3547c = null;
        }

        /* synthetic */ a(q qVar) {
            this();
        }

        void a() {
            this.f3545a = null;
            this.f3546b = null;
            this.f3547c = null;
        }
    }

    static abstract class b {
        b() {
        }

        abstract InputStream a(File file);
    }

    u(File file, b bVar) {
        this.f3541a = null;
        this.f3542b = null;
        this.f3541a = file;
        this.f3542b = bVar;
        jp.co.ymm.android.ringtone.util.g.a(n() != null);
        jp.co.ymm.android.ringtone.util.g.a(this.f3542b != null);
    }

    private static c.a a(c.a aVar, B<String> b2) {
        return new q(b2, aVar);
    }

    private void q() {
        l();
        this.f3541a = null;
        this.f3542b = null;
        this.f3543c.a();
    }

    @Override // jp.co.ymm.android.ringtone.b.c
    public int a() {
        return this.f3544d;
    }

    @Override // jp.co.ymm.android.ringtone.b.c
    public c.a a(c.a aVar) {
        a aVar2 = this.f3543c;
        if (aVar2.f3546b == null) {
            aVar2.f3546b = a(jp.co.ymm.android.ringtone.util.z.a(getType(), f()), new s(this));
        }
        if (this.f3543c.f3546b == null) {
            return null;
        }
        return new t(this, aVar);
    }

    public void a(int i) {
        this.f3544d = i;
    }

    public void a(String str) {
        a aVar = this.f3543c;
        if (aVar.f3546b == null) {
            aVar.f3546b = new c.a();
        }
        this.f3543c.f3546b.f3514b = str;
    }

    public void b(String str) {
        a aVar = this.f3543c;
        if (aVar.f3546b == null) {
            aVar.f3546b = new c.a();
        }
        this.f3543c.f3546b.f3513a = str;
    }

    @Override // jp.co.ymm.android.ringtone.b.c
    public boolean b() {
        if (!d() && !n().isFile()) {
            return false;
        }
        Boolean bool = this.f3543c.f3545a;
        if (bool != null) {
            return bool.booleanValue();
        }
        try {
            InputStream inputStreamA = this.f3542b.a(n());
            if (inputStreamA != null) {
                inputStreamA.close();
            }
            a aVar = this.f3543c;
            Boolean boolValueOf = Boolean.valueOf(inputStreamA != null);
            aVar.f3545a = boolValueOf;
            return boolValueOf.booleanValue();
        } catch (Exception e2) {
            jp.co.ymm.android.ringtone.util.g.b("caught ...", e2);
            return false;
        }
    }

    @Override // jp.co.ymm.android.ringtone.b.c
    public String c() {
        if (n() != null) {
            return n().getPath();
        }
        return null;
    }

    @Override // jp.co.ymm.android.ringtone.b.c
    public boolean d() {
        return n() != null && n().getParent().equals(z.f());
    }

    @Override // jp.co.ymm.android.ringtone.b.c
    public boolean e() {
        return n() != null && n().getName().equalsIgnoreCase("____Trial_____");
    }

    @Override // jp.co.ymm.android.ringtone.b.c
    public byte[] f() {
        try {
            return jp.co.ymm.android.ringtone.util.z.a(this.f3542b.a(n()), (int) j());
        } catch (Exception e2) {
            jp.co.ymm.android.ringtone.util.g.a("caught ...", e2);
            return null;
        }
    }

    b g() {
        return this.f3542b;
    }

    @Override // jp.co.ymm.android.ringtone.b.c
    public c.a getAttributes() {
        return a(new r(this));
    }

    @Override // jp.co.ymm.android.ringtone.b.c
    public c.b getType() {
        a aVar;
        c.b bVarI;
        if (this.f3543c.f3547c == null) {
            try {
                String str = k()[1];
                if ("mp3".equals(str.toLowerCase())) {
                    aVar = this.f3543c;
                    bVarI = c.b.MP3;
                } else if ("mp4".equals(str.toLowerCase()) || "m4a".equals(str.toLowerCase())) {
                    aVar = this.f3543c;
                    bVarI = c.b.MP4;
                } else if ("ogg".equals(str.toLowerCase())) {
                    aVar = this.f3543c;
                    bVarI = c.b.OGG;
                } else if ("mmf".equals(str.toLowerCase())) {
                    aVar = this.f3543c;
                    bVarI = c.b.SMAF;
                } else {
                    aVar = this.f3543c;
                    bVarI = i();
                }
                aVar.f3547c = bVarI;
            } catch (Exception e2) {
                jp.co.ymm.android.ringtone.util.g.b("caught ...", e2);
            }
        }
        return this.f3543c.f3547c;
    }

    abstract long h();

    abstract c.b i();

    long j() {
        try {
            return h();
        } catch (Exception e2) {
            jp.co.ymm.android.ringtone.util.g.b("caught ...", e2);
            return 0L;
        }
    }

    protected String[] k() {
        String name;
        String[] strArrSplit = this.f3541a.getName().split("\\.");
        if (strArrSplit.length <= 0) {
            return null;
        }
        String str = "";
        if (strArrSplit.length == 1) {
            name = this.f3541a.getName();
        } else {
            String str2 = "";
            int i = 0;
            while (strArrSplit.length - 1 > i) {
                if (i != 0) {
                    str2 = str2 + "";
                }
                str2 = str2 + strArrSplit[i];
                i++;
            }
            str = strArrSplit[i];
            name = str2;
        }
        return new String[]{name, str};
    }

    abstract void l();

    abstract boolean m();

    File n() {
        return this.f3541a;
    }

    abstract Class<?> o();

    boolean p() {
        boolean z = m() && jp.co.ymm.android.ringtone.util.z.a(n());
        if (z) {
            q();
        }
        return z;
    }

    public String toString() {
        return o().getName() + '@' + Integer.toHexString(hashCode()) + "[id=" + c() + ", isSecure=" + isSecure() + ", isUsable=" + b() + ", isTrial=" + e() + ", isPreinstalled=" + d() + ", type=" + getType() + ", path=" + n() + "]";
    }
}
