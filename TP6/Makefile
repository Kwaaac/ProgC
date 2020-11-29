CC=gcc
CFLAGS=-Wall -ansi -pedantic -g
OBJ= main.o read.o
LIB= ../lib

exe: $(OBJ)
	$(CC) -o exe $(OBJ) $(CFLAGS)

main.o: main.c $(LIB)/read.h
	$(CC) -c main.c -o main.o $(CFLAGS)

read.o: $(LIB)/read.c $(LIB)/read.h
	$(CC) -c $(LIB)/read.c -o read.o $(CFLAGS)

run:
	./exe

clean:
	rm -f *.o
	rm -f exe
	rm -f *~

