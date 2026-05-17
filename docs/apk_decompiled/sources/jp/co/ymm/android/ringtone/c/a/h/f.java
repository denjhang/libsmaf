package jp.co.ymm.android.ringtone.c.a.h;

import android.app.Activity;
import android.content.ActivityNotFoundException;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.res.AssetManager;
import android.media.MediaScannerConnection;
import android.net.Uri;
import android.os.Bundle;
import android.os.Environment;
import android.webkit.WebChromeClient;
import android.webkit.WebView;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import jp.co.ymm.android.ringtone.net.h;
import jp.co.ymm.android.ringtone.ui.activity.BaseActivity;
import jp.co.ymm.android.ringtone.util.RingtoneSiteJs;
import jp.co.ymm.android.ringtone.util.f;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.t;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class f extends jp.co.ymm.android.ringtone.c.a.g.a implements f.a, t.a {
    private Activity o;
    private h p;
    private String[] q;
    private String[] r;
    private String[] s;
    private String t;
    private String u;
    private String v;
    private boolean w = false;
    protected WebView x = null;
    protected int y = 0;
    private final jp.co.ymm.android.ringtone.net.f z = new d(this);
    MediaScannerConnection.OnScanCompletedListener A = new e(this);

    public class a extends WebChromeClient {
        public a() {
        }

        @Override // android.webkit.WebChromeClient
        public void onProgressChanged(WebView webView, int i) {
            f.this.o.setProgress(i * 100);
        }
    }

    private class b implements RingtoneSiteJs.a {
        private b() {
        }

        /* synthetic */ b(f fVar, jp.co.ymm.android.ringtone.c.a.h.a aVar) {
            this();
        }

        @Override // jp.co.ymm.android.ringtone.util.RingtoneSiteJs.a
        public void a(String[] strArr, String[] strArr2, String[] strArr3, String str, String str2) {
            f.this.q = strArr;
            f.this.r = strArr2;
            f.this.s = strArr3;
            f.this.t = str;
            f.this.u = str2;
            f.this.d(1);
        }
    }

    public static f a(int i, boolean z) {
        f fVar = new f();
        Bundle bundle = new Bundle();
        bundle.putInt("TITLE", i);
        bundle.putBoolean("KEY_CAMPAIGN", z);
        fVar.setArguments(bundle);
        return fVar;
    }

    public static void a(Activity activity, String str, String[] strArr, String str2, String str3) {
        StringBuilder sb = new StringBuilder();
        sb.append("mailto:");
        if (strArr.length > 0) {
            for (int i = 0; i < strArr.length; i++) {
                sb.append(strArr[i]);
                if (i != strArr.length - 1) {
                    sb.append(",");
                }
            }
        }
        Intent intent = new Intent();
        intent.setAction("android.intent.action.SENDTO");
        intent.setType("message/rfc822");
        sb.append("?subject=" + str2);
        sb.append("&body=" + str3.replaceAll("%0D%0A", "\r\n").replaceAll("%%SUPPORT_ID%%", str));
        intent.setData(Uri.parse(sb.toString()));
        activity.startActivity(intent);
    }

    private void a(InputStream inputStream, OutputStream outputStream) {
        BufferedInputStream bufferedInputStream = new BufferedInputStream(inputStream);
        try {
            b(bufferedInputStream, outputStream);
        } finally {
            try {
                bufferedInputStream.close();
            } catch (IOException unused) {
            }
        }
    }

    private boolean a(String str, String str2, File file) {
        AssetManager assets = getResources().getAssets();
        String str3 = str != null ? str + File.separator + str2 : str2;
        try {
            if (d(str3)) {
                if (!file.exists()) {
                    file.mkdirs();
                }
                for (String str4 : assets.list(str3)) {
                    a(str3, str4, new File(file, str4));
                }
            } else {
                a(assets.open(str3), new FileOutputStream(new File(file.getParentFile(), str2)));
            }
            return true;
        } catch (FileNotFoundException | IOException unused) {
            return false;
        }
    }

    public static f b(int i, int i2) {
        f fVar = new f();
        Bundle bundle = new Bundle();
        bundle.putInt("URL", i);
        bundle.putInt("TITLE", i2);
        fVar.setArguments(bundle);
        return fVar;
    }

    private void b(InputStream inputStream, OutputStream outputStream) throws Throwable {
        BufferedOutputStream bufferedOutputStream;
        try {
            bufferedOutputStream = new BufferedOutputStream(outputStream);
            try {
                byte[] bArr = new byte[jp.co.acrodea.runtime.drm.h.CLIENT_AUTOGEN_KEYBIT];
                while (true) {
                    int i = inputStream.read(bArr, 0, bArr.length);
                    if (i <= 0) {
                        bufferedOutputStream.flush();
                        try {
                            bufferedOutputStream.close();
                            return;
                        } catch (IOException unused) {
                            return;
                        }
                    }
                    bufferedOutputStream.write(bArr, 0, i);
                }
            } catch (Throwable th) {
                th = th;
                if (bufferedOutputStream != null) {
                    try {
                        bufferedOutputStream.close();
                    } catch (IOException unused2) {
                    }
                }
                throw th;
            }
        } catch (Throwable th2) {
            th = th2;
            bufferedOutputStream = null;
        }
    }

    public static f c() {
        f fVar = new f();
        fVar.setArguments(new Bundle());
        return fVar;
    }

    private void d() {
        if (a("silent", "Silence.mp4", new File(Environment.getExternalStorageDirectory() + "/Ringtones", "Silence.mp4"))) {
            e();
            d(5);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void d(int i) {
        g();
        a(i);
    }

    private boolean d(String str) {
        AssetManager assets = getResources().getAssets();
        try {
        } catch (FileNotFoundException unused) {
            return true;
        } catch (IOException e2) {
            e2.printStackTrace();
        }
        if (assets.list(str).length > 0) {
            return true;
        }
        assets.open(str);
        return false;
    }

    private void e() {
        MediaScannerConnection.scanFile(getActivity().getApplicationContext(), new String[]{Environment.getExternalStorageDirectory().toString() + "/Ringtones/Silence.mp4"}, new String[]{"video/mp4"}, this.A);
    }

    private void e(int i) {
        BaseActivity baseActivity = this.l;
        if (baseActivity != null) {
            baseActivity.a(i);
        }
    }

    private void f() {
        Intent intent = new Intent("android.settings.SOUND_SETTINGS");
        intent.setFlags(268435456);
        try {
            startActivity(intent);
        } catch (ActivityNotFoundException unused) {
            Intent intent2 = new Intent("android.settings.SETTINGS");
            intent2.setFlags(268435456);
            startActivity(intent2);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void g() {
        BaseActivity baseActivity = this.l;
        if (baseActivity != null) {
            baseActivity.a();
            this.l.b();
        }
    }

    private void h() {
        BaseActivity baseActivity = this.l;
        if (baseActivity != null) {
            baseActivity.b();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void i() {
        g();
        d(3);
    }

    private void j() {
        h hVar = this.p;
        if (hVar != null) {
            hVar.n();
        }
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, jp.co.ymm.android.ringtone.util.f.a
    public void a(DialogInterface dialogInterface, int i, int i2) {
        if (i == 1) {
            if (i2 != -1) {
                if (i2 != -2) {
                    return;
                }
                h();
            }
            this.p = new h(getActivity());
            e(2);
            this.v = this.p.j();
            if (this.p.a(this.v, this.z)) {
                return;
            }
            h();
            i();
            return;
        }
        if (i != 3) {
            if (i != 4) {
                if (i != 5) {
                    return;
                }
                if (i2 == -1) {
                    f();
                } else if (i2 != -2) {
                    return;
                }
            } else if (i2 == -1) {
                d();
                return;
            } else if (i2 != -2) {
                return;
            }
        } else {
            if (i2 == -1) {
                getActivity().removeDialog(3);
                h();
                this.p = new h(getActivity());
                e(2);
                this.v = this.p.j();
                if (this.p.a(this.v, this.z)) {
                    return;
                }
                h();
                i();
                return;
            }
            if (i2 != -2) {
                return;
            }
        }
        h();
    }

    @Override // jp.co.ymm.android.ringtone.util.t.a
    public boolean a(String str) {
        if (str.startsWith("copysilent:")) {
            d(4);
            return true;
        }
        if (!this.w) {
            return false;
        }
        this.o.startActivity(new Intent("android.intent.action.VIEW", Uri.parse(str)));
        this.w = false;
        return true;
    }

    public void b(int i) {
        String string = getString(i);
        g.a("loadUrl: " + string);
        c(string);
    }

    public void c(int i) {
        c(String.format(getString(i, Integer.valueOf(this.y)), new Object[0]));
    }

    public void c(String str) {
        g.a("loadUrl: " + str);
        this.x.loadUrl(str);
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x00af  */
    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public android.view.View onCreateView(android.view.LayoutInflater r7, android.view.ViewGroup r8, android.os.Bundle r9) {
        /*
            Method dump skipped, instruction units count: 328
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.ymm.android.ringtone.c.a.h.f.onCreateView(android.view.LayoutInflater, android.view.ViewGroup, android.os.Bundle):android.view.View");
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public void onDestroy() {
        super.onDestroy();
        g();
        j();
        this.p = null;
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public void onStart() {
        super.onStart();
    }
}
