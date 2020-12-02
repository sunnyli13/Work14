all: work14.o
	gcc -o work14 work14.o
work14.o: work14.c
	gcc -c work14.c
run:
	./work14