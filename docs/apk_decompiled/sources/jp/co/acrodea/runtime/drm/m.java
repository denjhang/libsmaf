package jp.co.acrodea.runtime.drm;

import java.nio.ByteBuffer;
import java.util.Arrays;
import java.util.Iterator;
import java.util.SortedSet;
import java.util.TreeSet;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class m extends h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private long f3411a = 0;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private long f3412b = 0;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private long f3415e = 0;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private byte[] f3413c = null;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private byte[] f3414d = null;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private TreeSet<AcDRME4PartInfo> f3416f = new TreeSet<>();

    private m() {
    }

    static m a(ByteBuffer byteBuffer) throws o {
        m mVar = new m();
        mVar.b(byteBuffer);
        return mVar;
    }

    private void b(ByteBuffer byteBuffer) throws o {
        a();
        try {
            this.f3411a = ((long) byteBuffer.getInt()) & h.CLIENT_AUTOGEN_KEYID;
            this.f3412b = ((long) byteBuffer.getInt()) & h.CLIENT_AUTOGEN_KEYID;
            int i = byteBuffer.getInt();
            if (i < 0) {
                throw new o("Bad data", 1);
            }
            if (i > 0) {
                int iLimit = byteBuffer.limit();
                byteBuffer.limit(byteBuffer.position() + i);
                byte[] bArr = new byte[i];
                byteBuffer.get(bArr);
                byteBuffer.limit(iLimit);
                this.f3413c = bArr;
            }
            int iLimit2 = byteBuffer.limit();
            byteBuffer.limit(byteBuffer.position() + 16);
            byte[] bArr2 = new byte[16];
            byteBuffer.get(bArr2);
            byteBuffer.limit(iLimit2);
            this.f3414d = bArr2;
            this.f3415e = ((long) byteBuffer.getInt()) & h.CLIENT_AUTOGEN_KEYID;
            int i2 = byteBuffer.getInt();
            if (i2 < 0) {
                throw new o("Broken data", 1);
            }
            synchronized (this.f3416f) {
                for (int i3 = 0; i3 < i2; i3++) {
                    this.f3416f.add(new AcDRME4PartInfo(((long) byteBuffer.getInt()) & h.CLIENT_AUTOGEN_KEYID, ((long) byteBuffer.getInt()) & h.CLIENT_AUTOGEN_KEYID, ((long) byteBuffer.getInt()) & h.CLIENT_AUTOGEN_KEYID));
                }
            }
        } catch (IllegalArgumentException unused) {
            a();
            throw new o("Broken data", 1);
        } catch (RuntimeException e2) {
            a();
            throw e2;
        }
    }

    public AcDRME4PartInfo a(long j) {
        AcDRME4PartInfo acDRME4PartInfoFirst;
        AcDRME4PartInfo acDRME4PartInfo = new AcDRME4PartInfo(j, 1L, 0L);
        synchronized (this.f3416f) {
            SortedSet<AcDRME4PartInfo> sortedSetTailSet = this.f3416f.tailSet(acDRME4PartInfo);
            acDRME4PartInfoFirst = !sortedSetTailSet.isEmpty() ? sortedSetTailSet.first() : null;
        }
        return acDRME4PartInfoFirst;
    }

    public void a() {
        this.f3411a = 0L;
        this.f3412b = 0L;
        this.f3415e = 0L;
        byte[] bArr = this.f3413c;
        if (bArr != null) {
            Arrays.fill(bArr, (byte) 0);
            this.f3413c = null;
        }
        this.f3414d = null;
        this.f3416f.clear();
    }

    boolean b() {
        long j;
        boolean z;
        boolean z2;
        byte[] bArr;
        byte[] bArr2;
        if (this.f3411a > this.f3412b) {
            return false;
        }
        synchronized (this.f3416f) {
            Iterator<AcDRME4PartInfo> it = this.f3416f.iterator();
            j = 0;
            z = false;
            while (true) {
                z2 = true;
                if (!it.hasNext()) {
                    break;
                }
                AcDRME4PartInfo next = it.next();
                if (next.offset != j || next.length < 0) {
                    break;
                }
                if (next.encode == 33686019) {
                    if ((next.offset & 15) != 0) {
                        break;
                    }
                    z = true;
                    j = next.offset + next.length;
                } else if (next.encode == 50331907) {
                    if ((next.offset & 3) != 0) {
                        break;
                    }
                    j = next.offset + next.length;
                } else {
                    if (next.encode != 0) {
                        break;
                    }
                    j = next.offset + next.length;
                }
            }
            z2 = false;
        }
        if (z2 && j < this.f3411a) {
            return false;
        }
        if (z && ((bArr = this.f3413c) == null || bArr.length == 0 || (bArr2 = this.f3414d) == null || bArr2.length != 16)) {
            return false;
        }
        return z2;
    }

    public long c() {
        return this.f3411a;
    }

    public long d() {
        return this.f3412b;
    }

    public byte[] e() {
        byte[] bArr = this.f3413c;
        return bArr != null ? bArr : new byte[16];
    }

    public byte[] f() {
        byte[] bArr = this.f3414d;
        return bArr != null ? bArr : new byte[16];
    }

    protected void finalize() {
        a();
    }

    public long g() {
        return this.f3415e;
    }
}
