package jp.co.ymm.android.ringtone.preferences;

import android.app.Activity;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import jp.co.ymm.android.ringtone.MyApplication;
import jp.co.ymm.android.ringtone.audition.PreviewService;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class TrialMusicDownloadActivity extends Activity {
    private void a(Uri uri) {
        if (uri != null) {
            Intent intent = new Intent(this, (Class<?>) PreviewService.class);
            intent.setData(uri);
            startService(intent);
        }
        finish();
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        Bundle extras;
        super.onCreate(bundle);
        if (MyApplication.b((Activity) this)) {
            setContentView(2131296302);
            Intent intent = getIntent();
            Uri data = intent.getData();
            if (data == null && (extras = intent.getExtras()) != null) {
                data = Uri.parse("ymmringtone://preview?aid=" + extras.getString("aid") + "&cntcode=" + extras.getString("cntcode") + "&sngname=" + extras.getString("sngname") + "&artname=" + extras.getString("artname"));
            }
            a(data);
        }
    }
}
