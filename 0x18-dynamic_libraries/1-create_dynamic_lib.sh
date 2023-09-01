#!/bin/bash
gcc -fpic -c *.c
gcc -shared *.o -c liball.so
