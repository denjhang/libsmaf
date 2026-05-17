package jp.co.ymm.android.ringtone.ui.activity;

import android.app.Activity;
import android.app.Fragment;
import android.app.FragmentTransaction;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import java.util.Set;
import jp.co.ymm.android.ringtone.MyApplication;
import jp.co.ymm.android.ringtone.mail.carrier.CarrierKddiEmail;
import jp.co.ymm.android.ringtone.mail.carrier.RingtoneListener;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.o;
import jp.co.ymm.android.ringtone.util.z;
import org.apache.http.HttpHost;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class TopActivity extends BaseActivity {

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private boolean f3775d = false;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    a f3776e = null;

    class a extends BroadcastReceiver {
        a() {
        }

        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            TopActivity.this.a(context, intent);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(Context context, Intent intent) {
        String action = intent.getAction();
        if ("android.media.RINGER_MODE_CHANGED".equals(action)) {
            intent.getIntExtra("android.media.EXTRA_RINGER_MODE", -1);
        }
        if ("android.intent.action.HEADSET_PLUG".equals(action)) {
            if (intent.getIntExtra("state", -1) == 1) {
                this.f3775d = true;
            } else {
                this.f3775d = false;
            }
        }
        if ("android.media.AUDIO_BECOMING_NOISY".equals(action)) {
            this.f3775d = false;
        }
    }

    private void h() {
        if (23 <= Build.VERSION.SDK_INT) {
            this.f3776e = new a();
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("android.media.RINGER_MODE_CHANGED");
            intentFilter.addAction("android.media.AUDIO_BECOMING_NOISY");
            intentFilter.addAction("android.intent.action.HEADSET_PLUG");
            registerReceiver(this.f3776e, intentFilter);
        }
    }

    private void i() {
        Intent intent = getIntent();
        Set<String> categories = intent.getCategories();
        boolean z = ((MyApplication) getApplicationContext()).f3462e;
        if ((categories != null && categories.contains("android.intent.category.LAUNCHER") && z) || intent.getBooleanExtra("jp.co.ymm.android.ringtone.intent.INTENT_START_NOTIFICATION", false)) {
            ((MyApplication) getApplicationContext()).f3461d = true;
        } else {
            ((MyApplication) getApplicationContext()).f3461d = false;
        }
        ((MyApplication) getApplicationContext()).f3462e = true;
    }

    private void j() {
        a aVar = this.f3776e;
        if (aVar != null) {
            unregisterReceiver(aVar);
        }
    }

    @Override // jp.co.ymm.android.ringtone.ui.activity.BaseActivity, android.app.Activity
    public void onCreate(Bundle bundle) {
        String str;
        super.onCreate(bundle);
        requestWindowFeature(5);
        requestWindowFeature(2);
        setProgressBarVisibility(true);
        if (MyApplication.b((Activity) this)) {
            setContentView(2131296313);
            startService(new Intent(this, (Class<?>) RingtoneListener.class));
            CarrierKddiEmail.a(this);
            if ("android.intent.action.VIEW".equals(getIntent().getAction())) {
                Uri data = getIntent().getData();
                if (getString(2131493031).equals(data.getScheme()) && getString(2131493029).equals(data.getHost()) && getString(2131493030).equals(data.getPath())) {
                    String queryParameter = data.getQueryParameter(getString(2131493028));
                    if (queryParameter == null || queryParameter.equals("")) {
                        str = "戻り先指定なし";
                    } else {
                        Uri uri = Uri.parse(queryParameter);
                        if (uri.getScheme().equals(HttpHost.DEFAULT_SCHEME_NAME) || uri.getScheme().equals("https")) {
                            g.a("okUri: " + uri.toString());
                            startActivity(new Intent("android.intent.action.VIEW", uri));
                        } else {
                            str = "http または https 以外";
                        }
                    }
                    g.a(str);
                    return;
                }
            }
            if (bundle == null) {
                jp.co.ymm.android.ringtone.c.a.f.b bVarB = jp.co.ymm.android.ringtone.c.a.f.b.b();
                FragmentTransaction fragmentTransactionBeginTransaction = getFragmentManager().beginTransaction();
                fragmentTransactionBeginTransaction.replace(2131165331, bVarB, "TopFragment");
                fragmentTransactionBeginTransaction.commit();
            }
            i();
        }
    }

    @Override // jp.co.ymm.android.ringtone.ui.activity.BaseActivity, android.app.Activity
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        super.onRequestPermissionsResult(i, strArr, iArr);
        if (z.a((Context) this, o.Welcome.name(), false)) {
            Fragment fragmentFindFragmentById = getFragmentManager().findFragmentById(2131165331);
            g.a(fragmentFindFragmentById.toString());
            if (fragmentFindFragmentById.getClass() == jp.co.ymm.android.ringtone.c.a.f.b.class) {
                MyApplication.a((BaseActivity) this, true);
            }
        }
    }

    @Override // jp.co.ymm.android.ringtone.ui.activity.BaseActivity, android.app.Activity
    protected void onStart() {
        super.onStart();
        h();
    }

    @Override // android.app.Activity
    protected void onStop() {
        super.onStop();
        j();
    }
}
