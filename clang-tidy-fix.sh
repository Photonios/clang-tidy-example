#!/bin/bash

if [ ! -d "build/" ]; then
	echo "error: build the project first"
	exit 1
fi

clang-tidy -p build/ -fix -checks="readability-braces-around-statements" src/main.cpp src/processor.cpp
