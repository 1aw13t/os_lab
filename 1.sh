#!/bin/bash
read length
read breadth
rect_area=`expr \( $length \* $breadth \)`
echo "Perimeter of rectangle is `expr \( $length + $breadth \) \* 2` and area is $rect_area"
read rad
circ_per=$(bc <<< 2*3.14*$rad)
circ_area=$(bc <<< 3.14*$rad*$rad)
echo "Perimeter of the circle is $circ_per and the area is $circ_area"
