
import sys

def go(fo, d, w, z):
    count = 0;
    r = [] 
    n = z + 1
    tab = "  "
    while n >-0:
        n -= 1
        tab += "  "
    if len(w) < 1:
            return
    if len(w) == 1:
        inp =  tab
        inp += "let v=\"" + w[0].lower() + "\";if (~s.compare(v)){return C." + w[0] + "();}\n"
        fo.write(inp)
        return

    c = ""
    d = ""
    notempty = 0
    nb = 0
    for u in w:
        if len(u) > z -1:
            if len(u) > z:
                c = u[z].lower()
            else:
                c = 0 
            if d != c:
                if (count > 0):
                    go(fo, 0, r, z+1)
                    count = 0
                    r = []
                fo.write(tab)
                if notempty:
                    fo.write("} else { ")
                    nb += 1
                else:
                    fo.write("let c = s.charAt(" + str(z) + ");\n");
                    if c != 0:
                        fo.write(tab)
                if c == 0:
                    None
                else:
                    notempty += 1 
                    fo.write("if (c = " + str(ord(c)) + ") { // " + c + "\n")
                    nb += 1
                d = c;
            r.append(u)
            count += 1
        else:
            None
    inp = " "
    if count > 0 :
        go(fo, 0, r, z+1)
    if notempty:
        fo.write(tab);
        if nb > 1:
            nb -= 1
        while nb > 0:
            nb -= 1 
            fo.write("}");

        fo.write("\n");
def tr(s):
    s = s.lower()
    s = s.replace(" ", "_")
    return s

if __name__ == "__main__":
    out = "lib/ext/Const.jack"
  #  fi = open(sys.argv[1], "r")
    fi = open("lib/ext/C.jack", "r")
    fo = open("C.jack", "w")
    w = [];
    i = 0;
    fo.write("class C {\n");
    for x in fi:
        if (x.split(" ")[0] == "\tfunction"):
            k = (x.split("int ")[1].split("(")[0])
            fo.write("\tfunction int " + k.replace("-", "_") + "() {return " + str(i) + ";}\n");
            i += 1
    fo.write("}\n");
    fo.close()
    fo = open(out, "w")
    fo.write("class Const {\n");
    fo.write("\tfunction Buffer getList() {\n");
    fo.write("\t\tvar Buffer b;\n");
    fo.write("\t\tvar String s;\n");
    fo.write("\t\tlet b = Buffer.new(256, null);\n");
    i = 0
    fi.seek(0)
    for x in fi:
        if (x.split(" ")[0] == "\tfunction"):
            if (i < 32) or (i == 127) or (i == 34):
                fo.write("\t\tlet s = \" \";")
                fo.write("do s.setCharAt(0, " + str(i) + ");\n");
                fo.write("\t\tdo b.append(s);\n");
            elif (i < 128):
                fo.write("\t\tdo b.append(\"" + chr((i))  + "\");\n");
            else:
                k = (x.split("int ")[1].split("(")[0])
                fo.write("\t\tdo b.append(\"" + k.lower() + "\");\n");
            i += 1
    fo.write("\t\treturn b;\n");
    fo.write("\t}\n");
    fo.write("}\n");

    fi.close()
    exit()
    w.sort()
    c = ""
    d = ""
    z = 0;
    fo.write("class Const {\n");
    fo.write("  function int get(String s) {\n");
    fo.write("    var String v;\n");
    fo.write("    var char c;\n");
    go(fo, d, w, 0)
    fo.write("\n  }\n}\n");

    fi.close()
    fo.close()

