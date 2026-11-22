# Lab 2.1
## Overview
In this lab, we will understand how a C program using multiple library functions link to the standard library consisting of the header files, examine physical existence of C library headers and compiled binaries, and finally the difference between static linking and dynamic linking.

## Learning Objectives
- Use multiple functions from different C standard libraries
- Identify the difference between header file and precompiled machine code
- Identify the difference between static linker and dynamic linker


# C Standard Library Usage
## Concept
Multiple useful functions are already implemented in C for reusability. In this task, we have demonstrated the use of multiple functions from C standard libraries (libc). To be precise, we have used functions to get process and time information from standard libraries such as unistd.h and time.h respectively

## Command 
    # Compile the source code
    gcc procinfo.c -o procinfo

    # Run the program
    ./procinfo