#!/bin/bash
read a
read b
if [$1 == "-a"]
then echo $(bc <<< a+b)
if [$1 == "-s"]
then echo $(bc <<< a-b)
if[$1 == "-m"]
then echo $(bc <<< a*b)
if($1 == "") 
