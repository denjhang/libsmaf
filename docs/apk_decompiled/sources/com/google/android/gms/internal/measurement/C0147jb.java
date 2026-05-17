package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.jb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0147jb extends C0168mb {

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final int f1732f;
    private final int g;

    C0147jb(byte[] bArr, int i, int i2) {
        super(bArr);
        AbstractC0099cb.b(i, i + i2, bArr.length);
        this.f1732f = i;
        this.g = i2;
    }

    @Override // com.google.android.gms.internal.measurement.C0168mb, com.google.android.gms.internal.measurement.AbstractC0099cb
    public final byte a(int i) {
        int iH = h();
        if (((iH - (i + 1)) | i) >= 0) {
            return this.f1753e[this.f1732f + i];
        }
        if (i < 0) {
            StringBuilder sb = new StringBuilder(22);
            sb.append("Index < 0: ");
            sb.append(i);
            throw new ArrayIndexOutOfBoundsException(sb.toString());
        }
        StringBuilder sb2 = new StringBuilder(40);
        sb2.append("Index > length: ");
        sb2.append(i);
        sb2.append(", ");
        sb2.append(iH);
        throw new ArrayIndexOutOfBoundsException(sb2.toString());
    }

    @Override // com.google.android.gms.internal.measurement.C0168mb, com.google.android.gms.internal.measurement.AbstractC0099cb
    final byte b(int i) {
        return this.f1753e[this.f1732f + i];
    }

    @Override // com.google.android.gms.internal.measurement.C0168mb
    protected final int c() {
        return this.f1732f;
    }

    @Override // com.google.android.gms.internal.measurement.C0168mb, com.google.android.gms.internal.measurement.AbstractC0099cb
    public final int h() {
        return this.g;
    }
}
