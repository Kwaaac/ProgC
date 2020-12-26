CC=gcc
CFLAGS=-Wall -ansi -pedantic
OBJ= main.o stack_height.o
OBJ_ARR= array.o
OBJ_SUD=sudoku.o main_sudoku.o in_out.o

# Make de l'exercice 2, le make réalise le run de la première grille de sudoku
run: array
	./array

# Make de l'exercice 3
sudoku: $(OBJ_SUD)
	$(CC) -o sudoku $(OBJ_SUD) $(CFLAGS)

main_sudoku.o: sudoku_exercice/main.c sudoku_exercice/sudoku.h sudoku_exercice/in_out.h
	$(CC) -c sudoku_exercice/main.c -o main_sudoku.o $(CFLAGS)

sudoku.o: sudoku_exercice/sudoku.c sudoku_exercice/sudoku.h
	$(CC) -c sudoku_exercice/sudoku.c $(CFLAGS)

in_out.o: sudoku_exercice/in_out.c sudoku_exercice/in_out.h
	$(CC) -c sudoku_exercice/in_out.c $(CFLAGS)

# Les runs des différentes grilles
1: sudoku
	./sudoku sudoku_exercice/data/grid1.txt

2: sudoku
	./sudoku sudoku_exercice/data/grid2.txt

3: sudoku
	./sudoku sudoku_exercice/data/grid3.txt

4: sudoku
	./sudoku sudoku_exercice/data/grid4.txt

5: sudoku
	./sudoku sudoku_exercice/data/grid5.txt

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

clean:
	rm -f *.o
	rm -f exe, sudoku_exe
	rm -f *~

