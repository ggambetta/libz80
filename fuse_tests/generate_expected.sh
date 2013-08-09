#!/bin/sh
SRC=$1
DST=$2
sed -r -e '/ (MC|MR|MW|PC) /d' -e 's/^ +[0-9]+ (PW|PR)/\1/' $SRC >$DST


