import json, sys

semicolon = "><,.+-"

with open("../bf2c_map.json") as f:
    d = f.read()
    mapping = json.loads(d)

with open(sys.argv[1]) as input:
    inputdata = input.read()

indent = 1
output = open(sys.argv[2], "w")

sz = sys.argv[3]

header = "#include <stdio.h>\n\nchar tape[%s];\nchar *ptr = &tape[0];\n\nint main() {\n\tsetbuf(stdout, NULL);\n\n" % sz
output.write(header)

for token in inputdata:
    try:
        cstr = ("\t" * indent) + mapping[token] + ((token in semicolon) * ";") + "\n"
        
        if token is "[":
            indent += 1
        elif token in "]":
            cstr = cstr[1:]
            indent -= 1
        
        output.write(cstr)
    except KeyError:
        pass

output.write("\n" + "\t" * indent + "return 0;\n}")