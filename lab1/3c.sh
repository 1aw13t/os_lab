#!/bin/bash
while read line
do
	for i in 1 2 3 4 5 6 7 8 9 10
	do
		echo "$line X $i = `bc <<< $line*$i`"
	done
done <input.txt