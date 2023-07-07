#!/bin/bash

# Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library liball.a
ar rcs liball.a *.o

# Clean up object files
rm -f *.o

echo "Static library liball.a created."
