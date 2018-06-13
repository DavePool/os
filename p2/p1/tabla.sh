#!/bin/bash

for x in `seq 10`
do 
multi=$(($1*$x))
echo "$1 * $x = $multi "
done
