#!/bin/bash

# Compile C code
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c _*.c

# Create the shared object
gcc -shared -o liball.so *.o
