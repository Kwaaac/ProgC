# Si le premier argument c'est "run"
ifeq (sudoku,$(firstword $(MAKECMDGOALS)))
  # Je recupere le premier argument
  GRID_NAME := $(wordlist 2,2,$(MAKECMDGOALS))
  # puis je l'evalue comme n'etant pas une target
  $(eval $(GRID_NAME):;@:)
endif

CC=gcc
CFLAGS=-Wall -ansi -pedantic
OBJ= main.o stack_height.o
OBJ_ARR= array.o
OBJ_SUD=sudoku.o main_sudoku.o in_out.o

# Make de l'exercice 2, le make réalise le run de la première grille de sudoku
run: array
	./array

sudoku: compile_sudoku
	./sudoku sudoku_exercice/data/$(GRID_NAME).txt

# Make de l'exercice 3
compile_sudoku: $(OBJ_SUD)
	$(CC) -o sudoku $(OBJ_SUD) $(CFLAGS)

main_sudoku.o: sudoku_exercice/main.c sudoku_exercice/sudoku.h sudoku_exercice/in_out.h
	$(CC) -c sudoku_exercice/main.c -o main_sudoku.o $(CFLAGS)

sudoku.o: sudoku_exercice/sudoku.c sudoku_exercice/sudoku.h
	$(CC) -c sudoku_exercice/sudoku.c $(CFLAGS)

in_out.o: sudoku_exercice/in_out.c sudoku_exercice/in_out.h
	$(CC) -c sudoku_exercice/in_out.c $(CFLAGS)

# Make de l'exercice 2
array: $(OBJ_ARR)
	$(CC) -o array $(OBJ_ARR) $(CFLAGS)

array.o: sudoku_exercice/array.c sudoku_exercice/array.h
	$(CC) -c sudoku_exercice/array.c $(CFLAGS)

# Make de l'exercice 1 avec un run de profondeur de 5 dans la pile
run_exo1: exe
	./exe 5

exe: $(OBJ)
	$(CC) -o exe $(OBJ) $(CFLAGS)

main.o: main.c stack_height.c stack_height.h
	$(CC) -c main.c -o main.o $(CFLAGS)

stack_height.o: stack_height.c stack_height.h
	$(CC) -c stack_height.c $(CFLAGS)

.PHONY: clean
clean:
	rm -f *.o
	rm -f exe sudoku array
	rm -f *~

