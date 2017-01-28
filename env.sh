#!/bin/bash

function endian()
{
   ../../tools/offset.py $@ 
}

function dumpshellcode()
{
        if [ ! -e "vuln" ]; then
            echo "No vuln file to debug"
        else
	    gdb -x ../../.peda/gdbinit --batch --command=../../tools/dump_shellcode.gdb --args ./vuln
        fi
}


function debug()
{
	if [ ! -e "vuln" ]; then
	    echo "No vuln file to debug"
	else
	    gdb -x ../../.peda/gdbinit ./vuln
	fi
}
