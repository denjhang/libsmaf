package com.google.android.gms.internal.measurement;

import java.nio.charset.Charset;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.mb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class C0168mb extends AbstractC0175nb {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    protected final byte[] f1753e;

    C0168mb(byte[] bArr) {
        if (bArr == null) {
            throw new NullPointerException();
        }
        this.f1753e = bArr;
    }

    @Override // com.google.android.gms.internal.measurement.AbstractC0099cb
    public byte a(int i) {
        return this.f1753e[i];
    }

    @Override // com.google.android.gms.internal.measurement.AbstractC0099cb
    protected final int a(int i, int i2, int i3) {
        return Lb.a(i, this.f1753e, c(), i3);
    }

    @Override // com.google.android.gms.internal.measurement.AbstractC0099cb
    public final AbstractC0099cb a(int i, int i2) {
        int iB = AbstractC0099cb.b(0, i2, h());
        return iB == 0 ? AbstractC0099cb.f1658a : new C0147jb(this.f1753e, c(), iB);
    }

    @Override // com.google.android.gms.internal.measurement.AbstractC0099cb
    protected final String a(Charset charset) {
        return new String(this.f1753e, c(), h(), charset);
    }

    @Override // com.google.android.gms.internal.measurement.AbstractC0099cb
    final void a(AbstractC0106db abstractC0106db) {
        abstractC0106db.a(this.f1753e, c(), h());
    }

    @Override // com.google.android.gms.internal.measurement.AbstractC0099cb
    public final boolean a() {
        int iC = c();
        return C0136hd.a(this.f1753e, iC, h() + iC);
    }

    final boolean a(AbstractC0099cb abstractC0099cb, int i, int i2) {
        if (i2 > abstractC0099cb.h()) {
            int iH = h();
            StringBuilder sb = new StringBuilder(40);
            sb.append("Length too large: ");
            sb.append(i2);
            sb.append(iH);
            throw new IllegalArgumentException(sb.toString());
        }
        if (i2 > abstractC0099cb.h()) {
            int iH2 = abstractC0099cb.h();
            StringBuilder sb2 = new StringBuilder(59);
            sb2.append("Ran off end of other: 0, ");
            sb2.append(i2);
            sb2.append(", ");
            sb2.append(iH2);
            throw new IllegalArgumentException(sb2.toString());
        }
        if (!(abstractC0099cb instanceof C0168mb)) {
            return abstractC0099cb.a(0, i2).equals(a(0, i2));
        }
        C0168mb c0168mb = (C0168mb) abstractC0099cb;
        byte[] bArr = this.f1753e;
        byte[] bArr2 = c0168mb.f1753e;
        int iC = c() + i2;
        int iC2 = c();
        int iC3 = c0168mb.c();
        while (iC2 < iC) {
            if (bArr[iC2] != bArr2[iC3]) {
                return false;
            }
            iC2++;
            iC3++;
        }
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.AbstractC0099cb
    byte b(int i) {
        return this.f1753e[i];
    }

    protected int c() {
        return 0;
    }

    @Override // com.google.android.gms.internal.measurement.AbstractC0099cb
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof AbstractC0099cb) || h() != ((AbstractC0099cb) obj).h()) {
            return false;
        }
        if (h() == 0) {
            return true;
        }
        if (!(obj instanceof C0168mb)) {
            return obj.equals(this);
        }
        C0168mb c0168mb = (C0168mb) obj;
        int iB = b();
        int iB2 = c0168mb.b();
        if (iB == 0 || iB2 == 0 || iB == iB2) {
            return a(c0168mb, 0, h());
        }
        return false;
    }

    @Override // com.google.android.gms.internal.measurement.AbstractC0099cb
    public int h() {
        return this.f1753e.length;
    }
}
