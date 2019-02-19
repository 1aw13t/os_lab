#!/bin/bash
read -p "please enter the number" A
for i in {1..10}
do
	echo "$A X $i = `bc <<< $A*$i`"
done
