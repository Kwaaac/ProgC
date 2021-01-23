CC=gcc
CFLAGS=-Wall -ansi -pedantic-errors -g
OBJ=main.o read.o
LIB= ../../lib

secret: $(OBJ)
	$(CC) -o secret $(OBJ) $(CFLAGS)

main.o: main.c $(LIB)/read.h
	$(CC) -c main.c -o main.o $(CFLAGS)

read.o: $(LIB)/read.c $(LIB)/read.h
	$(CC) -c $(LIB)/read.c -o read.o $(CFLAGS)

run:
	./secret

clean:
	rm -f *.o
	rm -f secret
	rm -f *~