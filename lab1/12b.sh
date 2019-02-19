#!/bin/bash
if(($# != 1));
then
	echo "Usage [./12b.sh Directory]"
fi
ls "$1"
