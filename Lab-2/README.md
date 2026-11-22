# Lab 2 - Investigating Process Lifecycles and OS Interaction

## Overview 
In the directory, we will be understanding how OS keeps track of PIDs and PPIDs, also exit codes and its importance, standard input (stdin) and standard output (stdout) stream for OS to read/write output and input respectively, and lastly conditional branching based on user input and exit codes.

## Learning Objectives
1. Demonstrate how OS keeps track of PIDs and PPIDS.
2. Analyze about exit codes and its importance.
3. Map the gap between high level C program and low level OS process management.

# Task 1:
## Concept 
In this lab, we'll understand the concept of PID and practically demonstrate how OS keeps track of process ID and look how it can be seen while process is actually running in the background.

## Commands
    # Compile the source code
    gcc task1_alive.c -o task1

    # Run the executable in the background
    ./task1 &

    # Monitor the process for PID
    ps aux | grep 'task1'



# Author 
- Phurba Sherpa
