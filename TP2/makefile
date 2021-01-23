CC=@gcc
CFLAGS=-Wall -ansi -pedantic-errors

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

exo2: exo2.o
	gcc -o $@ $^
	@echo Compilation de

exo3: exo3.o
	gcc -o $@ $^

exo5: exo5.o
	gcc -o $@ $^

.PHONY: clean
clean:
	rm -f *.o exo2 exo3 exo5