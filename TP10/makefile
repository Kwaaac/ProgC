CC=gcc
CFLAGS=-Wall -ansi -pedantic-errors
DEPS=listorder.h in_out.h
OBJ=listorder.o in_out.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

tp10: listorder.o $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm -f $(OBJ) main