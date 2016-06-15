#!/bin/bash

function debug()
{
	if [ ! -e "vuln" ]; then
	    echo "No vuln file to debug"
	else
	    gdb -x ../../.peda/gdbinit ./vuln
	fi
}
