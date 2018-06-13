#!/bin/bash

fin=`date +%u`
let s=6
let d=7


if [ $fin = $s ] || [ $fin = $d ];then
	echo "es fin de semana"
else
	echo "es un dia normal"
fi

