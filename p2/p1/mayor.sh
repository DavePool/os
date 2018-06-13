#!/bin/bash

if [ $1 -eq $2 ]
then
  echo "Son iguales"
else
  if [ $1 -gt $2 ]
  then
    echo "El mayor es $1"
else
  if [ $1 -lt $2 ]
  then
  echo "el mayor es $2"
  fi
fi
fi
