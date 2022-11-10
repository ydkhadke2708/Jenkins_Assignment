

all: a.out

a.out:	main.o add.o sub.o mult.o
	cc main.o sub.o mult.o add.o -o a.out
main.o:	sub.h add.h mult.h sub.c add.c mult.c main.c 
	cc -c main.c
add.o:	add.c
	cc -c add.c
sub.o:	sub.c
	cc -c sub.c
mult.o:	mult.c
	cc -c mult.c
