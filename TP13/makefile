CC=gcc
CFLAGS=-Wall -ansi -pedantic-errors -lMLV
DEPS=bit.h dames.h graphic.h $(shell pkg-config --libs-only-l MLV)
OBJ=dames.o bit.o graphic.o main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

dames: main.o $(OBJ)
	gcc -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(OBJ) dames