package com.google.android.gms.internal.measurement;

import java.util.Comparator;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.eb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0113eb implements Comparator<AbstractC0099cb> {
    C0113eb() {
    }

    @Override // java.util.Comparator
    public final /* synthetic */ int compare(AbstractC0099cb abstractC0099cb, AbstractC0099cb abstractC0099cb2) {
        AbstractC0099cb abstractC0099cb3 = abstractC0099cb;
        AbstractC0099cb abstractC0099cb4 = abstractC0099cb2;
        InterfaceC0161lb interfaceC0161lb = (InterfaceC0161lb) abstractC0099cb3.iterator();
        InterfaceC0161lb interfaceC0161lb2 = (InterfaceC0161lb) abstractC0099cb4.iterator();
        while (interfaceC0161lb.hasNext() && interfaceC0161lb2.hasNext()) {
            int iCompare = Integer.compare(AbstractC0099cb.b(interfaceC0161lb.h()), AbstractC0099cb.b(interfaceC0161lb2.h()));
            if (iCompare != 0) {
                return iCompare;
            }
        }
        return Integer.compare(abstractC0099cb3.h(), abstractC0099cb4.h());
    }
}
