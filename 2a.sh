#!/bin/bash
read Mode
read A
read B 
if [ $Mode == 'a' ]
then
	echo "Sum is `bc <<< $A+$B `"
fi
if [ $Mode == 's' ]
then
	echo "Difference is `bc <<< $A-$B `"
fi
if [ $Mode == 'm' ]
then
	echo "Product is `bc <<< $A*$B`"
fi
if [ $Mode == 'q' ]
then
	echo "Quotient is `bc <<< $A/$B`"
fi
if [ $Mode == 'r' ]
then
	echo "Remainder is `bc <<< $A%$B`"
fi


