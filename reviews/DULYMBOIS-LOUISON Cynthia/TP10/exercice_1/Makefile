CC=gcc
CFLAGS=-Wall -ansi -pedantic

swap: exercice_1.c
	$(CC) $(CFLAGS) -o swap exercice_1.c

.PHONY: clean run val
clean:
	rm -f swap

run: swap
	./swap

val: swap
	valgrind ./swap