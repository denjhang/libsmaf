package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Va;
import com.google.android.gms.internal.measurement.Wa;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class Va<MessageType extends Va<MessageType, BuilderType>, BuilderType extends Wa<MessageType, BuilderType>> implements InterfaceC0219uc {
    protected int zza = 0;

    protected static <T> void a(Iterable<T> iterable, List<? super T> list) {
        Lb.a(iterable);
        if (iterable instanceof InterfaceC0086ac) {
            List<?> listM = ((InterfaceC0086ac) iterable).m();
            InterfaceC0086ac interfaceC0086ac = (InterfaceC0086ac) list;
            int size = list.size();
            for (Object obj : listM) {
                if (obj == null) {
                    int size2 = interfaceC0086ac.size() - size;
                    StringBuilder sb = new StringBuilder(37);
                    sb.append("Element at index ");
                    sb.append(size2);
                    sb.append(" is null.");
                    String string = sb.toString();
                    for (int size3 = interfaceC0086ac.size() - 1; size3 >= size; size3--) {
                        interfaceC0086ac.remove(size3);
                    }
                    throw new NullPointerException(string);
                }
                if (obj instanceof AbstractC0099cb) {
                    interfaceC0086ac.a((AbstractC0099cb) obj);
                } else {
                    interfaceC0086ac.add((String) obj);
                }
            }
            return;
        }
        if (iterable instanceof Fc) {
            list.addAll((Collection) iterable);
            return;
        }
        if ((list instanceof ArrayList) && (iterable instanceof Collection)) {
            ((ArrayList) list).ensureCapacity(list.size() + ((Collection) iterable).size());
        }
        int size4 = list.size();
        for (T t : iterable) {
            if (t == null) {
                int size5 = list.size() - size4;
                StringBuilder sb2 = new StringBuilder(37);
                sb2.append("Element at index ");
                sb2.append(size5);
                sb2.append(" is null.");
                String string2 = sb2.toString();
                for (int size6 = list.size() - 1; size6 >= size4; size6--) {
                    list.remove(size6);
                }
                throw new NullPointerException(string2);
            }
            list.add(t);
        }
    }

    void a(int i) {
        throw new UnsupportedOperationException();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0219uc
    public final AbstractC0099cb e() {
        try {
            C0154kb c0154kbC = AbstractC0099cb.c(f());
            a(c0154kbC.b());
            return c0154kbC.a();
        } catch (IOException e2) {
            String name = getClass().getName();
            StringBuilder sb = new StringBuilder(String.valueOf(name).length() + 62 + "ByteString".length());
            sb.append("Serializing ");
            sb.append(name);
            sb.append(" to a ");
            sb.append("ByteString");
            sb.append(" threw an IOException (should never happen).");
            throw new RuntimeException(sb.toString(), e2);
        }
    }

    public final byte[] g() {
        try {
            byte[] bArr = new byte[f()];
            AbstractC0212tb abstractC0212tbA = AbstractC0212tb.a(bArr);
            a(abstractC0212tbA);
            abstractC0212tbA.b();
            return bArr;
        } catch (IOException e2) {
            String name = getClass().getName();
            StringBuilder sb = new StringBuilder(String.valueOf(name).length() + 62 + "byte array".length());
            sb.append("Serializing ");
            sb.append(name);
            sb.append(" to a ");
            sb.append("byte array");
            sb.append(" threw an IOException (should never happen).");
            throw new RuntimeException(sb.toString(), e2);
        }
    }

    int h() {
        throw new UnsupportedOperationException();
    }
}
