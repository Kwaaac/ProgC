CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDFLAGS=$(shell pkg-config --libs-only-l MLV)
DEPS=model.h
OBJ=main.o model.o draw.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

threetogo: $(OBJ)
	gcc -o $@ $^ $(LDFLAGS)

run:
	./threetogo

.PHONY: clean
clean:
	rm -f $(OBJ) threetogo