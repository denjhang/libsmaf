package jp.co.ymm.android.ringtone.util;

import android.app.Activity;
import android.app.Fragment;
import android.content.Context;
import android.os.Build;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import jp.co.ymm.android.ringtone.mail.carrier.CarrierKddiEmail;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class n {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static n f3895a = new n();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private List<a> f3896b = Collections.synchronizedList(new ArrayList());

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private List<String> f3897c = new ArrayList();

    private class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        b f3898a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        List<String> f3899b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        int f3900c = 0;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        int f3901d = 0;

        a(b bVar, List<String> list) {
            this.f3898a = bVar;
            this.f3899b = list;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void a(String str, boolean z) {
            if (this.f3899b.indexOf(str) != -1) {
                if (z) {
                    this.f3900c++;
                }
                this.f3901d++;
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public boolean a() {
            if (this.f3901d != this.f3899b.size()) {
                return false;
            }
            b bVar = this.f3898a;
            List<String> list = this.f3899b;
            bVar.a(list, this.f3900c == list.size());
            return true;
        }
    }

    public interface b {
        void a(List<String> list, boolean z);
    }

    public static n a() {
        return f3895a;
    }

    private void a(b bVar, List<String> list) {
        if (Build.VERSION.SDK_INT >= 23) {
            this.f3896b.add(new a(bVar, list));
        }
    }

    public static boolean a(Context context, String str) {
        return Build.VERSION.SDK_INT < 23 || context.checkSelfPermission(str) == 0;
    }

    public String a(Context context) {
        if (Build.VERSION.SDK_INT < 23) {
            return null;
        }
        g.d("showNeedPermission needPermissionDialog:" + this.f3897c.toString());
        if (this.f3897c.isEmpty()) {
            return null;
        }
        String str = this.f3897c.get(0);
        this.f3897c.remove(0);
        if (!a(context, str)) {
            return str;
        }
        a(str, true);
        return a(context);
    }

    public void a(Activity activity, String[] strArr, int[] iArr) {
        if (Build.VERSION.SDK_INT >= 23) {
            for (int i = 0; i < strArr.length; i++) {
                if (iArr[i] == 0) {
                    a(strArr[i], true);
                    if ("android.permission.WRITE_EXTERNAL_STORAGE".equals(strArr[i])) {
                        CarrierKddiEmail.a(activity);
                    }
                } else if (activity.shouldShowRequestPermissionRationale(strArr[i])) {
                    a(strArr[i], false);
                } else {
                    this.f3897c.add(strArr[i]);
                }
            }
        }
    }

    public void a(Fragment fragment, b bVar, String... strArr) {
        a(fragment.getActivity(), bVar, strArr);
    }

    public void a(String str, boolean z) {
        if (Build.VERSION.SDK_INT >= 23) {
            g.d("onRequestPermissionsResult permission:" + str + ", isGrant:" + z);
            ArrayList arrayList = new ArrayList();
            arrayList.addAll(this.f3896b);
            this.f3896b = new ArrayList();
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                a aVar = (a) it.next();
                aVar.a(str, z);
                if (aVar.a()) {
                    it.remove();
                }
            }
            this.f3896b.addAll(arrayList);
        }
    }

    public boolean a(Activity activity, b bVar, String... strArr) {
        if (Build.VERSION.SDK_INT >= 23 && activity != null && strArr != null && strArr.length != 0) {
            ArrayList arrayList = new ArrayList();
            for (String str : strArr) {
                if (!a(activity, str)) {
                    arrayList.add(str);
                }
            }
            if (!arrayList.isEmpty()) {
                a(bVar, arrayList);
                activity.requestPermissions((String[]) arrayList.toArray(new String[arrayList.size()]), 1);
                return true;
            }
        }
        return false;
    }
}
