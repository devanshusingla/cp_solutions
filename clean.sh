#!/bin/bash

# for cleaning binaries

find . -perm /a=x -type f ! -name "*.sh" -exec rm {} \;
echo "" > input.txt
echo "" > output.txt