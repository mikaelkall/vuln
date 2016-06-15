# vuln

## Description

Project to practice the basic at exploit bufferoverflow bugs.

## Summary

This will be a collection of vulnerable code snippets and working exploit examples.\
You can use this as a playground to practice exploit development and educate yourself.  
Note that memory address offset is different on every computer. To make exploit reliable 
get_sp to dump where esp start could be included in exploit code but I have intentionally
left that part out since the education part is to use gdb and peda to find the right offset.
The vuln code are inspired from different wargames and ctf ( capture the flag ),
that I have solved.

## Usage

    cd b0f/[1-2]
    make

## Debug

peda lib for easier debug these kind of issues is included. Type these commands to debug
with gdb and peda enabled. 
For reference https://github.com/longld/peda

```sh
   source ./env.sh
   cd b0f/[1-2]
   debug
```

### Prerequisites

Turn off address space layout randomization else you will have a very hard time.

```sh
echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
```

