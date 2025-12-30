
import sys

if __name__ == "__main__":
    out = sys.argv[1] + ".new"
    fi = open(sys.argv[1], "r")
    fo = open(out, "w")
    fr = open("replace.txt", "r")
    w = [];
    i = 0;
    for x in fr:
        w.append(x.split(" ")[2].split(";")[0])
        i += 1
    fr.close()
    for inp in fi:
        for u in w:
            inp = inp.replace(u, "C." + u + "()")
        fo.write(inp)

    fi.close()
    fo.close()


