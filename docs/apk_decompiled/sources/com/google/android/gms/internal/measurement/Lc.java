package com.google.android.gms.internal.measurement;

import java.util.Iterator;
import java.util.Map;

/* JADX INFO: Add missing generic type declarations: [FieldDescriptorType] */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Lc<FieldDescriptorType> extends Mc<FieldDescriptorType, Object> {
    Lc(int i) {
        super(i, null);
    }

    @Override // com.google.android.gms.internal.measurement.Mc
    public final void a() {
        if (!b()) {
            if (c() > 0) {
                ((Db) b(0).getKey()).y();
                throw null;
            }
            Iterator<Map.Entry<FieldDescriptorType, Object>> it = d().iterator();
            if (it.hasNext()) {
                ((Db) it.next().getKey()).y();
                throw null;
            }
        }
        super.a();
    }
}
