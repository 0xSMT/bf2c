#!/bin/bash

python3.6 main.py $1 out.c $2
gcc out.c -o out
./out