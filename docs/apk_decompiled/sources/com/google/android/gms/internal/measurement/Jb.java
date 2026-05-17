package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;
import com.google.android.gms.internal.measurement.Jb.b;
import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class Jb<MessageType extends Jb<MessageType, BuilderType>, BuilderType extends b<MessageType, BuilderType>> extends Va<MessageType, BuilderType> {
    private static Map<Object, Jb<?, ?>> zzd = new ConcurrentHashMap();
    protected C0094bd zzb = C0094bd.a();
    private int zzc = -1;

    public static class a<T extends Jb<T, ?>> extends Ya<T> {

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final T f1476b;

        public a(T t) {
            this.f1476b = t;
        }
    }

    public static abstract class b<MessageType extends Jb<MessageType, BuilderType>, BuilderType extends b<MessageType, BuilderType>> extends Wa<MessageType, BuilderType> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final MessageType f1477a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        protected MessageType f1478b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private boolean f1479c = false;

        protected b(MessageType messagetype) {
            this.f1477a = messagetype;
            this.f1478b = (MessageType) messagetype.a(e.f1483d, null, null);
        }

        private static void a(MessageType messagetype, MessageType messagetype2) {
            Dc.a().a(messagetype).b(messagetype, messagetype2);
        }

        private final BuilderType b(byte[] bArr, int i, int i2, C0230wb c0230wb) throws Ub {
            g();
            try {
                Dc.a().a(this.f1478b).a(this.f1478b, bArr, 0, i2 + 0, new C0092bb(c0230wb));
                return this;
            } catch (Ub e2) {
                throw e2;
            } catch (IOException e3) {
                throw new RuntimeException("Reading from byte array should not throw IOException.", e3);
            } catch (IndexOutOfBoundsException unused) {
                throw Ub.a();
            }
        }

        public final BuilderType a(MessageType messagetype) {
            g();
            a(this.f1478b, messagetype);
            return this;
        }

        @Override // com.google.android.gms.internal.measurement.Wa
        protected final /* synthetic */ Wa a(Va va) {
            a((Jb) va);
            return this;
        }

        @Override // com.google.android.gms.internal.measurement.Wa
        public final /* synthetic */ Wa a(byte[] bArr, int i, int i2) throws Ub {
            b(bArr, 0, i2, C0230wb.a());
            return this;
        }

        @Override // com.google.android.gms.internal.measurement.Wa
        public final /* synthetic */ Wa a(byte[] bArr, int i, int i2, C0230wb c0230wb) throws Ub {
            b(bArr, 0, i2, c0230wb);
            return this;
        }

        @Override // com.google.android.gms.internal.measurement.InterfaceC0231wc
        public final /* synthetic */ InterfaceC0219uc b() {
            return this.f1477a;
        }

        /* JADX WARN: Multi-variable type inference failed */
        public /* synthetic */ Object clone() {
            b bVar = (b) this.f1477a.a(e.f1484e, null, null);
            bVar.a((Jb) a());
            return bVar;
        }

        protected final void g() {
            if (this.f1479c) {
                MessageType messagetype = (MessageType) this.f1478b.a(e.f1483d, null, null);
                a(messagetype, this.f1478b);
                this.f1478b = messagetype;
                this.f1479c = false;
            }
        }

        @Override // com.google.android.gms.internal.measurement.InterfaceC0213tc
        /* JADX INFO: renamed from: h, reason: merged with bridge method [inline-methods] */
        public MessageType a() {
            if (this.f1479c) {
                return this.f1478b;
            }
            MessageType messagetype = this.f1478b;
            Dc.a().a(messagetype).c(messagetype);
            this.f1479c = true;
            return this.f1478b;
        }

        /* JADX INFO: renamed from: i, reason: merged with bridge method [inline-methods] */
        public final MessageType j() {
            MessageType messagetype = (MessageType) a();
            if (messagetype.j()) {
                return messagetype;
            }
            throw new _c(messagetype);
        }
    }

    static final class c implements Db<c> {
        @Override // java.lang.Comparable
        public final /* synthetic */ int compareTo(Object obj) {
            throw new NoSuchMethodError();
        }

        @Override // com.google.android.gms.internal.measurement.Db
        public final EnumC0191pd m() {
            throw new NoSuchMethodError();
        }

        @Override // com.google.android.gms.internal.measurement.Db
        public final EnumC0208sd x() {
            throw new NoSuchMethodError();
        }

        @Override // com.google.android.gms.internal.measurement.Db
        public final boolean y() {
            throw new NoSuchMethodError();
        }
    }

    public static abstract class d<MessageType extends d<MessageType, BuilderType>, BuilderType> extends Jb<MessageType, BuilderType> implements InterfaceC0231wc {
        protected Bb<c> zzc = Bb.a();

        final Bb<c> o() {
            if (this.zzc.c()) {
                this.zzc = (Bb) this.zzc.clone();
            }
            return this.zzc;
        }
    }

    public enum e {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final int f1480a = 1;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public static final int f1481b = 2;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        public static final int f1482c = 3;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        public static final int f1483d = 4;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        public static final int f1484e = 5;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        public static final int f1485f = 6;
        public static final int g = 7;
        private static final /* synthetic */ int[] h = {f1480a, f1481b, f1482c, f1483d, f1484e, f1485f, g};
        public static final int i = 1;
        public static final int j = 2;
        private static final /* synthetic */ int[] k = {i, j};
        public static final int l = 1;
        public static final int m = 2;
        private static final /* synthetic */ int[] n = {l, m};

        public static int[] a() {
            return (int[]) h.clone();
        }
    }

    public static class f<ContainingType extends InterfaceC0219uc, Type> extends C0236xb<ContainingType, Type> {
    }

    static <T extends Jb<?, ?>> T a(Class<T> cls) {
        Jb<?, ?> jb = zzd.get(cls);
        if (jb == null) {
            try {
                Class.forName(cls.getName(), true, cls.getClassLoader());
                jb = zzd.get(cls);
            } catch (ClassNotFoundException e2) {
                throw new IllegalStateException("Class initialization cannot fail.", e2);
            }
        }
        if (jb == null) {
            jb = (T) ((Jb) C0115ed.a(cls)).a(e.f1485f, (Object) null, (Object) null);
            if (jb == null) {
                throw new IllegalStateException();
            }
            zzd.put(cls, jb);
        }
        return (T) jb;
    }

    protected static <E> Rb<E> a(Rb<E> rb) {
        int size = rb.size();
        return rb.a(size == 0 ? 10 : size << 1);
    }

    protected static Sb a(Sb sb) {
        int size = sb.size();
        return sb.a(size == 0 ? 10 : size << 1);
    }

    protected static Object a(InterfaceC0219uc interfaceC0219uc, String str, Object[] objArr) {
        return new Gc(interfaceC0219uc, str, objArr);
    }

    static Object a(Method method, Object obj, Object... objArr) {
        try {
            return method.invoke(obj, objArr);
        } catch (IllegalAccessException e2) {
            throw new RuntimeException("Couldn't use Java reflection to implement protocol message reflection.", e2);
        } catch (InvocationTargetException e3) {
            Throwable cause = e3.getCause();
            if (cause instanceof RuntimeException) {
                throw ((RuntimeException) cause);
            }
            if (cause instanceof Error) {
                throw ((Error) cause);
            }
            throw new RuntimeException("Unexpected exception thrown by generated accessor method.", cause);
        }
    }

    protected static <T extends Jb<?, ?>> void a(Class<T> cls, T t) {
        zzd.put(cls, t);
    }

    protected static final <T extends Jb<T, ?>> boolean a(T t, boolean z) {
        byte bByteValue = ((Byte) t.a(e.f1480a, null, null)).byteValue();
        if (bByteValue == 1) {
            return true;
        }
        if (bByteValue == 0) {
            return false;
        }
        boolean zB = Dc.a().a(t).b(t);
        if (z) {
            t.a(e.f1481b, zB ? t : null, null);
        }
        return zB;
    }

    protected static Pb l() {
        return Mb.b();
    }

    protected static Sb m() {
        return C0142ic.b();
    }

    protected static <E> Rb<E> n() {
        return Hc.b();
    }

    protected abstract Object a(int i, Object obj, Object obj2);

    @Override // com.google.android.gms.internal.measurement.Va
    final void a(int i) {
        this.zzc = i;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0219uc
    public final void a(AbstractC0212tb abstractC0212tb) {
        Dc.a().a(this).a(this, C0224vb.a(abstractC0212tb));
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0231wc
    public final /* synthetic */ InterfaceC0219uc b() {
        return (Jb) a(e.f1485f, (Object) null, (Object) null);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0219uc
    public final /* synthetic */ InterfaceC0213tc c() {
        b bVar = (b) a(e.f1484e, (Object) null, (Object) null);
        bVar.a(this);
        return bVar;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0219uc
    public final /* synthetic */ InterfaceC0213tc d() {
        return (b) a(e.f1484e, (Object) null, (Object) null);
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (((Jb) a(e.f1485f, (Object) null, (Object) null)).getClass().isInstance(obj)) {
            return Dc.a().a(this).a(this, (Jb) obj);
        }
        return false;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0219uc
    public final int f() {
        if (this.zzc == -1) {
            this.zzc = Dc.a().a(this).d(this);
        }
        return this.zzc;
    }

    @Override // com.google.android.gms.internal.measurement.Va
    final int h() {
        return this.zzc;
    }

    public int hashCode() {
        int i = this.zza;
        if (i != 0) {
            return i;
        }
        this.zza = Dc.a().a(this).a(this);
        return this.zza;
    }

    protected final <MessageType extends Jb<MessageType, BuilderType>, BuilderType extends b<MessageType, BuilderType>> BuilderType i() {
        return (BuilderType) a(e.f1484e, (Object) null, (Object) null);
    }

    public final boolean j() {
        return a(this, Boolean.TRUE.booleanValue());
    }

    public final BuilderType k() {
        BuilderType buildertype = (BuilderType) a(e.f1484e, (Object) null, (Object) null);
        buildertype.a(this);
        return buildertype;
    }

    public String toString() {
        return C0225vc.a(this, super.toString());
    }
}
