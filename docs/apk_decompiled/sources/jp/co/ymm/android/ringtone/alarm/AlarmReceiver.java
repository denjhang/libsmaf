package jp.co.ymm.android.ringtone.alarm;

import android.annotation.SuppressLint;
import android.app.AlarmManager;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.text.TextUtils;
import java.util.Calendar;
import java.util.Date;
import jp.co.ymm.android.ringtone.ui.activity.AlarmControlActivity;
import jp.co.ymm.android.ringtone.util.c;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@SuppressLint({"NewApi"})
public class AlarmReceiver extends BroadcastReceiver {
    private Calendar a(long j) {
        Calendar calendar = Calendar.getInstance();
        calendar.setTimeInMillis(calendar.getTimeInMillis() + (j * 1000));
        g.a("Re-set period : " + calendar.getTimeInMillis());
        return calendar;
    }

    private Calendar a(AlarmItem alarmItem) {
        Date dateL = alarmItem.l();
        Calendar calendar = Calendar.getInstance();
        Calendar calendar2 = Calendar.getInstance();
        calendar2.setTime(dateL);
        calendar2.set(13, 0);
        calendar2.set(14, 0);
        long timeInMillis = calendar2.getTimeInMillis();
        if (timeInMillis < calendar.getTimeInMillis()) {
            timeInMillis += 86400000;
        }
        calendar2.setTimeInMillis(timeInMillis);
        g.a("Re-set period : " + calendar2.getTimeInMillis());
        return calendar2;
    }

    private void a(Context context, AlarmItem alarmItem) {
        c.a(context);
        c(context, alarmItem);
    }

    private void a(Context context, AlarmItem alarmItem, Calendar calendar) {
        g.a("reloadRepeatDayAlarmManager");
        int i = Build.VERSION.SDK_INT;
        AlarmManager alarmManager = (AlarmManager) context.getSystemService("alarm");
        Intent intent = new Intent(context, (Class<?>) AlarmReceiver.class);
        intent.setAction("jp.co.ymm.android.ringtone.ALARM_ALERT");
        intent.setType(String.valueOf(alarmItem.f()));
        PendingIntent broadcast = PendingIntent.getBroadcast(context, 0, intent, 134217728);
        Calendar calendar2 = Calendar.getInstance();
        calendar2.setTime(alarmItem.l());
        calendar2.set(13, 0);
        calendar2.set(14, 0);
        long timeInMillis = calendar2.getTimeInMillis();
        calendar.setTimeInMillis(System.currentTimeMillis());
        if (timeInMillis < calendar.getTimeInMillis()) {
            calendar2 = a(alarmItem);
        }
        if (i < 19) {
            alarmManager.set(0, calendar2.getTimeInMillis(), broadcast);
        } else if (i < 23) {
            alarmManager.setExact(0, calendar2.getTimeInMillis(), broadcast);
        } else {
            alarmManager.setExactAndAllowWhileIdle(0, calendar2.getTimeInMillis(), broadcast);
        }
        g.a("reload alarmManager.set OK: Time : " + calendar2.getTimeInMillis());
    }

    private void b(Context context, AlarmItem alarmItem) {
        b(context, alarmItem, a(alarmItem.j() * 60));
    }

    private void b(Context context, AlarmItem alarmItem, Calendar calendar) {
        g.a("setRepeatDayAlarmManager");
        int i = Build.VERSION.SDK_INT;
        AlarmManager alarmManager = (AlarmManager) context.getSystemService("alarm");
        Intent intent = new Intent(context, (Class<?>) AlarmReceiver.class);
        intent.setAction("jp.co.ymm.android.ringtone.ALARM_ALERT");
        intent.setType(String.valueOf(alarmItem.f()));
        PendingIntent broadcast = PendingIntent.getBroadcast(context, 0, intent, 134217728);
        if (i < 19) {
            alarmManager.set(0, calendar.getTimeInMillis(), broadcast);
        } else if (i < 23) {
            alarmManager.setExact(0, calendar.getTimeInMillis(), broadcast);
        } else {
            alarmManager.setExactAndAllowWhileIdle(0, calendar.getTimeInMillis(), broadcast);
        }
        g.a("alarmManager.set OK : Time : " + calendar.getTimeInMillis());
    }

    private void c(Context context, AlarmItem alarmItem) {
        g.a("extra _id  " + alarmItem.f());
        Intent intent = new Intent(context, (Class<?>) AlarmControlActivity.class);
        intent.putExtra("extra_alarm_item_id", alarmItem.f());
        intent.addFlags(268435456);
        context.startActivity(intent);
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) throws Throwable {
        boolean zA;
        String action = intent.getAction();
        AlarmItem.a(context.getApplicationContext());
        if (action != null) {
            g.a("Intent action: " + action);
            Calendar calendar = Calendar.getInstance();
            if (action.contentEquals("android.intent.action.BOOT_COMPLETED") || action.contentEquals("android.intent.action.PACKAGE_CHANGED") || action.contentEquals("android.intent.action.PACKAGE_REPLACED") || action.contentEquals("android.intent.action.MY_PACKAGE_REPLACED") || action.contentEquals("android.intent.action.TIME_SET") || action.contentEquals("android.intent.action.TIMEZONE_CHANGED")) {
                for (int i = 0; i < 20; i++) {
                    if (AlarmItem.a(i).booleanValue()) {
                        AlarmItem alarmItem = new AlarmItem(i);
                        if (alarmItem.p()) {
                            a(context, alarmItem, calendar);
                        }
                        if (alarmItem.k() != 0) {
                            alarmItem.f(0);
                            alarmItem.b();
                        }
                    }
                }
                return;
            }
            if (action.contentEquals("jp.co.ymm.android.ringtone.ALARM_ALERT")) {
                String type = intent.getType();
                if (TextUtils.isEmpty(type)) {
                    return;
                }
                AlarmItem alarmItem2 = new AlarmItem(Integer.parseInt(type));
                int iK = alarmItem2.k();
                if (iK == 0) {
                    if (alarmItem2.q()) {
                        b(context, alarmItem2, a(alarmItem2));
                        zA = AlarmItem.a(calendar, alarmItem2);
                    } else {
                        alarmItem2.b(false);
                        zA = true;
                    }
                    if (zA) {
                        a(context, alarmItem2);
                        if (alarmItem2.j() > 0) {
                            b(context, alarmItem2);
                            alarmItem2.f(1);
                        }
                    }
                } else if (iK == 1) {
                    a(context, alarmItem2);
                    b(context, alarmItem2);
                } else if (iK == 2) {
                    if (alarmItem2.q()) {
                        b(context, alarmItem2, a(alarmItem2));
                    }
                    alarmItem2.f(0);
                }
                alarmItem2.b();
            }
        }
    }
}
