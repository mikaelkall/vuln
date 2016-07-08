all:
	gcc ./vuln.c -m32 -ggdb -fno-stack-protector -w -z execstack -o vuln
	gcc ./exploit.c -m32 -ggdb -fno-stack-protector -w -z execstack -o exploit
clean:
	rm -f peda* && rm -f vuln && rm -f exploit
