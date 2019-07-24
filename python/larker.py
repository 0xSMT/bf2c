import json, sys, lark

DEFAULT_TAPE = 100

_grammar = r"""
    prog: snippet+

    !snippet:   /\++/                   -> plus
            |   /\-+/                   -> minus
            |   /\>+/                   -> right
            |   /\<+/                   -> left
            |   lbrace snippet+ rbrace  -> loop
            |   /\./                    -> out
            |   /\,/                    -> inp
    
    lbrace: /\[/
    rbrace: /\]/

    ANYTHINGELSE: /[^\+\-\>\<\.\,\[\]]+/

    %ignore ANYTHINGELSE
"""

semicolon   = "><,.+-"
streakable  = "<>+-"

# ----------------------------------------------------------------

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

_header = "#include <stdio.h>\n\nchar tape[%s];\nchar *ptr = &tape[0];\n\nint main() {\n\tsetbuf(stdout, NULL);\n\n" % sz 

def lamparse(sym, out=output):
    def parse(self, token):
        if sym in streakable:
            op = mapping[sym][:-1] + "={}".format(len(token[0]))
        else:
            op = mapping[sym]

        return ("\t" * indent) + op + ((sym in semicolon) * ";") + "\n"
    
    return parse

class BFTransform(lark.Transformer):
    def prog(self, items):
        global _header

        output.write(_header)
        for item in items:
            output.write(item)
        
        output.write("\n" + "\t" * indent + "return 0;\n}")
    
    plus    = lamparse("+")
    minus   = lamparse("-")
    left    = lamparse("<")
    right   = lamparse(">")

    inp     = lamparse(",")
    out     = lamparse(".")

    plbrace = lamparse("[")
    prbrace = lamparse("]")

    def loop(self, items):
        return "".join(items)

    def lbrace(self, parameter_list):
        global indent
        
        s = self.plbrace("[")
        indent += 1

        return s
    
    def rbrace(self, parameter_list):
        global indent

        indent -= 1
        return self.prbrace("]")

_parser = lark.Lark(_grammar, start='prog', parser="lalr", transformer=BFTransform())
tree = _parser.parse(inputdata)