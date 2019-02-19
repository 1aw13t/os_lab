#!/bin/bash

read a
read b

cat $a>c
cat $b>>c

cat c
