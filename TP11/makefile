CC=gcc
CFLAGS=-Wall -ansi -pedantic-errors -lMLV
LDFLAGS=-lm
DEPS=board.h display.h image.h
OBJ=main.o board.o display.o image.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

taquin: main.o $(OBJ)
	gcc -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(OBJ) main