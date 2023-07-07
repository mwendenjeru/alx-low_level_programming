#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create the static library liball.a from the object files
ar -rc liball.a *.o

# Index the library for faster linking
ranlib liball.a

# Clean up object files
rm *.o

# Display success message
echo "Static library liball.a created successfully."
