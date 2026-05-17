package com.google.android.gms.common.api.internal;

import com.google.android.gms.common.Feature;
import com.google.android.gms.common.api.Status;
import com.google.android.gms.common.api.internal.C0055b;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class D extends C<Boolean> {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final C0059f<?> f1052c;

    public D(C0059f<?> c0059f, c.a.a.a.f.h<Boolean> hVar) {
        super(4, hVar);
        this.f1052c = c0059f;
    }

    @Override // com.google.android.gms.common.api.internal.C, com.google.android.gms.common.api.internal.l
    public final /* bridge */ /* synthetic */ void a(Status status) {
        super.a(status);
    }

    @Override // com.google.android.gms.common.api.internal.l
    public final /* bridge */ /* synthetic */ void a(C0062i c0062i, boolean z) {
    }

    @Override // com.google.android.gms.common.api.internal.C, com.google.android.gms.common.api.internal.l
    public final /* bridge */ /* synthetic */ void a(RuntimeException runtimeException) {
        super.a(runtimeException);
    }

    @Override // com.google.android.gms.common.api.internal.v
    public final Feature[] b(C0055b.a<?> aVar) {
        u uVar = aVar.i().get(this.f1052c);
        if (uVar == null) {
            return null;
        }
        return uVar.f1110a.b();
    }

    @Override // com.google.android.gms.common.api.internal.v
    public final boolean c(C0055b.a<?> aVar) {
        u uVar = aVar.i().get(this.f1052c);
        return uVar != null && uVar.f1110a.c();
    }

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    /*  JADX ERROR: JadxRuntimeException in pass: FinishTypeInference
        jadx.core.utils.exceptions.JadxRuntimeException: Code variable not set in r0v5 boolean
        	at jadx.core.dex.instructions.args.SSAVar.getCodeVar(SSAVar.java:236)
        	at jadx.core.dex.visitors.typeinference.FinishTypeInference.lambda$visit$0(FinishTypeInference.java:27)
        	at java.base/java.util.ArrayList.forEach(Unknown Source)
        	at jadx.core.dex.visitors.typeinference.FinishTypeInference.visit(FinishTypeInference.java:22)
        */
    @Override // com.google.android.gms.common.api.internal.C
    public final void d(com.google.android.gms.common.api.internal.C0055b.a<?> r4) {
        /*
            r3 = this;
            java.util.Map r0 = r4.i()
            com.google.android.gms.common.api.internal.f<?> r1 = r3.f1052c
            java.lang.Object r0 = r0.remove(r1)
            com.google.android.gms.common.api.internal.u r0 = (com.google.android.gms.common.api.internal.u) r0
            if (r0 == 0) goto L1f
            com.google.android.gms.common.api.internal.h<com.google.android.gms.common.api.a$b, ?> r1 = r0.f1111b
            com.google.android.gms.common.api.a$f r4 = r4.f()
            c.a.a.a.f.h<T> r2 = r3.f1051b
            r1.a(r4, r2)
            com.google.android.gms.common.api.internal.g<com.google.android.gms.common.api.a$b, ?> r4 = r0.f1110a
            r4.a()
            return
        L1f:
            c.a.a.a.f.h<T> r4 = r3.f1051b
            r0 = 0
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            r4.b(r0)
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.common.api.internal.D.d(com.google.android.gms.common.api.internal.b$a):void");
    }
}
