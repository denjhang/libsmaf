package jp.co.ymm.android.ringtone.ui.preferences.top;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Context;
import android.graphics.drawable.Drawable;
import android.os.AsyncTask;
import android.preference.DialogPreference;
import android.preference.Preference;
import android.util.AttributeSet;
import android.view.View;
import android.widget.Toast;
import jp.co.ymm.android.ringtone.c.a.d.k;
import jp.co.ymm.android.ringtone.player.l;
import jp.co.ymm.android.ringtone.util.n;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class ReloadDialogPreference extends DialogPreference {

    public static class a extends AsyncTask<Void, Void, String> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Context f3843a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private ReloadDialogPreference f3844b;

        public a(Context context, ReloadDialogPreference reloadDialogPreference) {
            this.f3843a = context;
            this.f3844b = reloadDialogPreference;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public String doInBackground(Void... voidArr) {
            jp.co.ymm.android.ringtone.b.d.a(Boolean.valueOf(this.f3843a.getClass().equals(k.class)));
            return "ReloadTask";
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public void onPostExecute(String str) {
            if (this.f3843a.getClass().equals(k.class)) {
                ((jp.co.ymm.android.ringtone.b.e) ((Activity) this.f3843a)).a(jp.co.ymm.android.ringtone.b.d.a());
            }
            if (this.f3844b.getDialog() != null) {
                this.f3844b.getDialog().dismiss();
            }
            Toast.makeText(this.f3843a, 2131493100, 1).show();
        }
    }

    public ReloadDialogPreference(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        setDialogLayoutResource(2131296301);
        setDialogIcon((Drawable) null);
        setDialogTitle((CharSequence) null);
        setNegativeButtonText((CharSequence) null);
        setPositiveButtonText((CharSequence) null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(Context context) {
        new a(context, this).execute(new Void[0]);
    }

    @Override // android.preference.Preference
    public Preference.OnPreferenceClickListener getOnPreferenceClickListener() {
        return null;
    }

    @Override // android.preference.DialogPreference
    protected void onBindDialogView(View view) {
        super.onBindDialogView(view);
        Context context = getContext();
        if (context.getClass().equals(k.class)) {
            jp.co.ymm.android.ringtone.util.g.a("reloadMusicList:::stopPreview:::");
            z.a(context, l.Preview);
        }
        if (n.a(context, "android.permission.WRITE_EXTERNAL_STORAGE")) {
            a(context);
        } else {
            n.a().a((Activity) context, new e(this, context), "android.permission.WRITE_EXTERNAL_STORAGE");
        }
    }

    @Override // android.preference.DialogPreference, android.preference.Preference
    protected void onClick() {
        super.onClick();
    }

    @Override // android.preference.DialogPreference
    protected void onPrepareDialogBuilder(AlertDialog.Builder builder) {
        super.onPrepareDialogBuilder(builder);
        builder.setCancelable(false);
    }
}
