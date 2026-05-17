package d.a.a.a;

import android.content.Context;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.util.Random;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f2758a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Random f2759b = new Random();

    /* JADX WARN: Removed duplicated region for block: B:45:0x0086  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static java.lang.String a(int r6, int r7, int r8, boolean r9, boolean r10, char[] r11, java.util.Random r12) {
        /*
            if (r6 != 0) goto L5
            java.lang.String r6 = ""
            return r6
        L5:
            if (r6 < 0) goto L90
            if (r7 != 0) goto L17
            if (r8 != 0) goto L17
            r8 = 123(0x7b, float:1.72E-43)
            r7 = 32
            if (r9 != 0) goto L17
            if (r10 != 0) goto L17
            r7 = 0
            r8 = 2147483647(0x7fffffff, float:NaN)
        L17:
            char[] r0 = new char[r6]
            int r8 = r8 - r7
        L1a:
            int r1 = r6 + (-1)
            if (r6 == 0) goto L8a
            if (r11 != 0) goto L27
            int r6 = r12.nextInt(r8)
            int r6 = r6 + r7
            char r6 = (char) r6
            goto L2e
        L27:
            int r6 = r12.nextInt(r8)
            int r6 = r6 + r7
            char r6 = r11[r6]
        L2e:
            if (r9 == 0) goto L36
            boolean r2 = java.lang.Character.isLetter(r6)
            if (r2 != 0) goto L42
        L36:
            if (r10 == 0) goto L3e
            boolean r2 = java.lang.Character.isDigit(r6)
            if (r2 != 0) goto L42
        L3e:
            if (r9 != 0) goto L86
            if (r10 != 0) goto L86
        L42:
            r2 = 128(0x80, float:1.8E-43)
            r3 = 55296(0xd800, float:7.7486E-41)
            r4 = 56320(0xdc00, float:7.8921E-41)
            if (r6 < r4) goto L61
            r5 = 57343(0xdfff, float:8.0355E-41)
            if (r6 > r5) goto L61
            if (r1 != 0) goto L54
            goto L86
        L54:
            r0[r1] = r6
            int r1 = r1 + (-1)
            int r6 = r12.nextInt(r2)
            int r6 = r6 + r3
            char r6 = (char) r6
            r0[r1] = r6
            goto L88
        L61:
            if (r6 < r3) goto L78
            r3 = 56191(0xdb7f, float:7.874E-41)
            if (r6 > r3) goto L78
            if (r1 != 0) goto L6b
            goto L86
        L6b:
            int r2 = r12.nextInt(r2)
            int r2 = r2 + r4
            char r2 = (char) r2
            r0[r1] = r2
            int r1 = r1 + (-1)
            r0[r1] = r6
            goto L88
        L78:
            r2 = 56192(0xdb80, float:7.8742E-41)
            if (r6 < r2) goto L83
            r2 = 56319(0xdbff, float:7.892E-41)
            if (r6 > r2) goto L83
            goto L86
        L83:
            r0[r1] = r6
            goto L88
        L86:
            int r1 = r1 + 1
        L88:
            r6 = r1
            goto L1a
        L8a:
            java.lang.String r6 = new java.lang.String
            r6.<init>(r0)
            return r6
        L90:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "Requested random string length "
            r8.append(r9)
            r8.append(r6)
            java.lang.String r6 = " is less than 0."
            r8.append(r6)
            java.lang.String r6 = r8.toString()
            r7.<init>(r6)
            goto Lad
        Lac:
            throw r7
        Lad:
            goto Lac
        */
        throw new UnsupportedOperationException("Method not decompiled: d.a.a.a.a.a(int, int, int, boolean, boolean, char[], java.util.Random):java.lang.String");
    }

    public static synchronized String a(Context context) {
        if (f2758a == null) {
            File file = new File(context.getFilesDir(), "INSTALLATION");
            try {
                if (!file.exists()) {
                    b(file);
                }
                f2758a = a(file);
            } catch (Exception e2) {
                throw new RuntimeException(e2);
            }
        }
        return f2758a;
    }

    private static String a(File file) throws IOException {
        RandomAccessFile randomAccessFile = new RandomAccessFile(file, "r");
        byte[] bArr = new byte[(int) randomAccessFile.length()];
        randomAccessFile.readFully(bArr);
        randomAccessFile.close();
        return new String(bArr);
    }

    private static void b(File file) throws IOException {
        FileOutputStream fileOutputStream = new FileOutputStream(file);
        fileOutputStream.write(a(15, 0, 0, true, true, null, f2759b).getBytes());
        fileOutputStream.close();
    }
}
