# Si le premier argument c'est "run"
ifeq (run,$(firstword $(MAKECMDGOALS)))
  # Je recupere le premier argument
  GRID_NAME := $(wordlist 2,2,$(MAKECMDGOALS))
  # puis je l'evalue comme n'etant pas une target
  $(eval $(GRID_NAME):;@:)
endif

CC=gcc
CFLAGS=-Wall -ansi -pedantic -lMLV
OBJ= main.o graphic_module.o sudoku.o in_out.o model_module.o

run: exe
	./exe -s $(GRID_NAME)

exe: $(OBJ)
	$(CC) -o exe $(OBJ) $(CFLAGS)

main.o: main.c
	$(CC) -c main.c -o main.o $(CFLAGS)

graphic_module.o: graphic_module.c graphic_module.h
	$(CC) -c graphic_module.c $(CFLAGS)

sudoku.o: sudoku.c sudoku.h
	$(CC) -c sudoku.c $(CFLAGS)

in_out.o: in_out.c in_out.h
	$(CC) -c in_out.c $(CFLAGS)

model_module.o: model_module.c model_module.h
	$(CC) -c model_module.c $(CFLAGS)

.PHONY: clean
clean:
	rm -f *.o
	rm -f exe
	rm -f *~
	rm -f data/grid_rdm.txt
