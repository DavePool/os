#!/bin/bash

if [ $2 -gt 18 ];then
	fecha=`date +%c`
        echo "$1 es mayor de edad $fecha" 
	
        echo "$1 es mayor de edad $fecha" >> personas.txt 
else
	echo "$1 no es mayor de edad"
fi
