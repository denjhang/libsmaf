package jp.co.ymm.android.ringtone.alarm;

import android.content.Context;
import java.util.EnumSet;
import java.util.Iterator;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public enum b {
    Sunday(0, 2131493188),
    Monday(1, 2131493184),
    Tuesday(2, 2131493190),
    Wednesday(3, 2131493191),
    Thursday(4, 2131493189),
    Friday(5, 2131493183),
    Saturday(6, 2131493185);

    public int i;
    public int j;

    b(int i, int i2) {
        this.i = i;
        this.j = i2;
    }

    public static String a(Context context, EnumSet<b> enumSet) {
        String string = context.getString(2131493186);
        if (enumSet.isEmpty()) {
            return context.getString(2131493101);
        }
        StringBuilder sb = new StringBuilder();
        Iterator it = enumSet.iterator();
        while (it.hasNext()) {
            sb.append(context.getString(((b) it.next()).j));
            if (it.hasNext()) {
                sb.append(string);
            }
        }
        return sb.toString();
    }
}
