package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class Zb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final C0230wb f1614a = C0230wb.a();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private AbstractC0099cb f1615b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private volatile InterfaceC0219uc f1616c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private volatile AbstractC0099cb f1617d;

    private final InterfaceC0219uc b(InterfaceC0219uc interfaceC0219uc) {
        if (this.f1616c == null) {
            synchronized (this) {
                if (this.f1616c == null) {
                    try {
                        this.f1616c = interfaceC0219uc;
                        this.f1617d = AbstractC0099cb.f1658a;
                    } catch (Ub unused) {
                        this.f1616c = interfaceC0219uc;
                        this.f1617d = AbstractC0099cb.f1658a;
                    }
                }
            }
        }
        return this.f1616c;
    }

    public final int a() {
        if (this.f1617d != null) {
            return this.f1617d.h();
        }
        if (this.f1616c != null) {
            return this.f1616c.f();
        }
        return 0;
    }

    public final InterfaceC0219uc a(InterfaceC0219uc interfaceC0219uc) {
        InterfaceC0219uc interfaceC0219uc2 = this.f1616c;
        this.f1615b = null;
        this.f1617d = null;
        this.f1616c = interfaceC0219uc;
        return interfaceC0219uc2;
    }

    public final AbstractC0099cb b() {
        if (this.f1617d != null) {
            return this.f1617d;
        }
        synchronized (this) {
            if (this.f1617d != null) {
                return this.f1617d;
            }
            this.f1617d = this.f1616c == null ? AbstractC0099cb.f1658a : this.f1616c.e();
            return this.f1617d;
        }
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof Zb)) {
            return false;
        }
        Zb zb = (Zb) obj;
        InterfaceC0219uc interfaceC0219uc = this.f1616c;
        InterfaceC0219uc interfaceC0219uc2 = zb.f1616c;
        return (interfaceC0219uc == null && interfaceC0219uc2 == null) ? b().equals(zb.b()) : (interfaceC0219uc == null || interfaceC0219uc2 == null) ? interfaceC0219uc != null ? interfaceC0219uc.equals(zb.b(interfaceC0219uc.b())) : b(interfaceC0219uc2.b()).equals(interfaceC0219uc2) : interfaceC0219uc.equals(interfaceC0219uc2);
    }

    public int hashCode() {
        return 1;
    }
}
