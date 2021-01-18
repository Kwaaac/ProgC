CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDFLAGS=$(shell pkg-config --libs-only-l MLV)
DEPS=model.h draw.h
OBJ=main.o model.o draw.o

run: threetogo
	./threetogo

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

threetogo: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(OBJ) threetogo
