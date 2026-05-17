package com.yamaha.smafsynth.sample;

import android.util.Log;
import android.view.View;
import android.widget.AdapterView;
import android.widget.Spinner;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class i implements AdapterView.OnItemSelectedListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ SMAFSynthSample f2755a;

    i(SMAFSynthSample sMAFSynthSample) {
        this.f2755a = sMAFSynthSample;
    }

    @Override // android.widget.AdapterView.OnItemSelectedListener
    public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
        this.f2755a.o = Integer.parseInt((String) ((Spinner) adapterView).getSelectedItem());
        Log.d("SMAF", "WT: " + this.f2755a.o);
    }

    @Override // android.widget.AdapterView.OnItemSelectedListener
    public void onNothingSelected(AdapterView<?> adapterView) {
    }
}
