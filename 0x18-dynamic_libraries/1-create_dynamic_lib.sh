#!/bin/bash

# Compile C code
gcc -fPIC -c *.c

# Create the shared object
gcc -shared -o liball.so *.o
