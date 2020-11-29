CC=gcc
CFLAGS=-Wall -ansi -pedantic -g
OBJ=main.o read.o

secret: $(OBJ)
	$(CC) -o secret $(OBJ) $(CFLAGS)

main.o: main.c read.h 
	$(CC) -c main.c -o main.o $(CFLAGS)

read.o: read.c read.h
	$(CC) -c read.c -o read.o $(CFLAGS)

run:
	./secret

clean:
	rm -f *.o
	rm -f secret
	rm -f *~