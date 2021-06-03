CC=gcc
CFLAGS=-Wall -ansi -g -pedantic-errors
LDFLAGS=-lm
DEPS=hash.h in_out.
OBJ=hash.o in_out.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

tp12: main.o $(OBJ)
	gcc -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(OBJ) tp12 main.o