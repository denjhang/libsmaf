package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Va;
import com.google.android.gms.internal.measurement.Wa;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class Wa<MessageType extends Va<MessageType, BuilderType>, BuilderType extends Wa<MessageType, BuilderType>> implements InterfaceC0213tc {
    protected abstract BuilderType a(MessageType messagetype);

    public abstract BuilderType a(byte[] bArr, int i, int i2);

    public abstract BuilderType a(byte[] bArr, int i, int i2, C0230wb c0230wb);

    @Override // com.google.android.gms.internal.measurement.InterfaceC0213tc
    public final /* synthetic */ InterfaceC0213tc a(InterfaceC0219uc interfaceC0219uc) {
        if (!b().getClass().isInstance(interfaceC0219uc)) {
            throw new IllegalArgumentException("mergeFrom(MessageLite) can only merge messages of the same type.");
        }
        a((Va) interfaceC0219uc);
        return this;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0213tc
    public final /* synthetic */ InterfaceC0213tc a(byte[] bArr) {
        a(bArr, 0, bArr.length);
        return this;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0213tc
    public final /* synthetic */ InterfaceC0213tc a(byte[] bArr, C0230wb c0230wb) {
        a(bArr, 0, bArr.length, c0230wb);
        return this;
    }
}
