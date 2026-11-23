#!/bin/bash
export PATH="/usr/bin:/bin:$PATH"
NAME="Olesya Yarygina"
VARIANT=29
CONTROL=$((304 * VARIANT))
echo "Hello to $CONTROL from $NAME, number $VARIANT, group M3O-103BV-26!"
echo -n "$NAME" | wc -w
