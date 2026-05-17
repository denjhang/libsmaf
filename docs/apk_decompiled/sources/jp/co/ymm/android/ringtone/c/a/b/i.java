package jp.co.ymm.android.ringtone.c.a.b;

import android.annotation.SuppressLint;
import android.app.AlarmManager;
import android.app.PendingIntent;
import android.content.DialogInterface;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.text.format.DateFormat;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.LinearLayout;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.Toast;
import android.widget.ToggleButton;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.Collections;
import java.util.Comparator;
import java.util.Date;
import java.util.Iterator;
import jp.co.ymm.android.ringtone.alarm.AlarmItem;
import jp.co.ymm.android.ringtone.alarm.AlarmReceiver;
import jp.co.ymm.android.ringtone.util.f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class i extends jp.co.ymm.android.ringtone.c.a.g.a implements f.a {
    private ListView o = null;
    private ArrayAdapter<AlarmItem> p = null;
    private LinearLayout q = null;
    private int r;

    public class a implements Comparator<AlarmItem> {
        public a() {
        }

        @Override // java.util.Comparator
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public int compare(AlarmItem alarmItem, AlarmItem alarmItem2) {
            SimpleDateFormat simpleDateFormat = new SimpleDateFormat("HHmm");
            return simpleDateFormat.format(alarmItem.l()).compareTo(simpleDateFormat.format(alarmItem2.l()));
        }
    }

    private int a(int i, AlarmItem alarmItem, int i2) {
        int i3;
        boolean z;
        int i4;
        ArrayList arrayList = new ArrayList();
        Iterator it = alarmItem.c().iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            arrayList.add(Integer.valueOf(((jp.co.ymm.android.ringtone.alarm.b) it.next()).i + 1));
        }
        int i5 = i;
        while (true) {
            z = false;
            if (i5 > 7) {
                i4 = 0;
                break;
            }
            if (arrayList.contains(Integer.valueOf(i5))) {
                if (i5 == i && arrayList.size() == 1 && i2 < 0) {
                    i4 = 7;
                    break;
                }
                if (i5 != i || arrayList.size() <= 1 || i2 >= 0) {
                    break;
                }
            }
            i5++;
        }
        i4 = i5 - i;
        z = true;
        if (z) {
            return i4;
        }
        for (i3 = 1; i3 < i; i3++) {
            if (arrayList.contains(Integer.valueOf(i3))) {
                return (7 - i) + i3;
            }
        }
        return i4;
    }

    private String a(long j, long j2) {
        long j3 = ((j2 - j) / 1000) / 60;
        long j4 = j3 % 60;
        long j5 = j3 / 60;
        long j6 = j5 % 24;
        long j7 = j5 / 24;
        if (j7 != 0) {
            return j7 + "日" + j6 + "時間" + j4 + "分";
        }
        if (j6 == 0) {
            return j4 + "分";
        }
        return j6 + "時間" + j4 + "分";
    }

    /* JADX INFO: Access modifiers changed from: private */
    public jp.co.ymm.android.ringtone.ui.customview.b a(boolean z) {
        jp.co.ymm.android.ringtone.ui.customview.b bVar = new jp.co.ymm.android.ringtone.ui.customview.b(this.o, 2131296260);
        ToggleButton toggleButton = (ToggleButton) bVar.findViewById(2131165184);
        toggleButton.setChecked(z);
        toggleButton.setOnClickListener(new h(this));
        return bVar;
    }

    private void a(Intent intent) throws Throwable {
        AlarmItem alarmItem = (AlarmItem) intent.getParcelableExtra(c.g);
        int intExtra = intent.getIntExtra(c.h, -1);
        Boolean boolValueOf = Boolean.valueOf(intent.getBooleanExtra(c.i, false));
        int intExtra2 = intent.getIntExtra(c.j, -1);
        jp.co.ymm.android.ringtone.util.g.a(alarmItem != null);
        if (intExtra2 == 2) {
            if (boolValueOf.booleanValue()) {
                this.p.add(alarmItem);
                this.p.notifyDataSetChanged();
                alarmItem.a();
                a(alarmItem);
            } else if (-1 < intExtra) {
                AlarmItem item = this.p.getItem(intExtra);
                item.a(alarmItem);
                if (!item.o()) {
                    return;
                }
                jp.co.ymm.android.ringtone.util.g.a("item changed.");
                item.b();
                this.p.notifyDataSetChanged();
                a(item);
                if (item.m() != null && !item.m().equals("")) {
                    a("Alarm", "click", "Alarm" + item.f() + "_set", this.i);
                }
            }
        } else if (intExtra2 == 0 && !boolValueOf.booleanValue()) {
            c(intExtra);
        }
        this.p.sort(new a());
    }

    private String b(AlarmItem alarmItem) {
        Calendar calendar = Calendar.getInstance();
        Calendar calendar2 = Calendar.getInstance();
        calendar2.clear();
        calendar2.set(calendar.get(1), calendar.get(2), calendar.get(5), alarmItem.e(), alarmItem.h(), 0);
        int iCompareTo = calendar2.compareTo(calendar);
        if (alarmItem.c().size() != 0) {
            calendar2.add(5, a(calendar.get(7), alarmItem, iCompareTo));
        } else if (iCompareTo < 0) {
            calendar2.add(5, 1);
        }
        return a(calendar.getTimeInMillis(), calendar2.getTimeInMillis());
    }

    private void b(int i) {
        this.r = i;
        a(18);
    }

    public static i c() {
        return new i();
    }

    private void c(int i) {
        AlarmItem item = this.p.getItem(i);
        AlarmItem.b(item.f());
        item.b(false);
        a(item);
        this.p.remove(item);
    }

    private void c(AlarmItem alarmItem) {
        Toast.makeText(getActivity(), "アラームは" + b(alarmItem) + "後に設定されています", 0).show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void d() {
        a(c.a(new AlarmItem(AlarmItem.r()), (Boolean) true));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void d(int i) {
        a(c.a(this.p.getItem(i), i));
    }

    private ArrayAdapter<AlarmItem> e() {
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < 20; i++) {
            if (AlarmItem.a(i).booleanValue()) {
                arrayList.add(new AlarmItem(i));
            }
        }
        Collections.sort(arrayList, new a());
        return new e(this, getActivity(), arrayList);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void e(int i) {
        this.r = i;
        AlarmItem item = this.p.getItem(i);
        DateFormat.getTimeFormat(getActivity());
        CharSequence[] charSequenceArr = new CharSequence[3];
        charSequenceArr[0] = getString(item.p() ? 2131493147 : 2131493148);
        charSequenceArr[1] = getString(2131493144);
        charSequenceArr[2] = getString(2131493143);
        a(16, item.l(), charSequenceArr);
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, jp.co.ymm.android.ringtone.util.f.a
    public void a(DialogInterface dialogInterface, int i, int i2) throws Throwable {
        switch (i) {
            case 16:
                AlarmItem item = this.p.getItem(this.r);
                if (i2 == 0) {
                    a(item, true ^ item.p());
                    this.p.notifyDataSetChanged();
                    break;
                } else if (i2 == 1) {
                    d(this.r);
                    break;
                } else if (i2 == 2) {
                    b(this.r);
                    break;
                }
                break;
            case 18:
                if (i2 == -1) {
                    c(this.r);
                } else if (i2 == -2) {
                    dialogInterface.cancel();
                }
                break;
        }
    }

    @SuppressLint({"NewApi"})
    void a(AlarmItem alarmItem) {
        String str;
        int i = Build.VERSION.SDK_INT;
        if (alarmItem != null) {
            AlarmManager alarmManager = (AlarmManager) getActivity().getSystemService("alarm");
            Intent intent = new Intent(getActivity(), (Class<?>) AlarmReceiver.class);
            intent.setAction("jp.co.ymm.android.ringtone.ALARM_ALERT");
            intent.setType(String.valueOf(alarmItem.f()));
            jp.co.ymm.android.ringtone.util.g.a("AlarmItem setType : " + alarmItem.f());
            PendingIntent broadcast = PendingIntent.getBroadcast(getActivity(), 0, intent, 134217728);
            if (alarmItem.p()) {
                Date dateL = alarmItem.l();
                Calendar calendar = Calendar.getInstance();
                calendar.setTime(dateL);
                calendar.set(13, 0);
                calendar.set(14, 0);
                long timeInMillis = calendar.getTimeInMillis();
                Calendar calendar2 = Calendar.getInstance();
                calendar2.setTimeInMillis(System.currentTimeMillis());
                if (timeInMillis < calendar2.getTimeInMillis()) {
                    calendar.setTimeInMillis(timeInMillis + 86400000);
                }
                if (i < 19) {
                    alarmManager.set(0, calendar.getTimeInMillis(), broadcast);
                } else if (i < 23) {
                    alarmManager.setExact(0, calendar.getTimeInMillis(), broadcast);
                } else {
                    alarmManager.setExactAndAllowWhileIdle(0, calendar.getTimeInMillis(), broadcast);
                }
                str = "updated alaram: " + calendar.getTimeInMillis();
            } else {
                alarmManager.cancel(broadcast);
                str = "updated alaram: cancel";
            }
            jp.co.ymm.android.ringtone.util.g.a(str);
        }
    }

    protected void a(AlarmItem alarmItem, boolean z) throws Throwable {
        alarmItem.b(z);
        alarmItem.s();
        if (alarmItem.o()) {
            if (alarmItem.p()) {
                c(alarmItem);
            }
            alarmItem.b();
            a(alarmItem);
        }
    }

    @Override // android.app.Fragment
    public void onActivityResult(int i, int i2, Intent intent) throws Throwable {
        super.onActivityResult(i, i2, intent);
        if (i2 != -1) {
            return;
        }
        a(intent);
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        super.onCreateView(layoutInflater, viewGroup, bundle);
        this.f3585e = layoutInflater.inflate(2131296259, viewGroup, false);
        getActivity().setTitle(2131493149);
        AlarmItem.a(getActivity().getApplicationContext());
        this.o = (ListView) this.f3585e.findViewById(2131165198);
        this.p = e();
        this.o.setAdapter((ListAdapter) this.p);
        this.o.setChoiceMode(0);
        this.o.setOnItemClickListener(new d(this));
        this.o.setOnItemLongClickListener(new f(this));
        this.q = (LinearLayout) this.f3585e.findViewById(2131165197);
        this.q.setOnClickListener(new g(this));
        return this.f3585e;
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public void onResume() {
        this.i = "/Alarm/AlarmList";
        super.onResume();
        this.p.notifyDataSetChanged();
    }
}
