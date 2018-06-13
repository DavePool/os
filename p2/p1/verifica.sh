#!/bin/bash

until test -e prueba.txt
do
	sleep 30
done
echo "ya se creo el archivo prueba.txt!"
