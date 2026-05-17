package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.hc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0135hc implements Kc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final InterfaceC0201rc f1716a = new C0155kc();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final InterfaceC0201rc f1717b;

    public C0135hc() {
        this(new C0148jc(Kb.a(), a()));
    }

    private C0135hc(InterfaceC0201rc interfaceC0201rc) {
        Lb.a(interfaceC0201rc, "messageInfoFactory");
        this.f1717b = interfaceC0201rc;
    }

    private static InterfaceC0201rc a() {
        try {
            return (InterfaceC0201rc) Class.forName("com.google.protobuf.DescriptorMessageInfoFactory").getDeclaredMethod("getInstance", new Class[0]).invoke(null, new Object[0]);
        } catch (Exception unused) {
            return f1716a;
        }
    }

    private static boolean a(InterfaceC0207sc interfaceC0207sc) {
        return interfaceC0207sc.h() == Jb.e.i;
    }

    @Override // com.google.android.gms.internal.measurement.Kc
    public final <T> Ic<T> a(Class<T> cls) {
        Jc.a((Class<?>) cls);
        InterfaceC0207sc interfaceC0207scB = this.f1717b.b(cls);
        return interfaceC0207scB.m() ? Jb.class.isAssignableFrom(cls) ? C0243yc.a(Jc.c(), C0248zb.a(), interfaceC0207scB.x()) : C0243yc.a(Jc.a(), C0248zb.b(), interfaceC0207scB.x()) : Jb.class.isAssignableFrom(cls) ? a(interfaceC0207scB) ? C0237xc.a(cls, interfaceC0207scB, Cc.b(), AbstractC0107dc.b(), Jc.c(), C0248zb.a(), C0190pc.b()) : C0237xc.a(cls, interfaceC0207scB, Cc.b(), AbstractC0107dc.b(), Jc.c(), (AbstractC0242yb<?>) null, C0190pc.b()) : a(interfaceC0207scB) ? C0237xc.a(cls, interfaceC0207scB, Cc.a(), AbstractC0107dc.a(), Jc.a(), C0248zb.b(), C0190pc.a()) : C0237xc.a(cls, interfaceC0207scB, Cc.a(), AbstractC0107dc.a(), Jc.b(), (AbstractC0242yb<?>) null, C0190pc.a());
    }
}
