package jp.co.ymm.android.ringtone.b;

import android.content.ContentResolver;
import android.content.Context;
import android.database.Cursor;
import android.media.MediaMetadataRetriever;
import android.net.Uri;
import android.os.Build;
import android.os.Environment;
import android.os.Handler;
import android.provider.MediaStore;
import android.text.TextUtils;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.AbstractCollection;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Date;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class z extends d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Context f3549a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static File f3550b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static p f3551c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static z f3552d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static AbstractCollection<e> f3553e = new LinkedHashSet();

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final Map<String, u> f3554f = new LinkedHashMap();

    private z() {
        Cursor cursorA;
        jp.co.ymm.android.ringtone.util.g.d("<<create>>");
        boolean z = true;
        if (C0428b.c()) {
            if (!b().isDirectory()) {
                jp.co.ymm.android.ringtone.util.g.d("mkdir " + b());
                boolean zMkdirs = b().mkdirs();
                if (!zMkdirs) {
                    jp.co.ymm.android.ringtone.util.g.g("java.io.File#mkdirs() returns " + zMkdirs);
                }
            }
            for (File file : b().listFiles(jp.co.ymm.android.ringtone.util.z.c())) {
                try {
                    a(b(file));
                    a(c(file));
                } catch (FileNotFoundException unused) {
                    if (!C0428b.c()) {
                        n();
                    }
                }
            }
            ContentResolver contentResolver = f3549a.getContentResolver();
            Cursor cursorA2 = a(contentResolver, MediaStore.Audio.Media.INTERNAL_CONTENT_URI, "is_ringtone = 1");
            if (cursorA2 != null && cursorA2.getCount() > 0) {
                do {
                    try {
                        a(a(cursorA2, 2));
                    } catch (FileNotFoundException unused2) {
                        jp.co.ymm.android.ringtone.util.g.b("FileNotFound:preset music");
                    }
                } while (cursorA2.moveToNext());
                cursorA2.close();
            }
            Cursor cursorA3 = a(contentResolver, MediaStore.Audio.Media.EXTERNAL_CONTENT_URI, (String) null);
            int i = 0;
            while (cursorA3 == null && i < 3) {
                try {
                    Thread.sleep(1000L);
                    cursorA3 = a(contentResolver, MediaStore.Audio.Media.EXTERNAL_CONTENT_URI, (String) null);
                    i++;
                    jp.co.ymm.android.ringtone.util.g.g("getCursor redoes:" + i);
                } catch (InterruptedException unused3) {
                    jp.co.ymm.android.ringtone.util.g.b("cursor:null...");
                }
            }
            if (cursorA3 != null && cursorA3.getCount() > 0) {
                do {
                    try {
                        a(a(cursorA3, 1));
                    } catch (FileNotFoundException unused4) {
                        if (!C0428b.c()) {
                            n();
                        }
                    }
                } while (cursorA3.moveToNext());
                cursorA3.close();
            }
            if (28 < Build.VERSION.SDK_INT && (cursorA = a(contentResolver, MediaStore.Video.Media.EXTERNAL_CONTENT_URI, (String) null)) != null && cursorA.getCount() > 0) {
                do {
                    try {
                        a(a(cursorA));
                    } catch (FileNotFoundException unused5) {
                        if (!C0428b.c()) {
                            n();
                        }
                    }
                } while (cursorA.moveToNext());
                cursorA.close();
            }
            p();
        } else {
            n();
        }
        try {
            String strF = f();
            if (f3549a == null) {
                z = false;
            }
            jp.co.ymm.android.ringtone.util.g.a(z);
            for (String str : f3549a.getResources().getAssets().list(strF)) {
                a(a(new File(strF, str)));
            }
        } catch (Exception e2) {
            jp.co.ymm.android.ringtone.util.g.a("caught ...", e2);
        }
        r();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int a(String str, String str2) {
        if (str == null && str2 == null) {
            return 0;
        }
        if (str == null) {
            return -1;
        }
        if (str2 == null) {
            return 1;
        }
        if (str.length() == 0 && str2.length() == 0) {
            return 0;
        }
        if (str.length() == 0) {
            return -1;
        }
        if (str2.length() == 0) {
            return 1;
        }
        return str.compareToIgnoreCase(str2);
    }

    private Cursor a(ContentResolver contentResolver, Uri uri, String str) {
        if (!jp.co.ymm.android.ringtone.util.n.a(f3549a, "android.permission.WRITE_EXTERNAL_STORAGE")) {
            return null;
        }
        Cursor cursorQuery = contentResolver.query(uri, null, str, null, null);
        if (cursorQuery != null) {
            cursorQuery.moveToFirst();
        }
        return cursorQuery;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r4v0, types: [java.io.File] */
    /* JADX WARN: Type inference failed for: r4v1, types: [java.io.File] */
    /* JADX WARN: Type inference failed for: r4v2, types: [boolean] */
    private String a(File file, String str, byte[] bArr) {
        jp.co.ymm.android.ringtone.util.g.a("ExternalStorage.currentState()=" + C0428b.b() + ", rootDirectory().isDirectory()=" + b().isDirectory());
        try {
            u oVar = str != null ? new o(file, str, bArr, k()) : new l((File) file, bArr);
            file = a(oVar);
            if (file == 0) {
                c(oVar);
                return null;
            }
            r();
            p();
            l();
            return oVar.c();
        } catch (Exception e2) {
            jp.co.ymm.android.ringtone.util.g.a("caught ...", e2);
            jp.co.ymm.android.ringtone.util.z.a((File) file);
            return null;
        }
    }

    private static u a(Cursor cursor) {
        String[] strArrSplit;
        int length;
        String string = cursor.getString(cursor.getColumnIndex("_data"));
        if (TextUtils.isEmpty(string) || string.contains("\u0000")) {
            return null;
        }
        MediaMetadataRetriever mediaMetadataRetriever = new MediaMetadataRetriever();
        mediaMetadataRetriever.setDataSource(string);
        String strExtractMetadata = mediaMetadataRetriever.extractMetadata(12);
        if (TextUtils.isEmpty(strExtractMetadata) || strExtractMetadata.toLowerCase().startsWith("video") || (length = (strArrSplit = string.split("/")).length) < 2) {
            return null;
        }
        if (("jp.co.ymm.android.ringtone".equals(strArrSplit[length + (-2)]) || e(strArrSplit[length - 1])) && string.toUpperCase().endsWith("MP4")) {
            return a(cursor, 1);
        }
        return null;
    }

    private static u a(Cursor cursor, int i) throws FileNotFoundException {
        u uVarB = b(new File(cursor.getString(cursor.getColumnIndex("_data"))));
        if (uVarB != null) {
            uVarB.a(cursor.getString(cursor.getColumnIndex("artist")));
            uVarB.b(cursor.getString(cursor.getColumnIndex("title")));
            uVarB.a(i);
        }
        return uVarB;
    }

    private static u a(File file) {
        jp.co.ymm.android.ringtone.util.g.d(":::createPreinstalledTone:::");
        jp.co.ymm.android.ringtone.util.g.a(file != null);
        l lVar = new l(file, new x());
        jp.co.ymm.android.ringtone.util.g.a(lVar.d());
        if (b(lVar)) {
            return lVar;
        }
        return null;
    }

    private static u a(File file, u uVar) {
        try {
            return b(file);
        } catch (FileNotFoundException unused) {
            return uVar;
        }
    }

    public static void a(Boolean bool) {
        jp.co.ymm.android.ringtone.util.g.a("<<reload>> ");
        f3552d = null;
        g().g();
        b(bool);
    }

    private boolean a(u uVar) {
        if (!b(uVar)) {
            return false;
        }
        if (this.f3554f.containsKey(uVar.c())) {
            return true;
        }
        this.f3554f.put(uVar.c(), uVar);
        return true;
    }

    public static File b() {
        jp.co.ymm.android.ringtone.util.g.a(f3550b != null);
        return f3550b;
    }

    private static File b(String str, String str2) {
        jp.co.ymm.android.ringtone.util.g.a("ExternalStorage.currentState()=" + C0428b.b() + ", rootDirectory().isDirectory()=" + b().isDirectory());
        HashSet hashSet = new HashSet(Arrays.asList(b().listFiles()));
        int i = 1;
        String str3 = String.format("%tY%<tm%<td%<tH%<tM%<tS", new Date());
        if (str == null) {
            str = str3;
        }
        if (str2 != null) {
            str = str + "" + str2;
        }
        File file = new File(b(), str);
        if (str2 != null) {
            while (hashSet.contains(file) && i <= 9999) {
                int iIndexOf = str.indexOf("" + str2);
                StringBuilder sb = new StringBuilder(str);
                sb.insert(iIndexOf, "+" + i);
                file = new File(b(), sb.toString());
                i++;
            }
        } else {
            while (hashSet.contains(file) && i <= 9999) {
                file = new File(b(), str + "+" + i);
                i++;
            }
        }
        jp.co.ymm.android.ringtone.util.g.a("returns \"" + file + "\"");
        return file;
    }

    private static u b(File file) throws FileNotFoundException {
        jp.co.ymm.android.ringtone.util.g.a(file != null);
        if (file.isFile()) {
            try {
                return g().c(file) ? new o(file, g()) : new l(file);
            } catch (Exception e2) {
                jp.co.ymm.android.ringtone.util.g.b("caught ...", e2);
                return null;
            }
        }
        throw new FileNotFoundException("No such file: " + file);
    }

    static z b(Boolean bool) {
        o();
        if (f3552d == null) {
            f3552d = new z();
            if (!bool.booleanValue()) {
                f3552d.l();
            }
        }
        jp.co.ymm.android.ringtone.util.g.a(f3552d != null);
        return f3552d;
    }

    static void b(Context context) {
        jp.co.ymm.android.ringtone.util.g.c("c=" + context);
        f3549a = context;
        jp.co.ymm.android.ringtone.util.g.a(f3549a != null);
        f3550b = new i(Environment.getExternalStorageDirectory(), f3549a.getPackageName());
        jp.co.ymm.android.ringtone.util.g.a("mRootDirectory=[" + f3550b + "]");
        C0428b.a(context, b().getParentFile(), new v());
        f3549a.getContentResolver().registerContentObserver(MediaStore.Audio.Media.EXTERNAL_CONTENT_URI, true, new w(new Handler()));
        jp.co.ymm.android.ringtone.util.g.a();
    }

    private static boolean b(u uVar) {
        return (uVar == null || !uVar.b() || uVar.getType() == null) ? false : true;
    }

    private static u c(File file) throws FileNotFoundException {
        jp.co.ymm.android.ringtone.util.g.a(file != null);
        if (file.isFile()) {
            try {
                return k().c(file) ? new o(file, k()) : new l(file);
            } catch (Exception e2) {
                jp.co.ymm.android.ringtone.util.g.b("caught ...", e2);
                return null;
            }
        }
        throw new FileNotFoundException("No such file: " + file);
    }

    static void c(e eVar) {
        jp.co.ymm.android.ringtone.util.g.a(eVar != null);
        f3553e.add(eVar);
    }

    private boolean c(u uVar) {
        String str;
        if (uVar == null) {
            return false;
        }
        if (uVar.d() || !C0428b.d()) {
            str = "tone=" + uVar + ", ExternalStorage.currentState()=" + C0428b.b();
        } else {
            jp.co.ymm.android.ringtone.util.g.d("unlink: " + uVar);
            String strC = uVar.c();
            if (uVar.p()) {
                this.f3554f.remove(strC);
                p();
                l();
                return true;
            }
            str = "Tone#unlink() error, id=" + strC;
        }
        jp.co.ymm.android.ringtone.util.g.b(str);
        return false;
    }

    static u d(String str) {
        if (f3552d != null) {
            return b((Boolean) false).a(str);
        }
        jp.co.ymm.android.ringtone.util.g.d("before Genesis ...");
        if (str == null) {
            return null;
        }
        File file = new File(str);
        jp.co.ymm.android.ringtone.util.g.d(str);
        return str.startsWith(f()) ? a(file) : a(file, (u) null);
    }

    static void d(e eVar) {
        f3553e.remove(eVar);
    }

    private static boolean e(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        for (String str2 : c.f3512a) {
            if (str.lastIndexOf(str2) > 0) {
                return true;
            }
        }
        return false;
    }

    static String f() {
        return "preinstalled/tone";
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static jp.co.ymm.android.ringtone.util.m g() {
        return jp.co.ymm.android.ringtone.util.m.e();
    }

    private static jp.co.ymm.android.ringtone.util.m k() {
        return jp.co.ymm.android.ringtone.util.m.c();
    }

    private void l() {
        if (f3552d == null) {
            return;
        }
        Iterator it = new ArrayList(f3553e).iterator();
        while (it.hasNext()) {
            ((e) it.next()).a(this);
        }
    }

    private void n() {
        jp.co.ymm.android.ringtone.util.g.g("unmounted? : " + b());
        for (u uVar : new ArrayList(this.f3554f.values())) {
            if (uVar.n().getParentFile().equals(b()) || uVar.a() == 1) {
                this.f3554f.remove(uVar.c());
                jp.co.ymm.android.ringtone.util.g.d("uninstalled: " + uVar);
            }
        }
        f3551c = p.f3532a;
        g().g();
    }

    private static void o() {
        if (f3551c != null && p()) {
            f3552d = null;
            g().g();
        }
    }

    private static boolean p() {
        p pVar = f3551c;
        f3551c = q();
        boolean z = !f3551c.a(pVar);
        if (z) {
            jp.co.ymm.android.ringtone.util.g.a("<<reset>> " + pVar + " --> " + f3551c);
        }
        return z;
    }

    private static p q() {
        return C0428b.c() ? new p(b()) : p.f3532a;
    }

    private void r() {
        ArrayList<u> arrayList = new ArrayList(this.f3554f.values());
        Collections.sort(arrayList, new y(this));
        this.f3554f.clear();
        for (u uVar : arrayList) {
            this.f3554f.put(uVar.c(), uVar);
        }
        jp.co.ymm.android.ringtone.util.g.d("mStock size:" + size());
    }

    @Override // jp.co.ymm.android.ringtone.b.d
    public String a(String str, byte[] bArr) {
        return a(new File(b(), "____Trial_____"), str, bArr);
    }

    @Override // jp.co.ymm.android.ringtone.b.d
    public String a(String str, byte[] bArr, String str2, String str3) {
        return a(b(str2, str3), str, bArr);
    }

    @Override // jp.co.ymm.android.ringtone.b.d
    public u a(String str) {
        jp.co.ymm.android.ringtone.util.g.d("get Stock ...");
        return this.f3554f.get(str);
    }

    @Override // jp.co.ymm.android.ringtone.b.d
    public boolean c() {
        return c(new File(b(), "____Trial_____").getPath());
    }

    @Override // jp.co.ymm.android.ringtone.b.d
    public boolean c(String str) {
        return c(a(str));
    }

    @Override // jp.co.ymm.android.ringtone.b.d, java.lang.Iterable
    public Iterator<c> iterator() {
        return this.f3554f.values().iterator();
    }

    public int size() {
        return this.f3554f.size();
    }
}
