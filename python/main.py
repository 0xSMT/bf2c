import json, sys

semicolon   = "><,.+-"
streakable  = "<>+-"
DEFAULT_TAPE = 100

with open("../bf2c_map.json") as f:
    d = f.read()
    mapping = json.loads(d)

with open(sys.argv[1]) as input:
    inputdata = input.read()

indent = 1
output = open(sys.argv[2], "w")

try:
    sz = sys.argv[3]
except IndexError:
    print("\033[92mLOG> {}\033[00m".format("No size provided --  using default value of [{}]".format(DEFAULT_TAPE)))
    sz = DEFAULT_TAPE

header = "#include <stdio.h>\n\nchar tape[%s];\nchar *ptr = &tape[0];\n\nint main() {\n\tsetbuf(stdout, NULL);\n\n" % sz
output.write(header)

streaksym = None
streak = 0

for token in inputdata:
    if streaksym is None and token in streakable:
        streaksym = token
        streak = 1
        continue
    elif token is streaksym and token in streakable:
        streak += 1
        continue
    elif streaksym is not None:
        cstr = ("\t" * indent) + (mapping[streaksym][:-1] + "={}".format(streak)) + ((streaksym in semicolon) * ";") + "\n"
        output.write(cstr)
        streaksym = None

    try:
        cstr = ("\t" * indent) + mapping[token] + ((token in semicolon) * ";") + "\n"
        
        if token is "[":
            indent += 1
        elif token is "]":
            cstr = cstr[1:]
            indent -= 1
        
        output.write(cstr)
    except KeyError:
        pass

output.write("\n" + "\t" * indent + "return 0;\n}")