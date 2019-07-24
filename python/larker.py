import json, sys, lark

DEFAULT_TAPE = 100

# _grammar = r"""
#     prog: snippet+

#     !snippet:   /\++/    -> plus
#             |   /\-+/    -> minus
#             |   /\>+/    -> right
#             |   /\<+/    -> left
#             |   /\]/     -> start
#             |   /\[/     -> end
#             |   /\./     -> out
#             |   /\,/     -> in
# """

_grammar = r"""
    prog: snippet+

    !snippet:   /\++/               -> plus
            |   /\-+/               -> minus
            |   /\>+/               -> right
            |   /\<+/               -> left
            |   /\[/ snippet+ /\]/  -> loop
            |   /\./                -> out
            |   /\,/                -> in
"""

_parser = lark.Lark(_grammar, start='prog')

with open(sys.argv[1]) as input:
    inputdata = input.read()

with open("../bf2c_map.json") as f:
    d = f.read()
    mapping = json.loads(d)

tree = _parser.parse(inputdata)

print(tree.pretty())

# for child in tree.children