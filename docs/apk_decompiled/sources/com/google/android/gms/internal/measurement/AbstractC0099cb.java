package com.google.android.gms.internal.measurement;

import java.io.Serializable;
import java.nio.charset.Charset;
import java.util.Comparator;
import java.util.Iterator;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.cb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class AbstractC0099cb implements Serializable, Iterable<Byte> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final AbstractC0099cb f1658a = new C0168mb(Lb.f1502c);

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final InterfaceC0141ib f1659b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final Comparator<AbstractC0099cb> f1660c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f1661d = 0;

    static {
        C0120fb c0120fb = null;
        f1659b = _a.a() ? new C0189pb(c0120fb) : new C0127gb(c0120fb);
        f1660c = new C0113eb();
    }

    AbstractC0099cb() {
    }

    public static AbstractC0099cb a(String str) {
        return new C0168mb(str.getBytes(Lb.f1500a));
    }

    public static AbstractC0099cb a(byte[] bArr, int i, int i2) {
        b(i, i + i2, bArr.length);
        return new C0168mb(f1659b.a(bArr, i, i2));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int b(byte b2) {
        return b2 & 255;
    }

    static int b(int i, int i2, int i3) {
        int i4 = i2 - i;
        if ((i | i2 | i4 | (i3 - i2)) >= 0) {
            return i4;
        }
        if (i < 0) {
            StringBuilder sb = new StringBuilder(32);
            sb.append("Beginning index: ");
            sb.append(i);
            sb.append(" < 0");
            throw new IndexOutOfBoundsException(sb.toString());
        }
        if (i2 < i) {
            StringBuilder sb2 = new StringBuilder(66);
            sb2.append("Beginning index larger than ending index: ");
            sb2.append(i);
            sb2.append(", ");
            sb2.append(i2);
            throw new IndexOutOfBoundsException(sb2.toString());
        }
        StringBuilder sb3 = new StringBuilder(37);
        sb3.append("End index: ");
        sb3.append(i2);
        sb3.append(" >= ");
        sb3.append(i3);
        throw new IndexOutOfBoundsException(sb3.toString());
    }

    static C0154kb c(int i) {
        return new C0154kb(i, null);
    }

    public abstract byte a(int i);

    protected abstract int a(int i, int i2, int i3);

    public abstract AbstractC0099cb a(int i, int i2);

    protected abstract String a(Charset charset);

    abstract void a(AbstractC0106db abstractC0106db);

    public abstract boolean a();

    abstract byte b(int i);

    protected final int b() {
        return this.f1661d;
    }

    public abstract boolean equals(Object obj);

    public abstract int h();

    public final int hashCode() {
        int iA = this.f1661d;
        if (iA == 0) {
            int iH = h();
            iA = a(iH, 0, iH);
            if (iA == 0) {
                iA = 1;
            }
            this.f1661d = iA;
        }
        return iA;
    }

    @Override // java.lang.Iterable
    public /* synthetic */ Iterator<Byte> iterator() {
        return new C0120fb(this);
    }

    public final String m() {
        return h() == 0 ? "" : a(Lb.f1500a);
    }

    public final String toString() {
        return String.format("<ByteString@%s size=%d>", Integer.toHexString(System.identityHashCode(this)), Integer.valueOf(h()));
    }
}
