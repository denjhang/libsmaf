package com.google.firebase.iid;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import android.util.Base64;
import android.util.Log;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.io.UnsupportedEncodingException;
import java.nio.channels.Channels;
import java.nio.channels.FileChannel;
import java.security.KeyFactory;
import java.security.KeyPair;
import java.security.NoSuchAlgorithmException;
import java.security.spec.InvalidKeySpecException;
import java.security.spec.PKCS8EncodedKeySpec;
import java.security.spec.X509EncodedKeySpec;
import java.util.Properties;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class aa {
    aa() {
    }

    /* JADX WARN: Removed duplicated region for block: B:36:0x00ad A[Catch: all -> 0x00b1, Throwable -> 0x00b4, TRY_ENTER, TryCatch #9 {all -> 0x00b1, Throwable -> 0x00b4, blocks: (B:7:0x0041, B:15:0x005d, B:26:0x009b, B:36:0x00ad, B:37:0x00b0), top: B:54:0x0041 }] */
    /* JADX WARN: Removed duplicated region for block: B:58:? A[Catch: all -> 0x00b1, Throwable -> 0x00b4, SYNTHETIC, TRY_LEAVE, TryCatch #9 {all -> 0x00b1, Throwable -> 0x00b4, blocks: (B:7:0x0041, B:15:0x005d, B:26:0x009b, B:36:0x00ad, B:37:0x00b0), top: B:54:0x0041 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private final com.google.firebase.iid.Z a(android.content.Context r10, java.lang.String r11, com.google.firebase.iid.Z r12, boolean r13) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 226
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.firebase.iid.aa.a(android.content.Context, java.lang.String, com.google.firebase.iid.Z, boolean):com.google.firebase.iid.Z");
    }

    private static Z a(SharedPreferences sharedPreferences, String str) {
        String string = sharedPreferences.getString(C0405x.a(str, "|P|"), null);
        String string2 = sharedPreferences.getString(C0405x.a(str, "|K|"), null);
        if (string == null || string2 == null) {
            return null;
        }
        return new Z(a(string, string2), b(sharedPreferences, str));
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x002e A[Catch: all -> 0x0032, Throwable -> 0x0034, TRY_ENTER, TryCatch #3 {, blocks: (B:3:0x0006, B:7:0x001c, B:17:0x002e, B:18:0x0031), top: B:25:0x0006, outer: #0 }] */
    /* JADX WARN: Removed duplicated region for block: B:30:? A[Catch: all -> 0x0032, Throwable -> 0x0034, SYNTHETIC, TRY_LEAVE, TryCatch #3 {, blocks: (B:3:0x0006, B:7:0x001c, B:17:0x002e, B:18:0x0031), top: B:25:0x0006, outer: #0 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private final com.google.firebase.iid.Z a(java.io.File r10) throws java.io.IOException {
        /*
            r9 = this;
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r10)
            r10 = 0
            java.nio.channels.FileChannel r7 = r0.getChannel()     // Catch: java.lang.Throwable -> L32 java.lang.Throwable -> L34
            r2 = 0
            r4 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r6 = 1
            r1 = r7
            r1.lock(r2, r4, r6)     // Catch: java.lang.Throwable -> L23 java.lang.Throwable -> L26
            com.google.firebase.iid.Z r1 = a(r7)     // Catch: java.lang.Throwable -> L23 java.lang.Throwable -> L26
            if (r7 == 0) goto L1f
            a(r10, r7)     // Catch: java.lang.Throwable -> L32 java.lang.Throwable -> L34
        L1f:
            a(r10, r0)
            return r1
        L23:
            r1 = move-exception
            r2 = r10
            goto L2c
        L26:
            r1 = move-exception
            throw r1     // Catch: java.lang.Throwable -> L28
        L28:
            r2 = move-exception
            r8 = r2
            r2 = r1
            r1 = r8
        L2c:
            if (r7 == 0) goto L31
            a(r2, r7)     // Catch: java.lang.Throwable -> L32 java.lang.Throwable -> L34
        L31:
            throw r1     // Catch: java.lang.Throwable -> L32 java.lang.Throwable -> L34
        L32:
            r1 = move-exception
            goto L36
        L34:
            r10 = move-exception
            throw r10     // Catch: java.lang.Throwable -> L32
        L36:
            a(r10, r0)
            throw r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.firebase.iid.aa.a(java.io.File):com.google.firebase.iid.Z");
    }

    private static Z a(FileChannel fileChannel) throws C0386d, IOException {
        Properties properties = new Properties();
        properties.load(Channels.newInputStream(fileChannel));
        String property = properties.getProperty("pub");
        String property2 = properties.getProperty("pri");
        if (property == null || property2 == null) {
            throw new C0386d("Invalid properties file");
        }
        try {
            return new Z(a(property, property2), Long.parseLong(properties.getProperty("cre")));
        } catch (NumberFormatException e2) {
            throw new C0386d(e2);
        }
    }

    private static KeyPair a(String str, String str2) throws C0386d {
        try {
            byte[] bArrDecode = Base64.decode(str, 8);
            byte[] bArrDecode2 = Base64.decode(str2, 8);
            try {
                KeyFactory keyFactory = KeyFactory.getInstance("RSA");
                return new KeyPair(keyFactory.generatePublic(new X509EncodedKeySpec(bArrDecode)), keyFactory.generatePrivate(new PKCS8EncodedKeySpec(bArrDecode2)));
            } catch (NoSuchAlgorithmException | InvalidKeySpecException e2) {
                String strValueOf = String.valueOf(e2);
                StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 19);
                sb.append("Invalid key stored ");
                sb.append(strValueOf);
                Log.w("FirebaseInstanceId", sb.toString());
                throw new C0386d(e2);
            }
        } catch (IllegalArgumentException e3) {
            throw new C0386d(e3);
        }
    }

    static void a(Context context) {
        for (File file : b(context).listFiles()) {
            if (file.getName().startsWith("com.google.InstanceId")) {
                file.delete();
            }
        }
    }

    private final void a(Context context, String str, Z z) {
        SharedPreferences sharedPreferences = context.getSharedPreferences("com.google.android.gms.appid", 0);
        try {
            if (z.equals(a(sharedPreferences, str))) {
                return;
            }
        } catch (C0386d unused) {
        }
        if (Log.isLoggable("FirebaseInstanceId", 3)) {
            Log.d("FirebaseInstanceId", "Writing key to shared preferences");
        }
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        editorEdit.putString(C0405x.a(str, "|P|"), z.b());
        editorEdit.putString(C0405x.a(str, "|K|"), z.c());
        editorEdit.putString(C0405x.a(str, "cre"), String.valueOf(z.f2668b));
        editorEdit.commit();
    }

    private static /* synthetic */ void a(Throwable th, FileInputStream fileInputStream) throws IOException {
        if (th == null) {
            fileInputStream.close();
            return;
        }
        try {
            fileInputStream.close();
        } catch (Throwable th2) {
            c.a.a.a.d.d.h.a(th, th2);
        }
    }

    private static /* synthetic */ void a(Throwable th, RandomAccessFile randomAccessFile) throws IOException {
        if (th == null) {
            randomAccessFile.close();
            return;
        }
        try {
            randomAccessFile.close();
        } catch (Throwable th2) {
            c.a.a.a.d.d.h.a(th, th2);
        }
    }

    private static /* synthetic */ void a(Throwable th, FileChannel fileChannel) {
        if (th == null) {
            fileChannel.close();
            return;
        }
        try {
            fileChannel.close();
        } catch (Throwable th2) {
            c.a.a.a.d.d.h.a(th, th2);
        }
    }

    private static long b(SharedPreferences sharedPreferences, String str) {
        String string = sharedPreferences.getString(C0405x.a(str, "cre"), null);
        if (string == null) {
            return 0L;
        }
        try {
            return Long.parseLong(string);
        } catch (NumberFormatException unused) {
            return 0L;
        }
    }

    private static File b(Context context) {
        File fileC = androidx.core.content.a.c(context);
        if (fileC != null && fileC.isDirectory()) {
            return fileC;
        }
        Log.w("FirebaseInstanceId", "noBackupFilesDir doesn't exist, using regular files directory instead");
        return context.getFilesDir();
    }

    private final Z c(Context context, String str) throws Throwable {
        try {
            Z zD = d(context, str);
            if (zD != null) {
                a(context, str, zD);
                return zD;
            }
            e = null;
        } catch (C0386d e2) {
            e = e2;
        }
        try {
            Z zA = a(context.getSharedPreferences("com.google.android.gms.appid", 0), str);
            if (zA != null) {
                a(context, str, zA, false);
                return zA;
            }
        } catch (C0386d e3) {
            e = e3;
        }
        if (e == null) {
            return null;
        }
        throw e;
    }

    private final Z d(Context context, String str) throws C0386d {
        File fileE = e(context, str);
        if (!fileE.exists()) {
            return null;
        }
        try {
            return a(fileE);
        } catch (C0386d | IOException e2) {
            if (Log.isLoggable("FirebaseInstanceId", 3)) {
                String strValueOf = String.valueOf(e2);
                StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 40);
                sb.append("Failed to read key from file, retrying: ");
                sb.append(strValueOf);
                Log.d("FirebaseInstanceId", sb.toString());
            }
            try {
                return a(fileE);
            } catch (IOException e3) {
                String strValueOf2 = String.valueOf(e3);
                StringBuilder sb2 = new StringBuilder(String.valueOf(strValueOf2).length() + 45);
                sb2.append("IID file exists, but failed to read from it: ");
                sb2.append(strValueOf2);
                Log.w("FirebaseInstanceId", sb2.toString());
                throw new C0386d(e3);
            }
        }
    }

    private static File e(Context context, String str) {
        String string;
        if (TextUtils.isEmpty(str)) {
            string = "com.google.InstanceId.properties";
        } else {
            try {
                String strEncodeToString = Base64.encodeToString(str.getBytes(HTTP.UTF_8), 11);
                StringBuilder sb = new StringBuilder(String.valueOf(strEncodeToString).length() + 33);
                sb.append("com.google.InstanceId_");
                sb.append(strEncodeToString);
                sb.append(".properties");
                string = sb.toString();
            } catch (UnsupportedEncodingException e2) {
                throw new AssertionError(e2);
            }
        }
        return new File(b(context), string);
    }

    final Z a(Context context, String str) throws Throwable {
        Z zC = c(context, str);
        return zC != null ? zC : b(context, str);
    }

    final Z b(Context context, String str) throws Throwable {
        Z z = new Z(C0385c.a(), System.currentTimeMillis());
        Z zA = a(context, str, z, true);
        if (zA != null && !zA.equals(z)) {
            if (Log.isLoggable("FirebaseInstanceId", 3)) {
                Log.d("FirebaseInstanceId", "Loaded key after generating new one, using loaded one");
            }
            return zA;
        }
        if (Log.isLoggable("FirebaseInstanceId", 3)) {
            Log.d("FirebaseInstanceId", "Generated new key");
        }
        a(context, str, z);
        return z;
    }
}
