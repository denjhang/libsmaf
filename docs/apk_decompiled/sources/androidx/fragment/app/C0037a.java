package androidx.fragment.app;

import android.util.Log;
import androidx.fragment.app.AbstractC0048l;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.s;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.lang.reflect.Modifier;
import java.util.ArrayList;

/* JADX INFO: renamed from: androidx.fragment.app.a, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0037a extends x implements AbstractC0048l.a, s.h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final s f364a;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    int f366c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    int f367d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    int f368e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    int f369f;
    int g;
    int h;
    boolean i;
    String k;
    boolean l;
    int n;
    CharSequence o;
    int p;
    CharSequence q;
    ArrayList<String> r;
    ArrayList<String> s;
    ArrayList<Runnable> u;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    ArrayList<C0009a> f365b = new ArrayList<>();
    boolean j = true;
    int m = -1;
    boolean t = false;

    /* JADX INFO: renamed from: androidx.fragment.app.a$a, reason: collision with other inner class name */
    static final class C0009a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        int f370a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        Fragment f371b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        int f372c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        int f373d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        int f374e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        int f375f;

        C0009a() {
        }

        C0009a(int i, Fragment fragment) {
            this.f370a = i;
            this.f371b = fragment;
        }
    }

    public C0037a(s sVar) {
        this.f364a = sVar;
    }

    private void a(int i, Fragment fragment, String str, int i2) {
        Class<?> cls = fragment.getClass();
        int modifiers = cls.getModifiers();
        if (cls.isAnonymousClass() || !Modifier.isPublic(modifiers) || (cls.isMemberClass() && !Modifier.isStatic(modifiers))) {
            throw new IllegalStateException("Fragment " + cls.getCanonicalName() + " must be a public static class to be  properly recreated from instance state.");
        }
        fragment.t = this.f364a;
        if (str != null) {
            String str2 = fragment.B;
            if (str2 != null && !str.equals(str2)) {
                throw new IllegalStateException("Can't change tag of fragment " + fragment + ": was " + fragment.B + " now " + str);
            }
            fragment.B = str;
        }
        if (i != 0) {
            if (i == -1) {
                throw new IllegalArgumentException("Can't add fragment " + fragment + " with tag " + str + " to container view with no id");
            }
            int i3 = fragment.z;
            if (i3 != 0 && i3 != i) {
                throw new IllegalStateException("Can't change container ID of fragment " + fragment + ": was " + fragment.z + " now " + i);
            }
            fragment.z = i;
            fragment.A = i;
        }
        a(new C0009a(i2, fragment));
    }

    private static boolean b(C0009a c0009a) {
        Fragment fragment = c0009a.f371b;
        return (fragment == null || !fragment.m || fragment.K == null || fragment.D || fragment.C || !fragment.E()) ? false : true;
    }

    @Override // androidx.fragment.app.x
    public int a() {
        return a(false);
    }

    int a(boolean z) {
        if (this.l) {
            throw new IllegalStateException("commit already called");
        }
        if (s.f400a) {
            Log.v("FragmentManager", "Commit: " + this);
            PrintWriter printWriter = new PrintWriter(new b.d.c.b("FragmentManager"));
            a("  ", (FileDescriptor) null, printWriter, (String[]) null);
            printWriter.close();
        }
        this.l = true;
        this.m = this.i ? this.f364a.b(this) : -1;
        this.f364a.a(this, z);
        return this.m;
    }

    /* JADX WARN: Removed duplicated region for block: B:35:0x00b6  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    androidx.fragment.app.Fragment a(java.util.ArrayList<androidx.fragment.app.Fragment> r17, androidx.fragment.app.Fragment r18) {
        /*
            r16 = this;
            r0 = r16
            r1 = r17
            r4 = r18
            r3 = 0
        L7:
            java.util.ArrayList<androidx.fragment.app.a$a> r5 = r0.f365b
            int r5 = r5.size()
            if (r3 >= r5) goto Lbe
            java.util.ArrayList<androidx.fragment.app.a$a> r5 = r0.f365b
            java.lang.Object r5 = r5.get(r3)
            androidx.fragment.app.a$a r5 = (androidx.fragment.app.C0037a.C0009a) r5
            int r6 = r5.f370a
            r7 = 0
            r8 = 1
            if (r6 == r8) goto Lb6
            r9 = 2
            r10 = 3
            r11 = 9
            if (r6 == r9) goto L58
            if (r6 == r10) goto L41
            r9 = 6
            if (r6 == r9) goto L41
            r7 = 7
            if (r6 == r7) goto Lb6
            r7 = 8
            if (r6 == r7) goto L31
            goto Lbb
        L31:
            java.util.ArrayList<androidx.fragment.app.a$a> r6 = r0.f365b
            androidx.fragment.app.a$a r7 = new androidx.fragment.app.a$a
            r7.<init>(r11, r4)
            r6.add(r3, r7)
            int r3 = r3 + 1
            androidx.fragment.app.Fragment r4 = r5.f371b
            goto Lbb
        L41:
            androidx.fragment.app.Fragment r6 = r5.f371b
            r1.remove(r6)
            androidx.fragment.app.Fragment r5 = r5.f371b
            if (r5 != r4) goto Lbb
            java.util.ArrayList<androidx.fragment.app.a$a> r4 = r0.f365b
            androidx.fragment.app.a$a r6 = new androidx.fragment.app.a$a
            r6.<init>(r11, r5)
            r4.add(r3, r6)
            int r3 = r3 + 1
            r4 = r7
            goto Lbb
        L58:
            androidx.fragment.app.Fragment r6 = r5.f371b
            int r9 = r6.A
            int r12 = r17.size()
            int r12 = r12 - r8
            r13 = r4
            r4 = r3
            r3 = 0
        L64:
            if (r12 < 0) goto La4
            java.lang.Object r14 = r1.get(r12)
            androidx.fragment.app.Fragment r14 = (androidx.fragment.app.Fragment) r14
            int r15 = r14.A
            if (r15 != r9) goto La1
            if (r14 != r6) goto L74
            r3 = 1
            goto La1
        L74:
            if (r14 != r13) goto L83
            java.util.ArrayList<androidx.fragment.app.a$a> r13 = r0.f365b
            androidx.fragment.app.a$a r15 = new androidx.fragment.app.a$a
            r15.<init>(r11, r14)
            r13.add(r4, r15)
            int r4 = r4 + 1
            r13 = r7
        L83:
            androidx.fragment.app.a$a r15 = new androidx.fragment.app.a$a
            r15.<init>(r10, r14)
            int r2 = r5.f372c
            r15.f372c = r2
            int r2 = r5.f374e
            r15.f374e = r2
            int r2 = r5.f373d
            r15.f373d = r2
            int r2 = r5.f375f
            r15.f375f = r2
            java.util.ArrayList<androidx.fragment.app.a$a> r2 = r0.f365b
            r2.add(r4, r15)
            r1.remove(r14)
            int r4 = r4 + r8
        La1:
            int r12 = r12 + (-1)
            goto L64
        La4:
            if (r3 == 0) goto Lae
            java.util.ArrayList<androidx.fragment.app.a$a> r2 = r0.f365b
            r2.remove(r4)
            int r4 = r4 + (-1)
            goto Lb3
        Lae:
            r5.f370a = r8
            r1.add(r6)
        Lb3:
            r3 = r4
            r4 = r13
            goto Lbb
        Lb6:
            androidx.fragment.app.Fragment r2 = r5.f371b
            r1.add(r2)
        Lbb:
            int r3 = r3 + r8
            goto L7
        Lbe:
            return r4
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.fragment.app.C0037a.a(java.util.ArrayList, androidx.fragment.app.Fragment):androidx.fragment.app.Fragment");
    }

    @Override // androidx.fragment.app.x
    public x a(int i, Fragment fragment, String str) {
        a(i, fragment, str, 1);
        return this;
    }

    @Override // androidx.fragment.app.x
    public x a(Fragment fragment) {
        a(new C0009a(7, fragment));
        return this;
    }

    @Override // androidx.fragment.app.x
    public x a(Fragment fragment, String str) {
        a(0, fragment, str, 1);
        return this;
    }

    void a(int i) {
        if (this.i) {
            if (s.f400a) {
                Log.v("FragmentManager", "Bump nesting in " + this + " by " + i);
            }
            int size = this.f365b.size();
            for (int i2 = 0; i2 < size; i2++) {
                C0009a c0009a = this.f365b.get(i2);
                Fragment fragment = c0009a.f371b;
                if (fragment != null) {
                    fragment.s += i;
                    if (s.f400a) {
                        Log.v("FragmentManager", "Bump nesting of " + c0009a.f371b + " to " + c0009a.f371b.s);
                    }
                }
            }
        }
    }

    void a(Fragment.c cVar) {
        for (int i = 0; i < this.f365b.size(); i++) {
            C0009a c0009a = this.f365b.get(i);
            if (b(c0009a)) {
                c0009a.f371b.a(cVar);
            }
        }
    }

    void a(C0009a c0009a) {
        this.f365b.add(c0009a);
        c0009a.f372c = this.f366c;
        c0009a.f373d = this.f367d;
        c0009a.f374e = this.f368e;
        c0009a.f375f = this.f369f;
    }

    public void a(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        a(str, printWriter, true);
    }

    public void a(String str, PrintWriter printWriter, boolean z) {
        String str2;
        if (z) {
            printWriter.print(str);
            printWriter.print("mName=");
            printWriter.print(this.k);
            printWriter.print(" mIndex=");
            printWriter.print(this.m);
            printWriter.print(" mCommitted=");
            printWriter.println(this.l);
            if (this.g != 0) {
                printWriter.print(str);
                printWriter.print("mTransition=#");
                printWriter.print(Integer.toHexString(this.g));
                printWriter.print(" mTransitionStyle=#");
                printWriter.println(Integer.toHexString(this.h));
            }
            if (this.f366c != 0 || this.f367d != 0) {
                printWriter.print(str);
                printWriter.print("mEnterAnim=#");
                printWriter.print(Integer.toHexString(this.f366c));
                printWriter.print(" mExitAnim=#");
                printWriter.println(Integer.toHexString(this.f367d));
            }
            if (this.f368e != 0 || this.f369f != 0) {
                printWriter.print(str);
                printWriter.print("mPopEnterAnim=#");
                printWriter.print(Integer.toHexString(this.f368e));
                printWriter.print(" mPopExitAnim=#");
                printWriter.println(Integer.toHexString(this.f369f));
            }
            if (this.n != 0 || this.o != null) {
                printWriter.print(str);
                printWriter.print("mBreadCrumbTitleRes=#");
                printWriter.print(Integer.toHexString(this.n));
                printWriter.print(" mBreadCrumbTitleText=");
                printWriter.println(this.o);
            }
            if (this.p != 0 || this.q != null) {
                printWriter.print(str);
                printWriter.print("mBreadCrumbShortTitleRes=#");
                printWriter.print(Integer.toHexString(this.p));
                printWriter.print(" mBreadCrumbShortTitleText=");
                printWriter.println(this.q);
            }
        }
        if (this.f365b.isEmpty()) {
            return;
        }
        printWriter.print(str);
        printWriter.println("Operations:");
        String str3 = str + "    ";
        int size = this.f365b.size();
        for (int i = 0; i < size; i++) {
            C0009a c0009a = this.f365b.get(i);
            switch (c0009a.f370a) {
                case 0:
                    str2 = "NULL";
                    break;
                case 1:
                    str2 = "ADD";
                    break;
                case 2:
                    str2 = "REPLACE";
                    break;
                case 3:
                    str2 = "REMOVE";
                    break;
                case 4:
                    str2 = "HIDE";
                    break;
                case 5:
                    str2 = "SHOW";
                    break;
                case 6:
                    str2 = "DETACH";
                    break;
                case 7:
                    str2 = "ATTACH";
                    break;
                case 8:
                    str2 = "SET_PRIMARY_NAV";
                    break;
                case 9:
                    str2 = "UNSET_PRIMARY_NAV";
                    break;
                default:
                    str2 = "cmd=" + c0009a.f370a;
                    break;
            }
            printWriter.print(str);
            printWriter.print("  Op #");
            printWriter.print(i);
            printWriter.print(": ");
            printWriter.print(str2);
            printWriter.print(" ");
            printWriter.println(c0009a.f371b);
            if (z) {
                if (c0009a.f372c != 0 || c0009a.f373d != 0) {
                    printWriter.print(str);
                    printWriter.print("enterAnim=#");
                    printWriter.print(Integer.toHexString(c0009a.f372c));
                    printWriter.print(" exitAnim=#");
                    printWriter.println(Integer.toHexString(c0009a.f373d));
                }
                if (c0009a.f374e != 0 || c0009a.f375f != 0) {
                    printWriter.print(str);
                    printWriter.print("popEnterAnim=#");
                    printWriter.print(Integer.toHexString(c0009a.f374e));
                    printWriter.print(" popExitAnim=#");
                    printWriter.println(Integer.toHexString(c0009a.f375f));
                }
            }
        }
    }

    boolean a(ArrayList<C0037a> arrayList, int i, int i2) {
        if (i2 == i) {
            return false;
        }
        int size = this.f365b.size();
        int i3 = -1;
        for (int i4 = 0; i4 < size; i4++) {
            Fragment fragment = this.f365b.get(i4).f371b;
            int i5 = fragment != null ? fragment.A : 0;
            if (i5 != 0 && i5 != i3) {
                for (int i6 = i; i6 < i2; i6++) {
                    C0037a c0037a = arrayList.get(i6);
                    int size2 = c0037a.f365b.size();
                    for (int i7 = 0; i7 < size2; i7++) {
                        Fragment fragment2 = c0037a.f365b.get(i7).f371b;
                        if ((fragment2 != null ? fragment2.A : 0) == i5) {
                            return true;
                        }
                    }
                }
                i3 = i5;
            }
        }
        return false;
    }

    @Override // androidx.fragment.app.s.h
    public boolean a(ArrayList<C0037a> arrayList, ArrayList<Boolean> arrayList2) {
        if (s.f400a) {
            Log.v("FragmentManager", "Run: " + this);
        }
        arrayList.add(this);
        arrayList2.add(false);
        if (!this.i) {
            return true;
        }
        this.f364a.a(this);
        return true;
    }

    @Override // androidx.fragment.app.x
    public int b() {
        return a(true);
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x0022  */
    /* JADX WARN: Removed duplicated region for block: B:14:0x0028  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    androidx.fragment.app.Fragment b(java.util.ArrayList<androidx.fragment.app.Fragment> r5, androidx.fragment.app.Fragment r6) {
        /*
            r4 = this;
            r0 = 0
        L1:
            java.util.ArrayList<androidx.fragment.app.a$a> r1 = r4.f365b
            int r1 = r1.size()
            if (r0 >= r1) goto L30
            java.util.ArrayList<androidx.fragment.app.a$a> r1 = r4.f365b
            java.lang.Object r1 = r1.get(r0)
            androidx.fragment.app.a$a r1 = (androidx.fragment.app.C0037a.C0009a) r1
            int r2 = r1.f370a
            r3 = 1
            if (r2 == r3) goto L28
            r3 = 3
            if (r2 == r3) goto L22
            switch(r2) {
                case 6: goto L22;
                case 7: goto L28;
                case 8: goto L20;
                case 9: goto L1d;
                default: goto L1c;
            }
        L1c:
            goto L2d
        L1d:
            androidx.fragment.app.Fragment r6 = r1.f371b
            goto L2d
        L20:
            r6 = 0
            goto L2d
        L22:
            androidx.fragment.app.Fragment r1 = r1.f371b
            r5.add(r1)
            goto L2d
        L28:
            androidx.fragment.app.Fragment r1 = r1.f371b
            r5.remove(r1)
        L2d:
            int r0 = r0 + 1
            goto L1
        L30:
            return r6
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.fragment.app.C0037a.b(java.util.ArrayList, androidx.fragment.app.Fragment):androidx.fragment.app.Fragment");
    }

    @Override // androidx.fragment.app.x
    public x b(Fragment fragment) {
        a(new C0009a(6, fragment));
        return this;
    }

    void b(boolean z) {
        for (int size = this.f365b.size() - 1; size >= 0; size--) {
            C0009a c0009a = this.f365b.get(size);
            Fragment fragment = c0009a.f371b;
            if (fragment != null) {
                fragment.a(s.d(this.g), this.h);
            }
            switch (c0009a.f370a) {
                case 1:
                    fragment.a(c0009a.f375f);
                    this.f364a.k(fragment);
                    break;
                case 2:
                default:
                    throw new IllegalArgumentException("Unknown cmd: " + c0009a.f370a);
                case 3:
                    fragment.a(c0009a.f374e);
                    this.f364a.a(fragment, false);
                    break;
                case 4:
                    fragment.a(c0009a.f374e);
                    this.f364a.o(fragment);
                    break;
                case 5:
                    fragment.a(c0009a.f375f);
                    this.f364a.e(fragment);
                    break;
                case 6:
                    fragment.a(c0009a.f374e);
                    this.f364a.a(fragment);
                    break;
                case 7:
                    fragment.a(c0009a.f375f);
                    this.f364a.c(fragment);
                    break;
                case 8:
                    this.f364a.n(null);
                    break;
                case 9:
                    this.f364a.n(fragment);
                    break;
            }
            if (!this.t && c0009a.f370a != 3 && fragment != null) {
                this.f364a.h(fragment);
            }
        }
        if (this.t || !z) {
            return;
        }
        s sVar = this.f364a;
        sVar.a(sVar.r, true);
    }

    boolean b(int i) {
        int size = this.f365b.size();
        for (int i2 = 0; i2 < size; i2++) {
            Fragment fragment = this.f365b.get(i2).f371b;
            int i3 = fragment != null ? fragment.A : 0;
            if (i3 != 0 && i3 == i) {
                return true;
            }
        }
        return false;
    }

    @Override // androidx.fragment.app.x
    public x c(Fragment fragment) {
        a(new C0009a(3, fragment));
        return this;
    }

    void c() {
        int size = this.f365b.size();
        for (int i = 0; i < size; i++) {
            C0009a c0009a = this.f365b.get(i);
            Fragment fragment = c0009a.f371b;
            if (fragment != null) {
                fragment.a(this.g, this.h);
            }
            switch (c0009a.f370a) {
                case 1:
                    fragment.a(c0009a.f372c);
                    this.f364a.a(fragment, false);
                    break;
                case 2:
                default:
                    throw new IllegalArgumentException("Unknown cmd: " + c0009a.f370a);
                case 3:
                    fragment.a(c0009a.f373d);
                    this.f364a.k(fragment);
                    break;
                case 4:
                    fragment.a(c0009a.f373d);
                    this.f364a.e(fragment);
                    break;
                case 5:
                    fragment.a(c0009a.f372c);
                    this.f364a.o(fragment);
                    break;
                case 6:
                    fragment.a(c0009a.f373d);
                    this.f364a.c(fragment);
                    break;
                case 7:
                    fragment.a(c0009a.f372c);
                    this.f364a.a(fragment);
                    break;
                case 8:
                    this.f364a.n(fragment);
                    break;
                case 9:
                    this.f364a.n(null);
                    break;
            }
            if (!this.t && c0009a.f370a != 1 && fragment != null) {
                this.f364a.h(fragment);
            }
        }
        if (this.t) {
            return;
        }
        s sVar = this.f364a;
        sVar.a(sVar.r, true);
    }

    public String d() {
        return this.k;
    }

    boolean e() {
        for (int i = 0; i < this.f365b.size(); i++) {
            if (b(this.f365b.get(i))) {
                return true;
            }
        }
        return false;
    }

    public void f() {
        ArrayList<Runnable> arrayList = this.u;
        if (arrayList != null) {
            int size = arrayList.size();
            for (int i = 0; i < size; i++) {
                this.u.get(i).run();
            }
            this.u = null;
        }
    }

    public String toString() {
        StringBuilder sb = new StringBuilder(128);
        sb.append("BackStackEntry{");
        sb.append(Integer.toHexString(System.identityHashCode(this)));
        if (this.m >= 0) {
            sb.append(" #");
            sb.append(this.m);
        }
        if (this.k != null) {
            sb.append(" ");
            sb.append(this.k);
        }
        sb.append("}");
        return sb.toString();
    }
}
