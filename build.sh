#!/bin/bash
echo "************ Compiling wrapper ************"
gcc -v wrapper.c -o wrapper
echo "************ Updating file permissions ************"
sudo chown -v root:root ./wrapper
sudo chmod -v 4555 ./wrapper
echo "************ Running demo script with wrapper ************"
./wrapper ./myscript.sh
