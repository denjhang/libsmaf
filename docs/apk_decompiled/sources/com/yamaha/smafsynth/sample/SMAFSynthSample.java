package com.yamaha.smafsynth.sample;

import android.R;
import android.app.Activity;
import android.os.Bundle;
import android.os.Environment;
import android.os.Handler;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.SeekBar;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import android.widget.Toast;
import com.yamaha.smafsynth.m7.emu.EmuSmw7;
import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Timer;
import java.util.TimerTask;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class SMAFSynthSample extends Activity implements View.OnClickListener, SeekBar.OnSeekBarChangeListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Spinner f2743a = null;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Spinner f2744b = null;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private Spinner f2745c = null;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private Spinner f2746d = null;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private Button f2747e = null;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private Button f2748f = null;
    private Button g = null;
    private Button h = null;
    private TextView i = null;
    private SeekBar j = null;
    private SeekBar k = null;
    private EmuSmw7 l = null;
    private int m = 0;
    private int n = 32;
    private int o = 32;
    private Handler p = new Handler();
    private Timer q = null;
    private TimerTask r = null;
    private int s = 127;
    private byte[] t = null;

    class a implements Comparator {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f2749a = 1;

        public a() {
        }

        @Override // java.util.Comparator
        public int compare(Object obj, Object obj2) {
            if (!(obj instanceof Comparable) || !(obj2 instanceof Comparable)) {
                throw new IllegalArgumentException("arg0 & arg1 must implements interface of java.lang.Comparable.");
            }
            if (obj == null && obj2 == null) {
                return 0;
            }
            return obj == null ? this.f2749a * 1 : obj2 == null ? this.f2749a * (-1) : ((Comparable) obj).compareTo((Comparable) obj2) * this.f2749a;
        }
    }

    public void a() {
        EmuSmw7 emuSmw7 = this.l;
        if (emuSmw7 != null) {
            emuSmw7.d();
            this.l.e();
        }
    }

    public void b() {
        EmuSmw7 emuSmw7 = this.l;
        if (emuSmw7 != null) {
            if (emuSmw7.c() == 0) {
                this.f2747e.setEnabled(true);
                this.f2748f.setEnabled(false);
                this.g.setEnabled(false);
            } else {
                if (this.l.c() == 1) {
                    this.f2747e.setEnabled(false);
                    this.f2748f.setEnabled(true);
                    this.g.setEnabled(false);
                    this.h.setEnabled(true);
                    return;
                }
                if (this.l.c() != 2) {
                    return;
                }
                this.f2747e.setEnabled(false);
                this.f2748f.setEnabled(false);
                this.g.setEnabled(true);
            }
            this.h.setEnabled(false);
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        int id = view.getId();
        if (id == com.yamaha.smafsynth.sample.a.button_init) {
            EmuSmw7 emuSmw7 = this.l;
            if (emuSmw7 != null && emuSmw7.c() == 0) {
                this.l.a(this.m, 3);
            }
        } else {
            InputStream bufferedInputStream = null;
            if (id == com.yamaha.smafsynth.sample.a.button_start) {
                EmuSmw7 emuSmw72 = this.l;
                if (emuSmw72 != null && emuSmw72.c() == 1) {
                    Spinner spinner = this.f2743a;
                    String str = (spinner == null || spinner.getSelectedItem().equals("(Internal)")) ? "(Internal)" : ((String) this.f2743a.getSelectedItem()).split("] ")[1];
                    if (str.compareTo("(Internal)") == 0) {
                        bufferedInputStream = getResources().openRawResource(c.x02886gm2);
                    } else {
                        try {
                            bufferedInputStream = new BufferedInputStream(new FileInputStream(new File(new File(Environment.getExternalStorageDirectory(), getString(d.dir_name)), str)));
                        } catch (FileNotFoundException e2) {
                            e2.printStackTrace();
                        }
                    }
                    if (bufferedInputStream != null) {
                        j = str.matches(".+\\.[M,m][I,i][D,d]$") ? 4L : 15L;
                        try {
                            this.t = new byte[bufferedInputStream.available()];
                            bufferedInputStream.read(this.t);
                        } catch (IOException e3) {
                            e3.printStackTrace();
                        }
                    }
                    this.l.a(this.t, 100L, -1L, j, this.n, this.o);
                    this.l.a(this.k.getProgress());
                    this.j.setMax((int) this.l.a());
                    com.yamaha.smafsynth.m7.emu.a aVar = new com.yamaha.smafsynth.m7.emu.a(this.t);
                    Toast.makeText(getApplicationContext(), "ソング名:" + aVar.e(), 0).show();
                    Toast.makeText(getApplicationContext(), "アーティスト名:" + aVar.c(), 0).show();
                    Toast.makeText(getApplicationContext(), "Copyright:" + aVar.d(), 0).show();
                    Toast.makeText(getApplicationContext(), "管理者団体名:" + aVar.a(), 0).show();
                    Toast.makeText(getApplicationContext(), "管理情報:" + aVar.b(), 0).show();
                }
            } else if (id == com.yamaha.smafsynth.sample.a.button_stop) {
                EmuSmw7 emuSmw73 = this.l;
                if (emuSmw73 != null && emuSmw73.c() == 2) {
                    this.l.d();
                    this.t = null;
                    this.j.setProgress(0);
                    this.j.setMax(0);
                }
            } else {
                if (id != com.yamaha.smafsynth.sample.a.button_term) {
                    return;
                }
                EmuSmw7 emuSmw74 = this.l;
                if (emuSmw74 != null && emuSmw74.c() == 1) {
                    this.l.e();
                }
            }
        }
        b();
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(b.main);
        this.f2744b = (Spinner) findViewById(com.yamaha.smafsynth.sample.a.spinner_fs);
        ArrayAdapter arrayAdapter = new ArrayAdapter(this, R.layout.simple_spinner_item);
        arrayAdapter.setDropDownViewResource(R.layout.simple_spinner_dropdown_item);
        arrayAdapter.add("11025[Hz]");
        arrayAdapter.add("16000[Hz]");
        arrayAdapter.add("22050[Hz]");
        arrayAdapter.add("24000[Hz]");
        arrayAdapter.add("32000[Hz]");
        arrayAdapter.add("44100[Hz]");
        arrayAdapter.add("48000[Hz]");
        this.f2744b.setAdapter((SpinnerAdapter) arrayAdapter);
        this.f2744b.setSelection(1, false);
        this.f2744b.setOnItemSelectedListener(new e(this));
        this.f2744b.setSelection(2, false);
        this.m = Integer.parseInt(((String) this.f2744b.getSelectedItem()).substring(0, 5));
        this.f2743a = (Spinner) findViewById(com.yamaha.smafsynth.sample.a.spinner_file);
        ArrayAdapter arrayAdapter2 = new ArrayAdapter(this, R.layout.simple_spinner_item);
        arrayAdapter2.setDropDownViewResource(R.layout.simple_spinner_dropdown_item);
        arrayAdapter2.add("(Internal)");
        File file = new File(Environment.getExternalStorageDirectory(), getString(d.dir_name));
        if (!file.exists()) {
            file.mkdir();
        }
        File[] fileArrListFiles = file.listFiles(new f(this));
        Arrays.sort(fileArrListFiles, new a());
        int length = fileArrListFiles.length;
        int i = 0;
        int i2 = 1;
        while (i < length) {
            arrayAdapter2.add("[" + i2 + "] " + fileArrListFiles[i].getName());
            i++;
            i2++;
        }
        this.f2743a.setAdapter((SpinnerAdapter) arrayAdapter2);
        this.f2743a.setSelection(0, false);
        this.f2743a.setOnItemSelectedListener(new g(this));
        this.f2745c = (Spinner) findViewById(com.yamaha.smafsynth.sample.a.spinner_fm);
        ArrayAdapter arrayAdapter3 = new ArrayAdapter(this, R.layout.simple_spinner_item);
        arrayAdapter3.setDropDownViewResource(R.layout.simple_spinner_dropdown_item);
        for (int i3 = 1; i3 <= 64; i3++) {
            arrayAdapter3.add(String.valueOf(i3));
        }
        this.f2745c.setAdapter((SpinnerAdapter) arrayAdapter3);
        this.f2745c.setOnItemSelectedListener(new h(this));
        this.f2745c.setSelection(23, false);
        this.n = Integer.parseInt((String) this.f2745c.getSelectedItem());
        this.f2746d = (Spinner) findViewById(com.yamaha.smafsynth.sample.a.spinner_wt);
        ArrayAdapter arrayAdapter4 = new ArrayAdapter(this, R.layout.simple_spinner_item);
        arrayAdapter4.setDropDownViewResource(R.layout.simple_spinner_dropdown_item);
        for (int i4 = 1; i4 <= 64; i4++) {
            arrayAdapter4.add(String.valueOf(i4));
        }
        this.f2746d.setAdapter((SpinnerAdapter) arrayAdapter4);
        this.f2746d.setOnItemSelectedListener(new i(this));
        this.f2746d.setSelection(23, false);
        this.o = Integer.parseInt((String) this.f2746d.getSelectedItem());
        this.f2747e = (Button) findViewById(com.yamaha.smafsynth.sample.a.button_init);
        this.f2747e.setOnClickListener(this);
        this.f2748f = (Button) findViewById(com.yamaha.smafsynth.sample.a.button_start);
        this.f2748f.setOnClickListener(this);
        this.g = (Button) findViewById(com.yamaha.smafsynth.sample.a.button_stop);
        this.g.setOnClickListener(this);
        this.h = (Button) findViewById(com.yamaha.smafsynth.sample.a.button_term);
        this.h.setOnClickListener(this);
        this.i = (TextView) findViewById(com.yamaha.smafsynth.sample.a.textView_time);
        this.j = (SeekBar) findViewById(com.yamaha.smafsynth.sample.a.seekBar_time);
        this.j.setMax(0);
        this.j.setEnabled(false);
        this.k = (SeekBar) findViewById(com.yamaha.smafsynth.sample.a.seekBar_vol);
        this.k.setMax(this.s);
        this.k.setOnSeekBarChangeListener(this);
        this.k.setProgress(100);
        this.l = new EmuSmw7();
    }

    @Override // android.app.Activity
    protected void onPause() {
        Timer timer = this.q;
        if (timer != null) {
            timer.cancel();
        }
        TimerTask timerTask = this.r;
        if (timerTask != null) {
            timerTask.cancel();
        }
        this.q = null;
        this.r = null;
        a();
        super.onPause();
    }

    @Override // android.widget.SeekBar.OnSeekBarChangeListener
    public void onProgressChanged(SeekBar seekBar, int i, boolean z) {
        EmuSmw7 emuSmw7 = this.l;
        if (emuSmw7 != null) {
            emuSmw7.a(i);
        }
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        this.q = new Timer();
        this.r = new k(this);
        this.q.schedule(this.r, 2000L, 2000L);
        b();
    }

    @Override // android.widget.SeekBar.OnSeekBarChangeListener
    public void onStartTrackingTouch(SeekBar seekBar) {
    }

    @Override // android.widget.SeekBar.OnSeekBarChangeListener
    public void onStopTrackingTouch(SeekBar seekBar) {
    }
}
