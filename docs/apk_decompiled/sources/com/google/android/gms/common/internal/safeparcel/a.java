package com.google.android.gms.common.internal.safeparcel;

import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;
import android.os.Parcelable;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.ArrayList;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a {

    /* JADX INFO: renamed from: com.google.android.gms.common.internal.safeparcel.a$a, reason: collision with other inner class name */
    public static class C0028a extends RuntimeException {
        public C0028a(String str, Parcel parcel) {
            int iDataPosition = parcel.dataPosition();
            int iDataSize = parcel.dataSize();
            StringBuilder sb = new StringBuilder(String.valueOf(str).length() + 41);
            sb.append(str);
            sb.append(" Parcel: pos=");
            sb.append(iDataPosition);
            sb.append(" size=");
            sb.append(iDataSize);
            super(sb.toString());
        }
    }

    public static long A(Parcel parcel, int i) {
        a(parcel, i, 8);
        return parcel.readLong();
    }

    public static Long B(Parcel parcel, int i) {
        int iC = C(parcel, i);
        if (iC == 0) {
            return null;
        }
        a(parcel, i, iC, 8);
        return Long.valueOf(parcel.readLong());
    }

    public static int C(Parcel parcel, int i) {
        return (i & (-65536)) != -65536 ? (i >> 16) & 65535 : parcel.readInt();
    }

    public static void D(Parcel parcel, int i) {
        parcel.setDataPosition(parcel.dataPosition() + C(parcel, i));
    }

    public static int a(int i) {
        return i & 65535;
    }

    public static int a(Parcel parcel) {
        return parcel.readInt();
    }

    public static <T extends Parcelable> T a(Parcel parcel, int i, Parcelable.Creator<T> creator) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        T tCreateFromParcel = creator.createFromParcel(parcel);
        parcel.setDataPosition(iDataPosition + iC);
        return tCreateFromParcel;
    }

    public static BigDecimal a(Parcel parcel, int i) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        byte[] bArrCreateByteArray = parcel.createByteArray();
        int i2 = parcel.readInt();
        parcel.setDataPosition(iDataPosition + iC);
        return new BigDecimal(new BigInteger(bArrCreateByteArray), i2);
    }

    private static void a(Parcel parcel, int i, int i2) {
        int iC = C(parcel, i);
        if (iC == i2) {
            return;
        }
        String hexString = Integer.toHexString(iC);
        StringBuilder sb = new StringBuilder(String.valueOf(hexString).length() + 46);
        sb.append("Expected size ");
        sb.append(i2);
        sb.append(" got ");
        sb.append(iC);
        sb.append(" (0x");
        sb.append(hexString);
        sb.append(")");
        throw new C0028a(sb.toString(), parcel);
    }

    private static void a(Parcel parcel, int i, int i2, int i3) {
        if (i2 == i3) {
            return;
        }
        String hexString = Integer.toHexString(i2);
        StringBuilder sb = new StringBuilder(String.valueOf(hexString).length() + 46);
        sb.append("Expected size ");
        sb.append(i3);
        sb.append(" got ");
        sb.append(i2);
        sb.append(" (0x");
        sb.append(hexString);
        sb.append(")");
        throw new C0028a(sb.toString(), parcel);
    }

    public static int b(Parcel parcel) {
        int iA = a(parcel);
        int iC = C(parcel, iA);
        int iDataPosition = parcel.dataPosition();
        if (a(iA) != 20293) {
            String strValueOf = String.valueOf(Integer.toHexString(iA));
            throw new C0028a(strValueOf.length() != 0 ? "Expected object header. Got 0x".concat(strValueOf) : new String("Expected object header. Got 0x"), parcel);
        }
        int i = iC + iDataPosition;
        if (i >= iDataPosition && i <= parcel.dataSize()) {
            return i;
        }
        StringBuilder sb = new StringBuilder(54);
        sb.append("Size read is invalid start=");
        sb.append(iDataPosition);
        sb.append(" end=");
        sb.append(i);
        throw new C0028a(sb.toString(), parcel);
    }

    public static <T> T[] b(Parcel parcel, int i, Parcelable.Creator<T> creator) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        T[] tArr = (T[]) parcel.createTypedArray(creator);
        parcel.setDataPosition(iDataPosition + iC);
        return tArr;
    }

    public static BigDecimal[] b(Parcel parcel, int i) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        int i2 = parcel.readInt();
        BigDecimal[] bigDecimalArr = new BigDecimal[i2];
        for (int i3 = 0; i3 < i2; i3++) {
            byte[] bArrCreateByteArray = parcel.createByteArray();
            bigDecimalArr[i3] = new BigDecimal(new BigInteger(bArrCreateByteArray), parcel.readInt());
        }
        parcel.setDataPosition(iDataPosition + iC);
        return bigDecimalArr;
    }

    public static BigInteger c(Parcel parcel, int i) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        byte[] bArrCreateByteArray = parcel.createByteArray();
        parcel.setDataPosition(iDataPosition + iC);
        return new BigInteger(bArrCreateByteArray);
    }

    public static <T> ArrayList<T> c(Parcel parcel, int i, Parcelable.Creator<T> creator) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        ArrayList<T> arrayListCreateTypedArrayList = parcel.createTypedArrayList(creator);
        parcel.setDataPosition(iDataPosition + iC);
        return arrayListCreateTypedArrayList;
    }

    public static BigInteger[] d(Parcel parcel, int i) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        int i2 = parcel.readInt();
        BigInteger[] bigIntegerArr = new BigInteger[i2];
        for (int i3 = 0; i3 < i2; i3++) {
            bigIntegerArr[i3] = new BigInteger(parcel.createByteArray());
        }
        parcel.setDataPosition(iDataPosition + iC);
        return bigIntegerArr;
    }

    public static boolean[] e(Parcel parcel, int i) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        boolean[] zArrCreateBooleanArray = parcel.createBooleanArray();
        parcel.setDataPosition(iDataPosition + iC);
        return zArrCreateBooleanArray;
    }

    public static Bundle f(Parcel parcel, int i) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        Bundle bundle = parcel.readBundle();
        parcel.setDataPosition(iDataPosition + iC);
        return bundle;
    }

    public static byte[] g(Parcel parcel, int i) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        byte[] bArrCreateByteArray = parcel.createByteArray();
        parcel.setDataPosition(iDataPosition + iC);
        return bArrCreateByteArray;
    }

    public static double[] h(Parcel parcel, int i) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        double[] dArrCreateDoubleArray = parcel.createDoubleArray();
        parcel.setDataPosition(iDataPosition + iC);
        return dArrCreateDoubleArray;
    }

    public static float[] i(Parcel parcel, int i) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        float[] fArrCreateFloatArray = parcel.createFloatArray();
        parcel.setDataPosition(iDataPosition + iC);
        return fArrCreateFloatArray;
    }

    public static int[] j(Parcel parcel, int i) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        int[] iArrCreateIntArray = parcel.createIntArray();
        parcel.setDataPosition(iDataPosition + iC);
        return iArrCreateIntArray;
    }

    public static long[] k(Parcel parcel, int i) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        long[] jArrCreateLongArray = parcel.createLongArray();
        parcel.setDataPosition(iDataPosition + iC);
        return jArrCreateLongArray;
    }

    public static Parcel l(Parcel parcel, int i) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        Parcel parcelObtain = Parcel.obtain();
        parcelObtain.appendFrom(parcel, iDataPosition, iC);
        parcel.setDataPosition(iDataPosition + iC);
        return parcelObtain;
    }

    public static Parcel[] m(Parcel parcel, int i) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        int i2 = parcel.readInt();
        Parcel[] parcelArr = new Parcel[i2];
        for (int i3 = 0; i3 < i2; i3++) {
            int i4 = parcel.readInt();
            if (i4 != 0) {
                int iDataPosition2 = parcel.dataPosition();
                Parcel parcelObtain = Parcel.obtain();
                parcelObtain.appendFrom(parcel, iDataPosition2, i4);
                parcelArr[i3] = parcelObtain;
                parcel.setDataPosition(iDataPosition2 + i4);
            } else {
                parcelArr[i3] = null;
            }
        }
        parcel.setDataPosition(iDataPosition + iC);
        return parcelArr;
    }

    public static String n(Parcel parcel, int i) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        String string = parcel.readString();
        parcel.setDataPosition(iDataPosition + iC);
        return string;
    }

    public static String[] o(Parcel parcel, int i) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        String[] strArrCreateStringArray = parcel.createStringArray();
        parcel.setDataPosition(iDataPosition + iC);
        return strArrCreateStringArray;
    }

    public static ArrayList<String> p(Parcel parcel, int i) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        ArrayList<String> arrayListCreateStringArrayList = parcel.createStringArrayList();
        parcel.setDataPosition(iDataPosition + iC);
        return arrayListCreateStringArrayList;
    }

    public static void q(Parcel parcel, int i) {
        if (parcel.dataPosition() == i) {
            return;
        }
        StringBuilder sb = new StringBuilder(37);
        sb.append("Overread allowed size end=");
        sb.append(i);
        throw new C0028a(sb.toString(), parcel);
    }

    public static boolean r(Parcel parcel, int i) {
        a(parcel, i, 4);
        return parcel.readInt() != 0;
    }

    public static Boolean s(Parcel parcel, int i) {
        int iC = C(parcel, i);
        if (iC == 0) {
            return null;
        }
        a(parcel, i, iC, 4);
        return Boolean.valueOf(parcel.readInt() != 0);
    }

    public static double t(Parcel parcel, int i) {
        a(parcel, i, 8);
        return parcel.readDouble();
    }

    public static Double u(Parcel parcel, int i) {
        int iC = C(parcel, i);
        if (iC == 0) {
            return null;
        }
        a(parcel, i, iC, 8);
        return Double.valueOf(parcel.readDouble());
    }

    public static float v(Parcel parcel, int i) {
        a(parcel, i, 4);
        return parcel.readFloat();
    }

    public static Float w(Parcel parcel, int i) {
        int iC = C(parcel, i);
        if (iC == 0) {
            return null;
        }
        a(parcel, i, iC, 4);
        return Float.valueOf(parcel.readFloat());
    }

    public static IBinder x(Parcel parcel, int i) {
        int iC = C(parcel, i);
        int iDataPosition = parcel.dataPosition();
        if (iC == 0) {
            return null;
        }
        IBinder strongBinder = parcel.readStrongBinder();
        parcel.setDataPosition(iDataPosition + iC);
        return strongBinder;
    }

    public static int y(Parcel parcel, int i) {
        a(parcel, i, 4);
        return parcel.readInt();
    }

    public static Integer z(Parcel parcel, int i) {
        int iC = C(parcel, i);
        if (iC == 0) {
            return null;
        }
        a(parcel, i, iC, 4);
        return Integer.valueOf(parcel.readInt());
    }
}
