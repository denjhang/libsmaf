package d.a.a.a;

import android.annotation.SuppressLint;
import android.content.Intent;
import android.net.Uri;
import android.os.AsyncTask;
import d.a.a.a.m;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.util.Map;
import org.apache.http.HttpStatus;
import org.apache.http.client.methods.HttpGet;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b extends AsyncTask<Void, Void, Boolean> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Object f2760a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ String f2761b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ m f2762c;

    b(m mVar, Object obj, String str) {
        this.f2762c = mVar;
        this.f2760a = obj;
        this.f2761b = str;
    }

    @Override // android.os.AsyncTask
    @SuppressLint({"WorldReadableFiles"})
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public Boolean doInBackground(Void... voidArr) {
        synchronized (this.f2760a) {
            try {
                try {
                    try {
                        if (isCancelled()) {
                            return true;
                        }
                        HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(this.f2761b).openConnection();
                        httpURLConnection.setRequestMethod(HttpGet.METHOD_NAME);
                        httpURLConnection.connect();
                        FileOutputStream fileOutputStreamOpenFileOutput = this.f2762c.q.openFileOutput("app.apk", 1);
                        InputStream inputStream = httpURLConnection.getInputStream();
                        byte[] bArr = new byte[jp.co.acrodea.runtime.drm.h.CLIENT_AUTOGEN_KEYBIT];
                        while (true) {
                            int i = inputStream.read(bArr);
                            if (i == -1) {
                                fileOutputStreamOpenFileOutput.close();
                                inputStream.close();
                                return true;
                            }
                            fileOutputStreamOpenFileOutput.write(bArr, 0, i);
                        }
                    } catch (IOException e2) {
                        e2.printStackTrace();
                        return false;
                    }
                } catch (MalformedURLException e3) {
                    e3.printStackTrace();
                    return false;
                }
            } catch (Throwable th) {
                throw th;
            }
        }
    }

    @Override // android.os.AsyncTask
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public void onPostExecute(Boolean bool) {
        this.f2762c.c();
        if (!bool.booleanValue()) {
            this.f2762c.a(HttpStatus.SC_MULTIPLE_CHOICES, HttpStatus.SC_MOVED_PERMANENTLY, (m.c) null, (Map<String, Object>) null);
            return;
        }
        try {
            Intent intent = new Intent("android.intent.action.VIEW");
            intent.setDataAndType(Uri.fromFile(new File(this.f2762c.q.getFilesDir() + "/app.apk")), "application/vnd.android.package-archive");
            intent.setFlags(268435456);
            this.f2762c.q.startActivity(intent);
            this.f2762c.a(HttpStatus.SC_MULTIPLE_CHOICES, 0, (m.c) null, (Map<String, Object>) null);
        } catch (Exception e2) {
            this.f2762c.a(HttpStatus.SC_MULTIPLE_CHOICES, HttpStatus.SC_MOVED_TEMPORARILY, (m.c) null, (Map<String, Object>) null);
            e2.printStackTrace();
        }
    }

    @Override // android.os.AsyncTask
    public void onCancelled() {
        super.onCancelled();
    }

    @Override // android.os.AsyncTask
    public void onPreExecute() {
        m mVar = this.f2762c;
        mVar.a(mVar.q.getString(d.a.a.a.mktlibrary_progress_apk_update_title), this.f2762c.q.getString(d.a.a.a.mktlibrary_progress_apk_update_message), this.f2762c.A, this.f2762c.B, this.f2762c.z);
    }
}
