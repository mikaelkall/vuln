all:
	g++ ./vuln.cpp -m32 -ggdb -fno-stack-protector -w -z execstack -o vuln
clean:
	rm -f peda* && rm -f vuln && rm -f exploit
