all:
	gcc ./vuln.c -m32 -ggdb -fno-stack-protector -w -z execstack -o vuln

clean:
	rm -f peda* && rm -f vuln
