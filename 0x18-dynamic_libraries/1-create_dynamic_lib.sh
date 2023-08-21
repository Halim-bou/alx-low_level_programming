#!/bin/bash
gcc -shared *.o liball.so | gcc -c -fPIC *.c
