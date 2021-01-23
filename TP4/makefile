CC=@gcc
CFLAGS=-Wall -ansi -pedantic-errors

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

main: stack.o
	gcc -o $@ $^
	@echo Compilation effectuée

.PHONY: clean
clean:
	rm -f *.o exo2 exo3 exo5