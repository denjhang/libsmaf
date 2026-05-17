package c.a.b.d;

import com.google.firebase.components.e;
import com.google.firebase.components.q;
import java.util.Iterator;
import java.util.Set;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class c implements g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f920a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final d f921b;

    c(Set<e> set, d dVar) {
        this.f920a = a(set);
        this.f921b = dVar;
    }

    static /* synthetic */ g a(com.google.firebase.components.f fVar) {
        return new c(fVar.d(e.class), d.a());
    }

    private static String a(Set<e> set) {
        StringBuilder sb = new StringBuilder();
        Iterator<e> it = set.iterator();
        while (it.hasNext()) {
            e next = it.next();
            sb.append(next.a());
            sb.append('/');
            sb.append(next.b());
            if (it.hasNext()) {
                sb.append(' ');
            }
        }
        return sb.toString();
    }

    public static com.google.firebase.components.e<g> b() {
        e.a aVarA = com.google.firebase.components.e.a(g.class);
        aVarA.a(q.b(e.class));
        aVarA.a(b.a());
        return aVarA.b();
    }

    @Override // c.a.b.d.g
    public String a() {
        if (this.f921b.b().isEmpty()) {
            return this.f920a;
        }
        return this.f920a + ' ' + a(this.f921b.b());
    }
}
