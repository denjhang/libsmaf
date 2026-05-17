package androidx.versionedparcelable;

import android.os.Parcel;
import android.os.Parcelable;
import android.util.SparseIntArray;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c extends b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final SparseIntArray f642a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Parcel f643b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final int f644c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final int f645d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final String f646e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private int f647f;
    private int g;

    c(Parcel parcel) {
        this(parcel, parcel.dataPosition(), parcel.dataSize(), "");
    }

    c(Parcel parcel, int i, int i2, String str) {
        this.f642a = new SparseIntArray();
        this.f647f = -1;
        this.g = 0;
        this.f643b = parcel;
        this.f644c = i;
        this.f645d = i2;
        this.g = this.f644c;
        this.f646e = str;
    }

    private int d(int i) {
        int i2;
        do {
            int i3 = this.g;
            if (i3 >= this.f645d) {
                return -1;
            }
            this.f643b.setDataPosition(i3);
            int i4 = this.f643b.readInt();
            i2 = this.f643b.readInt();
            this.g += i4;
        } while (i2 != i);
        return this.f643b.dataPosition();
    }

    @Override // androidx.versionedparcelable.b
    public void a() {
        int i = this.f647f;
        if (i >= 0) {
            int i2 = this.f642a.get(i);
            int iDataPosition = this.f643b.dataPosition();
            this.f643b.setDataPosition(i2);
            this.f643b.writeInt(iDataPosition - i2);
            this.f643b.setDataPosition(iDataPosition);
        }
    }

    @Override // androidx.versionedparcelable.b
    public void a(Parcelable parcelable) {
        this.f643b.writeParcelable(parcelable, 0);
    }

    @Override // androidx.versionedparcelable.b
    public void a(String str) {
        this.f643b.writeString(str);
    }

    @Override // androidx.versionedparcelable.b
    public void a(byte[] bArr) {
        if (bArr == null) {
            this.f643b.writeInt(-1);
        } else {
            this.f643b.writeInt(bArr.length);
            this.f643b.writeByteArray(bArr);
        }
    }

    @Override // androidx.versionedparcelable.b
    public boolean a(int i) {
        int iD = d(i);
        if (iD == -1) {
            return false;
        }
        this.f643b.setDataPosition(iD);
        return true;
    }

    @Override // androidx.versionedparcelable.b
    protected b b() {
        Parcel parcel = this.f643b;
        int iDataPosition = parcel.dataPosition();
        int i = this.g;
        if (i == this.f644c) {
            i = this.f645d;
        }
        return new c(parcel, iDataPosition, i, this.f646e + "  ");
    }

    @Override // androidx.versionedparcelable.b
    public void b(int i) {
        a();
        this.f647f = i;
        this.f642a.put(i, this.f643b.dataPosition());
        c(0);
        c(i);
    }

    @Override // androidx.versionedparcelable.b
    public void c(int i) {
        this.f643b.writeInt(i);
    }

    @Override // androidx.versionedparcelable.b
    public byte[] d() {
        int i = this.f643b.readInt();
        if (i < 0) {
            return null;
        }
        byte[] bArr = new byte[i];
        this.f643b.readByteArray(bArr);
        return bArr;
    }

    @Override // androidx.versionedparcelable.b
    public int e() {
        return this.f643b.readInt();
    }

    @Override // androidx.versionedparcelable.b
    public <T extends Parcelable> T f() {
        return (T) this.f643b.readParcelable(c.class.getClassLoader());
    }

    @Override // androidx.versionedparcelable.b
    public String g() {
        return this.f643b.readString();
    }
}
