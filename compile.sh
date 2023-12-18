#!/bin/bash
gcc -Wall -o main main.c -lpcap -lcurl

# Leak Check
valgrind --leak-check=yes ./main eth0
