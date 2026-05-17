package jp.co.acrodea.runtime.drm.agent;

import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.nio.BufferOverflowException;
import java.nio.BufferUnderflowException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Date;
import java.util.HashMap;
import java.util.Iterator;
import java.util.TreeSet;
import java.util.UUID;
import jp.co.acrodea.runtime.drm.AcDRMUtil;
import jp.co.acrodea.runtime.drm.x;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class g implements Iterable<File> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final byte[] f3343a = {65, 67, 68, 67};

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final byte[] f3344b = {65, 68, 69, 50};

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final byte[] f3345c = {70, 73, 76, 49};

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static HashMap<File, g> f3346d = new HashMap<>();

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private File f3347e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private x f3348f;
    private HashMap<File, j> g;
    private boolean h;

    private g(File file) throws IOException {
        this.f3347e = file;
        try {
            this.f3348f = AcDRMUtil.a().a("__dafm__", this.f3347e);
            this.g = new HashMap<>();
            try {
                d();
            } catch (IOException unused) {
            }
            this.h = true;
        } catch (IllegalArgumentException unused2) {
            throw new IOException("Initialization failure");
        } catch (jp.co.acrodea.runtime.drm.o unused3) {
            throw new IOException("Initialization failure");
        }
    }

    static g a(File file) {
        g gVar;
        synchronized (f3346d) {
            gVar = f3346d.get(file);
            if (gVar == null) {
                gVar = new g(file);
                f3346d.put(file, gVar);
            }
        }
        return gVar;
    }

    public static j a(File file, boolean z) throws IOException {
        j jVar = new j();
        jVar.f3356a = 0;
        long length = file.length();
        byte[] bArr = new byte[4];
        BufferedInputStream bufferedInputStream = new BufferedInputStream(new FileInputStream(file), 32);
        try {
            try {
                bufferedInputStream.mark(32);
                s sVar = new s(bufferedInputStream);
                sVar.a(bArr);
                if (Arrays.equals(bArr, f3343a)) {
                    if (sVar.skip(8L) != 8) {
                        throw new IOException();
                    }
                    sVar.a(bArr);
                    ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr);
                    byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
                    if (length >= (((long) byteBufferWrap.getInt()) & jp.co.acrodea.runtime.drm.h.CLIENT_AUTOGEN_KEYID)) {
                        jVar.f3356a = 1;
                    } else {
                        jVar.f3356a = 3;
                    }
                } else {
                    if (!Arrays.equals(bArr, f3344b)) {
                        return jVar;
                    }
                    jVar.f3356a = 2;
                }
                if (z) {
                    bufferedInputStream.reset();
                    jp.co.acrodea.runtime.drm.p pVarA = jp.co.acrodea.runtime.drm.p.a(bufferedInputStream);
                    if (pVarA != null && (pVarA instanceof jp.co.acrodea.runtime.drm.q)) {
                        jp.co.acrodea.runtime.drm.q qVar = (jp.co.acrodea.runtime.drm.q) pVarA;
                        jVar.f3357b = qVar.a();
                        jVar.f3358c = qVar.b();
                        jVar.f3359d = qVar.c();
                        jVar.f3360e = qVar.d();
                    }
                }
            } catch (IOException unused) {
                jVar.f3356a = 0;
                jVar.f3357b = null;
                jVar.f3358c = null;
                jVar.f3359d = null;
                jVar.f3360e = null;
            }
            return jVar;
        } finally {
            bufferedInputStream.close();
        }
    }

    private void a(byte[] bArr) throws IOException {
        this.g.clear();
        try {
            byte[] bArr2 = new byte[4];
            ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr);
            byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
            byteBufferWrap.get(bArr2);
            if (!Arrays.equals(bArr2, f3345c)) {
                throw new IOException("Data format error");
            }
            int i = byteBufferWrap.getInt();
            byte[] bArr3 = null;
            for (int i2 = 0; i2 < i; i2++) {
                int i3 = byteBufferWrap.getShort();
                if (bArr3 == null || bArr3.length < i3) {
                    bArr3 = new byte[i3];
                }
                byteBufferWrap.get(bArr3, 0, i3);
                String str = new String(bArr3, 0, i3, HTTP.UTF_8);
                byte b2 = byteBufferWrap.get();
                j jVar = new j();
                if (b2 == 1) {
                    jVar.f3356a = byteBufferWrap.getInt();
                    jVar.f3357b = new UUID(byteBufferWrap.getLong(), byteBufferWrap.getLong());
                    jVar.f3358c = new UUID(byteBufferWrap.getLong(), byteBufferWrap.getLong());
                    jVar.f3359d = new Date(byteBufferWrap.getLong());
                    int i4 = byteBufferWrap.getShort();
                    if (i4 > 0) {
                        if (bArr3 == null || bArr3.length < i4) {
                            bArr3 = new byte[i4];
                        }
                        byteBufferWrap.get(bArr3, 0, i4);
                        jVar.f3360e = new String(bArr3, 0, i4, HTTP.UTF_8);
                    }
                }
                this.g.put(new File(str), jVar);
            }
        } catch (BufferUnderflowException unused) {
            throw new IOException("Internal error");
        }
    }

    public static boolean b(File file) throws IOException {
        byte[] bArr = new byte[4];
        s sVar = new s(new FileInputStream(file));
        try {
            sVar.a(bArr);
            sVar.close();
            return Arrays.equals(bArr, f3343a) || Arrays.equals(bArr, f3344b);
        } catch (Throwable th) {
            sVar.close();
            throw th;
        }
    }

    private void d() throws IOException {
        try {
            byte[] bArrA_ = this.f3348f.a_("fl");
            if (bArrA_ != null) {
                a(bArrA_);
            }
        } catch (jp.co.acrodea.runtime.drm.o unused) {
            throw new IOException("Security failure");
        }
    }

    private void e() throws IOException {
        try {
            this.f3348f.a("fl", f());
        } catch (jp.co.acrodea.runtime.drm.o unused) {
            throw new IOException("Security failure");
        }
    }

    private byte[] f() throws IOException {
        ArrayList<byte[]> arrayList = new ArrayList();
        int length = 0;
        for (File file : this.g.keySet()) {
            if (file != null) {
                byte[] bytes = file.getAbsolutePath().getBytes(HTTP.UTF_8);
                arrayList.add(bytes);
                length += bytes.length + 3;
            }
        }
        int i = length + 8;
        try {
            byte[] bArr = new byte[i];
            ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr);
            byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
            byteBufferWrap.put(f3345c);
            byteBufferWrap.putInt(arrayList.size());
            for (byte[] bArr2 : arrayList) {
                byteBufferWrap.putShort((short) bArr2.length);
                byteBufferWrap.put(bArr2);
                byteBufferWrap.put((byte) 0);
            }
            if (byteBufferWrap.position() == i) {
                return bArr;
            }
            byte[] bArr3 = new byte[byteBufferWrap.position()];
            System.arraycopy(bArr, 0, bArr3, 0, byteBufferWrap.position());
            return bArr3;
        } catch (BufferOverflowException unused) {
            throw new IOException("Internal error");
        }
    }

    private synchronized void g() {
        for (File file : this.g.keySet()) {
            j jVar = this.g.get(file);
            if (jVar == null || jVar.f3356a < 0) {
                this.g.put(file, a(file, true));
            }
        }
        e();
        this.h = false;
    }

    public synchronized void a() {
        this.g.clear();
        e();
    }

    public int b() {
        return this.g.size();
    }

    public File[] b(File file, boolean z) {
        if (file == null) {
            throw new NullPointerException();
        }
        if (this.h) {
            g();
        }
        TreeSet treeSet = new TreeSet(new h(this));
        i iVar = new i(this, file, z);
        while (iVar.hasNext()) {
            treeSet.add(iVar.next());
        }
        return (File[]) treeSet.toArray(new File[0]);
    }

    public Iterator<File> c() {
        return this.g.keySet().iterator();
    }

    public synchronized void c(File file) {
        if (file == null) {
            throw new NullPointerException();
        }
        this.g.put(file, new j());
        e();
        this.h = true;
    }

    public synchronized boolean d(File file) {
        boolean z;
        try {
            if (file == null) {
                throw new NullPointerException();
            }
            if (this.g.containsKey(file)) {
                this.g.remove(file);
                e();
                z = true;
            } else {
                z = false;
            }
        } catch (Throwable th) {
            throw th;
        }
        return z;
    }

    public boolean e(File file) {
        if (file != null) {
            return this.g.containsKey(file);
        }
        throw new NullPointerException();
    }

    /* JADX WARN: Removed duplicated region for block: B:50:0x0068 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:57:0x0031 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean f(java.io.File r8) {
        /*
            r7 = this;
            if (r8 == 0) goto L69
            boolean r0 = r7.h
            if (r0 == 0) goto L9
            r7.g()
        L9:
            java.util.HashMap<java.io.File, jp.co.acrodea.runtime.drm.agent.j> r0 = r7.g
            java.lang.Object r8 = r0.get(r8)
            jp.co.acrodea.runtime.drm.agent.j r8 = (jp.co.acrodea.runtime.drm.agent.j) r8
            r0 = 0
            if (r8 != 0) goto L15
            return r0
        L15:
            int r1 = r8.f3356a
            if (r1 != 0) goto L1a
            return r0
        L1a:
            r2 = 1
            if (r1 != r2) goto L1e
            return r2
        L1e:
            java.util.UUID r3 = r8.f3357b
            if (r3 != 0) goto L23
            return r0
        L23:
            r3 = 2
            if (r1 != r3) goto L27
            r3 = 3
        L27:
            java.util.HashMap<java.io.File, jp.co.acrodea.runtime.drm.agent.j> r1 = r7.g
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L31:
            boolean r4 = r1.hasNext()
            if (r4 != 0) goto L38
            return r0
        L38:
            java.lang.Object r4 = r1.next()
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4
            java.lang.Object r4 = r4.getValue()
            jp.co.acrodea.runtime.drm.agent.j r4 = (jp.co.acrodea.runtime.drm.agent.j) r4
            if (r4 != 0) goto L47
            goto L31
        L47:
            java.util.UUID r5 = r8.f3357b
            java.util.UUID r6 = r4.f3357b
            boolean r5 = r5.equals(r6)
            if (r5 != 0) goto L52
            goto L31
        L52:
            java.lang.String r5 = r8.f3360e
            if (r5 == 0) goto L5f
            java.lang.String r6 = r4.f3360e
            boolean r5 = r5.equals(r6)
            if (r5 != 0) goto L64
            goto L31
        L5f:
            java.lang.String r5 = r4.f3360e
            if (r5 == 0) goto L64
            goto L31
        L64:
            int r4 = r4.f3356a
            if (r4 != r3) goto L31
            return r2
        L69:
            java.lang.NullPointerException r8 = new java.lang.NullPointerException
            r8.<init>()
            goto L70
        L6f:
            throw r8
        L70:
            goto L6f
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.acrodea.runtime.drm.agent.g.f(java.io.File):boolean");
    }

    public j g(File file) {
        if (file == null) {
            throw new NullPointerException();
        }
        if (this.h) {
            g();
        }
        return this.g.get(file);
    }

    @Override // java.lang.Iterable
    public Iterator<File> iterator() {
        return c();
    }
}
