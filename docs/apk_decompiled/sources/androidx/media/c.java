package androidx.media;

import java.util.Arrays;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c implements InterfaceC0051a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int f525a = 0;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    int f526b = 0;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    int f527c = 0;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    int f528d = -1;

    c() {
    }

    public int a() {
        return this.f526b;
    }

    public int b() {
        int i = this.f527c;
        int iC = c();
        if (iC == 6) {
            i |= 4;
        } else if (iC == 7) {
            i |= 1;
        }
        return i & 273;
    }

    public int c() {
        int i = this.f528d;
        return i != -1 ? i : AudioAttributesCompat.a(false, this.f527c, this.f525a);
    }

    public int d() {
        return this.f525a;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof c)) {
            return false;
        }
        c cVar = (c) obj;
        return this.f526b == cVar.a() && this.f527c == cVar.b() && this.f525a == cVar.d() && this.f528d == cVar.f528d;
    }

    public int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(this.f526b), Integer.valueOf(this.f527c), Integer.valueOf(this.f525a), Integer.valueOf(this.f528d)});
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("AudioAttributesCompat:");
        if (this.f528d != -1) {
            sb.append(" stream=");
            sb.append(this.f528d);
            sb.append(" derived");
        }
        sb.append(" usage=");
        sb.append(AudioAttributesCompat.a(this.f525a));
        sb.append(" content=");
        sb.append(this.f526b);
        sb.append(" flags=0x");
        sb.append(Integer.toHexString(this.f527c).toUpperCase());
        return sb.toString();
    }
}
