package jp.co.ymm.android.ringtone.ui.activity;

import android.app.FragmentTransaction;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import jp.co.ymm.android.ringtone.c.a.d.k;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class RingtoneSelectListExternalActivity extends BaseActivity {
    public static void a(Context context) {
        Intent intent = new Intent(context, (Class<?>) TopActivity.class);
        intent.setFlags(335544320);
        intent.putExtra("jp.co.ymm.android.ringtone.intent.INTENT_START_POPUP", false);
        context.startActivity(intent);
    }

    @Override // jp.co.ymm.android.ringtone.ui.activity.BaseActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        String packageName = getCallingActivity().getPackageName();
        g.a("Call from: " + packageName);
        if (!packageName.equals(getString(2131493040)) && !packageName.equals(getString(2131493034)) && !packageName.equals(getString(2131493033)) && !packageName.equals(getString(2131493069)) && !packageName.equals(getString(2131493070)) && !packageName.equals(getString(2131493071)) && !packageName.startsWith("jp.co.ymm.android.ringtone")) {
            a(this);
            finish();
            return;
        }
        setContentView(2131296313);
        k kVarA = k.a(getIntent(), this);
        FragmentTransaction fragmentTransactionBeginTransaction = getFragmentManager().beginTransaction();
        fragmentTransactionBeginTransaction.replace(2131165331, kVarA, "RingtoneSelectListFragment");
        fragmentTransactionBeginTransaction.commit();
    }
}
