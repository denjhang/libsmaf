package com.google.firebase.iid;

import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.os.Looper;
import android.os.Message;
import android.os.Messenger;
import android.os.Parcelable;
import android.util.Log;
import com.google.firebase.iid.zzm;
import java.io.IOException;
import java.util.concurrent.ExecutionException;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: renamed from: com.google.firebase.iid.w, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0404w {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static int f2704a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static PendingIntent f2705b;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Context f2707d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final C0398p f2708e;
    private Messenger g;
    private zzm h;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final b.b.h<String, c.a.a.a.f.h<Bundle>> f2706c = new b.b.h<>();

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private Messenger f2709f = new Messenger(new HandlerC0403v(this, Looper.getMainLooper()));

    public C0404w(Context context, C0398p c0398p) {
        this.f2707d = context;
        this.f2708e = c0398p;
    }

    private static synchronized String a() {
        int i;
        i = f2704a;
        f2704a = i + 1;
        return Integer.toString(i);
    }

    private static synchronized void a(Context context, Intent intent) {
        if (f2705b == null) {
            Intent intent2 = new Intent();
            intent2.setPackage("com.google.example.invalidpackage");
            f2705b = PendingIntent.getBroadcast(context, 0, intent2, 0);
        }
        intent.putExtra("app", f2705b);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(Message message) {
        String strConcat;
        if (message != null) {
            Object obj = message.obj;
            if (obj instanceof Intent) {
                Intent intent = (Intent) obj;
                intent.setExtrasClassLoader(new zzm.a());
                if (intent.hasExtra("google.messenger")) {
                    Parcelable parcelableExtra = intent.getParcelableExtra("google.messenger");
                    if (parcelableExtra instanceof zzm) {
                        this.h = (zzm) parcelableExtra;
                    }
                    if (parcelableExtra instanceof Messenger) {
                        this.g = (Messenger) parcelableExtra;
                    }
                }
                Intent intent2 = (Intent) message.obj;
                String action = intent2.getAction();
                if (!"com.google.android.c2dm.intent.REGISTRATION".equals(action)) {
                    if (Log.isLoggable("FirebaseInstanceId", 3)) {
                        String strValueOf = String.valueOf(action);
                        Log.d("FirebaseInstanceId", strValueOf.length() != 0 ? "Unexpected response action: ".concat(strValueOf) : new String("Unexpected response action: "));
                        return;
                    }
                    return;
                }
                String stringExtra = intent2.getStringExtra("registration_id");
                if (stringExtra == null) {
                    stringExtra = intent2.getStringExtra("unregistered");
                }
                if (stringExtra != null) {
                    Matcher matcher = Pattern.compile("\\|ID\\|([^|]+)\\|:?+(.*)").matcher(stringExtra);
                    if (!matcher.matches()) {
                        if (Log.isLoggable("FirebaseInstanceId", 3)) {
                            String strValueOf2 = String.valueOf(stringExtra);
                            Log.d("FirebaseInstanceId", strValueOf2.length() != 0 ? "Unexpected response string: ".concat(strValueOf2) : new String("Unexpected response string: "));
                            return;
                        }
                        return;
                    }
                    String strGroup = matcher.group(1);
                    String strGroup2 = matcher.group(2);
                    Bundle extras = intent2.getExtras();
                    extras.putString("registration_id", strGroup2);
                    a(strGroup, extras);
                    return;
                }
                String stringExtra2 = intent2.getStringExtra("error");
                if (stringExtra2 == null) {
                    String strValueOf3 = String.valueOf(intent2.getExtras());
                    StringBuilder sb = new StringBuilder(String.valueOf(strValueOf3).length() + 49);
                    sb.append("Unexpected response, no error or registration id ");
                    sb.append(strValueOf3);
                    strConcat = sb.toString();
                } else {
                    if (Log.isLoggable("FirebaseInstanceId", 3)) {
                        String strValueOf4 = String.valueOf(stringExtra2);
                        Log.d("FirebaseInstanceId", strValueOf4.length() != 0 ? "Received InstanceID error ".concat(strValueOf4) : new String("Received InstanceID error "));
                    }
                    if (!stringExtra2.startsWith("|")) {
                        synchronized (this.f2706c) {
                            for (int i = 0; i < this.f2706c.size(); i++) {
                                a(this.f2706c.b(i), intent2.getExtras());
                            }
                        }
                        return;
                    }
                    String[] strArrSplit = stringExtra2.split("\\|");
                    if (strArrSplit.length > 2 && "ID".equals(strArrSplit[1])) {
                        String str = strArrSplit[2];
                        String strSubstring = strArrSplit[3];
                        if (strSubstring.startsWith(":")) {
                            strSubstring = strSubstring.substring(1);
                        }
                        a(str, intent2.putExtra("error", strSubstring).getExtras());
                        return;
                    }
                    String strValueOf5 = String.valueOf(stringExtra2);
                    strConcat = strValueOf5.length() != 0 ? "Unexpected structured response ".concat(strValueOf5) : new String("Unexpected structured response ");
                }
                Log.w("FirebaseInstanceId", strConcat);
                return;
            }
        }
        Log.w("FirebaseInstanceId", "Dropping invalid message");
    }

    private final void a(String str, Bundle bundle) {
        synchronized (this.f2706c) {
            c.a.a.a.f.h<Bundle> hVarRemove = this.f2706c.remove(str);
            if (hVarRemove != null) {
                hVarRemove.a(bundle);
            } else {
                String strValueOf = String.valueOf(str);
                Log.w("FirebaseInstanceId", strValueOf.length() != 0 ? "Missing callback for ".concat(strValueOf) : new String("Missing callback for "));
            }
        }
    }

    private final Bundle b(Bundle bundle) throws IOException {
        Bundle bundleC = c(bundle);
        if (bundleC == null || !bundleC.containsKey("google.messenger")) {
            return bundleC;
        }
        Bundle bundleC2 = c(bundle);
        if (bundleC2 == null || !bundleC2.containsKey("google.messenger")) {
            return bundleC2;
        }
        return null;
    }

    /* JADX WARN: Can't wrap try/catch for region: R(10:8|(1:10)(1:11)|12|(1:14)|15|(5:(7:17|(0)(2:28|(1:30)(1:31))|65|32|33|eb|37)|65|32|33|eb)|19|68|20|(1:22)(1:23)) */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x00b8, code lost:
    
        r1 = r1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:26:0x00bf, code lost:
    
        if (android.util.Log.isLoggable("FirebaseInstanceId", r8) != false) goto L27;
     */
    /* JADX WARN: Code restructure failed: missing block: B:27:0x00c1, code lost:
    
        android.util.Log.d("FirebaseInstanceId", "Messenger failed, fallback to startService");
        r1 = r1;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:30:0x00d0  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00d6  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x00ec A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r1v0, types: [c.a.a.a.f.h, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r1v1 */
    /* JADX WARN: Type inference failed for: r1v10 */
    /* JADX WARN: Type inference failed for: r1v11 */
    /* JADX WARN: Type inference failed for: r1v12 */
    /* JADX WARN: Type inference failed for: r1v7 */
    /* JADX WARN: Type inference failed for: r1v9 */
    /* JADX WARN: Type inference failed for: r8v10 */
    /* JADX WARN: Type inference failed for: r8v21, types: [android.os.Bundle] */
    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:30:0x00d0 -> B:65:0x00db). Please report as a decompilation issue!!! */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:31:0x00d6 -> B:65:0x00db). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private final android.os.Bundle c(android.os.Bundle r8) throws java.io.IOException {
        /*
            Method dump skipped, instruction units count: 294
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.firebase.iid.C0404w.c(android.os.Bundle):android.os.Bundle");
    }

    final Bundle a(Bundle bundle) {
        if (this.f2708e.d() < 12000000) {
            return b(bundle);
        }
        try {
            return (Bundle) c.a.a.a.f.j.a((c.a.a.a.f.g) C0388f.a(this.f2707d).a(1, bundle));
        } catch (InterruptedException | ExecutionException e2) {
            if (Log.isLoggable("FirebaseInstanceId", 3)) {
                String strValueOf = String.valueOf(e2);
                StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 22);
                sb.append("Error making request: ");
                sb.append(strValueOf);
                Log.d("FirebaseInstanceId", sb.toString());
            }
            if ((e2.getCause() instanceof C0397o) && ((C0397o) e2.getCause()).a() == 4) {
                return b(bundle);
            }
            return null;
        }
    }
}
