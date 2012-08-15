#!/bin/bash

cd `dirname $0`

if [ ! -d "build" ] ; then
    mkdir "build"
    echo "woops"
fi

cd build; cmake ..

