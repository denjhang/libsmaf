package f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class v {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final byte[] f3272a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    int f3273b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    int f3274c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    boolean f3275d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    boolean f3276e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    v f3277f;
    v g;

    v() {
        this.f3272a = new byte[8192];
        this.f3276e = true;
        this.f3275d = false;
    }

    v(byte[] bArr, int i, int i2, boolean z, boolean z2) {
        this.f3272a = bArr;
        this.f3273b = i;
        this.f3274c = i2;
        this.f3275d = z;
        this.f3276e = z2;
    }

    public v a(int i) {
        v vVarA;
        if (i <= 0 || i > this.f3274c - this.f3273b) {
            throw new IllegalArgumentException();
        }
        if (i >= 1024) {
            vVarA = c();
        } else {
            vVarA = w.a();
            System.arraycopy(this.f3272a, this.f3273b, vVarA.f3272a, 0, i);
        }
        vVarA.f3274c = vVarA.f3273b + i;
        this.f3273b += i;
        this.g.a(vVarA);
        return vVarA;
    }

    public v a(v vVar) {
        vVar.g = this;
        vVar.f3277f = this.f3277f;
        this.f3277f.g = vVar;
        this.f3277f = vVar;
        return vVar;
    }

    public void a() {
        v vVar = this.g;
        if (vVar == this) {
            throw new IllegalStateException();
        }
        if (vVar.f3276e) {
            int i = this.f3274c - this.f3273b;
            if (i > (8192 - vVar.f3274c) + (vVar.f3275d ? 0 : vVar.f3273b)) {
                return;
            }
            a(this.g, i);
            b();
            w.a(this);
        }
    }

    public void a(v vVar, int i) {
        if (!vVar.f3276e) {
            throw new IllegalArgumentException();
        }
        int i2 = vVar.f3274c;
        if (i2 + i > 8192) {
            if (vVar.f3275d) {
                throw new IllegalArgumentException();
            }
            int i3 = vVar.f3273b;
            if ((i2 + i) - i3 > 8192) {
                throw new IllegalArgumentException();
            }
            byte[] bArr = vVar.f3272a;
            System.arraycopy(bArr, i3, bArr, 0, i2 - i3);
            vVar.f3274c -= vVar.f3273b;
            vVar.f3273b = 0;
        }
        System.arraycopy(this.f3272a, this.f3273b, vVar.f3272a, vVar.f3274c, i);
        vVar.f3274c += i;
        this.f3273b += i;
    }

    public v b() {
        v vVar = this.f3277f;
        if (vVar == this) {
            vVar = null;
        }
        v vVar2 = this.g;
        vVar2.f3277f = this.f3277f;
        this.f3277f.g = vVar2;
        this.f3277f = null;
        this.g = null;
        return vVar;
    }

    v c() {
        this.f3275d = true;
        return new v(this.f3272a, this.f3273b, this.f3274c, true, false);
    }
}
