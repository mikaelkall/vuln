all:
	gcc ./get_sp.c -m32 -ggdb -fno-stack-protector -w -z execstack -o get_sp
	gcc ./get_env.c -m32 -ggdb -fno-stack-protector -w -z execstack -o get_env
clean:
	rm -f get_sp && rm -f get_env
