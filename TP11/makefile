CC=gcc
CFLAGS=-Wall -ansi -pedantic-errors
LDFLAGS= -lMLV
DEPS=board.h display.h
OBJ=main.o board.o display.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

taquin: main.o $(OBJ)
	gcc -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(OBJ) main