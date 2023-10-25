Project 0x1C. C - Makefiles
Project Start Date: October 24, 2023, 9:00 PM
Project End Date: October 25, 2023, 9:00 PM
Checker Release: October 25, 2023, 3:00 AM

Welcome to the "0x1C. C - Makefiles" project. This project is designed to help you learn about make and Makefiles, which are essential tools for managing and building your C programs. By the end of this project, you will be able to explain the concepts of make, Makefiles, rules, variables, and more, without relying on external resources.

Resources
Before starting this project, you may find it helpful to read or watch the following resources:

Makefile
Installing the make utility
Make Official Documentation
Learning Objectives
At the end of this project, you should be able to:

General
Understand what make and Makefiles are and why and when to use them.
Define rules in a Makefile and explain how to set and use them.
Differentiate between explicit and implicit rules in Makefiles.
Recognize and utilize common and useful rules in Makefiles.
Understand the concept of variables and how to set and use them in Makefiles.
General Requirements
Allowed text editors: vi, vim, emacs
Operating System: Ubuntu 20.04 LTS
Compiler Version: GCC 9.3.0
Make Version: GNU Make 4.2.1
Ensure all your files end with a newline character.
A README.md file is mandatory at the root of the project folder.
Project Tasks
Here are the tasks you'll be working on in this project:

Task 0: Create a Basic Makefile (0-Makefile)
Create your first Makefile with the following specifications:

Name of the executable: "school"
Rule: "all" (The "all" rule builds your executable)
No variables are needed.
Task 1: Makefile with Compiler and Source Files (1-Makefile)
Create a Makefile with the following specifications:

Name of the executable: "school"
Rule: "all" (The "all" rule builds your executable)
Use variables: CC (the compiler to be used) and SRC (the .c files).
Task 2: Makefile with Object Files (2-Makefile)
Create a Makefile with the following specifications:

Name of the executable: "school"
Rule: "all" (The "all" rule builds your executable)
Use variables: CC (the compiler to be used), SRC (the .c files), OBJ (the .o files), and NAME (the name of the executable).
The "all" rule should recompile only the updated source files.
Task 3: Makefile with Clean, OcClean, Fclean, and Re (3-Makefile)
Create a Makefile with the following specifications:

Name of the executable: "school"
Rules: "all," "clean," "oclean," "fclean," and "re."
The "all" rule builds your executable.
The "clean" rule deletes all Emacs and Vim temporary files along with the executable.
The "oclean" rule deletes the object files.
The "fclean" rule deletes all Emacs and Vim temporary files, the executable, and the object files.
The "re" rule forces the recompilation of all source files.
Use variables: CC (the compiler to be used), SRC (the .c files), OBJ (the .o files), NAME (the name of the executable), and RM (the program to delete files).
The "all" rule should recompile only the updated source files.
Task 4: Makefile with Compiler Flags (4-Makefile)
Create a Makefile with the following specifications:

Name of the executable: "school"
Rules: "all," "clean," "fclean," "oclean," and "re."
The "all" rule builds your executable.
The "clean" rule deletes all Emacs and Vim temporary files along with the executable.
The "oclean" rule deletes the object files.
The "fclean" rule deletes all Emacs and Vim temporary files, the executable, and the object files.
The "re" rule forces recompilation of all source files.
Use variables: CC (the compiler to be used), SRC (the .c files), OBJ (the .o files), NAME (the name of the executable), RM (the program to delete files), and CFLAGS (compiler flags: -Wall -Werror -Wextra -pedantic).
The "all" rule should recompile only the updated source files.
Task 5: Island Perimeter (5-island_perimeter.py)
This task is focused on technical interview preparation. You are required to create a Python function island_perimeter(grid) that returns the perimeter of the island described in grid. The specifications are provided in the task description.

Important Note: You are not allowed to use external modules or Google while solving this task.

Authors and Copyright
This project is part of the ALX Software Engineering program. The content and tasks have been provided by Julien Barbier. All rights reserved.

student of alx SE : VIWE MLAMLA
