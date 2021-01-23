CC=gcc
FLAGS= -Wall -ansi -pedantic-errors
OBJ = exo1.o exo2.o exo3.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

exo1: exo1.o
	gcc -o $@ $^ $(FLAGS)

exo2: exo2.o
	gcc -o $@ $^ $(FLAGS)

exo3: exo3.o
	gcc -o $@ $^ $(FLAGS)

.PHONY: clean
clean:
	rm -f *.o
	rm -f *~
	rm -f exo1 exo2 exo3