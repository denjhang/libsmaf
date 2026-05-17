package jp.co.acrodea.runtime.drm;

import android.util.Xml;
import java.io.IOException;
import java.io.Reader;
import java.io.StringReader;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Collections;
import java.util.Date;
import java.util.HashMap;
import java.util.Map;
import java.util.TimeZone;
import java.util.UUID;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class v extends b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f3452a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private UUID f3453b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int f3454c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private Date f3455d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private Date f3456e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private String f3457f;
    private Map<String, String> g;

    private v() {
        this.f3452a = 0;
        this.g = new HashMap();
    }

    v(String str) throws IOException {
        this();
        if (str == null) {
            throw new NullPointerException();
        }
        a(new StringReader(str));
    }

    private void a(Reader reader) throws IOException {
        String attributeValue;
        a();
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss'Z'");
        simpleDateFormat.setTimeZone(TimeZone.getTimeZone("GMT"));
        XmlPullParser xmlPullParserNewPullParser = Xml.newPullParser();
        try {
            xmlPullParserNewPullParser.setInput(reader);
            boolean z = false;
            for (int eventType = xmlPullParserNewPullParser.getEventType(); eventType != 1; eventType = xmlPullParserNewPullParser.next()) {
                if (eventType == 2) {
                    String name = xmlPullParserNewPullParser.getName();
                    if (!z) {
                        if (!name.equals("drm_rights")) {
                            throw new IOException("Invalid XML");
                        }
                        if (xmlPullParserNewPullParser.getDepth() != 1) {
                            throw new IOException("Invalid XML");
                        }
                        this.f3453b = UUID.fromString(xmlPullParserNewPullParser.getAttributeValue(null, "uuid"));
                        z = true;
                    } else if (name.equals("count")) {
                        this.f3454c = Integer.parseInt(xmlPullParserNewPullParser.getAttributeValue(null, "num"));
                        this.f3452a |= 1;
                    } else if (name.equals("interval")) {
                        String attributeValue2 = xmlPullParserNewPullParser.getAttributeValue(null, "start");
                        this.f3455d = attributeValue2 == null ? new Date(0L) : simpleDateFormat.parse(attributeValue2);
                        String attributeValue3 = xmlPullParserNewPullParser.getAttributeValue(null, "end");
                        this.f3456e = attributeValue3 == null ? new Date(Long.MAX_VALUE) : simpleDateFormat.parse(attributeValue3);
                        this.f3452a |= 2;
                    } else if (name.equals("duration")) {
                        String attributeValue4 = xmlPullParserNewPullParser.getAttributeValue(null, "term");
                        if (attributeValue4 != null) {
                            this.f3457f = attributeValue4;
                            this.f3452a |= 4;
                        }
                    } else if (name.equals("option") && (attributeValue = xmlPullParserNewPullParser.getAttributeValue(null, "name")) != null) {
                        String attributeValue5 = xmlPullParserNewPullParser.getAttributeValue(null, "value");
                        if (attributeValue5 == null) {
                            attributeValue5 = "";
                        }
                        this.g.put(attributeValue, attributeValue5);
                    }
                }
            }
            if (!z) {
                throw new IOException("Data format error");
            }
        } catch (NumberFormatException unused) {
            throw new IOException("Data format error");
        } catch (IllegalArgumentException unused2) {
            throw new IOException("Data format error");
        } catch (ParseException unused3) {
            throw new IOException("Data format error");
        } catch (XmlPullParserException unused4) {
            throw new IOException("Data format error");
        }
    }

    public void a() {
        this.f3452a = 0;
        this.f3453b = null;
        this.f3454c = 0;
        this.f3455d = null;
        this.f3456e = null;
        this.f3457f = null;
        this.g.clear();
    }

    public UUID b() {
        return this.f3453b;
    }

    public int c() {
        return this.f3452a;
    }

    public int d() {
        return this.f3454c;
    }

    public Date e() {
        return this.f3455d;
    }

    public Date f() {
        return this.f3456e;
    }

    public String g() {
        return this.f3457f;
    }

    public Map<String, String> h() {
        return Collections.unmodifiableMap(this.g);
    }
}
