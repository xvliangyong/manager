#!/bin/bash
gcc -c main.c -o main.o
gcc -c stu.c -o stu.o
gcc -c sub.c -o sub.o
ar -rsv libmanager.a main.o stu.o sub.o

