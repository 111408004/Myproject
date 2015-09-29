project: use.o mini.o
	cc use.o mini.o -o project
use.o: use.c mini.h
	cc -Wall -c use.c
mini.o: mini.c mini.h
	cc -Wall -c mini.c

