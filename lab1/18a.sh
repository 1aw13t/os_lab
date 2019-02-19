#!/bin/bash

count=0

while [ "$@" ];
do
count=`expr $count+1`
shift
done

echo $count
