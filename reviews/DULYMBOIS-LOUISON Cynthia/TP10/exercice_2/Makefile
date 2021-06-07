CC=gcc
CFLAGS=-Wall -ansi -pedantic
OBJ=cell.o
DEP=cell.h


but: $(OBJ)
	$(CC) $(CFLAGS) -o liste_chainee main.c $(OBJ)
	
cell.o : cell.c $(DEP)
	$(CC) $(CFLAGS) -c cell.c


.PHONY: clean run val
clean:
	rm -f liste_chainee $(OBJ)

run: but
	./liste_chainee

val: but
	valgrind ./liste_chainee