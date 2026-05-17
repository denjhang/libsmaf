package jp.co.acrodea.runtime.drm;

import java.nio.BufferUnderflowException;
import java.nio.ByteBuffer;
import java.util.HashMap;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class j extends h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f3404a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private String f3405b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private HashMap<String, l> f3406c = new HashMap<>();

    private j() {
    }

    public static j a(ByteBuffer byteBuffer) throws o {
        j jVar = new j();
        jVar.b(byteBuffer);
        return jVar;
    }

    private void b(ByteBuffer byteBuffer) throws o {
        try {
            byte[] bArrArray = byteBuffer.array();
            int iArrayOffset = byteBuffer.arrayOffset();
            int i = byteBuffer.getShort() & 65535;
            int iPosition = byteBuffer.position();
            this.f3404a = new String(bArrArray, iArrayOffset + iPosition, i);
            byteBuffer.position(iPosition + i + 1);
            int i2 = byteBuffer.getShort() & 65535;
            int iPosition2 = byteBuffer.position();
            this.f3405b = new String(bArrArray, iArrayOffset + iPosition2, i2);
            byteBuffer.position(iPosition2 + i2 + 1);
            int i3 = byteBuffer.getInt();
            if (i3 < 0) {
                throw new o("Broken data", -1);
            }
            int iLimit = byteBuffer.limit();
            byteBuffer.limit(byteBuffer.position() + i3);
            int i4 = byteBuffer.getInt();
            if (i4 < 0) {
                throw new o("Broken data", -1);
            }
            if (i4 != 0) {
                synchronized (this.f3406c) {
                    for (int i5 = 0; i5 < i4; i5++) {
                        String str = new String(bArrArray, byteBuffer.position() + iArrayOffset, byteBuffer.getShort() & 65535);
                        byteBuffer.get();
                        long j = ((long) byteBuffer.getInt()) & h.CLIENT_AUTOGEN_KEYID;
                        byte[] bArr = new byte[20];
                        byteBuffer.get(bArr);
                        this.f3406c.put(str, new l(this, j, bArr));
                    }
                }
            }
            byteBuffer.limit(iLimit);
        } catch (IllegalArgumentException unused) {
            throw new o("Broken data", -1);
        } catch (IndexOutOfBoundsException unused2) {
            throw new o("Broken data", -1);
        } catch (UnsupportedOperationException unused3) {
            throw new o("Unknown error", -1);
        } catch (BufferUnderflowException unused4) {
            throw new o("Broken data", -1);
        }
    }

    public void a() {
        this.f3404a = null;
        this.f3405b = null;
        this.f3406c.clear();
    }

    public String b() {
        return this.f3404a;
    }

    public String c() {
        return this.f3405b;
    }
}
