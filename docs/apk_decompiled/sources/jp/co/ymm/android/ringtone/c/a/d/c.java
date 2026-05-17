package jp.co.ymm.android.ringtone.c.a.d;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import java.util.List;
import jp.co.ymm.android.ringtone.b.c;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c extends ArrayAdapter<jp.co.ymm.android.ringtone.b.c> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ k f3570a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(k kVar, Context context, List<jp.co.ymm.android.ringtone.b.c> list) {
        super(context, 0, list);
        this.f3570a = kVar;
    }

    @Override // android.widget.ArrayAdapter, android.widget.Adapter
    public View getView(int i, View view, ViewGroup viewGroup) {
        jp.co.ymm.android.ringtone.ui.customview.b bVar = (jp.co.ymm.android.ringtone.ui.customview.b) view;
        if (bVar == null) {
            bVar = new jp.co.ymm.android.ringtone.ui.customview.b(this.f3570a.B, 2131296304);
            bVar.setMaqrueeText(2131165185);
        }
        jp.co.ymm.android.ringtone.b.c item = getItem(i);
        if (item == null) {
            return bVar;
        }
        c.a attributes = item.getAttributes();
        if (!item.b() || attributes == null) {
            attributes = new b(this);
        }
        bVar.a(attributes.f3513a, attributes.f3514b);
        return bVar;
    }

    @Override // android.widget.BaseAdapter, android.widget.ListAdapter
    public boolean isEnabled(int i) {
        return getItem(i).b();
    }
}
