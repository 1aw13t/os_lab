#!/bin/bash

if [ $1 == 'a' ]
then
	echo "Sum is `bc <<< $2+$3 `"
elif [ $1 == 's' ]
then
	echo "Difference is `bc <<< $2-$3 `"
elif [ $1 == 'm' ]
then
	echo "Product is `bc <<< $2*$3`"
elif [ $1 == 'q' ]
then
	echo "Quotient is `bc <<< $2/$3`"
else
	echo "Remainder is `bc <<< $2%$3`"
fi
