package jp.co.ymm.android.ringtone.util;

import android.annotation.SuppressLint;
import android.app.NotificationManager;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.media.AudioAttributes;
import android.media.AudioDeviceInfo;
import android.media.AudioFocusRequest;
import android.media.AudioManager;
import android.os.Build;
import android.text.TextUtils;
import android.util.Base64;
import java.io.File;
import java.io.FileFilter;
import java.io.IOException;
import java.io.InputStream;
import java.math.BigInteger;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.text.Normalizer;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.regex.Pattern;
import javax.crypto.Cipher;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;
import jp.co.acrodea.drm.Base64Decoder;
import jp.co.ymm.android.ringtone.b.c;
import jp.co.ymm.android.ringtone.player.PlayerService;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class z {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final char[] f3934a = {(char) Integer.parseInt("0001", 2), (char) Integer.parseInt("0010", 2), (char) Integer.parseInt("1001", 2), (char) Integer.parseInt("0001", 2), (char) Integer.parseInt("0111", 2), (char) Integer.parseInt("1100", 2), (char) Integer.parseInt("0011", 2), (char) Integer.parseInt("1011", 2), (char) Integer.parseInt("1111", 2), (char) Integer.parseInt("1100", 2), (char) Integer.parseInt("1010", 2), (char) Integer.parseInt("1000", 2), (char) Integer.parseInt("0110", 2), (char) Integer.parseInt("1000", 2), (char) Integer.parseInt("1101", 2), (char) Integer.parseInt("0011", 2)};

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final String[] f3935b = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f"};

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final byte[] f3936c = {104, 85, -80, 19, 21, -21, -11, -42, -92, 78, -67, -64, 17, -86, 3, 12};

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static AudioManager.OnAudioFocusChangeListener f3937d = new x();

    private static Intent a(Context context, String str, jp.co.ymm.android.ringtone.player.l lVar) {
        Intent intent = new Intent(context, (Class<?>) PlayerService.class);
        intent.setAction(str);
        intent.putExtra("ringtone-type", lVar.name());
        return intent;
    }

    public static ApplicationInfo a(Context context) {
        try {
            return context.getPackageManager().getApplicationInfo(context.getPackageName(), 0);
        } catch (PackageManager.NameNotFoundException unused) {
            return null;
        }
    }

    public static CharSequence a(Context context, String str) {
        PackageManager packageManager = context.getPackageManager();
        try {
            ApplicationInfo applicationInfo = packageManager.getApplicationInfo(str, 0);
            if (applicationInfo != null) {
                return applicationInfo.loadLabel(packageManager);
            }
            return null;
        } catch (PackageManager.NameNotFoundException unused) {
            return null;
        }
    }

    @SuppressLint({"SimpleDateFormat"})
    public static String a() {
        String str = new SimpleDateFormat("yyyyMMddHHmm").format(new Date());
        try {
            return a(MessageDigest.getInstance("MD5").digest((str + "YamahaMusicMediaSecretKey").getBytes()));
        } catch (NoSuchAlgorithmException e2) {
            e2.printStackTrace();
            return null;
        }
    }

    public static String a(Context context, String str, String str2) {
        return context.getSharedPreferences(o.L, 0).getString(str, str2);
    }

    public static String a(String str) {
        if (str == null) {
            return "";
        }
        StringBuilder sb = new StringBuilder(str);
        if (8 < str.length()) {
            sb.insert(8, '-');
        }
        if (4 < str.length()) {
            sb.insert(4, '-');
        }
        return sb.toString();
    }

    public static String a(String str, boolean z) {
        String strI = i(str);
        if (strI == null) {
            return null;
        }
        byte[] byteArray = new BigInteger(strI, 10).toByteArray();
        StringBuilder sb = new StringBuilder();
        for (byte b2 : byteArray) {
            sb.append(String.format("%02x", Byte.valueOf(b2)));
        }
        return sb.toString().replaceFirst("^0+", "");
    }

    public static String a(byte[] bArr) {
        StringBuffer stringBuffer = new StringBuffer(bArr.length * 2);
        for (byte b2 : bArr) {
            String hexString = Integer.toHexString(b2 & 255);
            if (hexString.length() == 1) {
                stringBuffer.append("0");
            }
            stringBuffer.append(hexString);
        }
        return stringBuffer.toString();
    }

    public static List<Integer> a(Context context, String str, int i) {
        String strB = b(context, str, i);
        if (strB == null) {
            return null;
        }
        String[] strArrSplit = strB.split(Pattern.quote("."), 0);
        ArrayList arrayList = new ArrayList();
        for (String strSubstring : strArrSplit) {
            try {
                int iIndexOf = strSubstring.indexOf("(");
                if (iIndexOf != -1) {
                    strSubstring = strSubstring.substring(0, iIndexOf - 1);
                }
                arrayList.add(Integer.valueOf(Integer.parseInt(strSubstring)));
            } catch (NumberFormatException unused) {
            }
        }
        return arrayList;
    }

    public static c.a a(c.b bVar, byte[] bArr) {
        if (bVar == null || bArr == null) {
            g.g("type=" + bVar + ", body=" + bArr + " ...");
            return null;
        }
        int i = y.f3933a[bVar.ordinal()];
        if (i == 1) {
            return new v(bArr);
        }
        if (i == 2) {
            return new jp.co.ymm.android.ringtone.b.f(bArr).a();
        }
        if (i == 3) {
            return new jp.co.ymm.android.ringtone.b.h(bArr).a();
        }
        if (i == 4) {
            return new c.a();
        }
        g.a(false, "can't happen ...");
        return null;
    }

    public static c.b a(InputStream inputStream) {
        if (inputStream == null) {
            return null;
        }
        try {
            try {
                byte[] bArr = new byte[4];
                if (inputStream.read(bArr) != bArr.length) {
                    return null;
                }
                if (new String(bArr).equals("MMMD")) {
                    c.b bVar = c.b.SMAF;
                    try {
                        inputStream.close();
                    } catch (Exception unused) {
                    }
                    return bVar;
                }
                if (new String(bArr).equals("OggS")) {
                    c.b bVar2 = c.b.OGG;
                    try {
                        inputStream.close();
                    } catch (Exception unused2) {
                    }
                    return bVar2;
                }
                if (Pattern.matches("^(ID3.)$", new String(bArr))) {
                    c.b bVar3 = c.b.MP3;
                    try {
                        inputStream.close();
                    } catch (Exception unused3) {
                    }
                    return bVar3;
                }
                if (inputStream.read(bArr) != bArr.length) {
                    try {
                        inputStream.close();
                    } catch (Exception unused4) {
                    }
                    return null;
                }
                if (!Pattern.matches("^(ftyp|moov|mdat)$", new String(bArr))) {
                    try {
                        inputStream.close();
                    } catch (Exception unused5) {
                    }
                    return null;
                }
                c.b bVar4 = c.b.MP4;
                try {
                    inputStream.close();
                } catch (Exception unused6) {
                }
                return bVar4;
            } catch (Exception e2) {
                g.a("caught ...", e2);
                try {
                    inputStream.close();
                } catch (Exception unused7) {
                }
                return null;
            }
        } finally {
            try {
                inputStream.close();
            } catch (Exception unused8) {
            }
        }
    }

    public static void a(Context context, String str, int i, jp.co.ymm.android.ringtone.player.l lVar) {
        b(context, str, i, lVar, -1, -1);
    }

    public static void a(Context context, String str, int i, jp.co.ymm.android.ringtone.player.l lVar, int i2) {
        b(context, str, i, lVar, i2, -1);
    }

    public static void a(Context context, String str, int i, jp.co.ymm.android.ringtone.player.l lVar, int i2, int i3) {
        b(context, str, i, lVar, i2, i3);
    }

    public static void a(Context context, String str, jp.co.ymm.android.ringtone.player.l lVar, int i) {
        b(context, str, -1, lVar, i, -1);
    }

    public static void a(Context context, jp.co.ymm.android.ringtone.player.l lVar) {
        context.startService(a(context, "jp.co.ymm.android.ringtone.action.STOP", lVar));
    }

    public static void a(AudioManager audioManager, int i, boolean z) {
        if (audioManager == null || c(audioManager)) {
            return;
        }
        if (Build.VERSION.SDK_INT < 23) {
            audioManager.setStreamMute(i, z);
            return;
        }
        audioManager.adjustStreamVolume(i, z ? -100 : 100, 0);
        if (Build.VERSION.SDK_INT < 26) {
            if (z) {
                audioManager.requestAudioFocus(f3937d, 3, 1);
                return;
            } else {
                audioManager.abandonAudioFocus(f3937d);
                return;
            }
        }
        AudioFocusRequest audioFocusRequestBuild = new AudioFocusRequest.Builder(1).setAudioAttributes(new AudioAttributes.Builder().setLegacyStreamType(3).build()).setOnAudioFocusChangeListener(f3937d).build();
        if (z) {
            audioManager.requestAudioFocus(audioFocusRequestBuild);
        } else {
            audioManager.abandonAudioFocusRequest(audioFocusRequestBuild);
        }
    }

    public static boolean a(Context context, String str, boolean z) {
        return context.getSharedPreferences(o.L, 0).getBoolean(str, z);
    }

    public static boolean a(Context context, int... iArr) {
        for (int i : iArr) {
            if (c(context, context.getString(i), 0) != null) {
                return true;
            }
        }
        return false;
    }

    public static boolean a(AudioManager audioManager) {
        if (audioManager == null) {
            return false;
        }
        if (Build.VERSION.SDK_INT >= 23) {
            for (AudioDeviceInfo audioDeviceInfo : audioManager.getDevices(1)) {
                if (audioDeviceInfo.getType() == 3 || audioDeviceInfo.getType() == 4 || audioDeviceInfo.getType() == 7 || audioDeviceInfo.getType() == 8 || audioDeviceInfo.getType() == 22) {
                    g.b("isHeadsetOn info.getType() = " + audioDeviceInfo.getType());
                    return true;
                }
            }
        } else if (audioManager.isWiredHeadsetOn() || audioManager.isBluetoothA2dpOn()) {
            return true;
        }
        return false;
    }

    public static boolean a(AudioManager audioManager, Context context) {
        if (audioManager == null) {
            return true;
        }
        if (audioManager.getRingerMode() == 2) {
            g.a("manner mode : RINGER_MODE_NORMAL");
            return false;
        }
        boolean zC = c(audioManager);
        if (context == null && zC) {
            return true;
        }
        if (context != null && zC && 23 <= Build.VERSION.SDK_INT && !((NotificationManager) context.getSystemService("notification")).isNotificationPolicyAccessGranted()) {
            return true;
        }
        boolean zA = a(audioManager);
        StringBuilder sb = new StringBuilder();
        sb.append("manner mode : ");
        sb.append(zA ? "HeadsetOn" : "Not RINGER_MODE_NORMAL");
        g.a(sb.toString());
        return !zA;
    }

    public static boolean a(File file) {
        g.a(file != null);
        try {
            g.a("File(" + file + ")#delete()");
            boolean zDelete = file.delete();
            if (!zDelete) {
                g.b("File(" + file + ")#delete() returns " + zDelete + " ...");
            }
            return zDelete;
        } catch (Exception e2) {
            g.a("File(" + file + ")#delete() throws ...", e2);
            return false;
        }
    }

    public static byte[] a(InputStream inputStream, int i) throws IOException {
        int i2;
        if (inputStream == null) {
            g.g("is == null, returns null ...");
            return null;
        }
        boolean z = true;
        try {
            g.a(i >= 0);
            byte[] bArr = new byte[i];
            int i3 = 0;
            while (i3 < bArr.length && (i2 = inputStream.read(bArr, i3, bArr.length - i3)) >= 0) {
                i3 += i2;
            }
            if (i3 > bArr.length) {
                z = false;
            }
            g.a(z);
            if (i3 == bArr.length) {
                return bArr;
            }
            g.g("limit=" + i + ", but done=" + i3 + " ...");
            byte[] bArr2 = new byte[i3];
            System.arraycopy(bArr, 0, bArr2, 0, bArr2.length);
            return bArr2;
        } finally {
            inputStream.close();
        }
    }

    public static String b() {
        return e(Base64.encodeToString(f3936c, 0));
    }

    public static String b(Context context) {
        return b(context, context.getPackageName(), 0);
    }

    public static String b(Context context, String str, int i) {
        PackageInfo packageInfoC = c(context, str, i);
        if (packageInfoC == null) {
            return null;
        }
        return packageInfoC.versionName;
    }

    public static void b(Context context, String str) {
        SharedPreferences sharedPreferences = context.getSharedPreferences(o.L, 0);
        if (sharedPreferences.contains(str)) {
            SharedPreferences.Editor editorEdit = sharedPreferences.edit();
            editorEdit.putString(sharedPreferences.getString(str, ""), str + o.Backup.name());
            editorEdit.remove(str);
            editorEdit.apply();
        }
    }

    private static void b(Context context, String str, int i, jp.co.ymm.android.ringtone.player.l lVar, int i2, int i3) {
        Intent intentA = a(context, "jp.co.ymm.android.ringtone.action.PLAY", lVar);
        intentA.putExtra("tone-id", str);
        if (i2 == 0) {
            intentA.putExtra("repeat-count", 1);
        } else if (i2 >= 1) {
            intentA.putExtra("playtime-limit", i2);
        }
        if (i != -1) {
            intentA.putExtra("volume", i);
        }
        if (i3 != -1) {
            intentA.putExtra("muted-stream", i3);
        }
        context.startService(intentA);
    }

    public static void b(Context context, String str, boolean z) {
        SharedPreferences.Editor editorEdit = context.getSharedPreferences(o.L, 0).edit();
        editorEdit.putBoolean(str, z);
        editorEdit.commit();
    }

    public static boolean b(AudioManager audioManager) {
        return a(audioManager, (Context) null);
    }

    public static byte[] b(String str) {
        g.a(str != null);
        return new Base64Decoder().doFinal(str);
    }

    public static PackageInfo c(Context context, String str, int i) {
        try {
            return context.getPackageManager().getPackageInfo(str, i);
        } catch (PackageManager.NameNotFoundException unused) {
            return null;
        }
    }

    public static FileFilter c() {
        return new w();
    }

    public static String c(Context context) {
        return context.getPackageManager().getInstallerPackageName(context.getPackageName());
    }

    public static String c(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        String lowerCase = Normalizer.normalize(str, Normalizer.Form.NFKC).trim().toLowerCase();
        if (Pattern.matches("^[0-9a-f]+$", lowerCase)) {
            return lowerCase;
        }
        return null;
    }

    public static boolean c(AudioManager audioManager) {
        if (Build.VERSION.SDK_INT < 24 || audioManager.getRingerMode() != 0) {
            return false;
        }
        g.a("manner mode : RINGER_MODE_SILENT");
        return true;
    }

    public static int d(Context context, String str, int i) {
        return context.getSharedPreferences(o.L, 0).getInt(str, i);
    }

    public static PackageInfo d(Context context) {
        return c(context, context.getPackageName(), 128);
    }

    public static String d(String str) {
        if (str == null) {
            return null;
        }
        new StringBuilder(str).append("\n");
        StringBuilder sb = new StringBuilder();
        int length = f3934a.length;
        for (int i = 0; i < str.length(); i++) {
            sb.append(f3935b[Integer.parseInt(String.valueOf(str.charAt(i)), 16) ^ f3934a[i % length]]);
        }
        return sb.toString();
    }

    public static int e(Context context) {
        PackageInfo packageInfoD = d(context);
        if (packageInfoD == null) {
            return -1;
        }
        return packageInfoD.versionCode;
    }

    static String e(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        byte[] bArrDecode = Base64.decode(str, 0);
        SecretKeySpec secretKeySpec = new SecretKeySpec(o.User_Key.name().getBytes(), "Blowfish");
        try {
            Cipher cipher = Cipher.getInstance(String.format("%s/%s/%s", "Blowfish", "CBC", "PKCS5Padding"));
            cipher.init(2, secretKeySpec, new IvParameterSpec("ringtone".getBytes()));
            return new String(cipher.doFinal(bArrDecode));
        } catch (Exception e2) {
            e2.printStackTrace();
            return null;
        }
    }

    public static String f(String str) {
        if (str == null || str.length() <= 0) {
            return null;
        }
        return str;
    }

    public static boolean f(Context context) {
        return a((AudioManager) context.getSystemService("audio"));
    }

    public static String g(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        SecretKeySpec secretKeySpec = new SecretKeySpec(o.User_Key.name().getBytes(), "Blowfish");
        try {
            Cipher cipher = Cipher.getInstance(String.format("%s/%s/%s", "Blowfish", "CBC", "PKCS5Padding"));
            cipher.init(1, secretKeySpec, new IvParameterSpec("ringtone".getBytes()));
            return Base64.encodeToString(cipher.doFinal(str.getBytes()), 0);
        } catch (Exception e2) {
            e2.printStackTrace();
            return null;
        }
    }

    public static String h(String str) {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        BigInteger bigInteger = new BigInteger("0", 10);
        int length = str.length();
        for (int i = 0; i < length; i++) {
            bigInteger = bigInteger.add(new BigInteger(String.valueOf(Integer.parseInt(String.valueOf(str.charAt(i)), 16) * ((int) Math.pow(f3935b.length, i))), 10));
        }
        return new BigInteger(str, 16).toString();
    }

    private static String i(String str) {
        if (!TextUtils.isEmpty(str) && Pattern.matches("^[0-9]+$", str)) {
            return str;
        }
        return null;
    }
}
