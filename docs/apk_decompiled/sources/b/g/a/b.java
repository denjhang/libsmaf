package b.g.a;

import android.os.Bundle;
import android.util.Log;
import androidx.lifecycle.h;
import androidx.lifecycle.o;
import androidx.lifecycle.p;
import androidx.lifecycle.s;
import androidx.lifecycle.t;
import androidx.lifecycle.u;
import b.b.i;
import b.g.b.a;
import java.io.FileDescriptor;
import java.io.PrintWriter;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b extends b.g.a.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static boolean f800a = false;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final h f801b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final c f802c;

    public static class a<D> extends o<D> implements a.InterfaceC0015a<D> {
        private final int k;
        private final Bundle l;
        private final b.g.b.a<D> m;
        private h n;
        private C0014b<D> o;
        private b.g.b.a<D> p;

        b.g.b.a<D> a(boolean z) {
            if (b.f800a) {
                Log.v("LoaderManager", "  Destroying: " + this);
            }
            this.m.a();
            throw null;
        }

        @Override // androidx.lifecycle.LiveData
        protected void a() {
            if (b.f800a) {
                Log.v("LoaderManager", "  Starting: " + this);
            }
            this.m.c();
            throw null;
        }

        /* JADX WARN: Multi-variable type inference failed */
        @Override // androidx.lifecycle.LiveData
        public void a(p<? super D> pVar) {
            super.a((p) pVar);
            this.n = null;
            this.o = null;
        }

        @Override // androidx.lifecycle.o, androidx.lifecycle.LiveData
        public void a(D d2) {
            super.a(d2);
            b.g.b.a<D> aVar = this.p;
            if (aVar == null) {
                return;
            }
            aVar.b();
            throw null;
        }

        public void a(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
            printWriter.print(str);
            printWriter.print("mId=");
            printWriter.print(this.k);
            printWriter.print(" mArgs=");
            printWriter.println(this.l);
            printWriter.print(str);
            printWriter.print("mLoader=");
            printWriter.println(this.m);
            this.m.a(str + "  ", fileDescriptor, printWriter, strArr);
            throw null;
        }

        @Override // androidx.lifecycle.LiveData
        protected void b() {
            if (b.f800a) {
                Log.v("LoaderManager", "  Stopping: " + this);
            }
            this.m.d();
            throw null;
        }

        void c() {
            h hVar = this.n;
            C0014b<D> c0014b = this.o;
            if (hVar == null || c0014b == null) {
                return;
            }
            super.a((p) c0014b);
            a(hVar, c0014b);
        }

        public String toString() {
            StringBuilder sb = new StringBuilder(64);
            sb.append("LoaderInfo{");
            sb.append(Integer.toHexString(System.identityHashCode(this)));
            sb.append(" #");
            sb.append(this.k);
            sb.append(" : ");
            b.d.c.a.a(this.m, sb);
            sb.append("}}");
            return sb.toString();
        }
    }

    /* JADX INFO: renamed from: b.g.a.b$b, reason: collision with other inner class name */
    static class C0014b<D> implements p<D> {
    }

    static class c extends s {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final t.a f803a = new b.g.a.c();

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private i<a> f804b = new i<>();

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private boolean f805c = false;

        c() {
        }

        static c a(u uVar) {
            return (c) new t(uVar, f803a).a(c.class);
        }

        @Override // androidx.lifecycle.s
        protected void a() {
            super.a();
            if (this.f804b.c() <= 0) {
                this.f804b.b();
            } else {
                this.f804b.e(0).a(true);
                throw null;
            }
        }

        public void a(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
            if (this.f804b.c() > 0) {
                printWriter.print(str);
                printWriter.println("Loaders:");
                String str2 = str + "    ";
                if (this.f804b.c() <= 0) {
                    return;
                }
                a aVarE = this.f804b.e(0);
                printWriter.print(str);
                printWriter.print("  #");
                printWriter.print(this.f804b.c(0));
                printWriter.print(": ");
                printWriter.println(aVarE.toString());
                aVarE.a(str2, fileDescriptor, printWriter, strArr);
                throw null;
            }
        }

        void b() {
            int iC = this.f804b.c();
            for (int i = 0; i < iC; i++) {
                this.f804b.e(i).c();
            }
        }
    }

    b(h hVar, u uVar) {
        this.f801b = hVar;
        this.f802c = c.a(uVar);
    }

    @Override // b.g.a.a
    public void a() {
        this.f802c.b();
    }

    @Override // b.g.a.a
    @Deprecated
    public void a(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        this.f802c.a(str, fileDescriptor, printWriter, strArr);
    }

    public String toString() {
        StringBuilder sb = new StringBuilder(128);
        sb.append("LoaderManager{");
        sb.append(Integer.toHexString(System.identityHashCode(this)));
        sb.append(" in ");
        b.d.c.a.a(this.f801b, sb);
        sb.append("}}");
        return sb.toString();
    }
}
