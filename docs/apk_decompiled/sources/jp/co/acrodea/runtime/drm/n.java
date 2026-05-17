package jp.co.acrodea.runtime.drm;

import java.nio.ByteBuffer;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class n extends h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private long f3417a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private byte[] f3418b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private long f3419c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private byte[] f3420d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private long f3421e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private byte[] f3422f;
    private long g;
    private byte[] h;

    private n() {
    }

    public static n a(ByteBuffer byteBuffer) throws o {
        n nVar = new n();
        nVar.b(byteBuffer);
        return nVar;
    }

    private void b(ByteBuffer byteBuffer) throws o {
        a();
        try {
            if ((((long) byteBuffer.getInt()) & h.CLIENT_AUTOGEN_KEYID) != 65536) {
                throw new o("Invalid signature", 3);
            }
            if ((((long) byteBuffer.getInt()) & h.CLIENT_AUTOGEN_KEYID) < 4) {
                throw new o("Broken data", 1);
            }
            this.f3417a = ((long) byteBuffer.getInt()) & h.CLIENT_AUTOGEN_KEYID;
            byte[] bArr = new byte[20];
            byteBuffer.get(bArr);
            this.f3418b = bArr;
            this.f3419c = ((long) byteBuffer.getInt()) & h.CLIENT_AUTOGEN_KEYID;
            byte[] bArr2 = new byte[20];
            byteBuffer.get(bArr2);
            this.f3420d = bArr2;
            this.f3421e = ((long) byteBuffer.getInt()) & h.CLIENT_AUTOGEN_KEYID;
            byte[] bArr3 = new byte[20];
            byteBuffer.get(bArr3);
            this.f3422f = bArr3;
            this.g = h.CLIENT_AUTOGEN_KEYID & ((long) byteBuffer.getInt());
            byte[] bArr4 = new byte[20];
            byteBuffer.get(bArr4);
            this.h = bArr4;
        } catch (IllegalArgumentException unused) {
            a();
            throw new o("Broken data", 1);
        } catch (RuntimeException e2) {
            a();
            throw e2;
        }
    }

    public void a() {
        this.f3417a = 0L;
        this.f3418b = null;
        this.f3419c = 0L;
        this.f3420d = null;
        this.f3421e = 0L;
        this.f3422f = null;
        this.g = 0L;
        this.h = null;
    }

    public byte[] b() {
        byte[] bArr = this.f3418b;
        return bArr != null ? bArr : new byte[20];
    }

    public long c() {
        return this.f3419c;
    }

    public byte[] d() {
        byte[] bArr = this.f3420d;
        return bArr != null ? bArr : new byte[20];
    }

    public long e() {
        return this.f3421e;
    }

    public byte[] f() {
        byte[] bArr = this.f3422f;
        return bArr != null ? bArr : new byte[20];
    }

    protected void finalize() {
        a();
    }

    public long g() {
        return this.g;
    }

    public byte[] h() {
        byte[] bArr = this.h;
        return bArr != null ? bArr : new byte[20];
    }
}
