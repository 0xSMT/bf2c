#!/bin/bash

python3.6 larker.py $1 out.c $2
gcc out.c -o out
./out