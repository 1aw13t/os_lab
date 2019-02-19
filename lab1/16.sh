#!/bin/bash

echo $USER
echo $SHELL 
echo $HOME
echo $OSTYPE
cd "${0%/*}"
pwd
cat /etc/shells
