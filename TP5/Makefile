CC=gcc
CFLAGS=-Wall -ansi -pedantic -g
OBJ=main.o array.o read.o
LIB=../lib

run: clean exe
	./exe

user: clean exe
	./exe -u

exe: $(OBJ)
	$(CC) -o exe $(OBJ) $(CFLAGS)

main.o: main.c array.h $(LIB)/read.h
	$(CC) -c main.c -o main.o $(CFLAGS)

array.o: array.c array.h $(LIB)/read.h
	$(CC) -c array.c -o array.o $(CFLAGS)

read.o: $(LIB)/read.c $(LIB)/read.h
	$(CC) -c $(LIB)/read.c -o read.o $(CFLAGS)

clean:
	rm -f *.o
	rm -f exe
	rm -f *~
