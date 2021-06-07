# Squelette de Makefile

# Définition des variables
CC=gcc
CFLAGS=-Wall -ansi
OBJ=main.o list.o

# Compilation des fichiers
but : $(OBJ)
	$(CC) -o main.out $(OBJ) $(CFLAGS)

main.o : main.c list.h
	$(CC) -c main.c $(CFLAGS)

list.o : list.c list.h
	$(CC) -c list.c $(CFLAGS)

# Pour nettoyer le répertoire des fichiers encombrants
clean :
	rm *.o
	rm main.out

# Exécuter le programme
run : but
	./main.out
