# File I/O Project

This project focuses on understanding file input/output operations in the context of C programming on a Linux environment. It covers topics such as file descriptors, system calls, and file permissions.

## Resources

### Read or watch:
- File descriptors
- [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://www.youtube.com/watch?v=W1XQ1JT8ABs)

### Man pages:
- [open](https://man7.org/linux/man-pages/man2/open.2.html)
- [close](https://man7.org/linux/man-pages/man2/close.2.html)
- [read](https://man7.org/linux/man-pages/man2/read.2.html)
- [write](https://man7.org/linux/man-pages/man2/write.2.html)
- [dprintf](https://man7.org/linux/man-pages/man3/dprintf.3.html)

## Learning Objectives

By the end of this project, participants are expected to:

### General
- Understand how to search for relevant information online.
- Learn how to create, open, close, read, and write files in a Linux environment.
- Gain knowledge about file descriptors and their role in I/O operations.
- Identify the purpose of the three standard file descriptors (stdin, stdout, stderr) and their POSIX names.
- Learn how to use I/O system calls such as open, close, read, and write.
- Understand the usage of flags like O_RDONLY, O_WRONLY, and O_RDWR in file operations.
- Gain familiarity with file permissions and how to set them using the open system call.
- Differentiate between a system call and a function in the context of C programming.

## Copyright - Plagiarism

Participants are required to come up with their solutions for the project tasks to meet the learning objectives outlined above. Any form of plagiarism is strictly prohibited and will result in removal from the program.

## Requirements

### General
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Code should follow the Betty style, which will be checked using `betty-style.pl` and `betty-doc.pl`
- Avoid using global variables
- Each file should contain no more than 5 functions
- Only C standard library functions allowed are `malloc`, `free`, and `exit`. Functions like `printf`, `puts`, `calloc`, `realloc`, etc., are forbidden
- Allowed system calls: `read`, `write`, `open`, `close`
- Use of `_putchar` is allowed
- No need to push `_putchar.c` as it will be provided by the evaluator
- Prototypes of all functions and `_putchar` should be included in a header file named `main.h`
- Ensure all header files are include guarded

## Tip
- Prefer using symbolic constants (POSIX) instead of numbers when possible. For instance, use `read(STDIN_FILENO, ...)` instead of `read(0, ...)` for better code readability.


