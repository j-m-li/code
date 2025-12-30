
import sys

if __name__ == "__main__":
    out = "Ascii.jack"
    fi = open("control.txt", "r")
    fo = open(out, "w")
    w = [];
    i = 0;
    fo.write("class Ascii {\n");
    fo.write("\tfunction Hash getHash(int size) {\n");
    fo.write("\t\tvar String v;\n");
    fo.write("\t\tvar Hash h;\n");
    fo.write("\t\tlet h = Hash.new(size, null);\n");
    fo.write("\t\tlet v = String.new(8);\n");
    fo.write("\t\tdo v.setCharAt(1, 0);\n");
    for x in fi:
        if (x.split("\t")[0] != "\tfunction"):
            k = (x.split("\t")[1])
            r = (x.split("\t")[3])
            fo.write("\tfunction int " + r.replace(" ", "_").upper() + "() {return " + k + ";}\n");
            #w.append(x.split("int ")[1].split("(")[0])
        i += 1
    fi.close()
    fi = open("letter.txt", "r")
    for x in fi:
        if True:
            k = (x.split("\t")[2])
            r = (x.split("\t")[4])
            fo.write("\tfunction int " + r.replace(" ", "_").upper() + "() {return " + k + ";}\n");
    fi.close()
    fo.write("\t\tdo v.dispose();\n");
    fo.write("\t}\n}\n");
    fo.close()
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

