package androidx.core.app;

import android.app.Service;
import android.app.job.JobInfo;
import android.app.job.JobParameters;
import android.app.job.JobScheduler;
import android.app.job.JobServiceEngine;
import android.app.job.JobWorkItem;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.os.AsyncTask;
import android.os.Build;
import android.os.IBinder;
import android.os.PowerManager;
import java.util.ArrayList;
import java.util.HashMap;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class JobIntentService extends Service {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final Object f145a = new Object();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    static final HashMap<ComponentName, h> f146b = new HashMap<>();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    b f147c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    h f148d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    a f149e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    boolean f150f = false;
    boolean g = false;
    boolean h = false;
    final ArrayList<d> i;

    final class a extends AsyncTask<Void, Void, Void> {
        a() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public Void doInBackground(Void... voidArr) {
            while (true) {
                e eVarA = JobIntentService.this.a();
                if (eVarA == null) {
                    return null;
                }
                JobIntentService.this.a(eVarA.getIntent());
                eVarA.a();
            }
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public void onCancelled(Void r1) {
            JobIntentService.this.d();
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
        public void onPostExecute(Void r1) {
            JobIntentService.this.d();
        }
    }

    interface b {
        IBinder a();

        e b();
    }

    static final class c extends h {

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private final Context f152d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private final PowerManager.WakeLock f153e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        private final PowerManager.WakeLock f154f;
        boolean g;
        boolean h;

        c(Context context, ComponentName componentName) {
            super(context, componentName);
            this.f152d = context.getApplicationContext();
            PowerManager powerManager = (PowerManager) context.getSystemService("power");
            this.f153e = powerManager.newWakeLock(1, componentName.getClassName() + ":launch");
            this.f153e.setReferenceCounted(false);
            this.f154f = powerManager.newWakeLock(1, componentName.getClassName() + ":run");
            this.f154f.setReferenceCounted(false);
        }

        @Override // androidx.core.app.JobIntentService.h
        public void a() {
            synchronized (this) {
                if (this.h) {
                    if (this.g) {
                        this.f153e.acquire(60000L);
                    }
                    this.h = false;
                    this.f154f.release();
                }
            }
        }

        @Override // androidx.core.app.JobIntentService.h
        public void b() {
            synchronized (this) {
                if (!this.h) {
                    this.h = true;
                    this.f154f.acquire(600000L);
                    this.f153e.release();
                }
            }
        }

        @Override // androidx.core.app.JobIntentService.h
        public void c() {
            synchronized (this) {
                this.g = false;
            }
        }
    }

    final class d implements e {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final Intent f155a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final int f156b;

        d(Intent intent, int i) {
            this.f155a = intent;
            this.f156b = i;
        }

        @Override // androidx.core.app.JobIntentService.e
        public void a() {
            JobIntentService.this.stopSelf(this.f156b);
        }

        @Override // androidx.core.app.JobIntentService.e
        public Intent getIntent() {
            return this.f155a;
        }
    }

    interface e {
        void a();

        Intent getIntent();
    }

    static final class f extends JobServiceEngine implements b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final JobIntentService f158a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final Object f159b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        JobParameters f160c;

        final class a implements e {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            final JobWorkItem f161a;

            a(JobWorkItem jobWorkItem) {
                this.f161a = jobWorkItem;
            }

            @Override // androidx.core.app.JobIntentService.e
            public void a() {
                synchronized (f.this.f159b) {
                    if (f.this.f160c != null) {
                        f.this.f160c.completeWork(this.f161a);
                    }
                }
            }

            @Override // androidx.core.app.JobIntentService.e
            public Intent getIntent() {
                return this.f161a.getIntent();
            }
        }

        f(JobIntentService jobIntentService) {
            super(jobIntentService);
            this.f159b = new Object();
            this.f158a = jobIntentService;
        }

        @Override // androidx.core.app.JobIntentService.b
        public IBinder a() {
            return getBinder();
        }

        @Override // androidx.core.app.JobIntentService.b
        public e b() {
            synchronized (this.f159b) {
                if (this.f160c == null) {
                    return null;
                }
                JobWorkItem jobWorkItemDequeueWork = this.f160c.dequeueWork();
                if (jobWorkItemDequeueWork == null) {
                    return null;
                }
                jobWorkItemDequeueWork.getIntent().setExtrasClassLoader(this.f158a.getClassLoader());
                return new a(jobWorkItemDequeueWork);
            }
        }

        @Override // android.app.job.JobServiceEngine
        public boolean onStartJob(JobParameters jobParameters) {
            this.f160c = jobParameters;
            this.f158a.a(false);
            return true;
        }

        @Override // android.app.job.JobServiceEngine
        public boolean onStopJob(JobParameters jobParameters) {
            boolean zB = this.f158a.b();
            synchronized (this.f159b) {
                this.f160c = null;
            }
            return zB;
        }
    }

    static final class g extends h {

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private final JobInfo f163d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private final JobScheduler f164e;

        g(Context context, ComponentName componentName, int i) {
            super(context, componentName);
            a(i);
            this.f163d = new JobInfo.Builder(i, this.f165a).setOverrideDeadline(0L).build();
            this.f164e = (JobScheduler) context.getApplicationContext().getSystemService("jobscheduler");
        }
    }

    static abstract class h {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final ComponentName f165a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        boolean f166b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        int f167c;

        h(Context context, ComponentName componentName) {
            this.f165a = componentName;
        }

        public void a() {
        }

        void a(int i) {
            if (!this.f166b) {
                this.f166b = true;
                this.f167c = i;
            } else {
                if (this.f167c == i) {
                    return;
                }
                throw new IllegalArgumentException("Given job ID " + i + " is different than previous " + this.f167c);
            }
        }

        public void b() {
        }

        public void c() {
        }
    }

    public JobIntentService() {
        this.i = Build.VERSION.SDK_INT >= 26 ? null : new ArrayList<>();
    }

    static h a(Context context, ComponentName componentName, boolean z, int i) {
        h cVar;
        h hVar = f146b.get(componentName);
        if (hVar != null) {
            return hVar;
        }
        if (Build.VERSION.SDK_INT < 26) {
            cVar = new c(context, componentName);
        } else {
            if (!z) {
                throw new IllegalArgumentException("Can't be here without a job id");
            }
            cVar = new g(context, componentName, i);
        }
        h hVar2 = cVar;
        f146b.put(componentName, hVar2);
        return hVar2;
    }

    e a() {
        b bVar = this.f147c;
        if (bVar != null) {
            return bVar.b();
        }
        synchronized (this.i) {
            if (this.i.size() <= 0) {
                return null;
            }
            return this.i.remove(0);
        }
    }

    protected abstract void a(Intent intent);

    void a(boolean z) {
        if (this.f149e == null) {
            this.f149e = new a();
            h hVar = this.f148d;
            if (hVar != null && z) {
                hVar.b();
            }
            this.f149e.executeOnExecutor(AsyncTask.THREAD_POOL_EXECUTOR, new Void[0]);
        }
    }

    boolean b() {
        a aVar = this.f149e;
        if (aVar != null) {
            aVar.cancel(this.f150f);
        }
        this.g = true;
        return c();
    }

    public boolean c() {
        return true;
    }

    void d() {
        ArrayList<d> arrayList = this.i;
        if (arrayList != null) {
            synchronized (arrayList) {
                this.f149e = null;
                if (this.i != null && this.i.size() > 0) {
                    a(false);
                } else if (!this.h) {
                    this.f148d.a();
                }
            }
        }
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        b bVar = this.f147c;
        if (bVar != null) {
            return bVar.a();
        }
        return null;
    }

    @Override // android.app.Service
    public void onCreate() {
        super.onCreate();
        if (Build.VERSION.SDK_INT >= 26) {
            this.f147c = new f(this);
            this.f148d = null;
        } else {
            this.f147c = null;
            this.f148d = a(this, new ComponentName(this, (Class<?>) JobIntentService.class), false, 0);
        }
    }

    @Override // android.app.Service
    public void onDestroy() {
        super.onDestroy();
        ArrayList<d> arrayList = this.i;
        if (arrayList != null) {
            synchronized (arrayList) {
                this.h = true;
                this.f148d.a();
            }
        }
    }

    @Override // android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        if (this.i == null) {
            return 2;
        }
        this.f148d.c();
        synchronized (this.i) {
            ArrayList<d> arrayList = this.i;
            if (intent == null) {
                intent = new Intent();
            }
            arrayList.add(new d(intent, i2));
            a(true);
        }
        return 3;
    }
}
