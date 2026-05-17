package e.a.e;

import java.util.Arrays;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class x {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f3116a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final int[] f3117b = new int[10];

    int a(int i) {
        return this.f3117b[i];
    }

    x a(int i, int i2) {
        if (i >= 0) {
            int[] iArr = this.f3117b;
            if (i < iArr.length) {
                this.f3116a = (1 << i) | this.f3116a;
                iArr[i] = i2;
            }
        }
        return this;
    }

    void a() {
        this.f3116a = 0;
        Arrays.fill(this.f3117b, 0);
    }

    void a(x xVar) {
        for (int i = 0; i < 10; i++) {
            if (xVar.d(i)) {
                a(i, xVar.a(i));
            }
        }
    }

    int b() {
        if ((this.f3116a & 2) != 0) {
            return this.f3117b[1];
        }
        return -1;
    }

    int b(int i) {
        return (this.f3116a & 16) != 0 ? this.f3117b[4] : i;
    }

    int c() {
        if ((this.f3116a & 128) != 0) {
            return this.f3117b[7];
        }
        return 65535;
    }

    int c(int i) {
        return (this.f3116a & 32) != 0 ? this.f3117b[5] : i;
    }

    int d() {
        return Integer.bitCount(this.f3116a);
    }

    boolean d(int i) {
        return ((1 << i) & this.f3116a) != 0;
    }
}
