package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ec, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0114ec extends AbstractC0107dc {
    private C0114ec() {
        super();
    }

    private static <E> Rb<E> b(Object obj, long j) {
        return (Rb) C0115ed.f(obj, j);
    }

    @Override // com.google.android.gms.internal.measurement.AbstractC0107dc
    final void a(Object obj, long j) {
        b(obj, j).i();
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v1 */
    /* JADX WARN: Type inference failed for: r0v2, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v4 */
    /* JADX WARN: Type inference failed for: r0v5 */
    /* JADX WARN: Type inference failed for: r0v6 */
    /* JADX WARN: Type inference failed for: r0v7 */
    /* JADX WARN: Type inference failed for: r0v8 */
    /* JADX WARN: Type inference failed for: r6v1, types: [com.google.android.gms.internal.measurement.Rb, java.util.Collection, java.util.List] */
    /* JADX WARN: Type inference failed for: r6v2, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r6v3 */
    @Override // com.google.android.gms.internal.measurement.AbstractC0107dc
    final <E> void a(Object obj, Object obj2, long j) {
        Rb rbB = b(obj, j);
        ?? B = b(obj2, j);
        int size = rbB.size();
        int size2 = B.size();
        ?? r0 = rbB;
        r0 = rbB;
        if (size > 0 && size2 > 0) {
            boolean zH = rbB.h();
            ?? A = rbB;
            if (!zH) {
                A = rbB.a(size2 + size);
            }
            A.addAll(B);
            r0 = A;
        }
        if (size > 0) {
            B = r0;
        }
        C0115ed.a(obj, j, (Object) B);
    }
}
