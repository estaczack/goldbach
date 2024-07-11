#!/bin/bash

rm -f bin/*
rm -f objs/*

FUNCOES=`ls functions/*.c`

for i in $FUNCOES; do
    OBJNAME="objs/"`echo $i | cut -f 1 -d "." | cut -f 2 -d "/"`".o"
    gcc -c $i -I functions/ -o $OBJNAME
done

OBJETOS=`ls objs/*.o`

PRINCIPAIS=`ls *.c`

for i in $PRINCIPAIS; do
    EXECNAME="bin/"`echo $i | cut -f 1 -d "."`
    gcc $i $OBJETOS -I functions/ -o $EXECNAME
done

rm -f objs/*
