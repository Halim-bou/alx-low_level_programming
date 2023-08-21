#!/bin/bash
gcc -shared *.o liball.c | gcc -c -fPIC *.c
