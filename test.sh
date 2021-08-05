#!/bin/sh
filename=$1
echo "the filename is ${filename}"
/usr/bin/gcc-4.8 -o0 -fprofile-arcs -ftest-coverage ${filename}.c -o $filename
./$filename
/usr/bin/gcov-4.8 $filename
rm ${filename}.gcda $filename ${filename}.gcno
