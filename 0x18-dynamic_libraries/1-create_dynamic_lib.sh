#!/bin/bash

# Compile all .c files in the current directory into a dynamic library

# Get all the .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

# Check if there are any .c files
if [ -z "$c_files" ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

# Compile the .c files into a shared library
gcc -shared -fPIC -o liball.so $c_files

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Dynamic library liball.so successfully created."
else
    echo "Failed to create the dynamic library."
fi
