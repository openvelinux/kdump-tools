all:
	gcc -Wl,-z,relro,-z,now -fstack-protector-all dump.c -o dump-panic

install:
	cp dump-panic debian/kdump-tools/var/lib/kdump
