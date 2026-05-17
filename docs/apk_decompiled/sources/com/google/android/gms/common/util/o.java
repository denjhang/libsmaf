package com.google.android.gms.common.util;

import android.os.Process;
import android.os.StrictMode;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class o {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f1366a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static int f1367b;

    private static BufferedReader a(String str) {
        StrictMode.ThreadPolicy threadPolicyAllowThreadDiskReads = StrictMode.allowThreadDiskReads();
        try {
            return new BufferedReader(new FileReader(str));
        } finally {
            StrictMode.setThreadPolicy(threadPolicyAllowThreadDiskReads);
        }
    }

    public static String a() {
        if (f1366a == null) {
            if (f1367b == 0) {
                f1367b = Process.myPid();
            }
            f1366a = a(f1367b);
        }
        return f1366a;
    }

    private static String a(int i) throws Throwable {
        BufferedReader bufferedReaderA;
        BufferedReader bufferedReader = null;
        strTrim = null;
        String strTrim = null;
        if (i <= 0) {
            return null;
        }
        try {
            StringBuilder sb = new StringBuilder(25);
            sb.append("/proc/");
            sb.append(i);
            sb.append("/cmdline");
            bufferedReaderA = a(sb.toString());
        } catch (IOException unused) {
            bufferedReaderA = null;
        } catch (Throwable th) {
            th = th;
        }
        try {
            strTrim = bufferedReaderA.readLine().trim();
        } catch (IOException unused2) {
        } catch (Throwable th2) {
            bufferedReader = bufferedReaderA;
            th = th2;
            k.a(bufferedReader);
            throw th;
        }
        k.a(bufferedReaderA);
        return strTrim;
    }
}
