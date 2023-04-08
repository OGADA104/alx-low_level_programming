#!/bin/bash
gcc -c *.c|sort -k1.2n -k1.5n |ar rc liball.a *.o
