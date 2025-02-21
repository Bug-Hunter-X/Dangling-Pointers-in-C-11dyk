# Dangling Pointers in C

This repository demonstrates the concept of dangling pointers in C programming and how to avoid them. Dangling pointers are dangerous because they can lead to unpredictable program behavior, crashes, or security vulnerabilities.

## The Problem
A dangling pointer arises when a pointer variable continues to point to a memory location that has already been freed or deallocated.  This typically happens when a pointer is pointing to a variable that goes out of scope or dynamically allocated memory that's been `free()`d.  Accessing a dangling pointer results in undefined behavior.

## The Code (bug.c)
The `bug.c` file contains code that demonstrates the creation of a dangling pointer. 

## The Solution (bugSolution.c)
The solution addresses the dangling pointer issue by ensuring that pointers are always pointing to valid memory locations.

## How to Run
1. Clone the repository.
2. Compile the code using a C compiler (like GCC): `gcc bug.c -o bug` and `gcc bugSolution.c -o bugSolution`
3. Run the executable: `./bug` and `./bugSolution`