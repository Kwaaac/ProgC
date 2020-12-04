CC=gcc
CFLAGS=-Wall -ansi
LDFLAGS=
OBJ=sudoku.o main.o in_out.o

sudoku: $(OBJ)
	$(CC) -o sudoku $(OBJ) $(CFLAGS)

main.o: main.c sudoku.h in_out.h
	$(CC) -c main.c $(CFLAGS)

sudoku.o: sudoku.c sudoku.h
	$(CC) -c sudoku.c $(CFLAGS)

in_out.o: in_out.c in_out.h
	$(CC) -c in_out.c $(CFLAGS)

run_g1:
	./sudoku data/grid1.txt

run_g2:
	./sudoku data/grid1.txt

run_g3:
	./sudoku data/grid1.txt

run_g4:
	./sudoku data/grid1.txt

run_g5:
	./sudoku data/grid1.txt

clean: 
	rm -f *.o
	rm -f *~
	rm -f sudoku
