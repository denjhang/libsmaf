package jp.co.ymm.android.ringtone.alarm;

import android.content.Context;
import android.os.Parcel;
import android.os.Parcelable;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Calendar;
import java.util.Date;
import java.util.EnumSet;
import java.util.Iterator;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.o;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class AlarmItem implements Parcelable {
    public static final Parcelable.Creator<AlarmItem> CREATOR = new a();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static File f3471a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f3472b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private boolean f3473c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f3474d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private int f3475e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private EnumSet<b> f3476f;
    private String g;
    private boolean h;
    private boolean i;
    private String j;
    private int k;
    private int l;
    private int m;
    private boolean n;

    public AlarmItem(int i) throws Throwable {
        this.f3473c = true;
        this.f3474d = 0;
        this.f3475e = 0;
        this.f3476f = EnumSet.noneOf(b.class);
        this.g = null;
        this.h = true;
        this.i = true;
        this.j = null;
        this.k = o.O;
        this.l = 3;
        this.m = 0;
        this.n = false;
        g.a(f3471a != null);
        this.f3472b = i;
        t();
    }

    private AlarmItem(Parcel parcel) {
        this.f3473c = true;
        this.f3474d = 0;
        this.f3475e = 0;
        this.f3476f = EnumSet.noneOf(b.class);
        this.g = null;
        this.h = true;
        this.i = true;
        this.j = null;
        this.k = o.O;
        this.l = 3;
        this.m = 0;
        this.n = false;
        a(parcel);
    }

    /* synthetic */ AlarmItem(Parcel parcel, a aVar) {
        this(parcel);
    }

    public static Boolean a(int i) {
        return Boolean.valueOf(new File(f3471a, String.valueOf(i)).exists());
    }

    private static final EnumSet<b> a(boolean[] zArr) {
        EnumSet<b> enumSetNoneOf = EnumSet.noneOf(b.class);
        for (b bVar : EnumSet.allOf(b.class)) {
            if (zArr[bVar.i]) {
                enumSetNoneOf.add(bVar);
            }
        }
        return enumSetNoneOf;
    }

    public static void a(Context context) {
        if (f3471a != null) {
            return;
        }
        f3471a = new File(context.getFilesDir(), "/alarm");
        if (f3471a.exists()) {
            return;
        }
        f3471a.mkdirs();
    }

    private void a(Parcel parcel) {
        if (parcel.readInt() != 258) {
            return;
        }
        this.f3472b = parcel.readInt();
        this.f3473c = parcel.readInt() != 0;
        this.f3474d = parcel.readInt();
        this.f3475e = parcel.readInt();
        boolean[] zArr = new boolean[7];
        parcel.readBooleanArray(zArr);
        this.f3476f = a(zArr);
        this.g = parcel.readString();
        this.h = parcel.readInt() != 0;
        this.i = parcel.readInt() != 0;
        this.j = parcel.readString();
        this.k = parcel.readInt();
        this.l = parcel.readInt();
        this.m = parcel.readInt();
    }

    public static boolean a(Calendar calendar, AlarmItem alarmItem) {
        calendar.setTimeInMillis(System.currentTimeMillis());
        int i = calendar.get(7) - 1;
        g.a("nowDayWeek : " + i);
        boolean z = false;
        for (b bVar : alarmItem.c()) {
            if (i == bVar.i) {
                g.a("day.index : " + bVar.i);
                z = true;
            }
        }
        g.a("checkRepeatDayAlarmManager  ：  " + z);
        return z;
    }

    public static void b(int i) {
        File file = new File(f3471a, String.valueOf(i));
        if (file.exists()) {
            file.delete();
        }
    }

    private void b(Parcel parcel) {
        parcel.writeInt(258);
        parcel.writeInt(this.f3472b);
        parcel.writeInt(this.f3473c ? 1 : 0);
        parcel.writeInt(this.f3474d);
        parcel.writeInt(this.f3475e);
        parcel.writeBooleanArray(b(this.f3476f));
        parcel.writeString(this.g);
        parcel.writeInt(this.h ? 1 : 0);
        parcel.writeInt(this.i ? 1 : 0);
        parcel.writeString(this.j);
        parcel.writeInt(this.k);
        parcel.writeInt(this.l);
        parcel.writeInt(this.m);
    }

    private static final boolean[] b(EnumSet<b> enumSet) {
        boolean[] zArr = new boolean[7];
        Iterator it = enumSet.iterator();
        while (it.hasNext()) {
            zArr[((b) it.next()).i] = true;
        }
        return zArr;
    }

    public static int r() {
        for (int i = 0; i < 20; i++) {
            if (!a(i).booleanValue()) {
                return i;
            }
        }
        return 0;
    }

    private void t() throws Throwable {
        byte[] bArr;
        FileInputStream fileInputStream;
        File file = new File(f3471a, String.valueOf(this.f3472b));
        if (file.exists()) {
            FileInputStream fileInputStream2 = null;
            byte[] bArr2 = null;
            fileInputStream2 = null;
            try {
                try {
                    fileInputStream = new FileInputStream(file);
                } catch (Exception e2) {
                    e = e2;
                    bArr = null;
                }
            } catch (Throwable th) {
                th = th;
            }
            try {
                bArr2 = new byte[fileInputStream.available()];
                fileInputStream.read(bArr2);
                try {
                    fileInputStream.close();
                } catch (IOException unused) {
                }
            } catch (Exception e3) {
                e = e3;
                bArr = bArr2;
                fileInputStream2 = fileInputStream;
                g.a("caught: ", e);
                if (fileInputStream2 != null) {
                    try {
                        fileInputStream2.close();
                    } catch (IOException unused2) {
                    }
                }
                bArr2 = bArr;
            } catch (Throwable th2) {
                th = th2;
                fileInputStream2 = fileInputStream;
                if (fileInputStream2 != null) {
                    try {
                        fileInputStream2.close();
                    } catch (IOException unused3) {
                    }
                }
                throw th;
            }
            Parcel parcelObtain = Parcel.obtain();
            parcelObtain.unmarshall(bArr2, 0, bArr2.length);
            parcelObtain.setDataPosition(0);
            a(parcelObtain);
            parcelObtain.recycle();
        }
    }

    private void u() throws Throwable {
        FileOutputStream fileOutputStream;
        Parcel parcelObtain = Parcel.obtain();
        b(parcelObtain);
        byte[] bArrMarshall = parcelObtain.marshall();
        parcelObtain.recycle();
        FileOutputStream fileOutputStream2 = null;
        try {
            try {
                try {
                    fileOutputStream = new FileOutputStream(new File(f3471a, String.valueOf(this.f3472b)), false);
                } catch (IOException unused) {
                    return;
                }
            } catch (Exception e2) {
                e = e2;
            }
        } catch (Throwable th) {
            th = th;
        }
        try {
            fileOutputStream.write(bArrMarshall);
            fileOutputStream.close();
        } catch (Exception e3) {
            e = e3;
            fileOutputStream2 = fileOutputStream;
            g.a("caught: ", e);
            if (fileOutputStream2 == null) {
            } else {
                fileOutputStream2.close();
            }
        } catch (Throwable th2) {
            th = th2;
            fileOutputStream2 = fileOutputStream;
            if (fileOutputStream2 != null) {
                try {
                    fileOutputStream2.close();
                } catch (IOException unused2) {
                }
            }
            throw th;
        }
    }

    public void a() throws Throwable {
        u();
    }

    public void a(int i, int i2) {
        if (this.f3474d == i && this.f3475e == i2) {
            return;
        }
        this.f3474d = i;
        this.f3475e = i2;
        this.n = true;
    }

    public void a(String str) {
        if (this.j == null && str == null) {
            return;
        }
        String str2 = this.j;
        if (str2 == null || !str2.equals(str)) {
            this.j = str;
            this.n = true;
        }
    }

    public void a(EnumSet<b> enumSet) {
        if (this.f3476f.equals(enumSet)) {
            return;
        }
        this.f3476f = enumSet;
        this.n = true;
    }

    public void a(AlarmItem alarmItem) {
        g.a(alarmItem != null);
        this.n = false;
        b(alarmItem.f3473c);
        a(alarmItem.f3474d, alarmItem.f3475e);
        a(alarmItem.f3476f);
        b(alarmItem.g);
        a(alarmItem.h);
        c(alarmItem.i);
        a(alarmItem.j);
        d(alarmItem.k);
        e(alarmItem.l);
        f(alarmItem.m);
    }

    public void a(boolean z) {
        if (this.h == z) {
            return;
        }
        this.h = z;
        this.n = true;
    }

    public void b() throws Throwable {
        if (o()) {
            u();
        }
    }

    public void b(String str) {
        if (this.g == null && str == null) {
            return;
        }
        String str2 = this.g;
        if (str2 == null || !str2.equals(str)) {
            this.g = str;
            this.n = true;
        }
    }

    public void b(boolean z) {
        if (this.f3473c == z) {
            return;
        }
        this.f3473c = z;
        this.n = true;
    }

    public int c(int i) {
        Calendar calendar = Calendar.getInstance();
        calendar.set(11, this.f3474d);
        calendar.set(12, this.f3475e);
        return calendar.get(i);
    }

    public EnumSet<b> c() {
        return this.f3476f;
    }

    public void c(boolean z) {
        if (this.i == z) {
            return;
        }
        this.i = z;
        this.n = true;
    }

    public void d(int i) {
        if (i > 0) {
            this.k = i;
        }
        this.n = true;
    }

    public boolean d() {
        return this.h;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public int e() {
        return this.f3474d;
    }

    public void e(int i) {
        this.l = i;
        this.n = true;
    }

    public int f() {
        return this.f3472b;
    }

    public void f(int i) {
        if (i == 0 || i == 1 || i == 2) {
            this.m = i;
            this.n = true;
        }
    }

    public String g() {
        return this.j;
    }

    public int h() {
        return this.f3475e;
    }

    public int i() {
        if (this.k <= 0) {
            this.k = o.O;
        }
        return this.k;
    }

    public int j() {
        return this.l;
    }

    public int k() {
        return this.m;
    }

    public Date l() {
        Calendar calendar = Calendar.getInstance();
        calendar.set(11, this.f3474d);
        calendar.set(12, this.f3475e);
        return calendar.getTime();
    }

    public String m() {
        return this.g;
    }

    public boolean n() {
        return this.i;
    }

    public boolean o() {
        return this.n;
    }

    public boolean p() {
        return this.f3473c;
    }

    public boolean q() {
        return !this.f3476f.isEmpty();
    }

    public void s() {
        f(0);
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        b(parcel);
    }
}
