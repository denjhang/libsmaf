package f;

import java.util.Arrays;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class x extends i {

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final transient byte[][] f3280f;
    final transient int[] g;

    x(f fVar, int i) {
        super(null);
        C.a(fVar.f3242c, 0L, i);
        int i2 = 0;
        v vVar = fVar.f3241b;
        int i3 = 0;
        int i4 = 0;
        while (i3 < i) {
            int i5 = vVar.f3274c;
            int i6 = vVar.f3273b;
            if (i5 == i6) {
                throw new AssertionError("s.limit == s.pos");
            }
            i3 += i5 - i6;
            i4++;
            vVar = vVar.f3277f;
        }
        this.f3280f = new byte[i4][];
        this.g = new int[i4 * 2];
        v vVar2 = fVar.f3241b;
        int i7 = 0;
        while (i2 < i) {
            this.f3280f[i7] = vVar2.f3272a;
            i2 += vVar2.f3274c - vVar2.f3273b;
            if (i2 > i) {
                i2 = i;
            }
            int[] iArr = this.g;
            iArr[i7] = i2;
            iArr[this.f3280f.length + i7] = vVar2.f3273b;
            vVar2.f3275d = true;
            i7++;
            vVar2 = vVar2.f3277f;
        }
    }

    private int b(int i) {
        int iBinarySearch = Arrays.binarySearch(this.g, 0, this.f3280f.length, i + 1);
        return iBinarySearch >= 0 ? iBinarySearch : iBinarySearch ^ (-1);
    }

    private i i() {
        return new i(g());
    }

    @Override // f.i
    public byte a(int i) {
        C.a(this.g[this.f3280f.length - 1], i, 1L);
        int iB = b(i);
        int i2 = iB == 0 ? 0 : this.g[iB - 1];
        int[] iArr = this.g;
        byte[][] bArr = this.f3280f;
        return bArr[iB][(i - i2) + iArr[bArr.length + iB]];
    }

    @Override // f.i
    public i a(int i, int i2) {
        return i().a(i, i2);
    }

    @Override // f.i
    public String a() {
        return i().a();
    }

    @Override // f.i
    void a(f fVar) {
        int length = this.f3280f.length;
        int i = 0;
        int i2 = 0;
        while (i < length) {
            int[] iArr = this.g;
            int i3 = iArr[length + i];
            int i4 = iArr[i];
            v vVar = new v(this.f3280f[i], i3, (i3 + i4) - i2, true, false);
            v vVar2 = fVar.f3241b;
            if (vVar2 == null) {
                vVar.g = vVar;
                vVar.f3277f = vVar;
                fVar.f3241b = vVar;
            } else {
                vVar2.g.a(vVar);
            }
            i++;
            i2 = i4;
        }
        fVar.f3242c += (long) i2;
    }

    @Override // f.i
    public boolean a(int i, i iVar, int i2, int i3) {
        if (i < 0 || i > e() - i3) {
            return false;
        }
        int iB = b(i);
        while (i3 > 0) {
            int i4 = iB == 0 ? 0 : this.g[iB - 1];
            int iMin = Math.min(i3, ((this.g[iB] - i4) + i4) - i);
            int[] iArr = this.g;
            byte[][] bArr = this.f3280f;
            if (!iVar.a(i2, bArr[iB], (i - i4) + iArr[bArr.length + iB], iMin)) {
                return false;
            }
            i += iMin;
            i2 += iMin;
            i3 -= iMin;
            iB++;
        }
        return true;
    }

    @Override // f.i
    public boolean a(int i, byte[] bArr, int i2, int i3) {
        if (i < 0 || i > e() - i3 || i2 < 0 || i2 > bArr.length - i3) {
            return false;
        }
        int iB = b(i);
        while (i3 > 0) {
            int i4 = iB == 0 ? 0 : this.g[iB - 1];
            int iMin = Math.min(i3, ((this.g[iB] - i4) + i4) - i);
            int[] iArr = this.g;
            byte[][] bArr2 = this.f3280f;
            if (!C.a(bArr2[iB], (i - i4) + iArr[bArr2.length + iB], bArr, i2, iMin)) {
                return false;
            }
            i += iMin;
            i2 += iMin;
            i3 -= iMin;
            iB++;
        }
        return true;
    }

    @Override // f.i
    public String b() {
        return i().b();
    }

    @Override // f.i
    public i c() {
        return i().c();
    }

    @Override // f.i
    public i d() {
        return i().d();
    }

    @Override // f.i
    public int e() {
        return this.g[this.f3280f.length - 1];
    }

    @Override // f.i
    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof i) {
            i iVar = (i) obj;
            if (iVar.e() == e() && a(0, iVar, 0, e())) {
                return true;
            }
        }
        return false;
    }

    @Override // f.i
    public i f() {
        return i().f();
    }

    @Override // f.i
    public byte[] g() {
        int[] iArr = this.g;
        byte[][] bArr = this.f3280f;
        byte[] bArr2 = new byte[iArr[bArr.length - 1]];
        int length = bArr.length;
        int i = 0;
        int i2 = 0;
        while (i < length) {
            int[] iArr2 = this.g;
            int i3 = iArr2[length + i];
            int i4 = iArr2[i];
            System.arraycopy(this.f3280f[i], i3, bArr2, i2, i4 - i2);
            i++;
            i2 = i4;
        }
        return bArr2;
    }

    @Override // f.i
    public String h() {
        return i().h();
    }

    @Override // f.i
    public int hashCode() {
        int i = this.f3246d;
        if (i != 0) {
            return i;
        }
        int length = this.f3280f.length;
        int i2 = 0;
        int i3 = 1;
        int i4 = 0;
        while (i2 < length) {
            byte[] bArr = this.f3280f[i2];
            int[] iArr = this.g;
            int i5 = iArr[length + i2];
            int i6 = iArr[i2];
            int i7 = (i6 - i4) + i5;
            while (i5 < i7) {
                i3 = (i3 * 31) + bArr[i5];
                i5++;
            }
            i2++;
            i4 = i6;
        }
        this.f3246d = i3;
        return i3;
    }

    @Override // f.i
    public String toString() {
        return i().toString();
    }
}
