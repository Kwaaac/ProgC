CC=gcc
CFLAGS=-Wall -ansi -pedantic

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

exo1: exo1.o
	gcc -o $@ $^

exo4: exo4.o
	gcc -o $@ $^

.PHONY: clean
clean:
	rm -f *.o exo1 exo4